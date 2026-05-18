/*
 * XREFs of sub_18001CC60 @ 0x18001CC60
 * Callers:
 *     sub_18001DF1C @ 0x18001DF1C (sub_18001DF1C.c)
 * Callees:
 *     memcpy @ 0x18000CA61 (memcpy.c)
 *     sub_1800100E8 @ 0x1800100E8 (sub_1800100E8.c)
 *     sub_18001090C @ 0x18001090C (sub_18001090C.c)
 *     sub_18001187C @ 0x18001187C (sub_18001187C.c)
 *     sub_180011B60 @ 0x180011B60 (sub_180011B60.c)
 */

void **__fastcall sub_18001CC60(void **Src, unsigned __int64 a2, __int64 a3, __int64 a4, void *Srca, size_t Size)
{
  char *v6; // r15
  unsigned __int64 v8; // rbp
  char *v9; // rdi
  unsigned __int64 v10; // rbx
  char *v11; // rax
  char *v12; // r14
  char *v13; // rdi
  void *v14; // rbx

  v6 = (char *)Src[2];
  if ( 0x7FFFFFFFFFFFFFFFLL - (__int64)v6 < a2 )
    sub_180011B60();
  v8 = (unsigned __int64)Src[3];
  v9 = &v6[a2];
  v10 = sub_18001187C((__int64)&v6[a2], v8, 0x7FFFFFFFFFFFFFFFuLL);
  v11 = (char *)sub_18001090C(v10 + 1);
  v12 = v11;
  Src[2] = v9;
  Src[3] = (void *)v10;
  v13 = &v11[Size];
  if ( v8 < 0x10 )
  {
    memcpy(v11, Srca, Size);
    memcpy(v13, Src, (size_t)(v6 + 1));
  }
  else
  {
    v14 = *Src;
    memcpy(v11, Srca, Size);
    memcpy(v13, v14, (size_t)(v6 + 1));
    sub_1800100E8(v14, v8 + 1);
  }
  *Src = v12;
  return Src;
}
