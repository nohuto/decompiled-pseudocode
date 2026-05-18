/*
 * XREFs of sub_18002F71C @ 0x18002F71C
 * Callers:
 *     sub_180038BBC @ 0x180038BBC (sub_180038BBC.c)
 * Callees:
 *     memcpy @ 0x18000CA61 (memcpy.c)
 *     sub_1800100E8 @ 0x1800100E8 (sub_1800100E8.c)
 *     sub_18001090C @ 0x18001090C (sub_18001090C.c)
 *     sub_18001187C @ 0x18001187C (sub_18001187C.c)
 *     sub_180011B60 @ 0x180011B60 (sub_180011B60.c)
 */

void **__fastcall sub_18002F71C(void **Src, unsigned __int64 a2)
{
  char *v2; // r14
  unsigned __int64 v4; // r15
  char *v5; // rdi
  unsigned __int64 v6; // rbx
  void *v7; // rax
  void *v8; // rbp
  size_t v9; // r8
  void *v10; // rbx

  v2 = (char *)Src[2];
  if ( 0x7FFFFFFFFFFFFFFFLL - (__int64)v2 < a2 )
    sub_180011B60();
  v4 = (unsigned __int64)Src[3];
  v5 = &v2[a2];
  v6 = sub_18001187C((__int64)&v2[a2], v4, 0x7FFFFFFFFFFFFFFFuLL);
  v7 = (void *)sub_18001090C(v6 + 1);
  Src[2] = v5;
  v8 = v7;
  Src[3] = (void *)v6;
  v9 = (size_t)(v2 + 1);
  if ( v4 < 0x10 )
  {
    memcpy(v7, Src, v9);
  }
  else
  {
    v10 = *Src;
    memcpy(v7, *Src, v9);
    sub_1800100E8(v10, v4 + 1);
  }
  *Src = v8;
  return Src;
}
