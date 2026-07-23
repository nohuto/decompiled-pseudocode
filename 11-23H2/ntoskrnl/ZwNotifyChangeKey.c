/*
 * XREFs of ZwNotifyChangeKey @ 0x14041D510
 * Callers:
 *     CcSetupWatchForRegistryChanges @ 0x1403B23BC (CcSetupWatchForRegistryChanges.c)
 *     CcRegistryChangeCallback @ 0x1403C7650 (CcRegistryChangeCallback.c)
 *     PspReadDfssConfigurationValues @ 0x1405A3C24 (PspReadDfssConfigurationValues.c)
 *     DifZwNotifyChangeKeyWrapper @ 0x1405F18C0 (DifZwNotifyChangeKeyWrapper.c)
 *     IopRegistryInitializeCallbacks @ 0x14083493C (IopRegistryInitializeCallbacks.c)
 *     IopRegistryCallback @ 0x140834A50 (IopRegistryCallback.c)
 *     ExpReadLeapSecondData @ 0x140853A14 (ExpReadLeapSecondData.c)
 *     PopPowerButtonBugcheckConfigure @ 0x14085AA68 (PopPowerButtonBugcheckConfigure.c)
 *     PopUpdateUpgradeInProgress @ 0x140862210 (PopUpdateUpgradeInProgress.c)
 *     PipUpdateAsyncOptionsCallback @ 0x140875920 (PipUpdateAsyncOptionsCallback.c)
 *     PipUpdateSetupInProgressNotify @ 0x1409522C8 (PipUpdateSetupInProgressNotify.c)
 *     PfpParametersWatcher @ 0x140980380 (PfpParametersWatcher.c)
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
  return KiServiceInternal(KeyHandle);
}
