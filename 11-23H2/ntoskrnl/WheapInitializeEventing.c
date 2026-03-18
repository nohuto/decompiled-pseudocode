/*
 * XREFs of WheapInitializeEventing @ 0x140B66418
 * Callers:
 *     WheaInitialize @ 0x140B490E8 (WheaInitialize.c)
 * Callees:
 *     RtlRaiseStatus @ 0x1403217B0 (RtlRaiseStatus.c)
 *     RtlpInterlockedPushEntrySList @ 0x140428EF0 (RtlpInterlockedPushEntrySList.c)
 *     memset @ 0x140435A00 (memset.c)
 *     EtwRegister @ 0x14078D880 (EtwRegister.c)
 */

PSLIST_ENTRY WheapInitializeEventing()
{
  struct _SLIST_ENTRY *v0; // rbx
  __int64 v1; // rdi
  PSLIST_ENTRY result; // rax

  LOWORD(WheapWaitingETWEventLock.Header.Lock) = 1;
  qword_140C2CAA8 = (__int64)&WheapWaitingETWEvents;
  WheapWaitingETWEvents = (__int64)&WheapWaitingETWEvents;
  WheapWaitingETWEventLock.Header.Size = 6;
  WheapDispatchPtr.Queue.Wcb.DeviceObject = &WheapDispatchPtr.Queue.Wcb.NumberOfMapRegisters;
  *(_QWORD *)&WheapDispatchPtr.Queue.Wcb.NumberOfMapRegisters = &WheapDispatchPtr.Queue.Wcb.NumberOfMapRegisters;
  WheapWaitingETWEventLock.Header.SignalState = 1;
  WheapWaitingETWEventLock.Header.WaitListHead.Blink = &WheapWaitingETWEventLock.Header.WaitListHead;
  WheapWaitingETWEventLock.Header.WaitListHead.Flink = &WheapWaitingETWEventLock.Header.WaitListHead;
  LOWORD(WheapDeferredInternalLogsEventLock.Header.Lock) = 1;
  WheapDeferredInternalLogsEventLock.Header.WaitListHead.Blink = &WheapDeferredInternalLogsEventLock.Header.WaitListHead;
  WheapDeferredInternalLogsEventLock.Header.WaitListHead.Flink = &WheapDeferredInternalLogsEventLock.Header.WaitListHead;
  WheapDispatchPtr.Queue.Wcb.DeviceRoutine = 0LL;
  WheapDeferredInternalLogsEventLock.Header.Size = 6;
  WheapDeferredInternalLogsEventLock.Header.SignalState = 1;
  *(_OWORD *)&WheapDispatchPtr.Queue.Wcb.DmaWaitEntry.Blink = 0LL;
  if ( EtwRegister(
         &WHEA_ETW_PROVIDER,
         (PETWENABLECALLBACK)WheapEtwEnableCallback,
         0LL,
         (PREGHANDLE)&WheapDispatchPtr.Queue) )
  {
    WheapDispatchPtr.Queue.ListEntry.Flink = 0LL;
  }
  if ( ((unsigned __int8)&WheapIpmiLogEntryList & 0xF) != 0 )
    RtlRaiseStatus(-2147483646);
  v0 = &WheapIpmiLogEntry;
  WheapIpmiLogEntryList = 0LL;
  v1 = 128LL;
  do
  {
    memset(v0, 0, 0x70uLL);
    result = RtlpInterlockedPushEntrySList(&WheapIpmiLogEntryList, v0);
    v0 += 7;
    --v1;
  }
  while ( v1 );
  return result;
}
