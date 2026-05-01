/*
 * XREFs of ?TaskViewContextMenuInvoked_@XamlSwitcherTelemetry@@QEBAXI_N@Z @ 0x180444D58
 * Callers:
 *     ??$TaskViewContextMenuInvoked@I_N@XamlSwitcherTelemetry@@SAX$$QEAI$$QEA_N@Z @ 0x180440100 (--$TaskViewContextMenuInvoked@I_N@XamlSwitcherTelemetry@@SAX$$QEAI$$QEA_N@Z.c)
 * Callees:
 *     ?get@?$static_lazy@VXamlSwitcherLogging@@@details@wil@@QEAAPEAVXamlSwitcherLogging@@P6AXXZ@Z @ 0x180017490 (-get@-$static_lazy@VXamlSwitcherLogging@@@details@wil@@QEAAPEAVXamlSwitcherLogging@@P6AXXZ@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@3@Z @ 0x18005A23C (--$Write@U-$_tlgWrapperByVal@$03@@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUI.c)
 *     _tlgKeywordOn @ 0x180091B58 (_tlgKeywordOn.c)
 */

void __fastcall XamlSwitcherTelemetry::TaskViewContextMenuInvoked_(
        XamlSwitcherTelemetry *this,
        int a2,
        unsigned __int8 a3)
{
  int v4; // ebx
  _DWORD *v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // r9
  XamlSwitcherTelemetry *v8; // [rsp+40h] [rbp+8h] BYREF
  int v9; // [rsp+58h] [rbp+20h] BYREF

  v8 = this;
  v4 = a3;
  v5 = (_DWORD *)wil::details::static_lazy<XamlSwitcherLogging>::get(
                   (__int64)this,
                   _lambda_6341f906d56bba57ec18edd8305f3a60_::_lambda_invoker_cdecl_)[1];
  if ( *v5 > 5u )
  {
    if ( tlgKeywordOn((__int64)v5, 0x400000000000LL) )
    {
      LODWORD(v8) = v4;
      v9 = a2;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        v6,
        byte_1806B3CEC,
        0LL,
        v7,
        (__int64)&v9,
        (__int64)&v8);
    }
  }
}
