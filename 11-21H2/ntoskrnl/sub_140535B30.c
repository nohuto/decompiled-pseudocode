/*
 * XREFs of sub_140535B30 @ 0x140535B30
 * Callers:
 *     <none>
 * Callees:
 *     sub_1403A2E60 @ 0x1403A2E60 (sub_1403A2E60.c)
 */

_WORD *__fastcall sub_140535B30(_DWORD *a1)
{
  unsigned int v2; // r11d
  int v3; // r8d
  int v4; // eax
  char v5; // cl
  unsigned int v6; // edx
  int v7; // r10d
  int v8; // r8d
  _WORD *result; // rax
  __int64 v10; // r9
  int v11; // r10d

  v2 = a1[26];
  v3 = 8 * a1[30];
  v4 = a1[27];
  v5 = v3 + 7;
  v6 = (v4 & 0x1Fu) % (v3 + 9);
  v7 = a1[4] & 1;
  if ( v6 )
  {
    if ( v6 == 1 )
      a1[4] ^= ((unsigned __int16)a1[4] ^ (unsigned __int16)(((unsigned __int16)v7 ^ (unsigned __int16)(v2 >> v5)) << 11)) & 0x800;
    do
    {
      v8 = v2 & 1;
      v2 = (v2 >> 1) | (v7 << v5);
      v7 = v8;
      --v6;
    }
    while ( v6 );
  }
  result = sub_1403A2E60((__int64)a1, v2);
  *(_DWORD *)(v10 + 16) = v11 | *(_DWORD *)(v10 + 16) & 0xFFFFFFFE;
  return result;
}
