/*
 * XREFs of sub_1C007AE2C @ 0x1C007AE2C
 * Callers:
 *     sub_1C005BC64 @ 0x1C005BC64 (sub_1C005BC64.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0022EA0 (__security_check_cookie.c)
 *     sub_1C007B2F4 @ 0x1C007B2F4 (sub_1C007B2F4.c)
 *     sub_1C007B340 @ 0x1C007B340 (sub_1C007B340.c)
 *     sub_1C007D268 @ 0x1C007D268 (sub_1C007D268.c)
 *     sub_1C007E84C @ 0x1C007E84C (sub_1C007E84C.c)
 *     sub_1C007F44C @ 0x1C007F44C (sub_1C007F44C.c)
 */

__int64 __fastcall sub_1C007AE2C(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax
  __int64 v8; // rdx
  _OWORD *v9; // r10
  __int64 v10; // [rsp+20h] [rbp-78h]
  _OWORD v11[2]; // [rsp+40h] [rbp-58h] BYREF
  int v12; // [rsp+60h] [rbp-38h]

  v12 = 0;
  memset(v11, 0, sizeof(v11));
  if ( !a4 )
    return 3221225485LL;
  result = sub_1C007B2F4(a1);
  if ( !(_DWORD)result )
  {
    if ( _InterlockedCompareExchange((volatile signed __int32 *)(v8 + 28), 1, 0) == 1 )
    {
      return 2147483665LL;
    }
    else
    {
      if ( !v9
        && (LODWORD(result) = sub_1C007D268(a1, v8, 33794, 3, (__int64)v11 + 4, 32, (__int64)v11),
            v9 = v11,
            (int)result < 0)
        || (LODWORD(result) = sub_1C007F44C(a1, a2, 0x900000006LL, v9), (int)result < 0)
        || (result = sub_1C007E84C(a1, a2, 0xB00000001LL, a4, v10), (int)result < 0) )
      {
        result = sub_1C007B340(a1, a2, (unsigned int)result);
      }
      _InterlockedExchange((volatile __int32 *)(a2 + 28), 0);
    }
  }
  return result;
}
