/*
 * XREFs of sub_14022948C @ 0x14022948C
 * Callers:
 *     sub_140228C50 @ 0x140228C50 (sub_140228C50.c)
 *     sub_1402292C0 @ 0x1402292C0 (sub_1402292C0.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall sub_14022948C(__int64 a1, unsigned __int64 a2)
{
  return (*(_BYTE *)(a1 + 184) & 7) == 0 || a2 < 0xFFFFF6FB7DBED000uLL || a2 > 0xFFFFF6FB7DBEDFFFuLL;
}
