/*
 * XREFs of ndisGetDpcWatchdogInfo @ 0x1C01639C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall ndisGetDpcWatchdogInfo(
        struct _KDPC *Dpc,
        struct _KEVENT *DeferredContext,
        PVOID SystemArgument1,
        PVOID SystemArgument2)
{
  *(_OWORD *)&WatchdogInformation.DpcTimeLimit = 0LL;
  WatchdogInformation.Reserved = 0;
  if ( KeQueryDpcWatchdogInformation(&WatchdogInformation) >= 0 )
    ndisDpcWatchdogLimit = 30 * (WatchdogInformation.DpcWatchdogLimit / 0x64);
  KeSetEvent(DeferredContext, 0, 0);
}
