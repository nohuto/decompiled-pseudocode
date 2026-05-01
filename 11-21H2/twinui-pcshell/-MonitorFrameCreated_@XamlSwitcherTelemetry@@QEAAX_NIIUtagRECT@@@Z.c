/*
 * XREFs of ?MonitorFrameCreated_@XamlSwitcherTelemetry@@QEAAX_NIIUtagRECT@@@Z @ 0x180017278
 * Callers:
 *     ??$MonitorFrameCreated@_NIIUtagRECT@@@XamlSwitcherTelemetry@@SAX$$QEA_N$$QEAI1$$QEAUtagRECT@@@Z @ 0x180016F7C (--$MonitorFrameCreated@_NIIUtagRECT@@@XamlSwitcherTelemetry@@SAX$$QEA_N$$QEAI1$$QEAUtagRECT@@@Z.c)
 *     ??$MonitorFrameCreated@_NIAEAIAEAUtagRECT@@@XamlSwitcherTelemetry@@SAX$$QEA_N$$QEAIAEAIAEAUtagRECT@@@Z @ 0x18042BC48 (--$MonitorFrameCreated@_NIAEAIAEAUtagRECT@@@XamlSwitcherTelemetry@@SAX$$QEA_N$$QEAIAEAIAEAUtagRE.c)
 * Callees:
 *     ?get@?$static_lazy@VXamlSwitcherLogging@@@details@wil@@QEAAPEAVXamlSwitcherLogging@@P6AXXZ@Z @ 0x180017490 (-get@-$static_lazy@VXamlSwitcherLogging@@@details@wil@@QEAAPEAVXamlSwitcherLogging@@P6AXXZ@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U1@U1@U1@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@333333@Z @ 0x1800176B4 (--$Write@U-$_tlgWrapperByVal@$03@@U1@U1@U1@U1@U1@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_.c)
 *     _tlgKeywordOn @ 0x180091B58 (_tlgKeywordOn.c)
 */

void __fastcall XamlSwitcherTelemetry::MonitorFrameCreated_(
        XamlSwitcherTelemetry *this,
        unsigned __int8 a2,
        int a3,
        int a4,
        struct tagRECT *a5)
{
  int v5; // esi
  __int64 v8; // rax
  int v9; // r9d
  int v10; // r10d
  LONG right; // [rsp+60h] [rbp-20h] BYREF
  LONG top; // [rsp+64h] [rbp-1Ch] BYREF
  LONG left; // [rsp+68h] [rbp-18h] BYREF
  int v14; // [rsp+6Ch] [rbp-14h] BYREF
  int v15; // [rsp+70h] [rbp-10h] BYREF
  _DWORD v16[3]; // [rsp+74h] [rbp-Ch] BYREF
  XamlSwitcherTelemetry *v17; // [rsp+90h] [rbp+10h] BYREF

  v17 = this;
  v5 = a2;
  v8 = wil::details::static_lazy<XamlSwitcherLogging>::get(
         this,
         _lambda_6341f906d56bba57ec18edd8305f3a60_::_lambda_invoker_cdecl_);
  if ( **(_DWORD **)(v8 + 8) > 5u )
  {
    if ( (unsigned __int8)tlgKeywordOn(*(_QWORD *)(v8 + 8), 0x400000000000LL) )
    {
      v14 = a4;
      v15 = a3;
      v16[0] = v5;
      LODWORD(v17) = a5->bottom;
      right = a5->right;
      top = a5->top;
      left = a5->left;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        v10,
        (unsigned int)&unk_1806B3440,
        0,
        v9,
        (__int64)v16,
        (__int64)&v15,
        (__int64)&v14,
        (__int64)&left,
        (__int64)&top,
        (__int64)&right,
        (__int64)&v17);
    }
  }
}
