/*
 * XREFs of sub_180020408 @ 0x180020408
 * Callers:
 *     sub_180020DB0 @ 0x180020DB0 (sub_180020DB0.c)
 * Callees:
 *     memset @ 0x18000C0CC (memset.c)
 *     memcpy @ 0x18000CA6D (memcpy.c)
 *     sub_180010884 @ 0x180010884 (sub_180010884.c)
 *     sub_180011088 @ 0x180011088 (sub_180011088.c)
 *     sub_1800110F0 @ 0x1800110F0 (sub_1800110F0.c)
 *     sub_180012150 @ 0x180012150 (sub_180012150.c)
 */

const void **__fastcall sub_180020408(const void **Src, unsigned __int64 a2, __int64 a3, size_t a4)
{
  size_t v4; // r14
  __int64 v5; // rbx
  unsigned __int64 v8; // rsi
  size_t v9; // r12
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rdx
  char *v12; // rax
  char *v13; // r15
  char *v14; // r12
  char *v15; // rbx
  char *v17; // [rsp+50h] [rbp+8h] BYREF

  v4 = (size_t)Src[2];
  v5 = 0x7FFFFFFFFFFFFFFFLL;
  if ( 0x7FFFFFFFFFFFFFFFLL - v4 < a2 )
    sub_180012150();
  v8 = (unsigned __int64)Src[3];
  v9 = v4 + a2;
  v10 = (v4 + a2) | 0xF;
  if ( v10 <= 0x7FFFFFFFFFFFFFFFLL )
  {
    v11 = v8 >> 1;
    if ( v8 <= 0x7FFFFFFFFFFFFFFFLL - (v8 >> 1) )
    {
      v5 = v11 + v8;
      if ( v10 >= v11 + v8 )
        v5 = v10;
    }
  }
  v12 = (char *)sub_180011088(v5 + 1);
  Src[2] = (const void *)v9;
  v13 = v12;
  v17 = v12;
  Src[3] = (const void *)v5;
  v14 = &v12[v4];
  if ( v8 < 0x10 )
  {
    memcpy(v12, Src, v4);
    memset(v14, 0, a4);
    v14[a4] = 0;
    sub_1800110F0((__int64 *)Src, (__int64 *)&v17);
  }
  else
  {
    v15 = (char *)*Src;
    memcpy(v12, *Src, v4);
    memset(v14, 0, a4);
    v14[a4] = 0;
    sub_180010884(v15, v8 + 1);
    *Src = v13;
  }
  return Src;
}
