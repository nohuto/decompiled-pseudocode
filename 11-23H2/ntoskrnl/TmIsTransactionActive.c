/*
 * XREFs of TmIsTransactionActive @ 0x1403D8750
 * Callers:
 *     CmpTransIsTransActive @ 0x140616A0C (CmpTransIsTransActive.c)
 *     CmpTransReferenceTransaction @ 0x140768BC0 (CmpTransReferenceTransaction.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
BOOLEAN __stdcall TmIsTransactionActive(PKTRANSACTION Transaction)
{
  return __imp_TmIsTransactionActive(Transaction);
}
