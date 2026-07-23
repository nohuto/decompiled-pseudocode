/*
 * XREFs of RtlDebugZeroHeap @ 0x180106A10
 * Callers:
 *     RtlZeroHeap @ 0x180102270 (RtlZeroHeap.c)
 * Callees:
 *     RtlpCheckHeapSignature @ 0x180015DC8 (RtlpCheckHeapSignature.c)
 *     RtlBackoff @ 0x18001B8D8 (RtlBackoff.c)
 *     RtlEnterCriticalSection @ 0x18003A5E0 (RtlEnterCriticalSection.c)
 *     RtlpWakeByAddress @ 0x18005B0C4 (RtlpWakeByAddress.c)
 *     RtlpCreateDeferredCriticalSectionEvent @ 0x180088690 (RtlpCreateDeferredCriticalSectionEvent.c)
 *     RtlRaiseStatus @ 0x18008FDF0 (RtlRaiseStatus.c)
 *     ZwSetEvent @ 0x1800A4230 (ZwSetEvent.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800AAAD0 (_guard_xfg_dispatch_icall_nop.c)
 *     RtlpNotOwnerCriticalSection @ 0x1800F3C10 (RtlpNotOwnerCriticalSection.c)
 *     RtlZeroHeap @ 0x180102270 (RtlZeroHeap.c)
 *     RtlpValidateHeap @ 0x180106CB0 (RtlpValidateHeap.c)
 *     RtlpHeapExceptionFilter @ 0x18011F538 (RtlpHeapExceptionFilter.c)
 */

__int64 __fastcall RtlDebugZeroHeap(_DWORD *HeapHandle, ULONG a2)
{
  char v4; // si
  ULONG v6; // ebx
  _RTL_CRITICAL_SECTION *v7; // rbx
  int *p_LockCount; // rdi
  signed __int32 v10; // esi
  HANDLE LockSemaphore; // r10
  int v12; // eax
  signed __int32 v13[8]; // [rsp+48h] [rbp-68h] BYREF
  char v14; // [rsp+68h] [rbp-48h]
  unsigned __int32 v15; // [rsp+6Ch] [rbp-44h]
  _DWORD *v16; // [rsp+B8h] [rbp+8h] BYREF
  ULONG v17; // [rsp+C0h] [rbp+10h]

  v17 = a2;
  v16 = HeapHandle;
  v4 = 0;
  v14 = 0;
  if ( (HeapHandle[29] & 0x1000000) != 0 )
    return ((__int64 (__fastcall *)(_DWORD *))qword_1801742E0)(HeapHandle);
  if ( !RtlpCheckHeapSignature(HeapHandle, "RtlZeroHeap") )
    goto LABEL_7;
  v6 = HeapHandle[29] | 0x10000000 | a2;
  v17 = v6;
  if ( (v6 & 1) == 0 )
  {
    RtlEnterCriticalSection(*((PRTL_CRITICAL_SECTION *)HeapHandle + 44));
    v4 = 1;
    v14 = 1;
    v6 |= 1u;
    v17 = v6;
  }
  if ( (unsigned __int8)RtlpValidateHeap((_DWORD)HeapHandle) )
    v15 = RtlZeroHeap(HeapHandle, v6);
  else
LABEL_7:
    v15 = -1073741811;
  if ( v4 )
  {
    v7 = (_RTL_CRITICAL_SECTION *)*((_QWORD *)HeapHandle + 44);
    if ( v7->RecursionCount-- == 1 )
    {
      v7->OwningThread = 0LL;
      p_LockCount = &v7->LockCount;
      v10 = _InterlockedCompareExchange(&v7->LockCount, -1, -2);
      if ( v10 != -2 )
      {
        if ( (*(_BYTE *)p_LockCount & 1) != 0 )
          RtlpNotOwnerCriticalSection(v7);
        LockSemaphore = v7->LockSemaphore;
        if ( !LockSemaphore )
          LockSemaphore = RtlpCreateDeferredCriticalSectionEvent((__int64)v7);
        LODWORD(v16) = 0;
        while ( v10 != _InterlockedCompareExchange(p_LockCount, (v10 & 2 | 1) + v10, v10) )
        {
          RtlBackoff((unsigned int *)&v16);
          _m_prefetchw(p_LockCount);
          v10 = *p_LockCount;
        }
        if ( (v10 & 2) != 0 )
        {
          if ( LockSemaphore == (HANDLE)-1LL )
          {
            _InterlockedOr(v13, 0);
            RtlpWakeByAddress((unsigned __int64)&v7->LockCount, 0);
            v12 = 0;
          }
          else
          {
            v12 = ZwSetEvent(LockSemaphore, 0LL);
          }
          if ( v12 < 0 )
            RtlRaiseStatus(v12);
        }
      }
    }
  }
  return v15;
}
