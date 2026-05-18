/*
 * XREFs of sub_180059BB8 @ 0x180059BB8
 * Callers:
 *     sub_180059A9C @ 0x180059A9C (sub_180059A9C.c)
 *     sub_1800D8F04 @ 0x1800D8F04 (sub_1800D8F04.c)
 * Callees:
 *     memmove @ 0x18000CA85 (memmove.c)
 *     sub_18001F958 @ 0x18001F958 (sub_18001F958.c)
 */

__int64 *__fastcall sub_180059BB8(__int64 *a1, _WORD *Src, __int64 a3)
{
  __int64 *v4; // rdi
  unsigned __int64 v5; // rdx
  char *v6; // rsi
  __int64 v7; // rbx

  v4 = a1;
  v5 = -1LL;
  do
    ++v5;
  while ( Src[v5] );
  if ( v5 > a1[3] )
    return sub_18001F958(a1, v5, a3, Src);
  v6 = (char *)a1;
  if ( (unsigned __int64)a1[3] >= 8 )
    v6 = (char *)*a1;
  v7 = 2 * v5;
  a1[2] = v5;
  memmove(v6, Src, 2 * v5);
  *(_WORD *)&v6[v7] = 0;
  return v4;
}
