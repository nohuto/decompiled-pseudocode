/*
 * XREFs of MmIsSessionAddress @ 0x1402BC7E0
 * Callers:
 *     KiLockExtendedServiceTable @ 0x1403E3878 (KiLockExtendedServiceTable.c)
 *     CmFcpInitializeFeatureUsageProviderSubscription @ 0x14067FAA8 (CmFcpInitializeFeatureUsageProviderSubscription.c)
 *     PnpNotifyDriverCallback @ 0x140687B60 (PnpNotifyDriverCallback.c)
 *     PnpInitializeNotifyEntry @ 0x14068840C (PnpInitializeNotifyEntry.c)
 *     KseDriverLoadImage @ 0x140694730 (KseDriverLoadImage.c)
 *     KseDriverUnloadImage @ 0x140697128 (KseDriverUnloadImage.c)
 *     EtwpInitializeRegEntry @ 0x1406BF5C0 (EtwpInitializeRegEntry.c)
 *     CmpIsBufferGloballyVisible @ 0x14073E690 (CmpIsBufferGloballyVisible.c)
 *     CmFcpInitializeChangeSubscription @ 0x14080E618 (CmFcpInitializeChangeSubscription.c)
 *     MmEnumerateSystemImages @ 0x140820BD0 (MmEnumerateSystemImages.c)
 *     PspTlsAlloc @ 0x14084BF94 (PspTlsAlloc.c)
 *     IopLiveDumpMarkLoadedModuleList @ 0x140A9BB7C (IopLiveDumpMarkLoadedModuleList.c)
 *     ExpDebuggerWorker @ 0x140AB1D30 (ExpDebuggerWorker.c)
 *     KdpQueryMemory @ 0x140AB40F0 (KdpQueryMemory.c)
 *     VfDriverEnableVerifierForAll @ 0x140ACA648 (VfDriverEnableVerifierForAll.c)
 *     VfThunkApplyPristineToAllSession @ 0x140ADB2FC (VfThunkApplyPristineToAllSession.c)
 *     VfThunkApplyWdmThunkToAllSession @ 0x140ADB47C (VfThunkApplyWdmThunkToAllSession.c)
 *     ViPtLogStackTrace @ 0x140ADF08C (ViPtLogStackTrace.c)
 *     VfMiscIoInitializeWorkItem_Entry @ 0x140ADFD30 (VfMiscIoInitializeWorkItem_Entry.c)
 *     ViMiscValidateSynchronizationObject @ 0x140AE1730 (ViMiscValidateSynchronizationObject.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall MmIsSessionAddress(__int64 a1)
{
  return (unsigned __int64)(a1 - qword_140C659E8) < 0x8000000000LL;
}
