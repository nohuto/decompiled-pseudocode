/*
 * XREFs of ?evaluate@_tip_StartMenuInvokeTest@@QEAAXXZ @ 0x18002BC14
 * Callers:
 *     ?evaluate@?$test_merged_data@U_tip_StartMenuInvokeTest@@@details@tip@@EEAAXXZ @ 0x18002BC00 (-evaluate@-$test_merged_data@U_tip_StartMenuInvokeTest@@@details@tip@@EEAAXXZ.c)
 * Callees:
 *     ?reason_string@details@tip@@YAPEBDPEBD@Z @ 0x18014AA04 (-reason_string@details@tip@@YAPEBDPEBD@Z.c)
 *     ??$__fail@W4reason@_tip_StartMenuInvokeTest@@@?$test_data_base@V_tip_StartMenuInvokeTest_id@@@tip@@IEBAXW4reason@_tip_StartMenuInvokeTest@@PEBD@Z @ 0x18044E514 (--$__fail@W4reason@_tip_StartMenuInvokeTest@@@-$test_data_base@V_tip_StartMenuInvokeTest_id@@@ti.c)
 */

void __fastcall _tip_StartMenuInvokeTest::evaluate(_tip_StartMenuInvokeTest *this, const char *a2)
{
  int v2; // eax
  const char *v3; // rax
  __int64 v4; // r9
  __int64 v5; // rdx
  const char *v6; // rax
  __int64 *v7; // r9
  __int64 v8; // rdx
  char v9; // r10
  __int16 v10; // cx
  char v11; // al
  __int64 *v12; // r9
  char v13; // r10
  __int64 *v14; // r9
  char v15; // r10
  __int64 *v16; // r9
  char v17; // r10
  const char *v18; // rax
  __int64 *v19; // r9
  __int64 v20; // rcx
  char v21; // r10
  __int16 v22; // dx
  __int64 *v23; // r9
  char v24; // r10
  __int64 *v25; // r9
  char v26; // r10
  __int64 v27; // rax
  __int16 v28; // cx

  if ( *((_BYTE *)this + 17) )
    *(_DWORD *)(*(_QWORD *)this + 92LL) = 32188357;
  v2 = *((_DWORD *)this + 6);
  if ( v2 == -2144927148 || v2 == -2147009295 )
  {
    v3 = tip::details::reason_string((tip::details *)"reason::critical_start_dialog", a2);
    v5 = 9LL;
    goto LABEL_62;
  }
  if ( *((int *)this + 8) >= 0 )
  {
    if ( *((int *)this + 9) < 0 )
    {
      v3 = tip::details::reason_string((tip::details *)"reason::root_frame_initialization_failure", a2);
      v5 = 11LL;
      goto LABEL_62;
    }
    if ( v2 < 0 )
    {
      v3 = tip::details::reason_string((tip::details *)"reason::activation_failure", a2);
      v5 = 8LL;
      goto LABEL_62;
    }
    if ( *((_BYTE *)this + 13) )
    {
      v3 = tip::details::reason_string((tip::details *)"reason::start_crashed_during_invoke", a2);
      v5 = 4LL;
      goto LABEL_62;
    }
    if ( *((_BYTE *)this + 18) )
    {
      v3 = tip::details::reason_string((tip::details *)"reason::invalid_state_transition_during_show", a2);
      v5 = 12LL;
      goto LABEL_62;
    }
    if ( *((_BYTE *)this + 11) )
    {
      v6 = tip::details::reason_string((tip::details *)"reason::canceled_device_locked", a2);
      v8 = *v7;
      if ( *(_BYTE *)(*v7 + 72) != v9 )
        return;
      *(_BYTE *)(v8 + 72) = 4;
      v10 = 2;
      goto LABEL_18;
    }
    if ( *((_BYTE *)this + 12) )
    {
      if ( !*((_BYTE *)this + 14) && !*((_BYTE *)this + 15) )
      {
        v3 = tip::details::reason_string((tip::details *)"reason::timed_out_after_five_seconds", a2);
        v5 = 3LL;
        goto LABEL_62;
      }
      goto LABEL_21;
    }
    v11 = *((_BYTE *)this + 9);
    if ( *(_WORD *)((char *)this + 9) )
    {
      if ( *((_BYTE *)this + 14) )
        goto LABEL_21;
      if ( v11 || *((_BYTE *)this + 10) )
      {
        if ( *((_BYTE *)this + 15) )
          goto LABEL_21;
        if ( v11 || *((_BYTE *)this + 10) )
        {
          if ( !*((_BYTE *)this + 16) )
          {
            if ( v11 )
            {
              v3 = tip::details::reason_string((tip::details *)"reason::foreground_could_not_be_claimed", a2);
              v5 = 17LL;
              goto LABEL_62;
            }
            if ( *((_BYTE *)this + 10) )
            {
              v3 = tip::details::reason_string((tip::details *)"reason::foreground_lost_invoke_abort", a2);
              v5 = 18LL;
              goto LABEL_62;
            }
            goto LABEL_36;
          }
LABEL_21:
          v3 = tip::details::reason_string((tip::details *)"reason::search_failed_unable_to_recover", a2);
          v5 = 13LL;
          goto LABEL_62;
        }
      }
    }
LABEL_36:
    if ( *((_BYTE *)this + 14) )
    {
      v6 = tip::details::reason_string((tip::details *)"reason::search_crashed_during_invoke", a2);
      v8 = *v12;
      if ( *(_BYTE *)(*v12 + 72) != v13 )
        return;
      *(_BYTE *)(v8 + 72) = 2;
      v10 = 5;
    }
    else if ( *((_BYTE *)this + 15) )
    {
      v6 = tip::details::reason_string((tip::details *)"reason::search_activation_failed", a2);
      v8 = *v14;
      if ( *(_BYTE *)(*v14 + 72) != v15 )
        return;
      *(_BYTE *)(v8 + 72) = 2;
      v10 = 6;
    }
    else
    {
      if ( !*((_BYTE *)this + 16) )
      {
        if ( *((_BYTE *)this + 19) )
        {
          if ( *((_BYTE *)this + 20) )
          {
            v18 = tip::details::reason_string((tip::details *)"reason::start_and_search_launched_during_invoke", a2);
            v20 = *v19;
            if ( *(_BYTE *)(*v19 + 72) != v21 )
              return;
            v22 = 16;
          }
          else
          {
            v18 = tip::details::reason_string((tip::details *)"reason::start_launched_during_invoke", a2);
            v20 = *v23;
            if ( *(_BYTE *)(*v23 + 72) != v24 )
              return;
            v22 = 14;
          }
        }
        else
        {
          if ( !*((_BYTE *)this + 20) )
          {
            v27 = *(_QWORD *)this;
            if ( (**(_DWORD **)this & 0x200) != 0 )
            {
              if ( *(_BYTE *)(v27 + 72) )
                return;
              *(_BYTE *)(v27 + 72) = 1;
              v28 = 0x8000;
            }
            else
            {
              if ( *(_BYTE *)(v27 + 72) )
                return;
              *(_BYTE *)(v27 + 72) = 3;
              v28 = 16385;
            }
            *(_WORD *)(v27 + 74) = v28;
            *(_QWORD *)(v27 + 80) = 0LL;
            return;
          }
          v18 = tip::details::reason_string((tip::details *)"reason::search_launched_during_invoke", a2);
          v20 = *v25;
          if ( *(_BYTE *)(*v25 + 72) != v26 )
            return;
          v22 = 15;
        }
        *(_BYTE *)(v20 + 72) = 1;
        *(_WORD *)(v20 + 74) = v22;
        *(_QWORD *)(v20 + 80) = v18;
        return;
      }
      v6 = tip::details::reason_string((tip::details *)"reason::start_shown_without_search_after_cutoff_timer", a2);
      v8 = *v16;
      if ( *(_BYTE *)(*v16 + 72) != v17 )
        return;
      *(_BYTE *)(v8 + 72) = 2;
      v10 = 7;
    }
LABEL_18:
    *(_WORD *)(v8 + 74) = v10;
    *(_QWORD *)(v8 + 80) = v6;
    return;
  }
  v3 = tip::details::reason_string((tip::details *)"reason::utm_initialization_failure", a2);
  v5 = 10LL;
LABEL_62:
  tip::test_data_base<_tip_StartMenuInvokeTest_id>::__fail<enum _tip_StartMenuInvokeTest::reason>(v4, v5, v3);
}
