/*
 * XREFs of MiInPageSkipPage @ 0x14046BFC4
 * Callers:
 *     MiValidatePagefilePageHash @ 0x14046F77A (MiValidatePagefilePageHash.c)
 * Callees:
 *     MiInPageGapPage @ 0x140351648 (MiInPageGapPage.c)
 */

_BOOL8 __fastcall MiInPageSkipPage(__int64 a1)
{
  return a1 == qword_140C69700 || MiInPageGapPage(a1);
}
