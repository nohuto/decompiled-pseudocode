/*
 * XREFs of sub_140789084 @ 0x140789084
 * Callers:
 *     sub_1406D068C @ 0x1406D068C (sub_1406D068C.c)
 *     sub_140788ED4 @ 0x140788ED4 (sub_140788ED4.c)
 * Callees:
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_1407817E8 @ 0x1407817E8 (sub_1407817E8.c)
 */

__int64 __fastcall sub_140789084(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v4; // r10
  _QWORD v5[3]; // [rsp+40h] [rbp-18h] BYREF

  v5[0] = 0LL;
  result = sub_1407817E8(a1, 3, v5);
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
