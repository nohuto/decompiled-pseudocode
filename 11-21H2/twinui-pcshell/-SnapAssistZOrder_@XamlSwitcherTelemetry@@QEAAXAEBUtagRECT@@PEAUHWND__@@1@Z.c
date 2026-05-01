/*
 * XREFs of ?SnapAssistZOrder_@XamlSwitcherTelemetry@@QEAAXAEBUtagRECT@@PEAUHWND__@@1@Z @ 0x180603D9C
 * Callers:
 *     ??$SnapAssistZOrder@AEBUCRect@Geometry@@AEAPEAUHWND__@@AEAPEAU3@@XamlSwitcherTelemetry@@SAXAEBUCRect@Geometry@@AEAPEAUHWND__@@1@Z @ 0x1805FF8B4 (--$SnapAssistZOrder@AEBUCRect@Geometry@@AEAPEAUHWND__@@AEAPEAU3@@XamlSwitcherTelemetry@@SAXAEBUC.c)
 * Callees:
 *     ?get@?$static_lazy@VXamlSwitcherLogging@@@details@wil@@QEAAPEAVXamlSwitcherLogging@@P6AXXZ@Z @ 0x180017490 (-get@-$static_lazy@VXamlSwitcherLogging@@@details@wil@@QEAAPEAVXamlSwitcherLogging@@P6AXXZ@Z.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x180090C50 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 */

void __fastcall XamlSwitcherTelemetry::SnapAssistZOrder_(
        XamlSwitcherTelemetry *this,
        const struct tagRECT *a2,
        HWND a3,
        HWND a4)
{
  _DWORD *v7; // rcx
  LONG bottom; // [rsp+38h] [rbp-59h] BYREF
  LONG right; // [rsp+3Ch] [rbp-55h] BYREF
  LONG top; // [rsp+40h] [rbp-51h] BYREF
  LONG left; // [rsp+44h] [rbp-4Dh] BYREF
  HWND v12; // [rsp+48h] [rbp-49h] BYREF
  HWND v13; // [rsp+50h] [rbp-41h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v14; // [rsp+58h] [rbp-39h] BYREF
  LONG *p_left; // [rsp+78h] [rbp-19h]
  __int64 v16; // [rsp+80h] [rbp-11h]
  LONG *p_top; // [rsp+88h] [rbp-9h]
  __int64 v18; // [rsp+90h] [rbp-1h]
  LONG *p_right; // [rsp+98h] [rbp+7h]
  __int64 v20; // [rsp+A0h] [rbp+Fh]
  LONG *p_bottom; // [rsp+A8h] [rbp+17h]
  __int64 v22; // [rsp+B0h] [rbp+1Fh]
  HWND *v23; // [rsp+B8h] [rbp+27h]
  __int64 v24; // [rsp+C0h] [rbp+2Fh]
  HWND *v25; // [rsp+C8h] [rbp+37h]
  __int64 v26; // [rsp+D0h] [rbp+3Fh]

  v7 = (_DWORD *)wil::details::static_lazy<XamlSwitcherLogging>::get(
                   (__int64)this,
                   _lambda_6341f906d56bba57ec18edd8305f3a60_::_lambda_invoker_cdecl_)[1];
  if ( *v7 > 5u )
  {
    bottom = a2->bottom;
    right = a2->right;
    top = a2->top;
    left = a2->left;
    v25 = &v12;
    v23 = &v13;
    p_bottom = &bottom;
    p_right = &right;
    p_top = &top;
    p_left = &left;
    v26 = 8LL;
    v24 = 8LL;
    v12 = a4;
    v13 = a3;
    v22 = 4LL;
    v20 = 4LL;
    v18 = 4LL;
    v16 = 4LL;
    tlgWriteTransfer_EventWriteTransfer((__int64)v7, (unsigned __int8 *)dword_1806D10F0, 0LL, 0LL, 8u, &v14);
  }
}
