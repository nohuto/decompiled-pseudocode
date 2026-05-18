/*
 * XREFs of sub_18001C680 @ 0x18001C680
 * Callers:
 *     sub_1800283EC @ 0x1800283EC (sub_1800283EC.c)
 *     sub_18004C480 @ 0x18004C480 (sub_18004C480.c)
 *     sub_18005BFC0 @ 0x18005BFC0 (sub_18005BFC0.c)
 *     sub_18005C290 @ 0x18005C290 (sub_18005C290.c)
 *     sub_1800878E8 @ 0x1800878E8 (sub_1800878E8.c)
 *     sub_18008E160 @ 0x18008E160 (sub_18008E160.c)
 *     sub_18008E7A8 @ 0x18008E7A8 (sub_18008E7A8.c)
 *     sub_18008E8B8 @ 0x18008E8B8 (sub_18008E8B8.c)
 *     sub_18008E95C @ 0x18008E95C (sub_18008E95C.c)
 *     sub_180097AA0 @ 0x180097AA0 (sub_180097AA0.c)
 *     sub_1800CBFA8 @ 0x1800CBFA8 (sub_1800CBFA8.c)
 *     sub_1800D41F0 @ 0x1800D41F0 (sub_1800D41F0.c)
 * Callees:
 *     sub_180011B60 @ 0x180011B60 (sub_180011B60.c)
 *     sub_1800133F4 @ 0x1800133F4 (sub_1800133F4.c)
 */

char *__fastcall sub_18001C680(char *a1, _QWORD *a2, _BYTE *Src)
{
  size_t v4; // r9
  size_t Size; // rcx

  v4 = -1LL;
  Size = a2[2];
  do
    ++v4;
  while ( Src[v4] );
  if ( 0x7FFFFFFFFFFFFFFFLL - Size < v4 )
    sub_180011B60();
  if ( a2[3] >= 0x10uLL )
    a2 = (_QWORD *)*a2;
  sub_1800133F4(a1, (__int64)a2, (__int64)Src, a2, Size, Src, v4);
  return a1;
}
