/*
 * XREFs of sub_18001C74C @ 0x18001C74C
 * Callers:
 *     sub_18004EF88 @ 0x18004EF88 (sub_18004EF88.c)
 *     sub_18004F4AC @ 0x18004F4AC (sub_18004F4AC.c)
 *     sub_18004F760 @ 0x18004F760 (sub_18004F760.c)
 *     sub_18004FBD8 @ 0x18004FBD8 (sub_18004FBD8.c)
 *     sub_1800503B4 @ 0x1800503B4 (sub_1800503B4.c)
 *     sub_180061204 @ 0x180061204 (sub_180061204.c)
 *     sub_180081210 @ 0x180081210 (sub_180081210.c)
 *     sub_18008214C @ 0x18008214C (sub_18008214C.c)
 *     sub_180082598 @ 0x180082598 (sub_180082598.c)
 *     sub_180082D18 @ 0x180082D18 (sub_180082D18.c)
 *     sub_18008323C @ 0x18008323C (sub_18008323C.c)
 * Callees:
 *     sub_180011B60 @ 0x180011B60 (sub_180011B60.c)
 *     sub_1800133F4 @ 0x1800133F4 (sub_1800133F4.c)
 */

char *__fastcall sub_18001C74C(char *a1, _BYTE *a2, _QWORD *Src)
{
  size_t Size; // r9
  size_t v5; // rcx

  Size = -1LL;
  do
    ++Size;
  while ( a2[Size] );
  v5 = Src[2];
  if ( 0x7FFFFFFFFFFFFFFFLL - v5 < Size )
    sub_180011B60();
  if ( Src[3] >= 0x10uLL )
    Src = (_QWORD *)*Src;
  sub_1800133F4(a1, (__int64)a2, (__int64)Src, a2, Size, Src, v5);
  return a1;
}
