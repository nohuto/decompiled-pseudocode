/*
 * XREFs of sub_18001338C @ 0x18001338C
 * Callers:
 *     sub_180013890 @ 0x180013890 (sub_180013890.c)
 *     sub_18002C5EC @ 0x18002C5EC (sub_18002C5EC.c)
 *     sub_180045FF8 @ 0x180045FF8 (sub_180045FF8.c)
 *     sub_18009ABE0 @ 0x18009ABE0 (sub_18009ABE0.c)
 * Callees:
 *     sub_180011B60 @ 0x180011B60 (sub_180011B60.c)
 *     sub_1800133F4 @ 0x1800133F4 (sub_1800133F4.c)
 */

void *__fastcall sub_18001338C(void *a1, __int64 a2, _QWORD *Src)
{
  size_t v3; // r9
  size_t Size; // rcx

  v3 = Src[2];
  Size = *(_QWORD *)(a2 + 16);
  if ( 0x7FFFFFFFFFFFFFFFLL - Size < v3 )
    sub_180011B60();
  if ( Src[3] >= 0x10uLL )
    Src = (_QWORD *)*Src;
  sub_1800133F4(a1, Size, Src, v3);
  return a1;
}
