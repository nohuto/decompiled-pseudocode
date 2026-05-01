/*
 * XREFs of ??$__fail@W4reason@_tip_StartMenuInvokeTest@@@?$test_data_base@U_tip_StartMenuInvokeTest_id@@@tip2@@IEBAXW4reason@_tip_StartMenuInvokeTest@@PEBD@Z @ 0x1801FB740
 * Callers:
 *     ?evaluate@_tip_StartMenuInvokeTest@@QEAAXXZ @ 0x180053D5C (-evaluate@_tip_StartMenuInvokeTest@@QEAAXXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall tip2::test_data_base<_tip_StartMenuInvokeTest_id>::__fail<enum _tip_StartMenuInvokeTest::reason>(
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
