/*
 * XREFs of ?evaluate@_tip_AltTabShowTest@SwitcherTip@@QEAAXXZ @ 0x1807672B0
 * Callers:
 *     ?evaluate@?$merged_data@U_tip_AltTabShowTest@SwitcherTip@@U12@@details@tip2@@EEAAXXZ @ 0x180289A20 (-evaluate@-$merged_data@U_tip_AltTabShowTest@SwitcherTip@@U12@@details@tip2@@EEAAXXZ.c)
 * Callees:
 *     ?reason_string@details@tip@@YAPEBDPEBD@Z @ 0x180171034 (-reason_string@details@tip@@YAPEBDPEBD@Z.c)
 *     ?__fail_if_complete_not_called@?$test_data_base@U_tip_GuidedSnapAssistTest_id@@@tip2@@IEBA_NXZ @ 0x180201550 (-__fail_if_complete_not_called@-$test_data_base@U_tip_GuidedSnapAssistTest_id@@@tip2@@IEBA_NXZ.c)
 *     ?__succeed@?$test_data_base@U_tip_ColumnSmartFillTest_id@@@tip2@@IEBAXXZ @ 0x180201660 (-__succeed@-$test_data_base@U_tip_ColumnSmartFillTest_id@@@tip2@@IEBAXXZ.c)
 *     ?__fail_if_errors_reported@?$test_data_base@U_tip_AltTabShowTest_id@SwitcherTip@@@tip2@@IEBA_NXZ @ 0x180222F34 (-__fail_if_errors_reported@-$test_data_base@U_tip_AltTabShowTest_id@SwitcherTip@@@tip2@@IEBA_NXZ.c)
 */

void __fastcall SwitcherTip::_tip_AltTabShowTest::evaluate(SwitcherTip::_tip_AltTabShowTest *this, const char *a2)
{
  const char *v2; // rax
  __int16 v3; // r10
  __int64 v4; // r9
  __int64 v5; // rcx
  const char *v6; // rax
  __int64 v7; // rdx
  __int64 v8; // r9
  __int64 v9; // r9
  __int64 v10; // r9

  if ( *((_BYTE *)this + 17) )
  {
    v2 = tip::details::reason_string((tip::details *)"reason::cancelled", a2);
    v5 = *(_QWORD *)(v4 + 8);
    if ( *(_BYTE *)(v5 + 152) == (_BYTE)v3 )
    {
      *(_BYTE *)(v5 + 152) = 4;
      *(_WORD *)(v5 + 154) = v3 + 2;
      *(_QWORD *)(v5 + 160) = v2;
    }
  }
  else if ( *((_BYTE *)this + 16) )
  {
    v6 = tip::details::reason_string((tip::details *)"reason::shown", a2);
    tip2::test_data_base<SwitcherTip::_tip_AltTabShowTest_id>::__succeed<enum SwitcherTip::_tip_AltTabShowTest::reason>(
      v8,
      v7,
      (__int64)v6);
  }
  else if ( !tip2::test_data_base<SwitcherTip::_tip_AltTabShowTest_id>::__fail_if_errors_reported((__int64)this)
         && !tip2::test_data_base<_tip_GuidedSnapAssistTest_id>::__fail_if_complete_not_called(v9) )
  {
    tip2::test_data_base<_tip_ColumnSmartFillTest_id>::__succeed(v10);
  }
}
