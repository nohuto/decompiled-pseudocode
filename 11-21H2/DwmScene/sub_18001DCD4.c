/*
 * XREFs of sub_18001DCD4 @ 0x18001DCD4
 * Callers:
 *     sub_18002A240 @ 0x18002A240 (sub_18002A240.c)
 *     sub_180052D40 @ 0x180052D40 (sub_180052D40.c)
 *     sub_180064098 @ 0x180064098 (sub_180064098.c)
 *     sub_180064450 @ 0x180064450 (sub_180064450.c)
 *     sub_180095A64 @ 0x180095A64 (sub_180095A64.c)
 *     sub_18009D8E0 @ 0x18009D8E0 (sub_18009D8E0.c)
 *     sub_18009DECC @ 0x18009DECC (sub_18009DECC.c)
 *     sub_18009E008 @ 0x18009E008 (sub_18009E008.c)
 *     sub_18009E0D0 @ 0x18009E0D0 (sub_18009E0D0.c)
 *     sub_1800A8370 @ 0x1800A8370 (sub_1800A8370.c)
 *     sub_1800E2B34 @ 0x1800E2B34 (sub_1800E2B34.c)
 *     sub_1800EBB74 @ 0x1800EBB74 (sub_1800EBB74.c)
 * Callees:
 *     sub_180012150 @ 0x180012150 (sub_180012150.c)
 *     sub_180013BA4 @ 0x180013BA4 (sub_180013BA4.c)
 */

__int64 *__fastcall sub_18001DCD4(__int64 *a1, _QWORD *a2, _BYTE *Src)
{
  size_t v4; // r9
  size_t Size; // rcx

  v4 = -1LL;
  Size = a2[2];
  do
    ++v4;
  while ( Src[v4] );
  if ( 0x7FFFFFFFFFFFFFFFLL - Size < v4 )
    sub_180012150();
  if ( a2[3] >= 0x10uLL )
    a2 = (_QWORD *)*a2;
  sub_180013BA4(a1, (__int64)a2, (__int64)Src, a2, Size, Src, v4);
  return a1;
}
