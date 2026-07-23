/*
 * XREFs of sub_140365AC8 @ 0x140365AC8
 * Callers:
 *     sub_140350070 @ 0x140350070 (sub_140350070.c)
 *     sub_140350FA0 @ 0x140350FA0 (sub_140350FA0.c)
 *     sub_14036DD30 @ 0x14036DD30 (sub_14036DD30.c)
 * Callees:
 *     sub_140365AF4 @ 0x140365AF4 (sub_140365AF4.c)
 */

char __fastcall sub_140365AC8(__int64 a1, char a2)
{
  char result; // al

  result = -1;
  if ( (a2 & 1) == 0 )
    return sub_140365AF4(a1 + 64, *(_DWORD *)(a1 + 40) & 1);
  return result;
}
