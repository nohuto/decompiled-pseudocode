/*
 * XREFs of sub_18001E194 @ 0x18001E194
 * Callers:
 *     sub_18001F5AC @ 0x18001F5AC (sub_18001F5AC.c)
 *     sub_18001F640 @ 0x18001F640 (sub_18001F640.c)
 * Callees:
 *     memcpy @ 0x18000CA6D (memcpy.c)
 *     sub_180010884 @ 0x180010884 (sub_180010884.c)
 *     sub_180011088 @ 0x180011088 (sub_180011088.c)
 *     sub_1800110F0 @ 0x1800110F0 (sub_1800110F0.c)
 *     sub_180012150 @ 0x180012150 (sub_180012150.c)
 */

const void **__fastcall sub_18001E194(const void **Src, unsigned __int64 a2, __int64 a3, const void *a4, size_t Size)
{
  size_t v5; // r14
  __int64 v6; // rbx
  unsigned __int64 v9; // rsi
  size_t v10; // rbp
  unsigned __int64 v11; // rcx
  unsigned __int64 v12; // rdx
  char *v13; // rax
  char *v14; // r15
  size_t v15; // rbp
  char *v16; // r12
  char *v17; // rbx
  char *v19; // [rsp+50h] [rbp+8h] BYREF

  v5 = (size_t)Src[2];
  v6 = 0x7FFFFFFFFFFFFFFFLL;
  if ( 0x7FFFFFFFFFFFFFFFLL - v5 < a2 )
    sub_180012150();
  v9 = (unsigned __int64)Src[3];
  v10 = v5 + a2;
  v11 = (v5 + a2) | 0xF;
  if ( v11 <= 0x7FFFFFFFFFFFFFFFLL )
  {
    v12 = v9 >> 1;
    if ( v9 <= 0x7FFFFFFFFFFFFFFFLL - (v9 >> 1) )
    {
      v6 = v12 + v9;
      if ( v11 >= v12 + v9 )
        v6 = v11;
    }
  }
  v13 = (char *)sub_180011088(v6 + 1);
  Src[2] = (const void *)v10;
  v14 = v13;
  v15 = Size;
  v19 = v13;
  Src[3] = (const void *)v6;
  v16 = &v13[v5];
  if ( v9 < 0x10 )
  {
    memcpy(v13, Src, v5);
    memcpy(v16, a4, v15);
    v16[v15] = 0;
    sub_1800110F0((__int64 *)Src, (__int64 *)&v19);
  }
  else
  {
    v17 = (char *)*Src;
    memcpy(v13, *Src, v5);
    memcpy(v16, a4, v15);
    v16[v15] = 0;
    sub_180010884(v17, v9 + 1);
    *Src = v14;
  }
  return Src;
}
