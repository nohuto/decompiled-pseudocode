/*
 * XREFs of ZwNotifyChangeKey @ 0x14041CAC0
 * Callers:
 *     CcSetupWatchForRegistryChanges @ 0x1403B1B4C (CcSetupWatchForRegistryChanges.c)
 *     CcRegistryChangeCallback @ 0x1403C6E10 (CcRegistryChangeCallback.c)
 *     PspReadDfssConfigurationValues @ 0x1405A37C4 (PspReadDfssConfigurationValues.c)
 *     DifZwNotifyChangeKeyWrapper @ 0x1405F13E0 (DifZwNotifyChangeKeyWrapper.c)
 *     IopRegistryInitializeCallbacks @ 0x14083618C (IopRegistryInitializeCallbacks.c)
 *     IopRegistryCallback @ 0x1408362A0 (IopRegistryCallback.c)
 *     ExpReadLeapSecondData @ 0x140854624 (ExpReadLeapSecondData.c)
 *     PopPowerButtonBugcheckConfigure @ 0x14085AFF8 (PopPowerButtonBugcheckConfigure.c)
 *     PopUpdateUpgradeInProgress @ 0x1408620A0 (PopUpdateUpgradeInProgress.c)
 *     PipUpdateAsyncOptionsCallback @ 0x140875BB0 (PipUpdateAsyncOptionsCallback.c)
 *     PipUpdateSetupInProgressNotify @ 0x140952178 (PipUpdateSetupInProgressNotify.c)
 *     PfpParametersWatcher @ 0x140980230 (PfpParametersWatcher.c)
 *     PfInitializeSuperfetch @ 0x140B65330 (PfInitializeSuperfetch.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwNotifyChangeKey(
        HANDLE KeyHandle,
        HANDLE Event,
        PIO_APC_ROUTINE ApcRoutine,
        PVOID ApcContext,
        PIO_STATUS_BLOCK IoStatusBlock,
        ULONG CompletionFilter,
        BOOLEAN WatchTree,
        PVOID Buffer,
        ULONG BufferSize,
        BOOLEAN Asynchronous)
{
  _disable();
  __readeflags();
  return KiServiceInternal(KeyHandle);
}
