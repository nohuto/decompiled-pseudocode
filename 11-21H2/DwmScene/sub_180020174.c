/*
 * XREFs of sub_180020174 @ 0x180020174
 * Callers:
 *     sub_180020CC0 @ 0x180020CC0 (sub_180020CC0.c)
 * Callees:
 *     memcpy @ 0x18000CA6D (memcpy.c)
 *     sub_180010884 @ 0x180010884 (sub_180010884.c)
 *     sub_180011088 @ 0x180011088 (sub_180011088.c)
 *     sub_1800120D4 @ 0x1800120D4 (sub_1800120D4.c)
 *     sub_180012150 @ 0x180012150 (sub_180012150.c)
 *     sub_180012678 @ 0x180012678 (sub_180012678.c)
 */

void **sub_180020174(void **Src, unsigned __int64 a2, __int64 a3, ...)
{
  void *v3; // r14
  __int64 v4; // rbx
  unsigned __int64 v6; // rsi
  char *v7; // r15
  unsigned __int64 v8; // rdx
  __int64 v9; // rcx
  char *v10; // rax
  __int64 v11; // rcx
  char *v12; // rbp
  size_t v13; // r14
  size_t v14; // r8
  char *v15; // r15
  void *v16; // rbx
  __int64 v17; // rcx
  char *v19; // [rsp+58h] [rbp+20h] BYREF
  va_list va; // [rsp+58h] [rbp+20h]
  __int64 v21; // [rsp+60h] [rbp+28h]
  __int64 v22; // [rsp+68h] [rbp+30h]
  va_list va1; // [rsp+70h] [rbp+38h] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v19 = va_arg(va1, char *);
  v21 = va_arg(va1, _QWORD);
  v22 = va_arg(va1, _QWORD);
  v3 = Src[2];
  v4 = 0x7FFFFFFFFFFFFFFELL;
  if ( 0x7FFFFFFFFFFFFFFELL - (__int64)v3 < a2 )
    sub_180012150();
  v6 = (unsigned __int64)Src[3];
  v7 = (char *)v3 + a2;
  v8 = ((unsigned __int64)v3 + a2) | 7;
  if ( v8 > 0x7FFFFFFFFFFFFFFELL || (v17 = v6 >> 1, v6 > 0x7FFFFFFFFFFFFFFELL - (v6 >> 1)) )
  {
    v9 = 0x7FFFFFFFFFFFFFFFLL;
  }
  else
  {
    v4 = v17 + v6;
    if ( v8 >= v17 + v6 )
      v4 = v8;
    v9 = v4 + 1;
    if ( (unsigned __int64)(v4 + 1) > 0x7FFFFFFFFFFFFFFFLL )
      sub_1800120D4();
  }
  v10 = (char *)sub_180011088(2 * v9);
  v11 = v22;
  v12 = v10;
  Src[2] = v7;
  v13 = 2LL * (_QWORD)v3 + 2;
  v19 = v10;
  Src[3] = (void *)v4;
  v14 = 2 * v11;
  v15 = &v10[2 * v11];
  if ( v6 < 8 )
  {
    memcpy(v10, L"FL_", v14);
    memcpy(v15, Src, v13);
    sub_180012678((__int64 *)Src, (__int64 *)va);
  }
  else
  {
    v16 = *Src;
    memcpy(v10, L"FL_", v14);
    memcpy(v15, v16, v13);
    sub_180010884((char *)v16, 2 * v6 + 2);
    *Src = v12;
  }
  return Src;
}
