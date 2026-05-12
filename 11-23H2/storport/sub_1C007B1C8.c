/*
 * XREFs of sub_1C007B1C8 @ 0x1C007B1C8
 * Callers:
 *     sub_1C0058378 @ 0x1C0058378 (sub_1C0058378.c)
 *     sub_1C00586DC @ 0x1C00586DC (sub_1C00586DC.c)
 *     sub_1C0058FA8 @ 0x1C0058FA8 (sub_1C0058FA8.c)
 *     sub_1C005A188 @ 0x1C005A188 (sub_1C005A188.c)
 *     ?get_DynamicTerminalClasses@CMSPAddress@@UEAAJPEAUtagVARIANT@@@Z_0 @ 0x1C005B568 (-get_DynamicTerminalClasses@CMSPAddress@@UEAAJPEAUtagVARIANT@@@Z_0.c)
 *     sub_1C005B9F4 @ 0x1C005B9F4 (sub_1C005B9F4.c)
 * Callees:
 *     sub_1C007B2F4 @ 0x1C007B2F4 (sub_1C007B2F4.c)
 *     sub_1C007B340 @ 0x1C007B340 (sub_1C007B340.c)
 *     sub_1C007FA90 @ 0x1C007FA90 (sub_1C007FA90.c)
 */

__int64 __fastcall sub_1C007B1C8(__int64 a1, __int64 a2, int a3)
{
  __int64 result; // rax
  __int64 v6; // rdx
  __int64 v7; // r9
  int v8; // r10d

  result = 3221225987LL;
  if ( a3 != -1073741309 )
  {
    result = sub_1C007B2F4(a1);
    if ( (int)result >= 0 )
    {
      if ( _InterlockedCompareExchange((volatile signed __int32 *)(v6 + 28), 1, 0) == 1 )
      {
        return 2147483665LL;
      }
      else
      {
        if ( _InterlockedCompareExchange((volatile signed __int32 *)(v6 + 32), 0, 1) == 1 )
        {
          LOBYTE(v7) = v8 < 0;
          result = sub_1C007FA90(a1, v6, 0LL, v7);
          if ( (int)result < 0 )
            result = sub_1C007B340(a1, a2, (unsigned int)result);
        }
        else
        {
          result = 3221225701LL;
        }
        _InterlockedExchange((volatile __int32 *)(a2 + 28), 0);
      }
    }
  }
  return result;
}
