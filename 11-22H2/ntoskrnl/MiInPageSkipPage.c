/*
 * XREFs of MiInPageSkipPage @ 0x14046B564
 * Callers:
 *     MiValidatePagefilePageHash @ 0x14046ED1A (MiValidatePagefilePageHash.c)
 * Callees:
 *     MiInPageGapPage @ 0x140350EA8 (MiInPageGapPage.c)
 */

_BOOL8 __fastcall MiInPageSkipPage(__int64 a1)
{
  return a1 == qword_140C69800 || MiInPageGapPage(a1);
}
