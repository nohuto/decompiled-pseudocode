/*
 * XREFs of ?evaluate@_tip_DesktopTouchKeyboardShowOnTap@TouchKeyboardExperienceTip@@QEAAXXZ @ 0x18047DFFC
 * Callers:
 *     ?evaluate@?$test_merged_data@U_tip_DesktopTouchKeyboardShowOnTap@TouchKeyboardExperienceTip@@@details@tip@@EEAAXXZ @ 0x18047DDA0 (-evaluate@-$test_merged_data@U_tip_DesktopTouchKeyboardShowOnTap@TouchKeyboardExperienceTip@@@de.c)
 * Callees:
 *     ?reason_string@details@tip@@YAPEBDPEBD@Z @ 0x18014AA04 (-reason_string@details@tip@@YAPEBDPEBD@Z.c)
 */

void __fastcall TouchKeyboardExperienceTip::_tip_DesktopTouchKeyboardShowOnTap::evaluate(
        TouchKeyboardExperienceTip::_tip_DesktopTouchKeyboardShowOnTap *this,
        const char *a2)
{
  __int64 v2; // r9
  __int16 v3; // ax
  int v4; // eax
  const char *v5; // rax
  __int64 v6; // r9
  __int16 v7; // r11
  __int16 v8; // si
  char *v9; // rcx
  __int16 v10; // cx
  __int16 v11; // r10
  char v12; // r11
  char v13; // r11
  char v14; // r10
  char v15; // r11
  char v16; // r10
  char v17; // r11
  char v18; // r10
  char v19; // r11
  char v20; // r10
  char v21; // r11
  char v22; // r10
  char v23; // r11
  char v24; // r10

  v2 = *(_QWORD *)this;
  if ( *(_QWORD *)(*(_QWORD *)this + 8LL) != *(_QWORD *)(*(_QWORD *)this + 16LL) )
  {
    if ( *(_BYTE *)(v2 + 72) )
      return;
    v3 = 0x4000;
    *(_BYTE *)(v2 + 72) = 3;
    goto LABEL_51;
  }
  v4 = *((_DWORD *)this + 12);
  switch ( v4 )
  {
    case 1:
      v5 = tip::details::reason_string((tip::details *)"Reason::tabtip_canceled", a2);
      if ( *(_BYTE *)(v6 + 72) )
        return;
      *(_WORD *)(v6 + 74) = 1;
LABEL_7:
      *(_BYTE *)(v6 + 72) = 4;
      goto LABEL_8;
    case 3:
      v5 = tip::details::reason_string((tip::details *)"Reason::tabtip_manual_input_pane_canceled", a2);
      if ( *(_BYTE *)(v6 + 72) )
        return;
      *(_WORD *)(v6 + 74) = v7;
      goto LABEL_7;
    case 4:
      v5 = tip::details::reason_string((tip::details *)"Reason::tabtip_suppressed", a2);
      if ( *(_BYTE *)(v6 + 72) )
        return;
      *(_WORD *)(v6 + 74) = 4;
      goto LABEL_7;
  }
  v8 = 11;
  if ( v4 == 11 )
  {
    v9 = "Reason::shell_app_requested_show_canceled";
LABEL_17:
    v5 = tip::details::reason_string((tip::details *)v9, a2);
    if ( *(_BYTE *)(v6 + 72) )
      return;
    *(_BYTE *)(v6 + 72) = 4;
    *(_WORD *)(v6 + 74) = v8;
    goto LABEL_8;
  }
  if ( v4 == 13 )
  {
    v5 = tip::details::reason_string((tip::details *)"Reason::shell_trycancel_called", a2);
    if ( *(_BYTE *)(v6 + 72) )
      return;
    *(_BYTE *)(v6 + 72) = 4;
    v10 = 12;
LABEL_22:
    *(_WORD *)(v6 + 74) = v10;
    goto LABEL_8;
  }
  v8 = 14;
  switch ( v4 )
  {
    case 14:
      v9 = "Reason::input_app_ignored_show_request";
      goto LABEL_17;
    case 0:
      v5 = tip::details::reason_string((tip::details *)"Reason::tabtip_not_call_invoke", a2);
      if ( *(_BYTE *)(v6 + 72) != (_BYTE)v11 )
        return;
      *(_BYTE *)(v6 + 72) = v12;
      v10 = v11 + 2;
      goto LABEL_22;
    case 2:
      v5 = tip::details::reason_string((tip::details *)"Reason::shell_not_receive_shell_requested_show", a2);
      if ( *(_BYTE *)(v6 + 72) != v14 )
        return;
      *(_BYTE *)(v6 + 72) = v13;
      v10 = 6;
      goto LABEL_22;
    case 6:
      v5 = tip::details::reason_string((tip::details *)"Reason::shell_not_call_state_changed", a2);
      if ( *(_BYTE *)(v6 + 72) != v16 )
        return;
      *(_BYTE *)(v6 + 72) = v15;
      v10 = 7;
      goto LABEL_22;
    case 7:
      v5 = tip::details::reason_string((tip::details *)"Reason::input_app_not_receive_state_changed", a2);
      if ( *(_BYTE *)(v6 + 72) != v18 )
        return;
      *(_BYTE *)(v6 + 72) = v17;
      v10 = 8;
      goto LABEL_22;
    case 8:
      v5 = tip::details::reason_string((tip::details *)"Reason::input_app_not_call_tryshow", a2);
      if ( *(_BYTE *)(v6 + 72) != v20 )
        return;
      *(_BYTE *)(v6 + 72) = v19;
      v10 = 9;
      goto LABEL_22;
    case 9:
      v5 = tip::details::reason_string((tip::details *)"Reason::shell_not_receive_app_requested_show", a2);
      if ( *(_BYTE *)(v6 + 72) != v22 )
        return;
      *(_BYTE *)(v6 + 72) = v21;
      v10 = 10;
      goto LABEL_22;
    case 10:
      v5 = tip::details::reason_string((tip::details *)"Reason::shell_not_send_occlusion", a2);
      if ( *(_BYTE *)(v6 + 72) != v24 )
        return;
      *(_BYTE *)(v6 + 72) = v23;
      *(_WORD *)(v6 + 74) = 13;
LABEL_8:
      *(_QWORD *)(v6 + 80) = v5;
      return;
  }
  if ( (*(_DWORD *)v2 & 0x200) != 0 )
  {
    if ( *(_BYTE *)(v2 + 72) )
      return;
    *(_BYTE *)(v2 + 72) = 1;
    v3 = 0x8000;
  }
  else
  {
    if ( *(_BYTE *)(v2 + 72) )
      return;
    *(_BYTE *)(v2 + 72) = 3;
    v3 = 16385;
  }
LABEL_51:
  *(_QWORD *)(v2 + 80) = 0LL;
  *(_WORD *)(v2 + 74) = v3;
}
