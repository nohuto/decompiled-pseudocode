/*
 * XREFs of sub_1C007B138 @ 0x1C007B138
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

__int64 __fastcall sub_1C007B138(__int64 a1, __int64 a2)
{
  int v4; // edx
  __int64 v5; // r8
  int v6; // eax

  v4 = sub_1C007B2F4(a1);
  if ( v4 >= 0 )
  {
    if ( _InterlockedCompareExchange((volatile signed __int32 *)(a2 + 28), 1, 0) == 1 )
    {
      return (unsigned int)-2147483631;
    }
    else
    {
      if ( _InterlockedCompareExchange((volatile signed __int32 *)(a2 + 32), 1, 0) )
      {
        v4 = -1073741595;
      }
      else
      {
        LOBYTE(v5) = 1;
        v6 = sub_1C007FA90(a1, a2, v5, 0LL);
        v4 = v6;
        if ( v6 < 0 )
        {
          v4 = sub_1C007B340(a1, a2, (unsigned int)v6);
          _InterlockedExchange((volatile __int32 *)(a2 + 32), 0);
        }
      }
      _InterlockedExchange((volatile __int32 *)(a2 + 28), 0);
    }
  }
  return (unsigned int)v4;
}
