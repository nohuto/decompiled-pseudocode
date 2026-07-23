/*
 * XREFs of sub_140655EB0 @ 0x140655EB0
 * Callers:
 *     <none>
 * Callees:
 *     sub_140655D84 @ 0x140655D84 (sub_140655D84.c)
 */

char __fastcall sub_140655EB0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, char a5)
{
  *(_WORD *)(a2 + 12) = 1;
  return sub_140655D84(a1, a2, a3, a4, a5);
}
