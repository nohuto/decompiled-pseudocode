/*
 * XREFs of ?evaluate@_tip_StartMenuAutomaticInvokeDuringLogonTest@@QEAAXXZ @ 0x18050278C
 * Callers:
 *     ?evaluate@?$merged_data@U_tip_StartMenuAutomaticInvokeDuringLogonTest@@U1@@details@tip2@@EEAAXXZ @ 0x1802017F0 (-evaluate@-$merged_data@U_tip_StartMenuAutomaticInvokeDuringLogonTest@@U1@@details@tip2@@EEAAXXZ.c)
 * Callees:
 *     ?reason_string@details@tip@@YAPEBDPEBD@Z @ 0x180171034 (-reason_string@details@tip@@YAPEBDPEBD@Z.c)
 *     ??$__fail@W4reason@_tip_StartMenuAutomaticInvokeDuringLogonTest@@@?$test_data_base@U_tip_StartMenuAutomaticInvokeDuringLogonTest_id@@@tip2@@IEBAXW4reason@_tip_StartMenuAutomaticInvokeDuringLogonTest@@PEBD@Z @ 0x1801FB714 (--$__fail@W4reason@_tip_StartMenuAutomaticInvokeDuringLogonTest@@@-$test_data_base@U_tip_StartMe.c)
 *     ?__fail_if_complete_not_called@?$test_data_base@U_tip_GuidedSnapAssistTest_id@@@tip2@@IEBA_NXZ @ 0x180201550 (-__fail_if_complete_not_called@-$test_data_base@U_tip_GuidedSnapAssistTest_id@@@tip2@@IEBA_NXZ.c)
 */

void __fastcall _tip_StartMenuAutomaticInvokeDuringLogonTest::evaluate(
        _tip_StartMenuAutomaticInvokeDuringLogonTest *this,
        const char *a2)
{
  const char *v2; // rax
  __int64 v3; // r9
  __int16 v4; // r10
  __int16 v5; // dx
  const char *v6; // rax
  __int64 v7; // r9
  __int64 v8; // rcx
  char v9; // r10
  int v10; // eax
  char v11; // al
  const char *v12; // rax
  __int64 v13; // rdx
  __int64 v14; // r9
  __int64 v15; // r9

  if ( *((_BYTE *)this + 16) )
  {
    v2 = tip::details::reason_string((tip::details *)"reason::explorer_black_screen_logon", a2);
    v5 = v4 + 1;
LABEL_32:
    tip2::test_data_base<_tip_StartMenuAutomaticInvokeDuringLogonTest_id>::__fail<enum _tip_StartMenuAutomaticInvokeDuringLogonTest::reason>(
      v3,
      v5,
      (__int64)v2);
    return;
  }
  if ( *((_BYTE *)this + 17) )
  {
    v6 = tip::details::reason_string((tip::details *)"reason::logon_completed_before_immersive_shell_init", a2);
    v8 = *(_QWORD *)(v7 + 8);
    if ( *(_BYTE *)(v8 + 152) == v9 )
    {
      *(_BYTE *)(v8 + 152) = 4;
      *(_WORD *)(v8 + 154) = 2;
      *(_QWORD *)(v8 + 160) = v6;
    }
  }
  else
  {
    v10 = *((_DWORD *)this + 10);
    if ( v10 == -2144927148 || v10 == -2147009295 )
    {
      v2 = tip::details::reason_string((tip::details *)"reason::critical_start_dialog", a2);
      v5 = 8;
      goto LABEL_32;
    }
    if ( v10 < 0 )
    {
      v2 = tip::details::reason_string((tip::details *)"reason::activation_failure", a2);
      v5 = 7;
      goto LABEL_32;
    }
    if ( *((_BYTE *)this + 36) )
    {
      v2 = tip::details::reason_string((tip::details *)"reason::start_crashed_during_invoke", a2);
      v5 = 6;
      goto LABEL_32;
    }
    v11 = *((_BYTE *)this + 37);
    if ( v11 )
    {
      if ( *((_BYTE *)this + 33) || *((_BYTE *)this + 34) || *((_BYTE *)this + 35) )
      {
        v2 = tip::details::reason_string((tip::details *)"reason::search_failed_unable_to_recover", a2);
        v5 = 10;
        goto LABEL_32;
      }
    }
    else if ( *((_BYTE *)this + 35) )
    {
      v2 = tip::details::reason_string((tip::details *)"reason::timed_out_after_five_seconds", a2);
      v5 = 5;
      goto LABEL_32;
    }
    if ( *((_BYTE *)this + 33) )
    {
      v2 = tip::details::reason_string((tip::details *)"reason::foreground_could_not_be_claimed", a2);
      v5 = 11;
      goto LABEL_32;
    }
    if ( *((_BYTE *)this + 34) )
    {
      v2 = tip::details::reason_string((tip::details *)"reason::foreground_lost_invoke_abort", a2);
      v5 = 12;
      goto LABEL_32;
    }
    if ( *((__int64 *)this + 3) < 500 )
    {
      v2 = tip::details::reason_string((tip::details *)"reason::dismissed_too_quickly", a2);
      v5 = 4;
      goto LABEL_32;
    }
    if ( *((_BYTE *)this + 44) )
    {
      v2 = tip::details::reason_string((tip::details *)"reason::immersive_shell_teardown_before_show", a2);
      v5 = 13;
      goto LABEL_32;
    }
    if ( v11 )
    {
      v12 = tip::details::reason_string((tip::details *)"reason::search_is_missing", a2);
      tip2::test_data_base<_tip_StartMenuAutomaticInvokeDuringLogonTest_id>::__warn<enum _tip_StartMenuAutomaticInvokeDuringLogonTest::reason>(
        v14,
        v13,
        (__int64)v12);
    }
    else if ( !tip2::test_data_base<_tip_GuidedSnapAssistTest_id>::__fail_if_complete_not_called((__int64)this) )
    {
      tip2::test_data_base<_tip_ColumnSmartFillTest_id>::__succeed(v15);
    }
  }
}
