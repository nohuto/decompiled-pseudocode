/*
 * XREFs of ?evaluate@_tip_VirtualDesktopSwitcherShowReliabiltyTest@SwitcherTip@@QEAAXXZ @ 0x1807773DC
 * Callers:
 *     ?evaluate@?$merged_data@U_tip_VirtualDesktopSwitcherShowReliabiltyTest@SwitcherTip@@U12@@details@tip2@@EEAAXXZ @ 0x18028BC60 (-evaluate@-$merged_data@U_tip_VirtualDesktopSwitcherShowReliabiltyTest@SwitcherTip@@U12@@details.c)
 * Callees:
 *     ?reason_string@details@tip@@YAPEBDPEBD@Z @ 0x180171034 (-reason_string@details@tip@@YAPEBDPEBD@Z.c)
 *     ?__fail_if_complete_not_called@?$test_data_base@U_tip_GuidedSnapAssistTest_id@@@tip2@@IEBA_NXZ @ 0x180201550 (-__fail_if_complete_not_called@-$test_data_base@U_tip_GuidedSnapAssistTest_id@@@tip2@@IEBA_NXZ.c)
 *     ?__succeed@?$test_data_base@U_tip_ColumnSmartFillTest_id@@@tip2@@IEBAXXZ @ 0x180201660 (-__succeed@-$test_data_base@U_tip_ColumnSmartFillTest_id@@@tip2@@IEBAXXZ.c)
 *     ?__fail_if_errors_reported@?$test_data_base@U_tip_AltTabShowTest_id@SwitcherTip@@@tip2@@IEBA_NXZ @ 0x180222F34 (-__fail_if_errors_reported@-$test_data_base@U_tip_AltTabShowTest_id@SwitcherTip@@@tip2@@IEBA_NXZ.c)
 */

void __fastcall SwitcherTip::_tip_VirtualDesktopSwitcherShowReliabiltyTest::evaluate(
        SwitcherTip::_tip_VirtualDesktopSwitcherShowReliabiltyTest *this,
        const char *a2)
{
  const char *v2; // rax
  __int16 v3; // r10
  __int64 v4; // r9
  __int64 v5; // rcx
  const char *v6; // rax
  __int64 v7; // rdx
  __int64 v8; // r9
  __int64 v9; // r9
  const char *v10; // rdx
  __int64 v11; // r9
  char v12; // r10
  const char *v13; // rax
  __int64 v14; // rdx
  __int64 v15; // r9

  if ( *((_BYTE *)this + 16) )
  {
    if ( *((_BYTE *)this + 17) )
    {
      v2 = tip::details::reason_string((tip::details *)"reason::shown", a2);
      v5 = *(_QWORD *)(v4 + 8);
      if ( *(_BYTE *)(v5 + 152) == (_BYTE)v3 )
      {
        *(_QWORD *)(v5 + 160) = v2;
        *(_BYTE *)(v5 + 152) = v3 + 1;
        *(_WORD *)(v5 + 154) = v3 + 1;
      }
      return;
    }
LABEL_6:
    v6 = tip::details::reason_string((tip::details *)"reason::xaml_not_created", a2);
    tip2::test_data_base<SwitcherTip::_tip_VirtualDesktopSwitcherShowReliabiltyTest_id>::__fail<enum SwitcherTip::_tip_VirtualDesktopSwitcherShowReliabiltyTest::reason>(
      v8,
      v7,
      (__int64)v6);
    return;
  }
  if ( !*((_BYTE *)this + 17) )
    goto LABEL_6;
  if ( !tip2::test_data_base<SwitcherTip::_tip_AltTabShowTest_id>::__fail_if_errors_reported((__int64)this)
    && !tip2::test_data_base<_tip_GuidedSnapAssistTest_id>::__fail_if_complete_not_called(v9) )
  {
    if ( *(_BYTE *)(v11 + 16) == v12 )
    {
      v13 = tip::details::reason_string((tip::details *)"reason::not_shown", v10);
      tip2::test_data_base<SwitcherTip::_tip_VirtualDesktopSwitcherShowReliabiltyTest_id>::__ignore<enum SwitcherTip::_tip_VirtualDesktopSwitcherShowReliabiltyTest::reason>(
        v15,
        v14,
        (__int64)v13);
    }
    else
    {
      tip2::test_data_base<_tip_ColumnSmartFillTest_id>::__succeed(v11);
    }
  }
}
