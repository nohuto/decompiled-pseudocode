/*
 * XREFs of sub_18001DE60 @ 0x18001DE60
 * Callers:
 *     sub_18001C61C @ 0x18001C61C (sub_18001C61C.c)
 *     sub_18001E8C0 @ 0x18001E8C0 (sub_18001E8C0.c)
 *     sub_180027634 @ 0x180027634 (sub_180027634.c)
 *     sub_1800508F0 @ 0x1800508F0 (sub_1800508F0.c)
 *     sub_1800CD298 @ 0x1800CD298 (sub_1800CD298.c)
 *     sub_1800CE190 @ 0x1800CE190 (sub_1800CE190.c)
 *     sub_1800CECC0 @ 0x1800CECC0 (sub_1800CECC0.c)
 *     sub_1800D3C78 @ 0x1800D3C78 (sub_1800D3C78.c)
 *     sub_1800D41F0 @ 0x1800D41F0 (sub_1800D41F0.c)
 * Callees:
 *     memmove @ 0x18000CA85 (memmove.c)
 *     sub_18001CB70 @ 0x18001CB70 (sub_18001CB70.c)
 */

void **__fastcall sub_18001DE60(void **Src, const void *a2, unsigned __int64 Size)
{
  _BYTE *v5; // rcx
  bool v6; // cf
  void *v7; // rax
  char *v8; // rbx
  void **result; // rax

  v5 = Src[2];
  if ( Size > (_BYTE *)Src[3] - v5 )
    return sub_18001CB70(Src, Size, Size, a2, Size);
  v6 = (unsigned __int64)Src[3] < 0x10;
  Src[2] = &v5[Size];
  v7 = Src;
  if ( !v6 )
    v7 = *Src;
  v8 = &v5[(_QWORD)v7];
  memmove(&v5[(_QWORD)v7], a2, Size);
  result = Src;
  v8[Size] = 0;
  return result;
}
