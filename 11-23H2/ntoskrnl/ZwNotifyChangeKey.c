/*
 * XREFs of ZwNotifyChangeKey @ 0x14041D180
 * Callers:
 *     CcSetupWatchForRegistryChanges @ 0x1403B21DC (CcSetupWatchForRegistryChanges.c)
 *     CcRegistryChangeCallback @ 0x1403C7470 (CcRegistryChangeCallback.c)
 *     PspReadDfssConfigurationValues @ 0x1405A3734 (PspReadDfssConfigurationValues.c)
 *     DifZwNotifyChangeKeyWrapper @ 0x1405F1350 (DifZwNotifyChangeKeyWrapper.c)
 *     IopRegistryInitializeCallbacks @ 0x14083463C (IopRegistryInitializeCallbacks.c)
 *     IopRegistryCallback @ 0x140834750 (IopRegistryCallback.c)
 *     ExpReadLeapSecondData @ 0x140853714 (ExpReadLeapSecondData.c)
 *     PopPowerButtonBugcheckConfigure @ 0x14085A828 (PopPowerButtonBugcheckConfigure.c)
 *     PopUpdateUpgradeInProgress @ 0x140861FD0 (PopUpdateUpgradeInProgress.c)
 *     PipUpdateAsyncOptionsCallback @ 0x1408756E0 (PipUpdateAsyncOptionsCallback.c)
 *     PipUpdateSetupInProgressNotify @ 0x1409520C8 (PipUpdateSetupInProgressNotify.c)
 *     PfpParametersWatcher @ 0x140980180 (PfpParametersWatcher.c)
 *     PfInitializeSuperfetch @ 0x140B617C0 (PfInitializeSuperfetch.c)
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
  return KiServiceInternal(KeyHandle, Event);
}
