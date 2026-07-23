/*
 * XREFs of RtlDebugSetUserValueHeap @ 0x180107524
 * Callers:
 *     RtlSetUserValueHeap @ 0x180076940 (RtlSetUserValueHeap.c)
 * Callees:
 *     RtlEnterCriticalSection @ 0x180021B30 (RtlEnterCriticalSection.c)
 *     RtlpCheckHeapSignature @ 0x180029E7C (RtlpCheckHeapSignature.c)
 *     RtlpWakeByAddress @ 0x18002A00C (RtlpWakeByAddress.c)
 *     RtlBackoff @ 0x180033E20 (RtlBackoff.c)
 *     RtlNtStatusToDosError @ 0x1800536B0 (RtlNtStatusToDosError.c)
 *     RtlSetUserValueHeap @ 0x180076940 (RtlSetUserValueHeap.c)
 *     RtlpCreateDeferredCriticalSectionEvent @ 0x180083460 (RtlpCreateDeferredCriticalSectionEvent.c)
 *     RtlpValidateHeapEntry @ 0x180087664 (RtlpValidateHeapEntry.c)
 *     ZwSetEvent @ 0x1800A1070 (ZwSetEvent.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A4B90 (_guard_xfg_dispatch_icall_nop.c)
 *     RtlpNotOwnerCriticalSection @ 0x1800F4D50 (RtlpNotOwnerCriticalSection.c)
 *     RtlpValidateHeap @ 0x180107E20 (RtlpValidateHeap.c)
 *     RtlRaiseStatus @ 0x1801106A0 (RtlRaiseStatus.c)
 *     RtlpHeapExceptionFilter @ 0x1801228A8 (RtlpHeapExceptionFilter.c)
 */

BOOLEAN __fastcall RtlDebugSetUserValueHeap(_DWORD *HeapHandle, ULONG a2, char *a3, void *a4)
{
  char v8; // r14
  ULONG v10; // esi
  unsigned __int64 v11; // rdx
  _RTL_CRITICAL_SECTION *v12; // rdi
  int *p_LockCount; // rsi
  signed __int32 v15; // r14d
  HANDLE LockSemaphore; // r10
  int v17; // eax
  signed __int32 v18[12]; // [rsp+48h] [rbp-88h] BYREF
  BOOLEAN v19; // [rsp+78h] [rbp-58h]
  char v20; // [rsp+79h] [rbp-57h]
  unsigned __int64 v21; // [rsp+88h] [rbp-48h]
  _DWORD *v22; // [rsp+D8h] [rbp+8h] BYREF
  ULONG v23; // [rsp+E0h] [rbp+10h]

  v23 = a2;
  v22 = HeapHandle;
  v19 = 0;
  v8 = 0;
  v20 = 0;
  if ( (HeapHandle[29] & 0x1000000) != 0 )
    return ((__int64 (*)(void))qword_1801812B0)();
  if ( RtlpCheckHeapSignature(HeapHandle, "RtlSetUserValueHeap") )
  {
    v10 = HeapHandle[29] | 0x10000000 | a2;
    v23 = v10;
    if ( (v10 & 1) == 0 )
    {
      RtlEnterCriticalSection(*((PRTL_CRITICAL_SECTION *)HeapHandle + 44));
      v8 = 1;
      v20 = 1;
      v10 |= 1u;
      v23 = v10;
    }
    RtlpValidateHeap((_DWORD)HeapHandle);
    v11 = (unsigned __int64)(a3 - 16);
    _m_prefetchw(a3 - 16);
    if ( *(a3 - 1) == 5 )
      v11 -= 16LL * *(unsigned __int8 *)(v11 + 14);
    v21 = v11;
    if ( RtlpValidateHeapEntry((unsigned __int64)HeapHandle, v11, "RtlSetUserValueHeap") )
    {
      v19 = RtlSetUserValueHeap(HeapHandle, v10, a3, a4);
      RtlpValidateHeap((_DWORD)HeapHandle);
    }
  }
  else
  {
    v19 = 0;
  }
  if ( v8 )
  {
    v12 = (_RTL_CRITICAL_SECTION *)*((_QWORD *)HeapHandle + 44);
    if ( v12->RecursionCount-- == 1 )
    {
      v12->OwningThread = 0LL;
      p_LockCount = &v12->LockCount;
      v15 = _InterlockedCompareExchange(&v12->LockCount, -1, -2);
      if ( v15 != -2 )
      {
        if ( (*(_BYTE *)p_LockCount & 1) != 0 )
          RtlpNotOwnerCriticalSection(v12);
        LockSemaphore = v12->LockSemaphore;
        if ( !LockSemaphore )
          LockSemaphore = RtlpCreateDeferredCriticalSectionEvent((__int64)v12);
        LODWORD(v22) = 0;
        while ( v15 != _InterlockedCompareExchange(p_LockCount, (v15 & 2 | 1) + v15, v15) )
        {
          RtlBackoff((unsigned int *)&v22);
          _m_prefetchw(p_LockCount);
          v15 = *p_LockCount;
        }
        if ( (v15 & 2) != 0 )
        {
          if ( LockSemaphore == (HANDLE)-1LL )
          {
            _InterlockedOr(v18, 0);
            RtlpWakeByAddress((unsigned __int64)&v12->LockCount, 0);
            v17 = 0;
          }
          else
          {
            v17 = ZwSetEvent(LockSemaphore, 0LL);
          }
          if ( v17 < 0 )
            RtlRaiseStatus(v17);
        }
      }
    }
  }
  return v19;
}
