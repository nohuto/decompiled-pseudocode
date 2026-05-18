/*
 * XREFs of sub_18001F640 @ 0x18001F640
 * Callers:
 *     sub_18001DC84 @ 0x18001DC84 (sub_18001DC84.c)
 *     sub_180027444 @ 0x180027444 (sub_180027444.c)
 *     sub_180057F88 @ 0x180057F88 (sub_180057F88.c)
 *     sub_1800E3D8C @ 0x1800E3D8C (sub_1800E3D8C.c)
 *     sub_1800E51F0 @ 0x1800E51F0 (sub_1800E51F0.c)
 *     sub_1800E5DE4 @ 0x1800E5DE4 (sub_1800E5DE4.c)
 *     sub_1800EB668 @ 0x1800EB668 (sub_1800EB668.c)
 * Callees:
 *     memmove @ 0x18000CA85 (memmove.c)
 *     sub_18001E194 @ 0x18001E194 (sub_18001E194.c)
 */

const void **__fastcall sub_18001F640(const void **Src, _BYTE *a2, __int64 a3)
{
  const void **v3; // rsi
  unsigned __int64 Size; // rdi
  _BYTE *v5; // rcx
  bool v6; // cf
  char *v7; // rax
  char *v8; // rbx

  v3 = Src;
  Size = -1LL;
  do
    ++Size;
  while ( a2[Size] );
  v5 = Src[2];
  if ( Size > (_BYTE *)v3[3] - v5 )
    return sub_18001E194(v3, Size, a3, a2, Size);
  v6 = (unsigned __int64)v3[3] < 0x10;
  v3[2] = &v5[Size];
  v7 = (char *)v3;
  if ( !v6 )
    v7 = (char *)*v3;
  v8 = &v5[(_QWORD)v7];
  memmove(&v5[(_QWORD)v7], a2, Size);
  v8[Size] = 0;
  return v3;
}
