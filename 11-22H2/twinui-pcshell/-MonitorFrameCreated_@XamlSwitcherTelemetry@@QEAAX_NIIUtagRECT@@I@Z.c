/*
 * XREFs of ?MonitorFrameCreated_@XamlSwitcherTelemetry@@QEAAX_NIIUtagRECT@@I@Z @ 0x18001C680
 * Callers:
 *     ?CreateFrameForMonitor@TaskViewHost@@AEAAJPEAUIImmersiveMonitor@@@Z @ 0x180078304 (-CreateFrameForMonitor@TaskViewHost@@AEAAJPEAUIImmersiveMonitor@@@Z.c)
 * Callees:
 *     ?get@?$static_lazy@VXamlSwitcherLogging@@@details@wil@@QEAAPEAVXamlSwitcherLogging@@P6AXXZ@Z @ 0x18001C97C (-get@-$static_lazy@VXamlSwitcherLogging@@@details@wil@@QEAAPEAVXamlSwitcherLogging@@P6AXXZ@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U1@U1@U1@U1@U1@U1@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@3333333AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x18001CB7C (--$Write@U-$_tlgWrapperByVal@$03@@U1@U1@U1@U1@U1@U1@U1@U-$_tlgWrapperByVal@$07@@@-$_tlgWriteTemp.c)
 *     _tlgKeywordOn @ 0x1800C3AF4 (_tlgKeywordOn.c)
 */

void __fastcall XamlSwitcherTelemetry::MonitorFrameCreated_(
        XamlSwitcherTelemetry *this,
        unsigned __int8 a2,
        int a3,
        int a4,
        struct tagRECT *a5,
        unsigned int a6)
{
  int v6; // esi
  __int64 v9; // rax
  int v10; // r8d
  int v11; // r9d
  int v12; // r10d
  LONG bottom; // [rsp+78h] [rbp+17h] BYREF
  LONG right; // [rsp+7Ch] [rbp+1Bh] BYREF
  LONG top; // [rsp+80h] [rbp+1Fh] BYREF
  LONG left; // [rsp+84h] [rbp+23h] BYREF
  int v17; // [rsp+88h] [rbp+27h] BYREF
  int v18; // [rsp+8Ch] [rbp+2Bh] BYREF
  int v19; // [rsp+90h] [rbp+2Fh] BYREF
  __int64 v20; // [rsp+98h] [rbp+37h] BYREF
  XamlSwitcherTelemetry *v21; // [rsp+B8h] [rbp+57h] BYREF

  v21 = this;
  v6 = a2;
  v9 = wil::details::static_lazy<XamlSwitcherLogging>::get(
         this,
         _lambda_6341f906d56bba57ec18edd8305f3a60_::_lambda_invoker_cdecl_);
  if ( **(_DWORD **)(v9 + 8) > 5u )
  {
    if ( (unsigned __int8)tlgKeywordOn(*(_QWORD *)(v9 + 8), 0x400000000000LL) )
    {
      LODWORD(v21) = a6;
      v20 = 0x1000000LL;
      bottom = a5->bottom;
      right = a5->right;
      top = a5->top;
      left = a5->left;
      v17 = a4;
      v18 = a3;
      v19 = v6;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
        v12,
        (unsigned int)&unk_180880A5A,
        v10,
        v11,
        (__int64)&v19,
        (__int64)&v18,
        (__int64)&v17,
        (__int64)&left,
        (__int64)&top,
        (__int64)&right,
        (__int64)&bottom,
        (__int64)&v21,
        (__int64)&v20);
    }
  }
}
