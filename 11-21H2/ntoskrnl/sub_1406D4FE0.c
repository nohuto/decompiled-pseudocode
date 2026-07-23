/*
 * XREFs of sub_1406D4FE0 @ 0x1406D4FE0
 * Callers:
 *     sub_14077CF10 @ 0x14077CF10 (sub_14077CF10.c)
 *     sub_14078600C @ 0x14078600C (sub_14078600C.c)
 * Callees:
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_1407817E8 @ 0x1407817E8 (sub_1407817E8.c)
 */

__int64 __fastcall sub_1406D4FE0(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v4; // r10
  _QWORD v5[3]; // [rsp+40h] [rbp-18h] BYREF

  v5[0] = 0LL;
  result = sub_1407817E8(a1, 1LL, v5);
  if ( (int)result >= 0 )
  {
    if ( v5[0] )
    {
      result = sub_14042A5E0(v4, a2);
      if ( (_DWORD)result == -2147483643 )
        return 3221225507LL;
    }
    else
    {
      return 3221225474LL;
    }
  }
  return result;
}
