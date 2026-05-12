/*
 * XREFs of sub_1C0079C54 @ 0x1C0079C54
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
 *     sub_1C007B340 @ 0x1C007B340 (sub_1C007B340.c)
 *     sub_1C007CEAC @ 0x1C007CEAC (sub_1C007CEAC.c)
 *     sub_1C007F52C @ 0x1C007F52C (sub_1C007F52C.c)
 */

__int64 __fastcall sub_1C0079C54(__int64 a1, __int64 a2)
{
  int v4; // edx
  __int32 v5; // ebp

  v4 = 0;
  if ( _InterlockedCompareExchange((volatile signed __int32 *)(a2 + 28), 1, 0) == 1 )
  {
    return (unsigned int)-2147483631;
  }
  else
  {
    v5 = _InterlockedExchange((volatile __int32 *)a2, 3);
    if ( v5 == 2 )
    {
      if ( !*(_QWORD *)(a2 + 40)
        && !*(_QWORD *)(a2 + 48)
        && (LOBYTE(v4) = 1,
            v4 = sub_1C007CEAC(*(_QWORD *)a1, v4, *(unsigned __int16 *)(a2 + 24), 2048, a2 + 40, a2 + 48),
            v4 < 0)
        || (v4 = sub_1C007F52C(a1, a2), v4 < 0) )
      {
        v4 = sub_1C007B340(a1, a2, (unsigned int)v4);
      }
    }
    _InterlockedExchange((volatile __int32 *)(a2 + 28), 0);
    if ( ((v5 - 1) & 0xFFFFFFFC) != 0 || v5 == 3 )
    {
      return (unsigned int)-1073741811;
    }
    else
    {
      *(_QWORD *)(a1 + 16) = 0LL;
      _InterlockedExchange((volatile __int32 *)(a1 + 8), 0);
    }
  }
  return (unsigned int)v4;
}
