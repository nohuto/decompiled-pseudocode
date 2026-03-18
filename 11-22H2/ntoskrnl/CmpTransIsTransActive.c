/*
 * XREFs of CmpTransIsTransActive @ 0x14061652C
 * Callers:
 *     CmpReportNotifyHelper @ 0x1406D54F0 (CmpReportNotifyHelper.c)
 * Callees:
 *     TmIsTransactionActive @ 0x1403D7F10 (TmIsTransactionActive.c)
 *     CmpTransGetTransPtr @ 0x140A1C370 (CmpTransGetTransPtr.c)
 */

__int64 __fastcall CmpTransIsTransActive(char a1)
{
  struct _KTRANSACTION *TransPtr; // rax

  if ( (a1 & 1) != 0 )
    return *(_DWORD *)CmpTransGetTransPtr() == 0;
  TransPtr = (struct _KTRANSACTION *)CmpTransGetTransPtr();
  return TmIsTransactionActive(TransPtr);
}
