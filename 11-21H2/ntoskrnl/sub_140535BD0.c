/*
 * XREFs of sub_140535BD0 @ 0x140535BD0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1403A2E60 @ 0x1403A2E60 (sub_1403A2E60.c)
 */

_WORD *__fastcall sub_140535BD0(_DWORD *a1)
{
  int v2; // r10d
  int v3; // ecx
  unsigned int v4; // r9d
  int v5; // r10d
  int v6; // r11d

  v2 = a1[27];
  v3 = 8 * a1[30] + 7;
  v4 = a1[26];
  v5 = v3 & v2;
  if ( v5 )
  {
    if ( v5 == 1 )
      a1[4] ^= (a1[4] ^ ((v4 ^ (v4 >> v3)) << 11)) & 0x800;
    do
    {
      v6 = v4 & 1;
      v4 = (v4 >> 1) | (v6 << v3);
      --v5;
    }
    while ( v5 );
    a1[4] = v6 | a1[4] & 0xFFFFFFFE;
  }
  return sub_1403A2E60((__int64)a1, v4);
}
