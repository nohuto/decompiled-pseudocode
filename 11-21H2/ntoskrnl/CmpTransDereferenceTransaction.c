/*
 * XREFs of CmpTransDereferenceTransaction @ 0x14067F788
 * Callers:
 *     NtCreateKeyTransacted @ 0x14067EFD0 (NtCreateKeyTransacted.c)
 *     NtOpenKeyTransactedEx @ 0x14067F130 (NtOpenKeyTransactedEx.c)
 *     CmpTransSearchAddLightWeightTrans @ 0x14067F34C (CmpTransSearchAddLightWeightTrans.c)
 *     CmpTransSearchAddTrans @ 0x14067F520 (CmpTransSearchAddTrans.c)
 *     CmpCleanupRollbackPacket @ 0x140681834 (CmpCleanupRollbackPacket.c)
 *     CmpAbortRollbackPacket @ 0x1406A0010 (CmpAbortRollbackPacket.c)
 *     CmpCleanupLightWeightTransaction @ 0x1406E26C4 (CmpCleanupLightWeightTransaction.c)
 *     CmRmFinalizeRecovery @ 0x1406E7AC4 (CmRmFinalizeRecovery.c)
 *     CmpTransInitializeTransaction @ 0x140741B7C (CmpTransInitializeTransaction.c)
 *     CmpCleanupTransactionState @ 0x140742300 (CmpCleanupTransactionState.c)
 *     CmpRollbackTransactionArray @ 0x14091BC64 (CmpRollbackTransactionArray.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 */

LONG_PTR __fastcall CmpTransDereferenceTransaction(__int64 a1)
{
  return ObfDereferenceObject((PVOID)(a1 & 0xFFFFFFFFFFFFFFFEuLL));
}
