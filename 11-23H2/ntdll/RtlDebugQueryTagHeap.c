/*
 * XREFs of RtlDebugQueryTagHeap @ 0x180106858
 * Callers:
 *     RtlQueryTagHeap @ 0x1800FEE20 (RtlQueryTagHeap.c)
 * Callees:
 *     RtlEnterCriticalSection @ 0x180021B30 (RtlEnterCriticalSection.c)
 *     RtlpCheckHeapSignature @ 0x180029E7C (RtlpCheckHeapSignature.c)
 *     RtlpWakeByAddress @ 0x18002A00C (RtlpWakeByAddress.c)
 *     RtlBackoff @ 0x180033E20 (RtlBackoff.c)
 *     RtlNtStatusToDosError @ 0x1800536B0 (RtlNtStatusToDosError.c)
 *     RtlpCreateDeferredCriticalSectionEvent @ 0x180083460 (RtlpCreateDeferredCriticalSectionEvent.c)
 *     ZwSetEvent @ 0x1800A1070 (ZwSetEvent.c)
 *     RtlpNotOwnerCriticalSection @ 0x1800F4D50 (RtlpNotOwnerCriticalSection.c)
 *     RtlQueryTagHeap @ 0x1800FEE20 (RtlQueryTagHeap.c)
 *     RtlpValidateHeap @ 0x180107E20 (RtlpValidateHeap.c)
 *     RtlRaiseStatus @ 0x1801106A0 (RtlRaiseStatus.c)
 *     RtlpHeapExceptionFilter @ 0x1801228A8 (RtlpHeapExceptionFilter.c)
 */

PWSTR __fastcall RtlDebugQueryTagHeap(_DWORD *HeapHandle, ULONG a2, USHORT a3, BOOLEAN a4, PRTL_HEAP_TAG_INFO TagInfo)
{
  char v9; // si
  ULONG v10; // ebx
  _RTL_CRITICAL_SECTION *v11; // rbx
  int *p_LockCount; // rdi
  signed __int32 v14; // esi
  HANDLE LockSemaphore; // r10
  int v16; // eax
  signed __int32 v18[8]; // [rsp+30h] [rbp-78h] BYREF
  char v19; // [rsp+60h] [rbp-48h]
  PWSTR TagHeap; // [rsp+70h] [rbp-38h]
  _DWORD *v21; // [rsp+B0h] [rbp+8h] BYREF
  ULONG v22; // [rsp+B8h] [rbp+10h]

  v22 = a2;
  v21 = HeapHandle;
  v9 = 0;
  v19 = 0;
  TagHeap = 0LL;
  if ( RtlpCheckHeapSignature(HeapHandle, "RtlQueryTagHeap") )
  {
    v10 = HeapHandle[29] | 0x10000000 | a2;
    v22 = v10;
    if ( (v10 & 1) == 0 )
    {
      RtlEnterCriticalSection(*((PRTL_CRITICAL_SECTION *)HeapHandle + 44));
      v9 = 1;
      v19 = 1;
      v10 |= 1u;
      v22 = v10;
    }
    if ( (unsigned __int8)RtlpValidateHeap((_DWORD)HeapHandle) )
      TagHeap = RtlQueryTagHeap(HeapHandle, v10, a3, a4, TagInfo);
  }
  if ( v9 )
  {
    v11 = (_RTL_CRITICAL_SECTION *)*((_QWORD *)HeapHandle + 44);
    if ( v11->RecursionCount-- == 1 )
    {
      v11->OwningThread = 0LL;
      p_LockCount = &v11->LockCount;
      v14 = _InterlockedCompareExchange(&v11->LockCount, -1, -2);
      if ( v14 != -2 )
      {
        if ( (*(_BYTE *)p_LockCount & 1) != 0 )
          RtlpNotOwnerCriticalSection(v11);
        LockSemaphore = v11->LockSemaphore;
        if ( !LockSemaphore )
          LockSemaphore = RtlpCreateDeferredCriticalSectionEvent((__int64)v11);
        LODWORD(v21) = 0;
        while ( v14 != _InterlockedCompareExchange(p_LockCount, (v14 & 2 | 1) + v14, v14) )
        {
          RtlBackoff((unsigned int *)&v21);
          _m_prefetchw(p_LockCount);
          v14 = *p_LockCount;
        }
        if ( (v14 & 2) != 0 )
        {
          if ( LockSemaphore == (HANDLE)-1LL )
          {
            _InterlockedOr(v18, 0);
            RtlpWakeByAddress((unsigned __int64)&v11->LockCount, 0);
            v16 = 0;
          }
          else
          {
            v16 = ZwSetEvent(LockSemaphore, 0LL);
          }
          if ( v16 < 0 )
            RtlRaiseStatus(v16);
        }
      }
    }
  }
  return TagHeap;
}
