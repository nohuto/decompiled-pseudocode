/*
 * XREFs of ?evaluate@_tip_SnapFlyoutShowTest@@QEAAXXZ @ 0x180665F84
 * Callers:
 *     ?evaluate@?$merged_data@U_tip_SnapFlyoutShowTest@@U1@@details@tip2@@EEAAXXZ @ 0x180223280 (-evaluate@-$merged_data@U_tip_SnapFlyoutShowTest@@U1@@details@tip2@@EEAAXXZ.c)
 * Callees:
 *     ?reason_string@details@tip@@YAPEBDPEBD@Z @ 0x180171034 (-reason_string@details@tip@@YAPEBDPEBD@Z.c)
 *     ?__fail_if_complete_not_called@?$test_data_base@U_tip_GuidedSnapAssistTest_id@@@tip2@@IEBA_NXZ @ 0x180201550 (-__fail_if_complete_not_called@-$test_data_base@U_tip_GuidedSnapAssistTest_id@@@tip2@@IEBA_NXZ.c)
 *     ??$__fail@W4reason@_tip_SnapFlyoutShowTest@@@?$test_data_base@U_tip_SnapFlyoutShowTest_id@@@tip2@@IEBAXW4reason@_tip_SnapFlyoutShowTest@@PEBD@Z @ 0x1802209A0 (--$__fail@W4reason@_tip_SnapFlyoutShowTest@@@-$test_data_base@U_tip_SnapFlyoutShowTest_id@@@tip2.c)
 *     ?__fail_if_errors_reported@?$test_data_base@U_tip_AltTabShowTest_id@SwitcherTip@@@tip2@@IEBA_NXZ @ 0x180222F34 (-__fail_if_errors_reported@-$test_data_base@U_tip_AltTabShowTest_id@SwitcherTip@@@tip2@@IEBA_NXZ.c)
 */

void __fastcall _tip_SnapFlyoutShowTest::evaluate(_tip_SnapFlyoutShowTest *this)
{
  __int64 v1; // r9
  const char *v2; // rdx
  __int64 v3; // r9
  const char *v4; // rax
  __int64 v5; // r9
  __int16 v6; // dx
  const char *v7; // rax
  __int64 v8; // r9
  __int16 v9; // dx
  const char *v10; // rax
  __int64 v11; // r9
  __int16 v12; // dx

  if ( !tip2::test_data_base<SwitcherTip::_tip_AltTabShowTest_id>::__fail_if_errors_reported((__int64)this)
    && !tip2::test_data_base<_tip_GuidedSnapAssistTest_id>::__fail_if_complete_not_called(v1) )
  {
    if ( *(_BYTE *)(v3 + 23) != (_BYTE)v2 )
    {
      v4 = tip::details::reason_string((tip::details *)"reason::noMonitorInfo", v2);
      v6 = 5;
LABEL_31:
      tip2::test_data_base<_tip_SnapFlyoutShowTest_id>::__fail<enum _tip_SnapFlyoutShowTest::reason>(
        v5,
        v6,
        (__int64)v4);
      return;
    }
    if ( *(_BYTE *)(v3 + 22) != (_BYTE)v2 )
    {
      v4 = tip::details::reason_string((tip::details *)"reason::threadFailedToStart", v2);
      v6 = 4;
      goto LABEL_31;
    }
    if ( *(_BYTE *)(v3 + 21) != (_BYTE)v2 )
    {
      v4 = tip::details::reason_string((tip::details *)"reason::controlFailedToLoad", v2);
      v6 = 3;
      goto LABEL_31;
    }
    if ( *(_BYTE *)(v3 + 20) != (_BYTE)v2 )
    {
      v7 = tip::details::reason_string((tip::details *)"reason::showFlyoutRejected", v2);
      v9 = 8;
LABEL_11:
      tip2::test_data_base<_tip_SnapFlyoutShowTest_id>::__ignore<enum _tip_SnapFlyoutShowTest::reason>(
        v8,
        v9,
        (__int64)v7);
      return;
    }
    if ( *(_BYTE *)(v3 + 18) != (_BYTE)v2 )
    {
      v7 = tip::details::reason_string((tip::details *)"reason::canceled", v2);
      v9 = 1;
      goto LABEL_11;
    }
    if ( *(_BYTE *)(v3 + 19) != (_BYTE)v2 )
    {
      v7 = tip::details::reason_string((tip::details *)"reason::cleaningUpPreviousDrag", v2);
      v9 = 13;
      goto LABEL_11;
    }
    if ( *(_DWORD *)(v3 + 28) == 1 )
    {
      if ( *(_BYTE *)(v3 + 26) != (_BYTE)v2 )
      {
        v4 = tip::details::reason_string((tip::details *)"reason::noDisplayRegion", v2);
        v6 = 7;
        goto LABEL_31;
      }
      if ( *(_BYTE *)(v3 + 17) != (_BYTE)v2 )
      {
        v10 = tip::details::reason_string((tip::details *)"reason::flyoutShown", v2);
        v12 = 10;
        goto LABEL_21;
      }
    }
    else
    {
      if ( *(_DWORD *)(v3 + 28) != 2 )
      {
        v4 = tip::details::reason_string((tip::details *)"reason::invalidControlType", v2);
        v6 = 12;
        goto LABEL_31;
      }
      if ( *(_BYTE *)(v3 + 27) != (_BYTE)v2 )
      {
        v4 = tip::details::reason_string((tip::details *)"reason::noWorkAreaRect", v2);
        v6 = 9;
        goto LABEL_31;
      }
      if ( *(_BYTE *)(v3 + 17) != (_BYTE)v2 )
      {
        v10 = tip::details::reason_string((tip::details *)"reason::barShown", v2);
        v12 = 11;
        goto LABEL_21;
      }
    }
    if ( *(_BYTE *)(v3 + 24) == (_BYTE)v2 )
    {
      tip2::test_data_base<_tip_ColumnSmartFillTest_id>::__succeed(v3);
      return;
    }
    v10 = tip::details::reason_string((tip::details *)"reason::reused", v2);
    v12 = 6;
LABEL_21:
    tip2::test_data_base<_tip_SnapFlyoutShowTest_id>::__succeed<enum _tip_SnapFlyoutShowTest::reason>(
      v11,
      v12,
      (__int64)v10);
  }
}
