/*
 * XREFs of sub_1405367E0 @ 0x1405367E0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1403A2E60 @ 0x1403A2E60 (sub_1403A2E60.c)
 */

_WORD *__fastcall sub_1405367E0(_DWORD *a1)
{
  unsigned int v1; // r8d
  int v3; // ecx
  int v4; // edx

  v1 = a1[26];
  v3 = a1[27];
  a1[4] ^= (a1[4] ^ (v1 >> v3)) & 1;
  v4 = v1 | (1 << v3);
  a1[26] = v4;
  return sub_1403A2E60((__int64)a1, v4);
}
