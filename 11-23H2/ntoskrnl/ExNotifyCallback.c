/*
 * XREFs of ExNotifyCallback @ 0x14033BF40
 * Callers:
 *     AlpcpCompleteDispatchMessage @ 0x140739E80 (AlpcpCompleteDispatchMessage.c)
 *     NtPowerInformation @ 0x140783F20 (NtPowerInformation.c)
 *     NtNotifyChangeSession @ 0x1407B3A20 (NtNotifyChangeSession.c)
 *     PopDispatchCallback @ 0x1408612C0 (PopDispatchCallback.c)
 *     PnprLockPagesForReplace @ 0x1409666E0 (PnprLockPagesForReplace.c)
 *     PnprUnlockPagesForReplace @ 0x140966FD4 (PnprUnlockPagesForReplace.c)
 *     PopBroadcastLegacyLidSwitchChangeCallback @ 0x14098AB10 (PopBroadcastLegacyLidSwitchChangeCallback.c)
 *     PopNotifyCallbacksPreSleep @ 0x14098BA7C (PopNotifyCallbacksPreSleep.c)
 *     PopDispatchAcDcCallback @ 0x140994490 (PopDispatchAcDcCallback.c)
 *     SLSendPolicyChangeNotifications @ 0x1409FA66C (SLSendPolicyChangeNotifications.c)
 *     PopUnlockAfterSleepWorker @ 0x140AA6950 (PopUnlockAfterSleepWorker.c)
 *     KiFilterFiberContext @ 0x140B17C30 (KiFilterFiberContext.c)
 *     Phase1InitializationIoReady @ 0x140B4DC38 (Phase1InitializationIoReady.c)
 * Callees:
 *     ExNotifyWithProcessing @ 0x14033BF60 (ExNotifyWithProcessing.c)
 */

void __stdcall ExNotifyCallback(PVOID CallbackObject, PVOID Argument1, PVOID Argument2)
{
  ExNotifyWithProcessing(CallbackObject, Argument1, Argument2, 0LL);
}
