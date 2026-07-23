/*
 * XREFs of RtlDebugCreateTagHeap @ 0x180104C50
 * Callers:
 *     RtlCreateTagHeap @ 0x18007A050 (RtlCreateTagHeap.c)
 * Callees:
 *     RtlNtStatusToDosError @ 0x180006840 (RtlNtStatusToDosError.c)
 *     RtlpCheckHeapSignature @ 0x180015DC8 (RtlpCheckHeapSignature.c)
 *     RtlBackoff @ 0x18001B8D8 (RtlBackoff.c)
 *     RtlEnterCriticalSection @ 0x18003A5E0 (RtlEnterCriticalSection.c)
 *     RtlpWakeByAddress @ 0x18005B0C4 (RtlpWakeByAddress.c)
 *     RtlCreateTagHeap @ 0x18007A050 (RtlCreateTagHeap.c)
 *     RtlpCreateDeferredCriticalSectionEvent @ 0x180088690 (RtlpCreateDeferredCriticalSectionEvent.c)
 *     RtlRaiseStatus @ 0x18008FDF0 (RtlRaiseStatus.c)
 *     ZwSetEvent @ 0x1800A4230 (ZwSetEvent.c)
 *     RtlpNotOwnerCriticalSection @ 0x1800F3C10 (RtlpNotOwnerCriticalSection.c)
 *     RtlpValidateHeap @ 0x180106CB0 (RtlpValidateHeap.c)
 *     RtlpValidateHeapHeaders @ 0x18010728C (RtlpValidateHeapHeaders.c)
 *     RtlpHeapExceptionFilter @ 0x18011F538 (RtlpHeapExceptionFilter.c)
 */

__int64 __fastcall RtlDebugCreateTagHeap(_DWORD *Src, ULONG a2, WCHAR *a3, WCHAR *a4)
{
  char v8; // si
  ULONG v9; // ebx
  _RTL_CRITICAL_SECTION *v10; // rbx
  int *p_LockCount; // rdi
  signed __int32 v13; // esi
  HANDLE LockSemaphore; // r10
  int v15; // eax
  signed __int32 v17[8]; // [rsp+30h] [rbp-68h] BYREF
  char v18; // [rsp+50h] [rbp-48h]
  ULONG TagHeap; // [rsp+54h] [rbp-44h]
  _DWORD *v20; // [rsp+A0h] [rbp+8h] BYREF
  ULONG v21; // [rsp+A8h] [rbp+10h]

  v21 = a2;
  v20 = Src;
  v8 = 0;
  v18 = 0;
  TagHeap = 0;
  if ( RtlpCheckHeapSignature(Src, "RtlCreateTagHeap") )
  {
    v9 = Src[29] | 0x10000000 | a2;
    v21 = v9;
    if ( (v9 & 1) == 0 )
    {
      RtlEnterCriticalSection(*((PRTL_CRITICAL_SECTION *)Src + 44));
      v8 = 1;
      v18 = 1;
      v9 |= 1u;
      v21 = v9;
    }
    if ( (unsigned __int8)RtlpValidateHeap((_DWORD)Src) )
      TagHeap = RtlCreateTagHeap(Src, v9, a3, a4);
    RtlpValidateHeapHeaders(Src);
  }
  if ( v8 )
  {
    v10 = (_RTL_CRITICAL_SECTION *)*((_QWORD *)Src + 44);
    if ( v10->RecursionCount-- == 1 )
    {
      v10->OwningThread = 0LL;
      p_LockCount = &v10->LockCount;
      v13 = _InterlockedCompareExchange(&v10->LockCount, -1, -2);
      if ( v13 != -2 )
      {
        if ( (*(_BYTE *)p_LockCount & 1) != 0 )
          RtlpNotOwnerCriticalSection(v10);
        LockSemaphore = v10->LockSemaphore;
        if ( !LockSemaphore )
          LockSemaphore = RtlpCreateDeferredCriticalSectionEvent((__int64)v10);
        LODWORD(v20) = 0;
        while ( v13 != _InterlockedCompareExchange(p_LockCount, (v13 & 2 | 1) + v13, v13) )
        {
          RtlBackoff((unsigned int *)&v20);
          _m_prefetchw(p_LockCount);
          v13 = *p_LockCount;
        }
        if ( (v13 & 2) != 0 )
        {
          if ( LockSemaphore == (HANDLE)-1LL )
          {
            _InterlockedOr(v17, 0);
            RtlpWakeByAddress((unsigned __int64)&v10->LockCount, 0);
            v15 = 0;
          }
          else
          {
            v15 = ZwSetEvent(LockSemaphore, 0LL);
          }
          if ( v15 < 0 )
            RtlRaiseStatus(v15);
        }
      }
    }
  }
  return TagHeap;
}
