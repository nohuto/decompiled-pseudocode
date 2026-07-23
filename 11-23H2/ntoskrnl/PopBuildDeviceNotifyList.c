/*
 * XREFs of PopBuildDeviceNotifyList @ 0x140AA6FAC
 * Callers:
 *     PoInitializeBroadcast @ 0x14098BDE4 (PoInitializeBroadcast.c)
 *     PopGracefulShutdown @ 0x140AA08D0 (PopGracefulShutdown.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x140243DB0 (KeWaitForSingleObject.c)
 *     KiSetTimerEx @ 0x1402528E0 (KiSetTimerEx.c)
 *     KeCancelTimer @ 0x140252B60 (KeCancelTimer.c)
 *     KeInitializeEvent @ 0x1402AFB00 (KeInitializeEvent.c)
 *     KeInitializeTimerEx @ 0x1402BE8F0 (KeInitializeTimerEx.c)
 *     KeInitializeDpc @ 0x1402BFC30 (KeInitializeDpc.c)
 *     PopDiagTraceEventNoPayload @ 0x1403677E0 (PopDiagTraceEventNoPayload.c)
 *     memset @ 0x140435E00 (memset.c)
 *     IoBuildPoDeviceNotifyList @ 0x140A9DF68 (IoBuildPoDeviceNotifyList.c)
 */

void __fastcall PopBuildDeviceNotifyList(char *a1, int a2)
{
  struct _KEVENT Event; // [rsp+38h] [rbp-49h] BYREF
  struct _KDPC Dpc; // [rsp+58h] [rbp-29h] BYREF
  struct _KTIMER Timer; // [rsp+98h] [rbp+17h] BYREF

  memset(&Dpc, 0, 60);
  memset(&Event, 0, sizeof(Event));
  memset(&Timer, 0, sizeof(Timer));
  KeInitializeEvent(&Event, SynchronizationEvent, 0);
  KeInitializeTimerEx(&Timer, NotificationTimer);
  KeInitializeDpc(&Dpc, PopBuildDeviceNotifyListWatchdog, &Event);
  if ( (a2 & 4) == 0 && (_DWORD)PopWatchdogSleepTimeout )
    KiSetTimerEx((__int64)&Timer, -10000000LL * (int)PopWatchdogSleepTimeout, 0, 0, (__int64)&Dpc);
  PopDiagTraceEventNoPayload(&POP_ETW_EVENT_BUILDNOTIFYLIST);
  IoBuildPoDeviceNotifyList(a1, a2);
  PopDiagTraceEventNoPayload(&POP_ETW_EVENT_BUILDNOTIFYLIST_END);
  if ( (a2 & 4) == 0 && (_DWORD)PopWatchdogSleepTimeout && !KeCancelTimer(&Timer) )
    KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
}
