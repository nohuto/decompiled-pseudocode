/*
 * XREFs of ??$__fail@W4reason@_tip_SnapFlyoutShowTest@@@?$test_data_base@U_tip_SnapFlyoutShowTest_id@@@tip2@@IEBAXW4reason@_tip_SnapFlyoutShowTest@@PEBD@Z @ 0x1802209A0
 * Callers:
 *     ?evaluate@_tip_SnapFlyoutShowTest@@QEAAXXZ @ 0x180665F84 (-evaluate@_tip_SnapFlyoutShowTest@@QEAAXXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall tip2::test_data_base<_tip_SnapFlyoutShowTest_id>::__fail<enum _tip_SnapFlyoutShowTest::reason>(
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
