/*
 * XREFs of ?evaluate@_tip_ToggleDashboardUsingSwipe@@QEAAXXZ @ 0x180698C44
 * Callers:
 *     ?evaluate@?$merged_data@U_tip_ToggleDashboardUsingSwipe@@U1@@details@tip2@@EEAAXXZ @ 0x18024A2D0 (-evaluate@-$merged_data@U_tip_ToggleDashboardUsingSwipe@@U1@@details@tip2@@EEAAXXZ.c)
 * Callees:
 *     ?reason_string@details@tip@@YAPEBDPEBD@Z @ 0x180171034 (-reason_string@details@tip@@YAPEBDPEBD@Z.c)
 *     ?__fail_if_complete_not_called@?$test_data_base@U_tip_GuidedSnapAssistTest_id@@@tip2@@IEBA_NXZ @ 0x180201550 (-__fail_if_complete_not_called@-$test_data_base@U_tip_GuidedSnapAssistTest_id@@@tip2@@IEBA_NXZ.c)
 *     ?__succeed@?$test_data_base@U_tip_ColumnSmartFillTest_id@@@tip2@@IEBAXXZ @ 0x180201660 (-__succeed@-$test_data_base@U_tip_ColumnSmartFillTest_id@@@tip2@@IEBAXXZ.c)
 */

void __fastcall _tip_ToggleDashboardUsingSwipe::evaluate(_tip_ToggleDashboardUsingSwipe *this, const char *a2)
{
  const char *v2; // rax
  __int16 v3; // r10
  __int64 v4; // r9
  __int64 v5; // rcx
  const char *v6; // rax
  __int64 v7; // r9
  __int16 v8; // dx
  __int64 v9; // r9

  if ( *((_BYTE *)this + 16) )
  {
    v2 = tip::details::reason_string((tip::details *)"reason::swipe_canceled", a2);
    v5 = *(_QWORD *)(v4 + 8);
    if ( *(_BYTE *)(v5 + 152) == (_BYTE)v3 )
    {
      *(_BYTE *)(v5 + 152) = 4;
      *(_WORD *)(v5 + 154) = v3 + 1;
      *(_QWORD *)(v5 + 160) = v2;
    }
    return;
  }
  if ( *((_BYTE *)this + 20) )
  {
    v6 = tip::details::reason_string((tip::details *)"reason::start_swipe_failed", a2);
    v8 = 2;
LABEL_6:
    tip2::test_data_base<_tip_ToggleDashboardUsingSwipe_id>::__fail<enum _tip_ToggleDashboardUsingSwipe::reason>(
      v7,
      v8,
      (__int64)v6);
    return;
  }
  if ( *((_BYTE *)this + 21) )
  {
    v6 = tip::details::reason_string((tip::details *)"reason::continue_swipe_failed", a2);
    v8 = 3;
    goto LABEL_6;
  }
  if ( *((_BYTE *)this + 22) )
  {
    v6 = tip::details::reason_string((tip::details *)"reason::commit_swipe_failed", a2);
    v8 = 4;
    goto LABEL_6;
  }
  if ( *((_BYTE *)this + 23) )
  {
    v6 = tip::details::reason_string((tip::details *)"reason::cancel_swipe_failed", a2);
    v8 = 5;
    goto LABEL_6;
  }
  if ( !tip2::test_data_base<_tip_GuidedSnapAssistTest_id>::__fail_if_complete_not_called((__int64)this) )
    tip2::test_data_base<_tip_ColumnSmartFillTest_id>::__succeed(v9);
}
