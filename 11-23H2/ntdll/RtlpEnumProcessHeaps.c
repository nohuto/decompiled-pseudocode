/*
 * XREFs of RtlpEnumProcessHeaps @ 0x180077A4C
 * Callers:
 *     RtlFlushHeaps @ 0x1800779F0 (RtlFlushHeaps.c)
 *     RtlpHpGCCallback @ 0x180077A10 (RtlpHpGCCallback.c)
 *     RtlSetHeapInformation @ 0x18007D200 (RtlSetHeapInformation.c)
 *     RtlpQueryExtendedInformationAllHeaps @ 0x18008BB58 (RtlpQueryExtendedInformationAllHeaps.c)
 *     RtlQueryProcessHeapInformation @ 0x1800E36A0 (RtlQueryProcessHeapInformation.c)
 *     RtlEnumProcessHeaps @ 0x1800FEA40 (RtlEnumProcessHeaps.c)
 *     RtlGetProcessHeaps @ 0x1800FEA50 (RtlGetProcessHeaps.c)
 *     RtlSetHeapDebuggingInformation @ 0x1800FF15C (RtlSetHeapDebuggingInformation.c)
 *     RtlValidateProcessHeaps @ 0x1800FF970 (RtlValidateProcessHeaps.c)
 *     RtlpInitializeStackTraceDatabase @ 0x18010F750 (RtlpInitializeStackTraceDatabase.c)
 *     RtlpHpStackTraceDisable @ 0x1801174EC (RtlpHpStackTraceDisable.c)
 *     RtlpHpStackTraceSerialize @ 0x180117B1C (RtlpHpStackTraceSerialize.c)
 * Callees:
 *     RtlEnterCriticalSection @ 0x180021B30 (RtlEnterCriticalSection.c)
 *     RtlpWakeByAddress @ 0x18002A00C (RtlpWakeByAddress.c)
 *     RtlBackoff @ 0x180033E20 (RtlBackoff.c)
 *     RtlpCreateDeferredCriticalSectionEvent @ 0x180083460 (RtlpCreateDeferredCriticalSectionEvent.c)
 *     ZwSetEvent @ 0x1800A1070 (ZwSetEvent.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A4B90 (_guard_xfg_dispatch_icall_nop.c)
 *     RtlpNotOwnerCriticalSection @ 0x1800F4D50 (RtlpNotOwnerCriticalSection.c)
 *     RtlRaiseStatus @ 0x1801106A0 (RtlRaiseStatus.c)
 */

__int64 __fastcall RtlpEnumProcessHeaps(__int64 (__fastcall *a1)(void *, __int64), __int64 a2, char a3)
{
  struct _PEB *v6; // r14
  int v7; // esi
  __int64 i; // rbx
  __int64 j; // rbx
  __int64 k; // rax
  signed __int32 LockCount; // ebx
  void *LockSemaphore; // r10
  int v14; // eax
  signed __int32 v15[8]; // [rsp+38h] [rbp-68h] BYREF
  int v16; // [rsp+58h] [rbp-48h]
  int v17; // [rsp+5Ch] [rbp-44h]
  void *v18; // [rsp+68h] [rbp-38h]
  void **v19; // [rsp+70h] [rbp-30h]
  unsigned int v20; // [rsp+C0h] [rbp+20h] BYREF

  v6 = NtCurrentPeb();
  v17 = 0;
  v7 = a3 & 1;
  if ( (a3 & 1) == 0 )
    RtlEnterCriticalSection(&RtlpProcessHeapsListLock);
  for ( i = 0LL; ; i = (unsigned int)(i + 1) )
  {
    v16 = i;
    if ( (unsigned int)i >= v6->NumberOfHeaps )
      break;
    v17 = a1(v6->ProcessHeaps[i], a2);
    if ( v17 < 0 )
      goto LABEL_18;
  }
  if ( (a3 & 2) != 0 )
  {
    for ( j = 0LL; ; j = (unsigned int)(j + 1) )
    {
      v16 = j;
      if ( (unsigned int)j >= (unsigned __int16)RtlpNumberOfProtectedHeaps )
        break;
      v17 = a1(*((void **)RtlpProtectedHeapsList + j), a2);
      if ( v17 < 0 )
        goto LABEL_18;
    }
    for ( k = 0LL; ; k = (unsigned int)(v16 + 1) )
    {
      v16 = k;
      if ( (unsigned int)k >= 4 )
        break;
      v19 = (void **)((char *)&unk_18018C318 + 16 * k);
      v18 = *v19;
      if ( v18 )
      {
        v17 = a1(v18, a2);
        if ( v17 < 0 )
          break;
      }
    }
  }
LABEL_18:
  if ( !v7 && !--RtlpProcessHeapsListLock.RecursionCount )
  {
    RtlpProcessHeapsListLock.OwningThread = 0LL;
    LockCount = _InterlockedCompareExchange(&RtlpProcessHeapsListLock.LockCount, -1, -2);
    if ( LockCount != -2 )
    {
      if ( (RtlpProcessHeapsListLock.LockCount & 1) != 0 )
        RtlpNotOwnerCriticalSection(&RtlpProcessHeapsListLock);
      LockSemaphore = RtlpProcessHeapsListLock.LockSemaphore;
      if ( !RtlpProcessHeapsListLock.LockSemaphore )
        LockSemaphore = (void *)RtlpCreateDeferredCriticalSectionEvent(&RtlpProcessHeapsListLock);
      v20 = 0;
      while ( LockCount != _InterlockedCompareExchange(
                             &RtlpProcessHeapsListLock.LockCount,
                             (LockCount & 2 | 1) + LockCount,
                             LockCount) )
      {
        RtlBackoff(&v20);
        _m_prefetchw(&RtlpProcessHeapsListLock.LockCount);
        LockCount = RtlpProcessHeapsListLock.LockCount;
      }
      if ( (LockCount & 2) != 0 )
      {
        if ( LockSemaphore == (void *)-1LL )
        {
          _InterlockedOr(v15, 0);
          RtlpWakeByAddress((unsigned __int64)&RtlpProcessHeapsListLock.LockCount, 0);
          v14 = 0;
        }
        else
        {
          v14 = ZwSetEvent(LockSemaphore, 0LL);
        }
        if ( v14 < 0 )
          RtlRaiseStatus(v14);
      }
    }
  }
  return (unsigned int)v17;
}
