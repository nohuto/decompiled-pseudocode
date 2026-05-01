/*
 * XREFs of ??$__succeed@W4reason@_tip_AltTabShowTest@SwitcherTip@@@?$test_data_base@U_tip_AltTabShowTest_id@SwitcherTip@@@tip2@@IEBAXW4reason@_tip_AltTabShowTest@SwitcherTip@@PEBD@Z @ 0x1802896A0
 * Callers:
 *     ?evaluate@_tip_AltTabShowTest@SwitcherTip@@QEAAXXZ @ 0x1807672B0 (-evaluate@_tip_AltTabShowTest@SwitcherTip@@QEAAXXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall tip2::test_data_base<SwitcherTip::_tip_AltTabShowTest_id>::__succeed<enum SwitcherTip::_tip_AltTabShowTest::reason>(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  __int64 result; // rax

  result = *(_QWORD *)(a1 + 8);
  if ( !*(_BYTE *)(result + 152) )
  {
    *(_QWORD *)(result + 160) = a3;
    *(_BYTE *)(result + 152) = 1;
    *(_WORD *)(result + 154) = 1;
  }
  return result;
}
