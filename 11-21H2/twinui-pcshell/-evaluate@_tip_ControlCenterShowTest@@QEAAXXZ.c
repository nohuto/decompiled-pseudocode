/*
 * XREFs of ?evaluate@_tip_ControlCenterShowTest@@QEAAXXZ @ 0x180355064
 * Callers:
 *     ?evaluate@?$test_merged_data@U_tip_ControlCenterShowTest@@@details@tip@@EEAAXXZ @ 0x180355050 (-evaluate@-$test_merged_data@U_tip_ControlCenterShowTest@@@details@tip@@EEAAXXZ.c)
 * Callees:
 *     ?reason_string@details@tip@@YAPEBDPEBD@Z @ 0x18014AA04 (-reason_string@details@tip@@YAPEBDPEBD@Z.c)
 */

void __fastcall _tip_ControlCenterShowTest::evaluate(_tip_ControlCenterShowTest *this, const char *a2)
{
  __int64 v2; // r9
  __int16 v3; // ax
  const char *v4; // rax
  __int64 v5; // r9
  char v6; // r10
  __int16 v7; // cx
  char v8; // r10
  char v9; // r10
  char v10; // r10
  char v11; // r10
  char v12; // r10
  char v13; // r10
  char v14; // r10
  char v15; // r10
  char v16; // r10
  char v17; // r10

  v2 = *(_QWORD *)this;
  if ( *(_QWORD *)(*(_QWORD *)this + 8LL) != *(_QWORD *)(*(_QWORD *)this + 16LL) )
  {
    if ( *(_BYTE *)(v2 + 72) )
      return;
    v3 = 0x4000;
    goto LABEL_4;
  }
  if ( (*(_DWORD *)v2 & 0x200) != 0 )
  {
    if ( *((_BYTE *)this + 16) )
    {
      v4 = tip::details::reason_string((tip::details *)"reason::canceled_by_dismiss", a2);
      if ( *(_BYTE *)(v5 + 72) != v6 )
        return;
      *(_BYTE *)(v5 + 72) = 4;
      v7 = 5;
LABEL_43:
      *(_QWORD *)(v5 + 80) = v4;
      *(_WORD *)(v5 + 74) = v7;
      return;
    }
    if ( *((_BYTE *)this + 17) )
    {
      v4 = tip::details::reason_string((tip::details *)"reason::canceled_by_reinvoke", a2);
      if ( *(_BYTE *)(v5 + 72) != v8 )
        return;
      *(_BYTE *)(v5 + 72) = 4;
      v7 = 6;
      goto LABEL_43;
    }
    if ( *((_BYTE *)this + 18) )
    {
      v4 = tip::details::reason_string((tip::details *)"reason::canceled_by_policy", a2);
      if ( *(_BYTE *)(v5 + 72) != v9 )
        return;
      *(_BYTE *)(v5 + 72) = 4;
      v7 = 7;
      goto LABEL_43;
    }
    if ( *((_BYTE *)this + 19) )
    {
      v4 = tip::details::reason_string((tip::details *)"reason::canceled_shell_not_ready", a2);
      if ( *(_BYTE *)(v5 + 72) != v10 )
        return;
      *(_BYTE *)(v5 + 72) = 4;
      v7 = 8;
      goto LABEL_43;
    }
    if ( *((_BYTE *)this + 20) )
    {
      if ( !*((_BYTE *)this + 22) )
      {
        v4 = tip::details::reason_string((tip::details *)"reason::unknown_launch", a2);
        if ( *(_BYTE *)(v5 + 72) != v15 )
          return;
        *(_BYTE *)(v5 + 72) = 3;
        v7 = 13;
        goto LABEL_43;
      }
      if ( !*((_BYTE *)this + 21) )
      {
        v4 = tip::details::reason_string((tip::details *)"reason::experience_manager_creation_failed", a2);
        if ( *(_BYTE *)(v5 + 72) != v11 )
          return;
        *(_BYTE *)(v5 + 72) = 3;
        v7 = 10;
        goto LABEL_43;
      }
      if ( !*((_BYTE *)this + 24) )
        goto LABEL_26;
      if ( *((_BYTE *)this + 23) )
      {
        v4 = tip::details::reason_string((tip::details *)"reason::success_cold_app_cold_view", a2);
        if ( *(_BYTE *)(v5 + 72) != v14 )
          return;
        v7 = 1;
        *(_BYTE *)(v5 + 72) = 1;
        goto LABEL_43;
      }
    }
    else
    {
      if ( !*((_BYTE *)this + 22) )
      {
        if ( *((_BYTE *)this + 24) )
        {
          v4 = tip::details::reason_string((tip::details *)"reason::success_warm_app_warm_view", a2);
          if ( *(_BYTE *)(v5 + 72) != v17 )
            return;
          *(_BYTE *)(v5 + 72) = 1;
          v7 = 4;
          goto LABEL_43;
        }
        goto LABEL_26;
      }
      if ( !*((_BYTE *)this + 24) )
      {
LABEL_26:
        v4 = tip::details::reason_string((tip::details *)"reason::view_not_visible", a2);
        if ( *(_BYTE *)(v5 + 72) != v12 )
          return;
        *(_BYTE *)(v5 + 72) = 3;
        v7 = 12;
        goto LABEL_43;
      }
      if ( *((_BYTE *)this + 23) )
      {
        v4 = tip::details::reason_string((tip::details *)"reason::success_warm_app_cold_view", a2);
        if ( *(_BYTE *)(v5 + 72) != v16 )
          return;
        *(_BYTE *)(v5 + 72) = 1;
        v7 = 2;
        goto LABEL_43;
      }
    }
    v4 = tip::details::reason_string((tip::details *)"reason::view_render_failed", a2);
    if ( *(_BYTE *)(v5 + 72) != v13 )
      return;
    *(_BYTE *)(v5 + 72) = 3;
    v7 = 11;
    goto LABEL_43;
  }
  if ( !*(_BYTE *)(v2 + 72) )
  {
    v3 = 16385;
LABEL_4:
    *(_BYTE *)(v2 + 72) = 3;
    *(_WORD *)(v2 + 74) = v3;
    *(_QWORD *)(v2 + 80) = 0LL;
  }
}
