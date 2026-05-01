/*
 * XREFs of ??$__fail@W4reason@_tip_SmartFillTest@@@?$test_data_base@U_tip_SmartFillTest_id@@@tip2@@IEBAXW4reason@_tip_SmartFillTest@@PEBD@Z @ 0x18022481C
 * Callers:
 *     ?evaluate@_tip_SmartFillTest@@QEAAXXZ @ 0x1806745D8 (-evaluate@_tip_SmartFillTest@@QEAAXXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall tip2::test_data_base<_tip_SmartFillTest_id>::__fail<enum _tip_SmartFillTest::reason>(
        __int64 a1,
        __int16 a2,
        __int64 a3)
{
  __int64 result; // rax

  result = *(_QWORD *)(a1 + 8);
  if ( !*(_BYTE *)(result + 152) )
  {
    *(_BYTE *)(result + 152) = 3;
    *(_WORD *)(result + 154) = a2;
    *(_QWORD *)(result + 160) = a3;
  }
  return result;
}
