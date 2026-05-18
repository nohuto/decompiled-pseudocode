/*
 * XREFs of sub_18009BA0C @ 0x18009BA0C
 * Callers:
 *     sub_1800E3C50 @ 0x1800E3C50 (sub_1800E3C50.c)
 *     sub_1800E657C @ 0x1800E657C (sub_1800E657C.c)
 * Callees:
 *     sub_180012190 @ 0x180012190 (sub_180012190.c)
 */

__int64 *__fastcall sub_18009BA0C(__int64 *a1, int a2)
{
  char *v3; // rdx
  size_t v4; // r8

  a1[3] = 15LL;
  v3 = off_180122690[a2];
  a1[2] = 0LL;
  v4 = -1LL;
  *(_BYTE *)a1 = 0;
  do
    ++v4;
  while ( v3[v4] );
  sub_180012190(a1, v3, v4);
  return a1;
}
