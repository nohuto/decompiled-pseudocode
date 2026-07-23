/*
 * XREFs of RtlDebugSizeHeap @ 0x180106428
 * Callers:
 *     RtlSizeHeap @ 0x18003ABB0 (RtlSizeHeap.c)
 * Callees:
 *     RtlEnterCriticalSection @ 0x180021D10 (RtlEnterCriticalSection.c)
 *     RtlpCheckHeapSignature @ 0x18002A04C (RtlpCheckHeapSignature.c)
 *     RtlpUnWaitCriticalSectionEx @ 0x18002A180 (RtlpUnWaitCriticalSectionEx.c)
 *     RtlBackoff @ 0x180033F80 (RtlBackoff.c)
 *     RtlSizeHeap @ 0x18003ABB0 (RtlSizeHeap.c)
 *     RtlNtStatusToDosError @ 0x180053810 (RtlNtStatusToDosError.c)
 *     RtlpCreateDeferredCriticalSectionEvent @ 0x180082DF0 (RtlpCreateDeferredCriticalSectionEvent.c)
 *     RtlpValidateHeapEntry @ 0x180086E64 (RtlpValidateHeapEntry.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A2AD0 (_guard_xfg_dispatch_icall_nop.c)
 *     RtlpNotOwnerCriticalSection @ 0x1800F3940 (RtlpNotOwnerCriticalSection.c)
 *     RtlpValidateHeap @ 0x180106A10 (RtlpValidateHeap.c)
 *     RtlpHeapExceptionFilter @ 0x180121428 (RtlpHeapExceptionFilter.c)
 */

SIZE_T __fastcall RtlDebugSizeHeap(_DWORD *HeapHandle, ULONG a2, char *a3)
{
  char v6; // si
  ULONG v8; // edi
  unsigned __int64 v9; // rdx
  _RTL_CRITICAL_SECTION *v10; // rbx
  signed __int32 LockCount; // esi
  HANDLE LockSemaphore; // rdi
  SIZE_T v14; // [rsp+30h] [rbp-58h]
  _DWORD *v15; // [rsp+90h] [rbp+8h] BYREF
  ULONG v16; // [rsp+98h] [rbp+10h]

  v16 = a2;
  v15 = HeapHandle;
  v6 = 0;
  if ( (HeapHandle[29] & 0x1000000) != 0 )
    return ((__int64 (__fastcall *)(_DWORD *))qword_18017E8C0)(HeapHandle);
  v14 = -1LL;
  if ( RtlpCheckHeapSignature(HeapHandle, "RtlSizeHeap") )
  {
    v8 = HeapHandle[29] | 0x10000000 | a2;
    v16 = v8;
    if ( (v8 & 1) == 0 )
    {
      RtlEnterCriticalSection(*((PRTL_CRITICAL_SECTION *)HeapHandle + 44));
      v8 |= 1u;
      v16 = v8;
      v6 = 1;
    }
    RtlpValidateHeap((_DWORD)HeapHandle);
    v9 = (unsigned __int64)(a3 - 16);
    _m_prefetchw(a3 - 16);
    if ( *(a3 - 1) == 5 )
      v9 -= 16LL * *(unsigned __int8 *)(v9 + 14);
    if ( RtlpValidateHeapEntry((unsigned __int64)HeapHandle, v9, "RtlSizeHeap") )
      v14 = RtlSizeHeap(HeapHandle, v8, a3);
  }
  else
  {
    v14 = 0LL;
  }
  if ( v6 )
  {
    v10 = (_RTL_CRITICAL_SECTION *)*((_QWORD *)HeapHandle + 44);
    if ( v10->RecursionCount-- == 1 )
    {
      v10->OwningThread = 0LL;
      LockCount = _InterlockedCompareExchange(&v10->LockCount, -1, -2);
      if ( LockCount != -2 )
      {
        if ( (v10->LockCount & 1) != 0 )
          RtlpNotOwnerCriticalSection(v10);
        LockSemaphore = v10->LockSemaphore;
        if ( !LockSemaphore )
          LockSemaphore = RtlpCreateDeferredCriticalSectionEvent((__int64)v10);
        LODWORD(v15) = 0;
        while ( LockCount != _InterlockedCompareExchange(&v10->LockCount, (LockCount & 2 | 1) + LockCount, LockCount) )
        {
          RtlBackoff((unsigned int *)&v15);
          _m_prefetchw(&v10->LockCount);
          LockCount = v10->LockCount;
        }
        if ( (LockCount & 2) != 0 )
          RtlpUnWaitCriticalSectionEx((__int64)v10, LockSemaphore);
      }
    }
  }
  return v14;
}
