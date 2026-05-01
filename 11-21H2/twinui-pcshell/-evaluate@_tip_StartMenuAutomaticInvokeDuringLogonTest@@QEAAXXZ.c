/*
 * XREFs of ?evaluate@_tip_StartMenuAutomaticInvokeDuringLogonTest@@QEAAXXZ @ 0x18044C564
 * Callers:
 *     ?evaluate@?$test_merged_data@U_tip_StartMenuAutomaticInvokeDuringLogonTest@@@details@tip@@EEAAXXZ @ 0x18044C550 (-evaluate@-$test_merged_data@U_tip_StartMenuAutomaticInvokeDuringLogonTest@@@details@tip@@EEAAXX.c)
 * Callees:
 *     ?reason_string@details@tip@@YAPEBDPEBD@Z @ 0x18014AA04 (-reason_string@details@tip@@YAPEBDPEBD@Z.c)
 *     ??$__fail@W4reason@_tip_StartMenuAutomaticInvokeDuringLogonTest@@@?$test_data_base@V_tip_StartMenuAutomaticInvokeDuringLogonTest_id@@@tip@@IEBAXW4reason@_tip_StartMenuAutomaticInvokeDuringLogonTest@@PEBD@Z @ 0x180449D18 (--$__fail@W4reason@_tip_StartMenuAutomaticInvokeDuringLogonTest@@@-$test_data_base@V_tip_StartMe.c)
 */

void __fastcall _tip_StartMenuAutomaticInvokeDuringLogonTest::evaluate(
        _tip_StartMenuAutomaticInvokeDuringLogonTest *this,
        const char *a2)
{
  const char *v2; // rax
  __int64 *v3; // r9
  __int16 v4; // r10
  __int16 v5; // dx
  const char *v6; // rax
  __int64 *v7; // r9
  __int64 v8; // rcx
  char v9; // r10
  __int16 v10; // dx
  int v11; // eax
  char v12; // al
  __int64 *v13; // r9
  char v14; // r10
  __int64 v15; // rax
  __int16 v16; // cx

  if ( !*((_BYTE *)this + 8) )
  {
    if ( *((_BYTE *)this + 9) )
    {
      v6 = tip::details::reason_string((tip::details *)"reason::logon_completed_before_immersive_shell_init", a2);
      v8 = *v7;
      if ( *(_BYTE *)(*v7 + 72) != v9 )
        return;
      *(_BYTE *)(v8 + 72) = 4;
      v10 = 2;
    }
    else
    {
      v11 = *((_DWORD *)this + 8);
      if ( v11 == -2144927148 || v11 == -2147009295 )
      {
        v2 = tip::details::reason_string((tip::details *)"reason::critical_start_dialog", a2);
        v5 = 8;
        goto LABEL_36;
      }
      if ( v11 < 0 )
      {
        v2 = tip::details::reason_string((tip::details *)"reason::activation_failure", a2);
        v5 = 7;
        goto LABEL_36;
      }
      if ( *((_BYTE *)this + 28) )
      {
        v2 = tip::details::reason_string((tip::details *)"reason::start_crashed_during_invoke", a2);
        v5 = 6;
        goto LABEL_36;
      }
      v12 = *((_BYTE *)this + 29);
      if ( v12 )
      {
        if ( *((_BYTE *)this + 25) || *((_BYTE *)this + 26) || *((_BYTE *)this + 27) )
        {
          v2 = tip::details::reason_string((tip::details *)"reason::search_failed_unable_to_recover", a2);
          v5 = 10;
          goto LABEL_36;
        }
      }
      else if ( *((_BYTE *)this + 27) )
      {
        v2 = tip::details::reason_string((tip::details *)"reason::timed_out_after_five_seconds", a2);
        v5 = 5;
        goto LABEL_36;
      }
      if ( *((_BYTE *)this + 25) )
      {
        v2 = tip::details::reason_string((tip::details *)"reason::foreground_could_not_be_claimed", a2);
        v5 = 11;
        goto LABEL_36;
      }
      if ( *((_BYTE *)this + 26) )
      {
        v2 = tip::details::reason_string((tip::details *)"reason::foreground_lost_invoke_abort", a2);
        v5 = 12;
        goto LABEL_36;
      }
      if ( *((__int64 *)this + 2) < 500 )
      {
        v2 = tip::details::reason_string((tip::details *)"reason::dismissed_too_quickly", a2);
        v5 = 4;
        goto LABEL_36;
      }
      if ( !v12 )
      {
        v15 = *(_QWORD *)this;
        if ( (**(_DWORD **)this & 0x200) != 0 )
        {
          if ( *(_BYTE *)(v15 + 72) )
            return;
          *(_BYTE *)(v15 + 72) = 1;
          v16 = 0x8000;
        }
        else
        {
          if ( *(_BYTE *)(v15 + 72) )
            return;
          *(_BYTE *)(v15 + 72) = 3;
          v16 = 16385;
        }
        *(_WORD *)(v15 + 74) = v16;
        *(_QWORD *)(v15 + 80) = 0LL;
        return;
      }
      v6 = tip::details::reason_string((tip::details *)"reason::search_is_missing", a2);
      v8 = *v13;
      if ( *(_BYTE *)(*v13 + 72) != v14 )
        return;
      *(_BYTE *)(v8 + 72) = 2;
      v10 = 9;
    }
    *(_WORD *)(v8 + 74) = v10;
    *(_QWORD *)(v8 + 80) = v6;
    return;
  }
  v2 = tip::details::reason_string((tip::details *)"reason::explorer_black_screen_logon", a2);
  v5 = v4 + 1;
LABEL_36:
  tip::test_data_base<_tip_StartMenuAutomaticInvokeDuringLogonTest_id>::__fail<enum _tip_StartMenuAutomaticInvokeDuringLogonTest::reason>(
    v3,
    v5,
    (__int64)v2);
}
