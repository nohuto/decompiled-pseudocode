/*
 * XREFs of TmRollbackEnlistment @ 0x1403D8750
 * Callers:
 *     CmpAbortRollbackPacket @ 0x140699F88 (CmpAbortRollbackPacket.c)
 *     CmpRollbackTransactionArray @ 0x140A1E700 (CmpRollbackTransactionArray.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
NTSTATUS __stdcall TmRollbackEnlistment(PKENLISTMENT Enlistment, PLARGE_INTEGER TmVirtualClock)
{
  return __imp_TmRollbackEnlistment(Enlistment, TmVirtualClock);
}
