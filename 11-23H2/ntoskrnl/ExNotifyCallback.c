/*
 * XREFs of ExNotifyCallback @ 0x14033C1D0
 * Callers:
 *     AlpcpCompleteDispatchMessage @ 0x14073A070 (AlpcpCompleteDispatchMessage.c)
 *     NtPowerInformation @ 0x140784110 (NtPowerInformation.c)
 *     NtNotifyChangeSession @ 0x1407B3C10 (NtNotifyChangeSession.c)
 *     PopDispatchCallback @ 0x140861500 (PopDispatchCallback.c)
 *     PnprLockPagesForReplace @ 0x1409668E0 (PnprLockPagesForReplace.c)
 *     PnprUnlockPagesForReplace @ 0x1409671D4 (PnprUnlockPagesForReplace.c)
 *     PopBroadcastLegacyLidSwitchChangeCallback @ 0x14098AD10 (PopBroadcastLegacyLidSwitchChangeCallback.c)
 *     PopNotifyCallbacksPreSleep @ 0x14098BC7C (PopNotifyCallbacksPreSleep.c)
 *     PopDispatchAcDcCallback @ 0x140994690 (PopDispatchAcDcCallback.c)
 *     SLSendPolicyChangeNotifications @ 0x1409FA8FC (SLSendPolicyChangeNotifications.c)
 *     PopUnlockAfterSleepWorker @ 0x140AA67C0 (PopUnlockAfterSleepWorker.c)
 *     KiFilterFiberContext @ 0x140B17C30 (KiFilterFiberContext.c)
 *     Phase1InitializationIoReady @ 0x140B4DC38 (Phase1InitializationIoReady.c)
 * Callees:
 *     ExNotifyWithProcessing @ 0x14033C1F0 (ExNotifyWithProcessing.c)
 */

void __stdcall ExNotifyCallback(PVOID CallbackObject, PVOID Argument1, PVOID Argument2)
{
  ExNotifyWithProcessing(CallbackObject, Argument1, Argument2, 0LL);
}
