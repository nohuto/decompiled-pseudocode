/*
 * XREFs of KeAreInterruptsEnabled @ 0x14022ECE0
 * Callers:
 *     ObGetCurrentIrql @ 0x14020B9A0 (ObGetCurrentIrql.c)
 *     KeAreAllApcsDisabled @ 0x140215000 (KeAreAllApcsDisabled.c)
 *     KeQueryCurrentStackInformationEx @ 0x14022EAC0 (KeQueryCurrentStackInformationEx.c)
 *     ObfDereferenceObjectWithTag @ 0x14022F6C0 (ObfDereferenceObjectWithTag.c)
 *     EtwpLogKernelEvent @ 0x140233D70 (EtwpLogKernelEvent.c)
 *     EtwpEventWriteFull @ 0x140258630 (EtwpEventWriteFull.c)
 *     IopfCompleteRequest @ 0x1402C9C40 (IopfCompleteRequest.c)
 *     MiRetryNonPagedAllocation @ 0x1402E3798 (MiRetryNonPagedAllocation.c)
 *     VslpEnterIumSecureMode @ 0x14033FF80 (VslpEnterIumSecureMode.c)
 *     KiScheduleBugcheckRecovery @ 0x14057B984 (KiScheduleBugcheckRecovery.c)
 *     MiTrimAllSystemPagableMemory @ 0x1406357E0 (MiTrimAllSystemPagableMemory.c)
 *     ViDeadlockCanProceed @ 0x140AC078A (ViDeadlockCanProceed.c)
 *     VfFastIoCheckState @ 0x140ACB224 (VfFastIoCheckState.c)
 *     VfFastIoSnapState @ 0x140ACB2FC (VfFastIoSnapState.c)
 *     VfAfterCallDriver @ 0x140ACD3F8 (VfAfterCallDriver.c)
 *     VfBeforeCallDriver @ 0x140ACD5CC (VfBeforeCallDriver.c)
 *     ViKeIrqlLogAndTrimMemory @ 0x140AD5DC8 (ViKeIrqlLogAndTrimMemory.c)
 *     VfMiscKeAcquireInStackQueuedSpinLockAtDpcLevel_Entry @ 0x140ADFDB0 (VfMiscKeAcquireInStackQueuedSpinLockAtDpcLevel_Entry.c)
 *     VfMiscKeReleaseInStackQueuedSpinLockFromDpcLevel_Entry @ 0x140ADFF20 (VfMiscKeReleaseInStackQueuedSpinLockFromDpcLevel_Entry.c)
 *     VfMiscKeTryToAcquireSpinLockAtDpcLevel_Entry @ 0x140AE0100 (VfMiscKeTryToAcquireSpinLockAtDpcLevel_Entry.c)
 * Callees:
 *     <none>
 */

bool KeAreInterruptsEnabled()
{
  __int16 v1; // [rsp+0h] [rbp-8h]

  return (v1 & 0x200) != 0;
}
