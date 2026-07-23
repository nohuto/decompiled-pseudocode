/*
 * XREFs of sub_140A2C72C @ 0x140A2C72C
 * Callers:
 *     sub_140A2C51C @ 0x140A2C51C (sub_140A2C51C.c)
 * Callees:
 *     sub_1406D5A30 @ 0x1406D5A30 (sub_1406D5A30.c)
 *     sub_14078014C @ 0x14078014C (sub_14078014C.c)
 */

__int64 __fastcall sub_140A2C72C(__int64 a1, const WCHAR *a2, __int64 a3, int a4, void *a5, ULONG a6)
{
  __int64 result; // rax
  int v8; // ecx
  HANDLE KeyHandle; // [rsp+50h] [rbp+18h] BYREF

  KeyHandle = 0LL;
  if ( a4 != 8210 )
    return 3221225485LL;
  result = sub_14078014C(a1, 13, (__int64)&KeyHandle);
  if ( (int)result >= 0 )
  {
    v8 = sub_1406D5A30(KeyHandle, a2, 7u, a5, a6);
    if ( v8 == -1073741444 )
    {
      return 3221225701LL;
    }
    else
    {
      result = 0LL;
      if ( v8 < 0 )
        return (unsigned int)v8;
    }
  }
  return result;
}
