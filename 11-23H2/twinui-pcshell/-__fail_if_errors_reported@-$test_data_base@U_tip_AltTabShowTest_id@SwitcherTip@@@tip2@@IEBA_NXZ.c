/*
 * XREFs of ?__fail_if_errors_reported@?$test_data_base@U_tip_AltTabShowTest_id@SwitcherTip@@@tip2@@IEBA_NXZ @ 0x180222F34
 * Callers:
 *     ?evaluate@_tip_SnapFlyoutShowTest@@QEAAXXZ @ 0x180665F84 (-evaluate@_tip_SnapFlyoutShowTest@@QEAAXXZ.c)
 *     ?evaluate@_tip_AltTabShowTest@SwitcherTip@@QEAAXXZ @ 0x1807672B0 (-evaluate@_tip_AltTabShowTest@SwitcherTip@@QEAAXXZ.c)
 *     ?evaluate@_tip_VirtualDesktopSwitcherShowReliabiltyTest@SwitcherTip@@QEAAXXZ @ 0x1807773DC (-evaluate@_tip_VirtualDesktopSwitcherShowReliabiltyTest@SwitcherTip@@QEAAXXZ.c)
 * Callees:
 *     <none>
 */

char __fastcall tip2::test_data_base<SwitcherTip::_tip_AltTabShowTest_id>::__fail_if_errors_reported(__int64 a1)
{
  __int64 v1; // rax

  v1 = *(_QWORD *)(a1 + 8);
  if ( !*(_QWORD *)(v1 + 80) )
    return 0;
  if ( !*(_BYTE *)(v1 + 152) )
  {
    *(_BYTE *)(v1 + 152) = 3;
    *(_WORD *)(v1 + 154) = 0x4000;
    *(_QWORD *)(v1 + 160) = 0LL;
  }
  return 1;
}
