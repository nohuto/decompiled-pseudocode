/*
 * XREFs of ?SnapAssistZOrder_@XamlSwitcherTelemetry@@QEAAXAEBUtagRECT@@PEAUHWND__@@1@Z @ 0x18076E504
 * Callers:
 *     ??$SnapAssistZOrder@AEBUCRect@Geometry@@AEAPEAUHWND__@@AEAPEAU3@@XamlSwitcherTelemetry@@SAXAEBUCRect@Geometry@@AEAPEAUHWND__@@1@Z @ 0x1807692D8 (--$SnapAssistZOrder@AEBUCRect@Geometry@@AEAPEAUHWND__@@AEAPEAU3@@XamlSwitcherTelemetry@@SAXAEBUC.c)
 * Callees:
 *     ?get@?$static_lazy@VXamlSwitcherLogging@@@details@wil@@QEAAPEAVXamlSwitcherLogging@@P6AXXZ@Z @ 0x18001C97C (-get@-$static_lazy@VXamlSwitcherLogging@@@details@wil@@QEAAPEAVXamlSwitcherLogging@@P6AXXZ@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U1@U1@U?$_tlgWrapperByVal@$07@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@333AEBU?$_tlgWrapperByVal@$07@@4@Z @ 0x18001CA1C (--$Write@U-$_tlgWrapperByVal@$03@@U1@U1@U1@U-$_tlgWrapperByVal@$07@@U2@@-$_tlgWriteTemplate@$$A6.c)
 */

void __fastcall XamlSwitcherTelemetry::SnapAssistZOrder_(
        XamlSwitcherTelemetry *this,
        const struct tagRECT *a2,
        HWND a3,
        HWND a4)
{
  _DWORD *v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  LONG right; // [rsp+50h] [rbp-20h] BYREF
  LONG top; // [rsp+54h] [rbp-1Ch] BYREF
  LONG left; // [rsp+58h] [rbp-18h] BYREF
  HWND v13; // [rsp+60h] [rbp-10h] BYREF
  HWND v14; // [rsp+68h] [rbp-8h] BYREF
  XamlSwitcherTelemetry *v15; // [rsp+80h] [rbp+10h] BYREF

  v15 = this;
  v7 = (_DWORD *)wil::details::static_lazy<XamlSwitcherLogging>::get(
                   (__int64)this,
                   (void (__cdecl *)())_lambda_6341f906d56bba57ec18edd8305f3a60_::_lambda_invoker_cdecl_)[1];
  if ( *v7 > 5u )
  {
    LODWORD(v15) = a2->bottom;
    right = a2->right;
    top = a2->top;
    left = a2->left;
    v13 = a4;
    v14 = a3;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>>(
      (int)v7,
      (int)&unk_180880EF9,
      v8,
      v9,
      (__int64)&left,
      (__int64)&top,
      (__int64)&right,
      (__int64)&v15,
      (__int64)&v14,
      (__int64)&v13);
  }
}
