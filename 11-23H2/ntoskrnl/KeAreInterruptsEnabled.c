/*
 * XREFs of KeAreInterruptsEnabled @ 0x14022EBD0
 * Callers:
 *     ObGetCurrentIrql @ 0x14020B9A0 (ObGetCurrentIrql.c)
 *     KeAreAllApcsDisabled @ 0x140215000 (KeAreAllApcsDisabled.c)
 *     KeQueryCurrentStackInformationEx @ 0x14022E9B0 (KeQueryCurrentStackInformationEx.c)
 *     ObfDereferenceObjectWithTag @ 0x14022F5B0 (ObfDereferenceObjectWithTag.c)
 *     EtwpLogKernelEvent @ 0x140233CA0 (EtwpLogKernelEvent.c)
 *     EtwpEventWriteFull @ 0x140258570 (EtwpEventWriteFull.c)
 *     IopfCompleteRequest @ 0x1402C99B0 (IopfCompleteRequest.c)
 *     MiRetryNonPagedAllocation @ 0x1402E3508 (MiRetryNonPagedAllocation.c)
 *     VslpEnterIumSecureMode @ 0x14033FCF0 (VslpEnterIumSecureMode.c)
 *     KiScheduleBugcheckRecovery @ 0x14057B494 (KiScheduleBugcheckRecovery.c)
 *     MiTrimAllSystemPagableMemory @ 0x140635290 (MiTrimAllSystemPagableMemory.c)
 *     ViDeadlockCanProceed @ 0x140AC079A (ViDeadlockCanProceed.c)
 *     VfFastIoCheckState @ 0x140ACB234 (VfFastIoCheckState.c)
 *     VfFastIoSnapState @ 0x140ACB30C (VfFastIoSnapState.c)
 *     VfAfterCallDriver @ 0x140ACD408 (VfAfterCallDriver.c)
 *     VfBeforeCallDriver @ 0x140ACD5DC (VfBeforeCallDriver.c)
 *     ViKeIrqlLogAndTrimMemory @ 0x140AD5DD8 (ViKeIrqlLogAndTrimMemory.c)
 *     VfMiscKeAcquireInStackQueuedSpinLockAtDpcLevel_Entry @ 0x140ADFDC0 (VfMiscKeAcquireInStackQueuedSpinLockAtDpcLevel_Entry.c)
 *     VfMiscKeReleaseInStackQueuedSpinLockFromDpcLevel_Entry @ 0x140ADFF30 (VfMiscKeReleaseInStackQueuedSpinLockFromDpcLevel_Entry.c)
 *     VfMiscKeTryToAcquireSpinLockAtDpcLevel_Entry @ 0x140AE0110 (VfMiscKeTryToAcquireSpinLockAtDpcLevel_Entry.c)
 * Callees:
 *     <none>
 */

bool KeAreInterruptsEnabled()
{
  __int16 v1; // [rsp+0h] [rbp-8h]

  return (v1 & 0x200) != 0;
}
