/*
 * XREFs of sub_180020018 @ 0x180020018
 * Callers:
 *     sub_180030074 @ 0x180030074 (sub_180030074.c)
 * Callees:
 *     memcpy @ 0x18000CA6D (memcpy.c)
 *     sub_180010884 @ 0x180010884 (sub_180010884.c)
 *     sub_180011088 @ 0x180011088 (sub_180011088.c)
 *     sub_1800120D4 @ 0x1800120D4 (sub_1800120D4.c)
 *     sub_180012150 @ 0x180012150 (sub_180012150.c)
 *     sub_180012678 @ 0x180012678 (sub_180012678.c)
 */

const void **__fastcall sub_180020018(const void **Src, unsigned __int64 a2, __int64 a3, const void *a4, __int64 a5)
{
  const void *v5; // r15
  __int64 v6; // rbx
  unsigned __int64 v9; // rsi
  char *v10; // rbp
  unsigned __int64 v11; // rdx
  __int64 v12; // rcx
  char *v13; // rax
  __int64 v14; // rdx
  size_t v15; // r8
  __int64 v16; // r15
  char *v17; // r14
  char *v18; // r12
  size_t v19; // rbp
  char *v20; // rbx
  __int64 v21; // rcx
  char *v23; // [rsp+50h] [rbp+8h] BYREF

  v5 = Src[2];
  v6 = 0x7FFFFFFFFFFFFFFELL;
  if ( 0x7FFFFFFFFFFFFFFELL - (__int64)v5 < a2 )
    sub_180012150();
  v9 = (unsigned __int64)Src[3];
  v10 = (char *)v5 + a2;
  v11 = ((unsigned __int64)v5 + a2) | 7;
  if ( v11 > 0x7FFFFFFFFFFFFFFELL || (v21 = v9 >> 1, v9 > 0x7FFFFFFFFFFFFFFELL - (v9 >> 1)) )
  {
    v12 = 0x7FFFFFFFFFFFFFFFLL;
  }
  else
  {
    v6 = v21 + v9;
    if ( v11 >= v21 + v9 )
      v6 = v11;
    v12 = v6 + 1;
    if ( (unsigned __int64)(v6 + 1) > 0x7FFFFFFFFFFFFFFFLL )
      sub_1800120D4();
  }
  v13 = (char *)sub_180011088(2 * v12);
  v14 = a5;
  v15 = 2LL * (_QWORD)v5;
  v16 = (__int64)v5 + a5;
  Src[2] = v10;
  v23 = v13;
  v17 = v13;
  Src[3] = (const void *)v6;
  v18 = &v13[v15];
  v19 = 2 * v14;
  if ( v9 < 8 )
  {
    memcpy(v13, Src, v15);
    memcpy(v18, a4, v19);
    *(_WORD *)&v17[2 * v16] = 0;
    sub_180012678((__int64 *)Src, (__int64 *)&v23);
  }
  else
  {
    v20 = (char *)*Src;
    memcpy(v13, *Src, v15);
    memcpy(v18, a4, v19);
    *(_WORD *)&v17[2 * v16] = 0;
    sub_180010884(v20, 2 * v9 + 2);
    *Src = v17;
  }
  return Src;
}
