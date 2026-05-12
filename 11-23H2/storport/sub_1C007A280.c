/*
 * XREFs of sub_1C007A280 @ 0x1C007A280
 * Callers:
 *     sub_1C005A04C @ 0x1C005A04C (sub_1C005A04C.c)
 * Callees:
 *     sub_1C007B2F4 @ 0x1C007B2F4 (sub_1C007B2F4.c)
 *     sub_1C007B340 @ 0x1C007B340 (sub_1C007B340.c)
 *     sub_1C007BE80 @ 0x1C007BE80 (sub_1C007BE80.c)
 */

__int64 __fastcall sub_1C007A280(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax
  __int64 v7; // rdx
  __int64 v8; // r10
  unsigned int v9; // r11d

  if ( !a4 )
    return 3221225485LL;
  result = sub_1C007B2F4(a1);
  if ( !(_DWORD)result )
  {
    if ( _InterlockedCompareExchange((volatile signed __int32 *)(v7 + 28), 1, 0) == 1 )
    {
      return 2147483665LL;
    }
    else
    {
      result = sub_1C007BE80(a1, v7, v9, v8);
      if ( (int)result < 0 )
        result = sub_1C007B340(a1, a2, (unsigned int)result);
      _InterlockedExchange((volatile __int32 *)(a2 + 28), 0);
    }
  }
  return result;
}
