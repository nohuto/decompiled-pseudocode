/*
 * XREFs of sub_140979E6C @ 0x140979E6C
 * Callers:
 *     sub_1407BB560 @ 0x1407BB560 (sub_1407BB560.c)
 * Callees:
 *     sub_140961628 @ 0x140961628 (sub_140961628.c)
 *     sub_1409616B0 @ 0x1409616B0 (sub_1409616B0.c)
 *     sub_140979F5C @ 0x140979F5C (sub_140979F5C.c)
 */

__int64 __fastcall sub_140979E6C(__int64 a1, __int64 *a2, unsigned __int64 a3, int a4, __int64 *a5)
{
  __int64 *v5; // r14
  unsigned __int64 v7; // rbx
  __int64 *v8; // rbp
  __int64 v9; // rsi
  __int64 v10; // rax
  __int64 v11; // rdi
  __int64 result; // rax
  unsigned int v13; // edi
  unsigned __int64 v14; // r15
  __int64 v15; // rbx

  v5 = a5;
  a5 = 0LL;
  v7 = a3;
  v8 = a2;
  v9 = a1;
  *v5 = 0LL;
  v10 = a1 & 7;
  if ( (a1 & 7) != 0 )
  {
    v11 = 8 - v10;
    if ( a3 < 8 - v10 )
      v11 = (unsigned int)a3;
    result = sub_140979F5C(a1, a2, (unsigned int)v11);
    if ( (int)result < 0 )
      return result;
    v9 += v11;
    *v5 = v11;
    v8 = (__int64 *)((char *)v8 + v11);
    v7 -= v11;
  }
  v13 = v7 & 7;
  v14 = v7 & 7;
  v15 = v7 - v14;
  if ( v15 )
  {
    if ( a4 )
      LODWORD(result) = sub_140961628(v9, v8, v15, &a5);
    else
      LODWORD(result) = sub_1409616B0(v9, (__int64)v8, v15, &a5);
    *v5 += (__int64)a5;
    if ( (int)result < 0 )
      return (unsigned int)result;
    v9 += v15;
    v8 = (__int64 *)((char *)v8 + v15);
  }
  if ( v13 )
  {
    result = sub_140979F5C(v9, v8, v13);
    if ( (int)result < 0 )
      return result;
    *v5 += v14;
  }
  return 0LL;
}
