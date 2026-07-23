/*
 * XREFs of RtlpEnumProcessHeaps @ 0x18007DC2C
 * Callers:
 *     RtlFlushHeaps @ 0x18007D820 (RtlFlushHeaps.c)
 *     RtlpQueryExtendedInformationAllHeaps @ 0x18007DB40 (RtlpQueryExtendedInformationAllHeaps.c)
 *     RtlpHpGCCallback @ 0x18007DBF0 (RtlpHpGCCallback.c)
 *     RtlSetHeapInformation @ 0x180080EF0 (RtlSetHeapInformation.c)
 *     RtlQueryProcessHeapInformation @ 0x1800E36C0 (RtlQueryProcessHeapInformation.c)
 *     RtlEnumProcessHeaps @ 0x1800FD990 (RtlEnumProcessHeaps.c)
 *     RtlGetProcessHeaps @ 0x1800FD9A0 (RtlGetProcessHeaps.c)
 *     RtlSetHeapDebuggingInformation @ 0x1800FE010 (RtlSetHeapDebuggingInformation.c)
 *     RtlValidateProcessHeaps @ 0x1800FE820 (RtlValidateProcessHeaps.c)
 *     RtlpInitializeStackTraceDatabase @ 0x18010E150 (RtlpInitializeStackTraceDatabase.c)
 *     RtlpHpStackTraceDisable @ 0x180115C94 (RtlpHpStackTraceDisable.c)
 *     RtlpHpStackTraceSerialize @ 0x1801162AC (RtlpHpStackTraceSerialize.c)
 * Callees:
 *     RtlBackoff @ 0x18001B8D8 (RtlBackoff.c)
 *     RtlEnterCriticalSection @ 0x18003A5E0 (RtlEnterCriticalSection.c)
 *     RtlpWakeByAddress @ 0x18005B0C4 (RtlpWakeByAddress.c)
 *     RtlpCreateDeferredCriticalSectionEvent @ 0x180088690 (RtlpCreateDeferredCriticalSectionEvent.c)
 *     RtlRaiseStatus @ 0x18008FDF0 (RtlRaiseStatus.c)
 *     ZwSetEvent @ 0x1800A4230 (ZwSetEvent.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800AAAD0 (_guard_xfg_dispatch_icall_nop.c)
 *     RtlpNotOwnerCriticalSection @ 0x1800F3C10 (RtlpNotOwnerCriticalSection.c)
 */

__int64 __fastcall RtlpEnumProcessHeaps(__int64 (__fastcall *a1)(void *, __int64), __int64 a2, char a3)
{
  struct _PEB *v6; // rsi
  __int64 i; // rbx
  __int64 j; // rbx
  __int64 k; // rax
  signed __int32 LockCount; // ebx
  void *LockSemaphore; // r10
  int v13; // eax
  signed __int32 v14[8]; // [rsp+38h] [rbp-58h] BYREF
  int v15; // [rsp+58h] [rbp-38h]
  int v16; // [rsp+5Ch] [rbp-34h]
  void *v17; // [rsp+68h] [rbp-28h]
  void **v18; // [rsp+70h] [rbp-20h]
  unsigned int v19; // [rsp+B0h] [rbp+20h] BYREF

  v6 = NtCurrentPeb();
  v16 = 0;
  if ( (a3 & 1) == 0 )
    RtlEnterCriticalSection(&RtlpProcessHeapsListLock);
  for ( i = 0LL; ; i = (unsigned int)(i + 1) )
  {
    v15 = i;
    if ( (unsigned int)i >= v6->NumberOfHeaps )
      break;
    v16 = a1(v6->ProcessHeaps[i], a2);
    if ( v16 < 0 )
      goto LABEL_18;
  }
  if ( (a3 & 2) != 0 )
  {
    for ( j = 0LL; ; j = (unsigned int)(j + 1) )
    {
      v15 = j;
      if ( (unsigned int)j >= (unsigned __int16)RtlpNumberOfProtectedHeaps )
        break;
      v16 = a1(*((void **)RtlpProtectedHeapsList + j), a2);
      if ( v16 < 0 )
        goto LABEL_18;
    }
    for ( k = 0LL; ; k = (unsigned int)(v15 + 1) )
    {
      v15 = k;
      if ( (unsigned int)k >= 4 )
        break;
      v18 = (void **)((char *)&unk_18017EFA8 + 16 * k);
      v17 = *v18;
      if ( v17 )
      {
        v16 = a1(v17, a2);
        if ( v16 < 0 )
          break;
      }
    }
  }
LABEL_18:
  if ( (a3 & 1) == 0 && !--RtlpProcessHeapsListLock.RecursionCount )
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
      v19 = 0;
      while ( LockCount != _InterlockedCompareExchange(
                             &RtlpProcessHeapsListLock.LockCount,
                             (LockCount & 2 | 1) + LockCount,
                             LockCount) )
      {
        RtlBackoff(&v19);
        _m_prefetchw(&RtlpProcessHeapsListLock.LockCount);
        LockCount = RtlpProcessHeapsListLock.LockCount;
      }
      if ( (LockCount & 2) != 0 )
      {
        if ( LockSemaphore == (void *)-1LL )
        {
          _InterlockedOr(v14, 0);
          RtlpWakeByAddress((unsigned __int64)&RtlpProcessHeapsListLock.LockCount, 0);
          v13 = 0;
        }
        else
        {
          v13 = ZwSetEvent(LockSemaphore, 0LL);
        }
        if ( v13 < 0 )
          RtlRaiseStatus(v13);
      }
    }
  }
  return (unsigned int)v16;
}
