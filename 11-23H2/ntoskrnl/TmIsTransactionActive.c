/*
 * XREFs of TmIsTransactionActive @ 0x1403D8570
 * Callers:
 *     CmpTransIsTransActive @ 0x1406164BC (CmpTransIsTransActive.c)
 *     CmpTransReferenceTransaction @ 0x1407689D0 (CmpTransReferenceTransaction.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
BOOLEAN __stdcall TmIsTransactionActive(PKTRANSACTION Transaction)
{
  return __imp_TmIsTransactionActive(Transaction);
}
