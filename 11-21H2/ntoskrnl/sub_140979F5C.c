/*
 * XREFs of sub_140979F5C @ 0x140979F5C
 * Callers:
 *     sub_140979E6C @ 0x140979E6C (sub_140979E6C.c)
 * Callees:
 *     memmove @ 0x140435B40 (memmove.c)
 *     sub_140961628 @ 0x140961628 (sub_140961628.c)
 *     sub_1409616B0 @ 0x1409616B0 (sub_1409616B0.c)
 */

__int64 __fastcall sub_140979F5C(__int64 a1, void *a2, unsigned int a3, int a4)
{
  __int64 v7; // rdi
  __int64 v8; // rbp
  __int64 result; // rax
  unsigned int v10; // ebx
  _QWORD v11[5]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v12; // [rsp+50h] [rbp+8h] BYREF

  v12 = 0LL;
  v11[0] = 0LL;
  v7 = a1 & 7;
  v8 = a1 - v7;
  result = sub_140961628(a1 - v7, &v12, 8LL, v11);
  v10 = result;
  if ( (int)result >= 0 )
  {
    if ( a4 )
    {
      memmove(a2, (char *)&v12 + v7, a3);
    }
    else
    {
      memmove((char *)&v12 + v7, a2, a3);
      return (unsigned int)sub_1409616B0(v8, (__int64)&v12, 8LL, v11);
    }
    return v10;
  }
  return result;
}
