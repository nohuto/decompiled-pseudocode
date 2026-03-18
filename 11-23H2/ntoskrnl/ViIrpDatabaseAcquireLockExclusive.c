/*
 * XREFs of ViIrpDatabaseAcquireLockExclusive @ 0x1405D2554
 * Callers:
 *     IovpCompleteRequest2 @ 0x140ACCB2C (IovpCompleteRequest2.c)
 *     VfIoFreeIrp @ 0x140ACD814 (VfIoFreeIrp.c)
 *     VfPendingMoreProcessingRequired @ 0x140AD19A0 (VfPendingMoreProcessingRequired.c)
 *     ViPendingCompleteAfterWait @ 0x140AD1C1C (ViPendingCompleteAfterWait.c)
 *     VfIrpDatabaseEntryInsertAndLock @ 0x140AE1848 (VfIrpDatabaseEntryInsertAndLock.c)
 *     VfIrpDatabaseEntryReleaseLock @ 0x140AE191C (VfIrpDatabaseEntryReleaseLock.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14024D360 (ExAcquireSpinLockExclusive.c)
 */

KIRQL __fastcall ViIrpDatabaseAcquireLockExclusive(KIRQL *a1)
{
  KIRQL result; // al

  result = ExAcquireSpinLockExclusive(&ViIrpDatabaseLock);
  *a1 = result;
  return result;
}
