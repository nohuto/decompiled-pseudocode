/*
 * XREFs of sub_18001ED20 @ 0x18001ED20
 * Callers:
 *     sub_18001FA00 @ 0x18001FA00 (sub_18001FA00.c)
 * Callees:
 *     memset @ 0x18000C0BC (memset.c)
 *     memcpy @ 0x18000CA61 (memcpy.c)
 *     sub_1800100E8 @ 0x1800100E8 (sub_1800100E8.c)
 *     sub_18001090C @ 0x18001090C (sub_18001090C.c)
 *     sub_18001187C @ 0x18001187C (sub_18001187C.c)
 *     sub_180011B60 @ 0x180011B60 (sub_180011B60.c)
 */

void **__fastcall sub_18001ED20(void **Src, unsigned __int64 a2, __int64 a3, size_t a4)
{
  size_t v4; // r14
  unsigned __int64 v7; // r13
  size_t v8; // rdi
  unsigned __int64 v9; // rbx
  char *v10; // rax
  char *v11; // r15
  char *v12; // rdi
  void *v13; // rbx

  v4 = (size_t)Src[2];
  if ( 0x7FFFFFFFFFFFFFFFLL - v4 < a2 )
    sub_180011B60();
  v7 = (unsigned __int64)Src[3];
  v8 = v4 + a2;
  v9 = sub_18001187C(v4 + a2, v7, 0x7FFFFFFFFFFFFFFFuLL);
  v10 = (char *)sub_18001090C(v9 + 1);
  Src[2] = (void *)v8;
  v11 = v10;
  Src[3] = (void *)v9;
  v12 = &v10[v4];
  if ( v7 < 0x10 )
  {
    memcpy(v10, Src, v4);
    memset(v12, 0, a4);
    v12[a4] = 0;
  }
  else
  {
    v13 = *Src;
    memcpy(v10, *Src, v4);
    memset(v12, 0, a4);
    v12[a4] = 0;
    sub_1800100E8(v13, v7 + 1);
  }
  *Src = v11;
  return Src;
}
