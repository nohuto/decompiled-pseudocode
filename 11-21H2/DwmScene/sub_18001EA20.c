/*
 * XREFs of sub_18001EA20 @ 0x18001EA20
 * Callers:
 *     sub_18001F06C @ 0x18001F06C (sub_18001F06C.c)
 * Callees:
 *     sub_180012190 @ 0x180012190 (sub_180012190.c)
 */

__int64 *__fastcall sub_18001EA20(__int64 a1, __int64 *a2)
{
  _BYTE *v3; // rdx
  size_t v4; // r8

  v3 = *(_BYTE **)(a1 + 16);
  v4 = -1LL;
  a2[2] = 0LL;
  a2[3] = 15LL;
  *(_BYTE *)a2 = 0;
  do
    ++v4;
  while ( v3[v4] );
  sub_180012190(a2, v3, v4);
  return a2;
}
