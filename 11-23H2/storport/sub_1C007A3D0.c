/*
 * XREFs of sub_1C007A3D0 @ 0x1C007A3D0
 * Callers:
 *     sub_1C00596F4 @ 0x1C00596F4 (sub_1C00596F4.c)
 * Callees:
 *     sub_1C007B2F4 @ 0x1C007B2F4 (sub_1C007B2F4.c)
 *     sub_1C007B340 @ 0x1C007B340 (sub_1C007B340.c)
 *     sub_1C007D268 @ 0x1C007D268 (sub_1C007D268.c)
 */

__int64 __fastcall sub_1C007A3D0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  __int64 v6; // rdx
  __int64 v7; // r10

  if ( !a3 )
    return 3221225485LL;
  *(_OWORD *)a3 = 0LL;
  *(_OWORD *)(a3 + 16) = 0LL;
  *(_DWORD *)(a3 + 32) = 0;
  result = sub_1C007B2F4(a1);
  if ( (int)result >= 0 )
  {
    if ( _InterlockedCompareExchange((volatile signed __int32 *)(v6 + 28), 1, 0) == 1 )
    {
      return 2147483665LL;
    }
    else
    {
      result = sub_1C007D268(a1, v6, 33794, 3, v7 + 4, 32, v7);
      if ( (int)result < 0 )
        result = sub_1C007B340(a1, a2, (unsigned int)result);
      _InterlockedExchange((volatile __int32 *)(a2 + 28), 0);
    }
  }
  return result;
}
