/*
 * XREFs of sub_18001E2B8 @ 0x18001E2B8
 * Callers:
 *     sub_18001F6CC @ 0x18001F6CC (sub_18001F6CC.c)
 * Callees:
 *     memcpy @ 0x18000CA6D (memcpy.c)
 *     sub_180010884 @ 0x180010884 (sub_180010884.c)
 *     sub_180011088 @ 0x180011088 (sub_180011088.c)
 *     sub_1800110F0 @ 0x1800110F0 (sub_1800110F0.c)
 *     sub_180012150 @ 0x180012150 (sub_180012150.c)
 */

void **sub_18001E2B8(void **Src, unsigned __int64 a2, __int64 a3, ...)
{
  char *v3; // r15
  __int64 v4; // rbx
  unsigned __int64 v6; // rsi
  char *v7; // rbp
  unsigned __int64 v8; // rdx
  unsigned __int64 v9; // rcx
  char *v10; // rax
  size_t v11; // r8
  char *v12; // r14
  const void *v13; // rdx
  char *v14; // rbp
  void *v15; // rbx
  char *v17; // [rsp+58h] [rbp+20h] BYREF
  va_list va; // [rsp+58h] [rbp+20h]
  void *Srca; // [rsp+60h] [rbp+28h]
  size_t Size; // [rsp+68h] [rbp+30h]
  va_list va1; // [rsp+70h] [rbp+38h] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v17 = va_arg(va1, char *);
  Srca = va_arg(va1, void *);
  Size = va_arg(va1, _QWORD);
  v3 = (char *)Src[2];
  v4 = 0x7FFFFFFFFFFFFFFFLL;
  if ( 0x7FFFFFFFFFFFFFFFLL - (__int64)v3 < a2 )
    sub_180012150();
  v6 = (unsigned __int64)Src[3];
  v7 = &v3[a2];
  v8 = (unsigned __int64)&v3[a2] | 0xF;
  if ( v8 <= 0x7FFFFFFFFFFFFFFFLL )
  {
    v9 = v6 >> 1;
    if ( v6 <= 0x7FFFFFFFFFFFFFFFLL - (v6 >> 1) )
    {
      v4 = v9 + v6;
      if ( v8 >= v9 + v6 )
        v4 = v8;
    }
  }
  v10 = (char *)sub_180011088(v4 + 1);
  v11 = Size;
  v12 = v10;
  v13 = Srca;
  Src[2] = v7;
  v17 = v10;
  Src[3] = (void *)v4;
  v14 = &v10[v11];
  if ( v6 < 0x10 )
  {
    memcpy(v10, v13, v11);
    memcpy(v14, Src, (size_t)(v3 + 1));
    sub_1800110F0((__int64 *)Src, (__int64 *)va);
  }
  else
  {
    v15 = *Src;
    memcpy(v10, v13, v11);
    memcpy(v14, v15, (size_t)(v3 + 1));
    sub_180010884((char *)v15, v6 + 1);
    *Src = v12;
  }
  return Src;
}
