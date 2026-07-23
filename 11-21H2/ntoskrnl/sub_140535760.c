/*
 * XREFs of sub_140535760 @ 0x140535760
 * Callers:
 *     <none>
 * Callees:
 *     sub_1403A2C48 @ 0x1403A2C48 (sub_1403A2C48.c)
 */

__int64 __fastcall sub_140535760(_DWORD *a1)
{
  int v1; // eax

  v1 = a1[26];
  a1[26] = 0;
  a1[27] = v1;
  return sub_1403A2C48(a1, 0);
}
