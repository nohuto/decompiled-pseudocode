/*
 * XREFs of sub_18001CB70 @ 0x18001CB70
 * Callers:
 *     sub_18001DE60 @ 0x18001DE60 (sub_18001DE60.c)
 * Callees:
 *     memcpy @ 0x18000CA61 (memcpy.c)
 *     sub_1800100E8 @ 0x1800100E8 (sub_1800100E8.c)
 *     sub_18001090C @ 0x18001090C (sub_18001090C.c)
 *     sub_18001187C @ 0x18001187C (sub_18001187C.c)
 *     sub_180011B60 @ 0x180011B60 (sub_180011B60.c)
 */

void **__fastcall sub_18001CB70(void **Src, unsigned __int64 a2, __int64 a3, const void *a4, size_t Size)
{
  size_t v5; // r14
  unsigned __int64 v8; // r13
  size_t v9; // rdi
  unsigned __int64 v10; // rbx
  char *v11; // r15
  char *v12; // rdi
  void *v13; // rbx

  v5 = (size_t)Src[2];
  if ( 0x7FFFFFFFFFFFFFFFLL - v5 < a2 )
    sub_180011B60();
  v8 = (unsigned __int64)Src[3];
  v9 = v5 + a2;
  v10 = sub_18001187C(v5 + a2, v8, 0x7FFFFFFFFFFFFFFFuLL);
  v11 = (char *)sub_18001090C(v10 + 1);
  Src[2] = (void *)v9;
  Src[3] = (void *)v10;
  v12 = &v11[v5];
  if ( v8 < 0x10 )
  {
    memcpy(v11, Src, v5);
    memcpy(v12, a4, Size);
    v12[Size] = 0;
  }
  else
  {
    v13 = *Src;
    memcpy(v11, *Src, v5);
    memcpy(v12, a4, Size);
    v12[Size] = 0;
    sub_1800100E8(v13, v8 + 1);
  }
  *Src = v11;
  return Src;
}
