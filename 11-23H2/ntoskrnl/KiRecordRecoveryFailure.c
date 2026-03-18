/*
 * XREFs of KiRecordRecoveryFailure @ 0x14057B2D0
 * Callers:
 *     KiAttemptBugcheckRecovery @ 0x14057A42C (KiAttemptBugcheckRecovery.c)
 *     KiDeferredBugcheckRecoveryWorker @ 0x14057ADE0 (KiDeferredBugcheckRecoveryWorker.c)
 *     KiHandleMultipleBugchecksDuringRecovery @ 0x14057B090 (KiHandleMultipleBugchecksDuringRecovery.c)
 *     KiScheduleBugcheckRecovery @ 0x14057B494 (KiScheduleBugcheckRecovery.c)
 * Callees:
 *     IoAddTriageDumpDataBlock @ 0x1403882BC (IoAddTriageDumpDataBlock.c)
 */

char __fastcall KiRecordRecoveryFailure(ULONG a1)
{
  KiBugcheckRecoveryFailureReason = a1;
  IoAddTriageDumpDataBlock((ULONG)&KiBugcheckRecoveryFailureReason, (PVOID)4);
  return IoAddTriageDumpDataBlock((ULONG)&KiBugcheckRecoveryInformation, (PVOID)0x4C);
}
