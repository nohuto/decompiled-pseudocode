/*
 * XREFs of ?evaluate@_tip_SearchHideTest@@QEAAXXZ @ 0x1801A28B8
 * Callers:
 *     ?evaluate@?$test_merged_data@U_tip_SearchHideTest@@@details@tip@@EEAAXXZ @ 0x1801A26F0 (-evaluate@-$test_merged_data@U_tip_SearchHideTest@@@details@tip@@EEAAXXZ.c)
 * Callees:
 *     ?reason_string@details@tip@@YAPEBDPEBD@Z @ 0x18014AA04 (-reason_string@details@tip@@YAPEBDPEBD@Z.c)
 */

void __fastcall _tip_SearchHideTest::evaluate(_tip_SearchHideTest *this, const char *a2)
{
  const char *v3; // rax
  __int16 v4; // r11
  __int64 *v5; // r10
  __int64 v6; // rcx
  __int16 v7; // dx
  __int64 *v8; // r10
  char v9; // r11
  __int64 *v10; // r10
  char v11; // r11
  const char *v12; // rax
  __int64 *v13; // r10
  __int64 v14; // rdx
  char v15; // r11
  __int16 v16; // cx
  __int64 *v17; // r10
  char v18; // r11
  unsigned int v19; // eax
  int v20; // ecx
  __int64 *v21; // r10
  char v22; // r11
  __int64 v23; // r9
  __int16 v24; // ax
  const char *v25; // rax
  __int64 v26; // r9
  char v27; // r11
  __int16 v28; // cx
  char v29; // r11
  char v30; // r11
  char v31; // r11
  char v32; // r11
  char v33; // r11
  char v34; // r11

  if ( *((_BYTE *)this + 13) )
  {
    v3 = tip::details::reason_string((tip::details *)"Reason::activated_while_hiding", a2);
    v6 = *v5;
    if ( *(_BYTE *)(*v5 + 72) != (_BYTE)v4 )
      return;
    v7 = v4 + 1;
    goto LABEL_4;
  }
  if ( *((_BYTE *)this + 14) )
  {
    v3 = tip::details::reason_string((tip::details *)"Reason::view_destroyed", a2);
    v6 = *v8;
    if ( *(_BYTE *)(*v8 + 72) == v9 )
    {
      v7 = 7;
LABEL_4:
      *(_BYTE *)(v6 + 72) = 4;
      *(_WORD *)(v6 + 74) = v7;
      *(_QWORD *)(v6 + 80) = v3;
      return;
    }
    return;
  }
  if ( !*((_BYTE *)this + 15) )
  {
    if ( !*((_BYTE *)this + 10) )
    {
      v12 = tip::details::reason_string((tip::details *)"Reason::app_not_suspended", a2);
      v14 = *v13;
      if ( *(_BYTE *)(*v13 + 72) != v15 )
        return;
      *(_BYTE *)(v14 + 72) = 3;
      v16 = 6;
      goto LABEL_14;
    }
    if ( !*((_BYTE *)this + 9) )
    {
      v12 = tip::details::reason_string((tip::details *)"Reason::view_not_cloaked", a2);
      v14 = *v17;
      if ( *(_BYTE *)(*v17 + 72) != v18 )
        return;
      *(_BYTE *)(v14 + 72) = 3;
      v16 = 5;
      goto LABEL_14;
    }
    v19 = *((_DWORD *)this + 4);
    if ( v19 <= 0xB )
    {
      v20 = 3665;
      if ( _bittest(&v20, v19) )
      {
        v12 = tip::details::reason_string((tip::details *)"Reason::unexpected_initial_state", a2);
        v14 = *v21;
        if ( *(_BYTE *)(*v21 + 72) != v22 )
          return;
        *(_BYTE *)(v14 + 72) = 3;
        v16 = 9;
LABEL_14:
        *(_WORD *)(v14 + 74) = v16;
        *(_QWORD *)(v14 + 80) = v12;
        return;
      }
    }
    v23 = *(_QWORD *)this;
    if ( (**(_DWORD **)this & 0x200) == 0 )
    {
      if ( *(_BYTE *)(v23 + 72) )
        return;
      v24 = 16385;
      *(_BYTE *)(v23 + 72) = 3;
LABEL_50:
      *(_QWORD *)(v23 + 80) = 0LL;
      *(_WORD *)(v23 + 74) = v24;
      return;
    }
    if ( *((_DWORD *)this + 5) == 11 )
    {
      if ( *((_DWORD *)this + 6) != 10 )
      {
        v25 = tip::details::reason_string((tip::details *)"Reason::unexpected_state_during_view_consolidation", a2);
        if ( *(_BYTE *)(v26 + 72) != v29 )
          return;
        *(_WORD *)(v26 + 74) = 11;
        *(_BYTE *)(v26 + 72) = 2;
LABEL_29:
        *(_QWORD *)(v26 + 80) = v25;
        return;
      }
      if ( *((_DWORD *)this + 7) == 10 )
      {
        if ( *((_BYTE *)this + 32) )
        {
          v25 = tip::details::reason_string((tip::details *)"Reason::view_visible_during_suspension", a2);
          if ( *(_BYTE *)(v26 + 72) != v31 )
            return;
          *(_BYTE *)(v26 + 72) = 2;
          v28 = 13;
        }
        else if ( *((_BYTE *)this + 33) )
        {
          v25 = tip::details::reason_string((tip::details *)"Reason::navigation_level_active_during_suspension", a2);
          if ( *(_BYTE *)(v26 + 72) != v32 )
            return;
          *(_BYTE *)(v26 + 72) = 2;
          v28 = 14;
        }
        else if ( *((_BYTE *)this + 11) )
        {
          v25 = tip::details::reason_string((tip::details *)"Reason::hide_view_timer_expired", a2);
          if ( *(_BYTE *)(v26 + 72) != v33 )
            return;
          v28 = 2;
          *(_BYTE *)(v26 + 72) = 2;
        }
        else
        {
          if ( !*((_BYTE *)this + 12) )
          {
            if ( *(_BYTE *)(v23 + 72) )
              return;
            v24 = 0x8000;
            *(_BYTE *)(v23 + 72) = 1;
            goto LABEL_50;
          }
          v25 = tip::details::reason_string((tip::details *)"Reason::suspend_timer_expired", a2);
          if ( *(_BYTE *)(v26 + 72) != v34 )
            return;
          *(_BYTE *)(v26 + 72) = 2;
          v28 = 3;
        }
      }
      else
      {
        v25 = tip::details::reason_string(
                (tip::details *)"Reason::unexpected_state_during_last_resort_suspension_timer",
                a2);
        if ( *(_BYTE *)(v26 + 72) != v30 )
          return;
        *(_BYTE *)(v26 + 72) = 2;
        v28 = 12;
      }
    }
    else
    {
      v25 = tip::details::reason_string((tip::details *)"Reason::unexpected_state_during_hide_request_timer", a2);
      if ( *(_BYTE *)(v26 + 72) != v27 )
        return;
      *(_BYTE *)(v26 + 72) = 2;
      v28 = 10;
    }
    *(_WORD *)(v26 + 74) = v28;
    goto LABEL_29;
  }
  v3 = tip::details::reason_string((tip::details *)"Reason::already_hidden", a2);
  v6 = *v10;
  if ( *(_BYTE *)(*v10 + 72) == v11 )
  {
    v7 = 8;
    goto LABEL_4;
  }
}
