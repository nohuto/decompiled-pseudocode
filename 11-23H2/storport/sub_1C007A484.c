/*
 * XREFs of sub_1C007A484 @ 0x1C007A484
 * Callers:
 *     sub_1C00580FC @ 0x1C00580FC (sub_1C00580FC.c)
 *     sub_1C0058378 @ 0x1C0058378 (sub_1C0058378.c)
 *     sub_1C00586DC @ 0x1C00586DC (sub_1C00586DC.c)
 *     sub_1C0058FA8 @ 0x1C0058FA8 (sub_1C0058FA8.c)
 *     sub_1C00594D4 @ 0x1C00594D4 (sub_1C00594D4.c)
 *     sub_1C00596F4 @ 0x1C00596F4 (sub_1C00596F4.c)
 *     sub_1C005A04C @ 0x1C005A04C (sub_1C005A04C.c)
 *     sub_1C005A188 @ 0x1C005A188 (sub_1C005A188.c)
 *     sub_1C005A398 @ 0x1C005A398 (sub_1C005A398.c)
 *     sub_1C005B214 @ 0x1C005B214 (sub_1C005B214.c)
 *     ?get_DynamicTerminalClasses@CMSPAddress@@UEAAJPEAUtagVARIANT@@@Z_0 @ 0x1C005B568 (-get_DynamicTerminalClasses@CMSPAddress@@UEAAJPEAUtagVARIANT@@@Z_0.c)
 *     sub_1C005B7F4 @ 0x1C005B7F4 (sub_1C005B7F4.c)
 *     sub_1C005B9F4 @ 0x1C005B9F4 (sub_1C005B9F4.c)
 *     sub_1C005BC64 @ 0x1C005BC64 (sub_1C005BC64.c)
 * Callees:
 *     sub_1C007F8D0 @ 0x1C007F8D0 (sub_1C007F8D0.c)
 */

__int64 __fastcall sub_1C007A484(__int64 a1, int a2, __int64 a3)
{
  __int64 result; // rax

  if ( _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 8), 1, 0) == 1 )
    return 2147483665LL;
  result = sub_1C007F8D0(a1, a3, (a2 != 1) + 0x20500000001LL);
  if ( (int)result < 0 )
    _InterlockedExchange((volatile __int32 *)(a1 + 8), 0);
  return result;
}
