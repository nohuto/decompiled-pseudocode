/*
 * XREFs of sub_1C0079980 @ 0x1C0079980
 * Callers:
 *     sub_1C00580FC @ 0x1C00580FC (sub_1C00580FC.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0022EA0 (__security_check_cookie.c)
 *     sub_1C007B2F4 @ 0x1C007B2F4 (sub_1C007B2F4.c)
 *     sub_1C007B340 @ 0x1C007B340 (sub_1C007B340.c)
 *     sub_1C007D268 @ 0x1C007D268 (sub_1C007D268.c)
 *     sub_1C007D458 @ 0x1C007D458 (sub_1C007D458.c)
 *     sub_1C007D734 @ 0x1C007D734 (sub_1C007D734.c)
 *     sub_1C007F44C @ 0x1C007F44C (sub_1C007F44C.c)
 */

__int64 __fastcall sub_1C0079980(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 result; // rax
  __int64 v7; // rdx
  int v8; // ecx
  _OWORD *v9; // r10
  int v10; // eax
  char v11[8]; // [rsp+40h] [rbp-68h] BYREF
  _OWORD v12[2]; // [rsp+48h] [rbp-60h] BYREF
  int v13; // [rsp+68h] [rbp-40h]

  if ( *(_DWORD *)(a1 + 32) != 512 || a3 > 1 )
    return 3221225659LL;
  result = sub_1C007B2F4();
  if ( !(_DWORD)result )
  {
    if ( _InterlockedCompareExchange((volatile signed __int32 *)(v7 + 28), 1, 0) == 1 )
    {
      return 2147483665LL;
    }
    else
    {
      v13 = 0;
      memset(v12, 0, sizeof(v12));
      if ( (v9 || (v10 = sub_1C007D268(v8, v7, 33794, 3, (__int64)v12 + 4, 32, (__int64)v12), v9 = v12, v10 >= 0))
        && (v10 = sub_1C007F44C(a1, a2, 0x900000006LL, v9), v10 >= 0)
        && (v10 = sub_1C007D734(a1, a2, a3), v10 >= 0)
        || (result = sub_1C007B340(a1, a2, (unsigned int)v10), (int)result >= 0) )
      {
        v11[0] = 1;
        result = sub_1C007D458(a1, a2, 196609, 8, (__int64)v11, 1, 8);
      }
      _InterlockedExchange((volatile __int32 *)(a2 + 28), 0);
    }
  }
  return result;
}
