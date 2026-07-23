/*
 * XREFs of sub_1406E5E80 @ 0x1406E5E80
 * Callers:
 *     sub_1406E5DD4 @ 0x1406E5DD4 (sub_1406E5DD4.c)
 * Callees:
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_1407817E8 @ 0x1407817E8 (sub_1407817E8.c)
 */

__int64 __fastcall sub_1406E5E80(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v4; // r10
  _QWORD v5[3]; // [rsp+40h] [rbp-18h] BYREF

  v5[0] = 0LL;
  result = sub_1407817E8(a1, 4LL, v5);
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
