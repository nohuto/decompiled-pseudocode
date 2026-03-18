/*
 * XREFs of CmpTransDereferenceTransaction @ 0x140768A28
 * Callers:
 *     NtCreateKeyTransacted @ 0x140692240 (NtCreateKeyTransacted.c)
 *     CmpCleanupRollbackPacket @ 0x140693528 (CmpCleanupRollbackPacket.c)
 *     CmpCleanupTransactionState @ 0x14069831C (CmpCleanupTransactionState.c)
 *     CmpTransInitializeTransaction @ 0x14069846C (CmpTransInitializeTransaction.c)
 *     CmpAbortRollbackPacket @ 0x140699F88 (CmpAbortRollbackPacket.c)
 *     CmpTransSearchAddTrans @ 0x14076853C (CmpTransSearchAddTrans.c)
 *     CmpTransSearchAddLightWeightTrans @ 0x14076889C (CmpTransSearchAddLightWeightTrans.c)
 *     CmpCleanupLightWeightTransaction @ 0x1407D09B4 (CmpCleanupLightWeightTransaction.c)
 *     NtOpenKeyTransactedEx @ 0x1407D3500 (NtOpenKeyTransactedEx.c)
 *     CmRmFinalizeRecovery @ 0x1407E8728 (CmRmFinalizeRecovery.c)
 *     CmpRollbackTransactionArray @ 0x140A1E700 (CmpRollbackTransactionArray.c)
 * Callees:
 *     ObfDereferenceObject @ 0x140231570 (ObfDereferenceObject.c)
 */

LONG_PTR __fastcall CmpTransDereferenceTransaction(__int64 a1)
{
  return ObfDereferenceObject((PVOID)(a1 & 0xFFFFFFFFFFFFFFFEuLL));
}
