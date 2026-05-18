/*
 * XREFs of sub_18001FA60 @ 0x18001FA60
 * Callers:
 *     sub_18005865C @ 0x18005865C (sub_18005865C.c)
 *     sub_18009E8AC @ 0x18009E8AC (sub_18009E8AC.c)
 * Callees:
 *     memcpy @ 0x18000CA6D (memcpy.c)
 *     sub_180010884 @ 0x180010884 (sub_180010884.c)
 *     sub_180011088 @ 0x180011088 (sub_180011088.c)
 *     sub_1800110F0 @ 0x1800110F0 (sub_1800110F0.c)
 *     sub_180012150 @ 0x180012150 (sub_180012150.c)
 */

const void **__fastcall sub_18001FA60(const void **Src, __int64 a2, __int64 a3, char a4)
{
  size_t v4; // rbp
  __int64 v5; // rbx
  unsigned __int64 v8; // r14
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rdx
  _BYTE *v11; // rax
  _BYTE *v12; // rsi
  char *v13; // rbx
  __int64 v15; // [rsp+58h] [rbp+10h] BYREF

  v15 = a2;
  v4 = (size_t)Src[2];
  v5 = 0x7FFFFFFFFFFFFFFFLL;
  if ( v4 == 0x7FFFFFFFFFFFFFFFLL )
    sub_180012150();
  v8 = (unsigned __int64)Src[3];
  v9 = (v4 + 1) | 0xF;
  if ( v9 <= 0x7FFFFFFFFFFFFFFFLL )
  {
    v10 = v8 >> 1;
    if ( v8 <= 0x7FFFFFFFFFFFFFFFLL - (v8 >> 1) )
    {
      v5 = v10 + v8;
      if ( v9 >= v10 + v8 )
        v5 = (v4 + 1) | 0xF;
    }
  }
  v11 = (_BYTE *)sub_180011088(v5 + 1);
  v15 = (__int64)v11;
  v12 = v11;
  Src[2] = (const void *)(v4 + 1);
  Src[3] = (const void *)v5;
  if ( v8 < 0x10 )
  {
    memcpy(v11, Src, v4);
    v12[v4] = a4;
    v12[v4 + 1] = 0;
    sub_1800110F0((__int64 *)Src, &v15);
  }
  else
  {
    v13 = (char *)*Src;
    memcpy(v11, *Src, v4);
    v12[v4] = a4;
    v12[v4 + 1] = 0;
    sub_180010884(v13, v8 + 1);
    *Src = v12;
  }
  return Src;
}
