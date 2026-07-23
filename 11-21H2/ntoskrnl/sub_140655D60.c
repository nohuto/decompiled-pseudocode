/*
 * XREFs of sub_140655D60 @ 0x140655D60
 * Callers:
 *     <none>
 * Callees:
 *     sub_140655D84 @ 0x140655D84 (sub_140655D84.c)
 */

__int64 __fastcall sub_140655D60(int a1, __int64 a2, int a3)
{
  *(_WORD *)(a2 + 12) = 0;
  return sub_140655D84(a1, a2, a3, 1, 8);
}
