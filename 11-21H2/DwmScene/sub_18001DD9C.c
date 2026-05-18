/*
 * XREFs of sub_18001DD9C @ 0x18001DD9C
 * Callers:
 *     sub_180055C48 @ 0x180055C48 (sub_180055C48.c)
 *     sub_1800561F8 @ 0x1800561F8 (sub_1800561F8.c)
 *     sub_180056668 @ 0x180056668 (sub_180056668.c)
 *     sub_180056C78 @ 0x180056C78 (sub_180056C78.c)
 *     sub_180057880 @ 0x180057880 (sub_180057880.c)
 *     sub_180069B6C @ 0x180069B6C (sub_180069B6C.c)
 *     sub_18008E4F0 @ 0x18008E4F0 (sub_18008E4F0.c)
 *     sub_18008F6BC @ 0x18008F6BC (sub_18008F6BC.c)
 *     sub_18008FBE8 @ 0x18008FBE8 (sub_18008FBE8.c)
 *     sub_1800904EC @ 0x1800904EC (sub_1800904EC.c)
 *     sub_1800909C8 @ 0x1800909C8 (sub_1800909C8.c)
 * Callees:
 *     sub_180012150 @ 0x180012150 (sub_180012150.c)
 *     sub_180013BA4 @ 0x180013BA4 (sub_180013BA4.c)
 */

__int64 *__fastcall sub_18001DD9C(__int64 *a1, _BYTE *a2, _QWORD *Src)
{
  size_t Size; // r9
  size_t v5; // rcx

  Size = -1LL;
  do
    ++Size;
  while ( a2[Size] );
  v5 = Src[2];
  if ( 0x7FFFFFFFFFFFFFFFLL - v5 < Size )
    sub_180012150();
  if ( Src[3] >= 0x10uLL )
    Src = (_QWORD *)*Src;
  sub_180013BA4(a1, (__int64)a2, (__int64)Src, a2, Size, Src, v5);
  return a1;
}
