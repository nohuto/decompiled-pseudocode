/*
 * XREFs of ??$__fail@W4reason@_tip_VirtualDesktopSwitcherShowReliabiltyTest@SwitcherTip@@@?$test_data_base@U_tip_VirtualDesktopSwitcherShowReliabiltyTest_id@SwitcherTip@@@tip2@@IEBAXW4reason@_tip_VirtualDesktopSwitcherShowReliabiltyTest@SwitcherTip@@PEBD@Z @ 0x18028B53C
 * Callers:
 *     ?evaluate@_tip_VirtualDesktopSwitcherShowReliabiltyTest@SwitcherTip@@QEAAXXZ @ 0x1807773DC (-evaluate@_tip_VirtualDesktopSwitcherShowReliabiltyTest@SwitcherTip@@QEAAXXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall tip2::test_data_base<SwitcherTip::_tip_VirtualDesktopSwitcherShowReliabiltyTest_id>::__fail<enum SwitcherTip::_tip_VirtualDesktopSwitcherShowReliabiltyTest::reason>(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  __int64 result; // rax

  result = *(_QWORD *)(a1 + 8);
  if ( !*(_BYTE *)(result + 152) )
  {
    *(_QWORD *)(result + 160) = a3;
    *(_BYTE *)(result + 152) = 3;
    *(_WORD *)(result + 154) = 3;
  }
  return result;
}
