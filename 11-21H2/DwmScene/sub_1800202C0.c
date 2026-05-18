/*
 * XREFs of sub_1800202C0 @ 0x1800202C0
 * Callers:
 *     sub_18002089C @ 0x18002089C (sub_18002089C.c)
 * Callees:
 *     memcpy @ 0x18000CA6D (memcpy.c)
 *     sub_180010884 @ 0x180010884 (sub_180010884.c)
 *     sub_180011088 @ 0x180011088 (sub_180011088.c)
 *     sub_1800120D4 @ 0x1800120D4 (sub_1800120D4.c)
 *     sub_180012150 @ 0x180012150 (sub_180012150.c)
 *     sub_180012678 @ 0x180012678 (sub_180012678.c)
 */

const void **__fastcall sub_1800202C0(const void **Src, unsigned __int64 a2, __int64 a3, __int64 a4)
{
  const void *v4; // r14
  __int64 v5; // rdi
  unsigned __int64 v8; // r15
  char *v9; // r12
  unsigned __int64 v10; // rdx
  __int64 v11; // rcx
  char *v12; // rax
  size_t v13; // r8
  char *v14; // rsi
  char *v15; // rdi
  char *v16; // r12
  __int64 j; // rcx
  __int64 v18; // rcx
  __int64 i; // rcx
  char *v21; // [rsp+50h] [rbp+8h] BYREF

  v4 = Src[2];
  v5 = 0x7FFFFFFFFFFFFFFELL;
  if ( 0x7FFFFFFFFFFFFFFELL - (__int64)v4 < a2 )
    sub_180012150();
  v8 = (unsigned __int64)Src[3];
  v9 = (char *)v4 + a2;
  v10 = ((unsigned __int64)v4 + a2) | 7;
  if ( v10 > 0x7FFFFFFFFFFFFFFELL || (v18 = v8 >> 1, v8 > 0x7FFFFFFFFFFFFFFELL - (v8 >> 1)) )
  {
    v11 = 0x7FFFFFFFFFFFFFFFLL;
  }
  else
  {
    v5 = v18 + v8;
    if ( v10 >= v18 + v8 )
      v5 = v10;
    v11 = v5 + 1;
    if ( (unsigned __int64)(v5 + 1) > 0x7FFFFFFFFFFFFFFFLL )
      sub_1800120D4();
  }
  v12 = (char *)sub_180011088(2 * v11);
  Src[3] = (const void *)v5;
  v13 = 2LL * (_QWORD)v4;
  v21 = v12;
  v14 = v12;
  Src[2] = v9;
  v15 = &v12[2 * (_QWORD)v4];
  if ( v8 < 8 )
  {
    memcpy(v12, Src, v13);
    if ( a4 )
    {
      for ( i = a4; i; --i )
      {
        *(_WORD *)v15 = 0;
        v15 += 2;
      }
    }
    *(_WORD *)&v14[2 * ((_QWORD)v4 + a4)] = 0;
    sub_180012678((__int64 *)Src, (__int64 *)&v21);
  }
  else
  {
    v16 = (char *)*Src;
    memcpy(v12, *Src, v13);
    if ( a4 )
    {
      for ( j = a4; j; --j )
      {
        *(_WORD *)v15 = 0;
        v15 += 2;
      }
    }
    *(_WORD *)&v14[2 * ((_QWORD)v4 + a4)] = 0;
    sub_180010884(v16, 2 * v8 + 2);
    *Src = v14;
  }
  return Src;
}
