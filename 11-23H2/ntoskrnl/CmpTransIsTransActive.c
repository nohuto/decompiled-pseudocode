/*
 * XREFs of CmpTransIsTransActive @ 0x140616A0C
 * Callers:
 *     CmpReportNotifyHelper @ 0x1406D5470 (CmpReportNotifyHelper.c)
 * Callees:
 *     TmIsTransactionActive @ 0x1403D8750 (TmIsTransactionActive.c)
 *     CmpTransGetTransPtr @ 0x140A1C570 (CmpTransGetTransPtr.c)
 */

__int64 __fastcall CmpTransIsTransActive(char a1)
{
  struct _KTRANSACTION *TransPtr; // rax

  if ( (a1 & 1) != 0 )
    return *(_DWORD *)CmpTransGetTransPtr() == 0;
  TransPtr = (struct _KTRANSACTION *)CmpTransGetTransPtr();
  return TmIsTransactionActive(TransPtr);
}
