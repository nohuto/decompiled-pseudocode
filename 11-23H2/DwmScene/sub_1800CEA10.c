/*
 * XREFs of sub_1800CEA10 @ 0x1800CEA10
 * Callers:
 *     sub_1800CE15C @ 0x1800CE15C (sub_1800CE15C.c)
 *     sub_1800CECC0 @ 0x1800CECC0 (sub_1800CECC0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1800CEA10(int a1, char a2)
{
  int v2; // edx

  if ( (unsigned int)(a1 - 23) <= 1 )
    v2 = 2;
  else
    v2 = (a2 & 8) != 0;
  return sub_1800C9EC8(a1, v2);
}
