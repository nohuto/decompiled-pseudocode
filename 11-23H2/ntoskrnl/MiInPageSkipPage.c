/*
 * XREFs of MiInPageSkipPage @ 0x14046BBC4
 * Callers:
 *     MiValidatePagefilePageHash @ 0x14046F37A (MiValidatePagefilePageHash.c)
 * Callees:
 *     MiInPageGapPage @ 0x1403514A8 (MiInPageGapPage.c)
 */

_BOOL8 __fastcall MiInPageSkipPage(__int64 a1)
{
  return a1 == qword_140C69700 || MiInPageGapPage(a1);
}
