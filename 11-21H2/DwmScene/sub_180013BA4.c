/*
 * XREFs of sub_180013BA4 @ 0x180013BA4
 * Callers:
 *     sub_180013B3C @ 0x180013B3C (sub_180013B3C.c)
 *     sub_18001DCD4 @ 0x18001DCD4 (sub_18001DCD4.c)
 *     sub_18001DD9C @ 0x18001DD9C (sub_18001DD9C.c)
 * Callees:
 *     memcpy @ 0x18000CA6D (memcpy.c)
 *     sub_180011088 @ 0x180011088 (sub_180011088.c)
 *     sub_1800110F0 @ 0x1800110F0 (sub_1800110F0.c)
 */

__int64 *__fastcall sub_180013BA4(
        __int64 *a1,
        __int64 a2,
        __int64 a3,
        const void *a4,
        size_t Size,
        void *Src,
        size_t a7)
{
  size_t v7; // r14
  __int64 v8; // rbx
  size_t v9; // r15
  char *v12; // rsi
  size_t v13; // rbp
  __int64 *result; // rax
  char *v15; // [rsp+60h] [rbp+18h] BYREF

  v15 = (char *)a3;
  v7 = Size;
  v8 = 15LL;
  v9 = a7;
  a1[2] = 0LL;
  a1[3] = 0LL;
  v12 = (char *)a1;
  v13 = v7 + v9;
  if ( v7 + v9 > 0xF )
  {
    v8 = 0x7FFFFFFFFFFFFFFFLL;
    if ( (v13 | 0xF) <= 0x7FFFFFFFFFFFFFFFLL )
    {
      v8 = v13 | 0xF;
      if ( (v13 | 0xF) < 0x16 )
        v8 = 22LL;
    }
    v15 = (char *)sub_180011088(v8 + 1);
    v12 = v15;
    sub_1800110F0(a1, (__int64 *)&v15);
  }
  a1[2] = v13;
  a1[3] = v8;
  memcpy(v12, a4, v7);
  memcpy(&v12[v7], Src, v9);
  result = a1;
  v12[v13] = 0;
  return result;
}
