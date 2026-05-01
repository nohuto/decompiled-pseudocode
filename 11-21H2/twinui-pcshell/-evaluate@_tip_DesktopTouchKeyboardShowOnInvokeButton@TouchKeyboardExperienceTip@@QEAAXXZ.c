/*
 * XREFs of ?evaluate@_tip_DesktopTouchKeyboardShowOnInvokeButton@TouchKeyboardExperienceTip@@QEAAXXZ @ 0x18047DDF4
 * Callers:
 *     ?evaluate@?$test_merged_data@U_tip_DesktopTouchKeyboardShowOnInvokeButton@TouchKeyboardExperienceTip@@@details@tip@@EEAAXXZ @ 0x18047DD80 (-evaluate@-$test_merged_data@U_tip_DesktopTouchKeyboardShowOnInvokeButton@TouchKeyboardExperienc.c)
 * Callees:
 *     ?reason_string@details@tip@@YAPEBDPEBD@Z @ 0x18014AA04 (-reason_string@details@tip@@YAPEBDPEBD@Z.c)
 */

void __fastcall TouchKeyboardExperienceTip::_tip_DesktopTouchKeyboardShowOnInvokeButton::evaluate(
        TouchKeyboardExperienceTip::_tip_DesktopTouchKeyboardShowOnInvokeButton *this,
        const char *a2)
{
  __int64 v2; // r9
  __int16 v3; // ax
  int v4; // eax
  char *v5; // rcx
  const char *v6; // rax
  __int64 v7; // r9
  __int16 v8; // r11
  __int16 v9; // cx
  __int16 v10; // r10
  char v11; // r10
  char v12; // r10
  char v13; // r10
  char v14; // r10
  char v15; // r10

  v2 = *(_QWORD *)this;
  if ( *(_QWORD *)(*(_QWORD *)this + 8LL) != *(_QWORD *)(*(_QWORD *)this + 16LL) )
  {
    if ( *(_BYTE *)(v2 + 72) )
      return;
    *(_BYTE *)(v2 + 72) = 3;
    v3 = 0x4000;
    goto LABEL_40;
  }
  v4 = *((_DWORD *)this + 12);
  switch ( v4 )
  {
    case 5:
      v5 = "Reason::shell_policy_canceled";
LABEL_6:
      v6 = tip::details::reason_string((tip::details *)v5, a2);
      if ( *(_BYTE *)(v7 + 72) )
        return;
      *(_BYTE *)(v7 + 72) = 4;
      *(_WORD *)(v7 + 74) = v8;
      goto LABEL_8;
    case 11:
      v5 = "Reason::shell_app_requested_show_canceled";
      goto LABEL_6;
    case 13:
      v6 = tip::details::reason_string((tip::details *)"Reason::shell_trycancel_called", a2);
      if ( *(_BYTE *)(v7 + 72) )
        return;
      *(_BYTE *)(v7 + 72) = 4;
      v9 = 12;
LABEL_14:
      *(_WORD *)(v7 + 74) = v9;
      goto LABEL_8;
    case 14:
      v5 = "Reason::input_app_ignored_show_request";
      goto LABEL_6;
    case 0:
      v6 = tip::details::reason_string((tip::details *)"Reason::shell_not_receive_shell_requested_show", a2);
      if ( *(_BYTE *)(v7 + 72) != (_BYTE)v10 )
        return;
      *(_BYTE *)(v7 + 72) = 3;
      v9 = v10 + 6;
      goto LABEL_14;
    case 6:
      v6 = tip::details::reason_string((tip::details *)"Reason::shell_not_call_state_changed", a2);
      if ( *(_BYTE *)(v7 + 72) != v11 )
        return;
      *(_BYTE *)(v7 + 72) = 3;
      v9 = 7;
      goto LABEL_14;
    case 7:
      v6 = tip::details::reason_string((tip::details *)"Reason::input_app_not_receive_state_changed", a2);
      if ( *(_BYTE *)(v7 + 72) != v12 )
        return;
      *(_BYTE *)(v7 + 72) = 3;
      v9 = 8;
      goto LABEL_14;
    case 8:
      v6 = tip::details::reason_string((tip::details *)"Reason::input_app_not_call_tryshow", a2);
      if ( *(_BYTE *)(v7 + 72) != v13 )
        return;
      *(_BYTE *)(v7 + 72) = 3;
      v9 = 9;
      goto LABEL_14;
    case 9:
      v6 = tip::details::reason_string((tip::details *)"Reason::shell_not_receive_app_requested_show", a2);
      if ( *(_BYTE *)(v7 + 72) != v14 )
        return;
      *(_BYTE *)(v7 + 72) = 3;
      v9 = 10;
      goto LABEL_14;
    case 10:
      v6 = tip::details::reason_string((tip::details *)"Reason::shell_not_send_occlusion", a2);
      if ( *(_BYTE *)(v7 + 72) != v15 )
        return;
      *(_BYTE *)(v7 + 72) = 3;
      *(_WORD *)(v7 + 74) = 13;
LABEL_8:
      *(_QWORD *)(v7 + 80) = v6;
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
LABEL_40:
  *(_QWORD *)(v2 + 80) = 0LL;
  *(_WORD *)(v2 + 74) = v3;
}
