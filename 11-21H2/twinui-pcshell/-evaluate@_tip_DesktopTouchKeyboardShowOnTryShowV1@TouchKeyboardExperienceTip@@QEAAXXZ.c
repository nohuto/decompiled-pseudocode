/*
 * XREFs of ?evaluate@_tip_DesktopTouchKeyboardShowOnTryShowV1@TouchKeyboardExperienceTip@@QEAAXXZ @ 0x18047E2BC
 * Callers:
 *     ?evaluate@?$test_merged_data@U_tip_DesktopTouchKeyboardShowOnTryShowV1@TouchKeyboardExperienceTip@@@details@tip@@EEAAXXZ @ 0x18047DDC0 (-evaluate@-$test_merged_data@U_tip_DesktopTouchKeyboardShowOnTryShowV1@TouchKeyboardExperienceTi.c)
 * Callees:
 *     ?reason_string@details@tip@@YAPEBDPEBD@Z @ 0x18014AA04 (-reason_string@details@tip@@YAPEBDPEBD@Z.c)
 */

void __fastcall TouchKeyboardExperienceTip::_tip_DesktopTouchKeyboardShowOnTryShowV1::evaluate(
        TouchKeyboardExperienceTip::_tip_DesktopTouchKeyboardShowOnTryShowV1 *this,
        const char *a2)
{
  __int64 v2; // r9
  __int16 v3; // ax
  int v4; // eax
  const char *v5; // rax
  __int64 v6; // r9
  __int16 v7; // r11
  __int16 v8; // di
  char *v9; // rcx
  char v10; // r11
  char v11; // r11
  __int16 v12; // cx
  __int16 v13; // r10
  char v14; // r10
  char v15; // r10
  char v16; // r10
  char v17; // r10
  char v18; // r10
  char v19; // r10

  v2 = *(_QWORD *)this;
  if ( *(_QWORD *)(*(_QWORD *)this + 8LL) != *(_QWORD *)(*(_QWORD *)this + 16LL) )
  {
    if ( *(_BYTE *)(v2 + 72) )
      return;
    *(_BYTE *)(v2 + 72) = 3;
    v3 = 0x4000;
    goto LABEL_48;
  }
  v4 = *((_DWORD *)this + 12);
  if ( v4 == 1 )
  {
    v5 = tip::details::reason_string((tip::details *)"Reason::tabtip_canceled", a2);
    if ( *(_BYTE *)(v6 + 72) )
      return;
    LOBYTE(v7) = 4;
    *(_WORD *)(v6 + 74) = 1;
LABEL_7:
    *(_BYTE *)(v6 + 72) = v7;
    goto LABEL_8;
  }
  if ( v4 == 4 )
  {
    v5 = tip::details::reason_string((tip::details *)"Reason::tabtip_suppressed", a2);
    if ( *(_BYTE *)(v6 + 72) )
      return;
    *(_WORD *)(v6 + 74) = v7;
    goto LABEL_7;
  }
  v8 = 11;
  if ( v4 == 11 )
  {
    v9 = "Reason::shell_app_requested_show_canceled";
LABEL_14:
    v5 = tip::details::reason_string((tip::details *)v9, a2);
    if ( *(_BYTE *)(v6 + 72) )
      return;
    *(_BYTE *)(v6 + 72) = v10;
    *(_WORD *)(v6 + 74) = v8;
    goto LABEL_8;
  }
  if ( v4 == 13 )
  {
    v5 = tip::details::reason_string((tip::details *)"Reason::shell_trycancel_called", a2);
    if ( *(_BYTE *)(v6 + 72) )
      return;
    *(_BYTE *)(v6 + 72) = v11;
    v12 = 12;
LABEL_19:
    *(_WORD *)(v6 + 74) = v12;
    goto LABEL_8;
  }
  v8 = 14;
  switch ( v4 )
  {
    case 14:
      v9 = "Reason::input_app_ignored_show_request";
      goto LABEL_14;
    case 0:
      v5 = tip::details::reason_string((tip::details *)"Reason::tabtip_not_call_invoke", a2);
      if ( *(_BYTE *)(v6 + 72) != (_BYTE)v13 )
        return;
      *(_BYTE *)(v6 + 72) = 3;
      v12 = v13 + 2;
      goto LABEL_19;
    case 2:
      v5 = tip::details::reason_string((tip::details *)"Reason::shell_not_receive_shell_requested_show", a2);
      if ( *(_BYTE *)(v6 + 72) != v14 )
        return;
      *(_BYTE *)(v6 + 72) = 3;
      v12 = 6;
      goto LABEL_19;
    case 6:
      v5 = tip::details::reason_string((tip::details *)"Reason::shell_not_call_state_changed", a2);
      if ( *(_BYTE *)(v6 + 72) != v15 )
        return;
      *(_BYTE *)(v6 + 72) = 3;
      v12 = 7;
      goto LABEL_19;
    case 7:
      v5 = tip::details::reason_string((tip::details *)"Reason::input_app_not_receive_state_changed", a2);
      if ( *(_BYTE *)(v6 + 72) != v16 )
        return;
      *(_BYTE *)(v6 + 72) = 3;
      v12 = 8;
      goto LABEL_19;
    case 8:
      v5 = tip::details::reason_string((tip::details *)"Reason::input_app_not_call_tryshow", a2);
      if ( *(_BYTE *)(v6 + 72) != v17 )
        return;
      *(_BYTE *)(v6 + 72) = 3;
      v12 = 9;
      goto LABEL_19;
    case 9:
      v5 = tip::details::reason_string((tip::details *)"Reason::shell_not_receive_app_requested_show", a2);
      if ( *(_BYTE *)(v6 + 72) != v18 )
        return;
      *(_BYTE *)(v6 + 72) = 3;
      v12 = 10;
      goto LABEL_19;
    case 10:
      v5 = tip::details::reason_string((tip::details *)"Reason::shell_not_send_occlusion", a2);
      if ( *(_BYTE *)(v6 + 72) != v19 )
        return;
      *(_BYTE *)(v6 + 72) = 3;
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
LABEL_48:
  *(_QWORD *)(v2 + 80) = 0LL;
  *(_WORD *)(v2 + 74) = v3;
}
