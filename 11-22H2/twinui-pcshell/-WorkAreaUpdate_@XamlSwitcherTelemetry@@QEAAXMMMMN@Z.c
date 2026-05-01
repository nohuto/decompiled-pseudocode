/*
 * XREFs of ?WorkAreaUpdate_@XamlSwitcherTelemetry@@QEAAXMMMMN@Z @ 0x18001C8BC
 * Callers:
 *     ??$WorkAreaUpdate@AEAMAEAMMMAEAN@XamlSwitcherTelemetry@@SAXAEAM0$$QEAM1AEAN@Z @ 0x18001C0F4 (--$WorkAreaUpdate@AEAMAEAMMMAEAN@XamlSwitcherTelemetry@@SAXAEAM0$$QEAM1AEAN@Z.c)
 * Callees:
 *     ?get@?$static_lazy@VXamlSwitcherLogging@@@details@wil@@QEAAPEAVXamlSwitcherLogging@@P6AXXZ@Z @ 0x18001C97C (-get@-$static_lazy@VXamlSwitcherLogging@@@details@wil@@QEAAPEAVXamlSwitcherLogging@@P6AXXZ@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U1@U1@U?$_tlgWrapperByVal@$07@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@333AEBU?$_tlgWrapperByVal@$07@@4@Z @ 0x18001CA1C (--$Write@U-$_tlgWrapperByVal@$03@@U1@U1@U1@U-$_tlgWrapperByVal@$07@@U2@@-$_tlgWriteTemplate@$$A6.c)
 *     _tlgKeywordOn @ 0x1800C3AF4 (_tlgKeywordOn.c)
 */

void __fastcall XamlSwitcherTelemetry::WorkAreaUpdate_(
        XamlSwitcherTelemetry *this,
        float a2,
        float a3,
        float a4,
        float a5,
        double a6)
{
  _DWORD *v6; // rcx
  int v7; // ecx
  int v8; // r8d
  int v9; // r9d
  float v10; // [rsp+50h] [rbp-20h] BYREF
  float v11; // [rsp+54h] [rbp-1Ch] BYREF
  float v12; // [rsp+58h] [rbp-18h] BYREF
  __int64 v13; // [rsp+60h] [rbp-10h] BYREF
  double v14; // [rsp+68h] [rbp-8h] BYREF
  XamlSwitcherTelemetry *v15; // [rsp+80h] [rbp+10h] BYREF
  float v16; // [rsp+88h] [rbp+18h]
  float v17; // [rsp+90h] [rbp+20h]
  float v18; // [rsp+98h] [rbp+28h]

  v18 = a4;
  v17 = a3;
  v16 = a2;
  v15 = this;
  v6 = *(_DWORD **)(wil::details::static_lazy<XamlSwitcherLogging>::get(
                      this,
                      _lambda_6341f906d56bba57ec18edd8305f3a60_::_lambda_invoker_cdecl_)
                  + 8);
  if ( *v6 > 5u )
  {
    if ( (unsigned __int8)tlgKeywordOn(v6, 0x400000000000LL) )
    {
      v14 = a6;
      *(float *)&v15 = a5;
      v10 = v18;
      v11 = v17;
      v12 = v16;
      v13 = 0x1000000LL;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>>(
        v7,
        (unsigned int)&unk_1808815F8,
        v8,
        v9,
        (__int64)&v12,
        (__int64)&v11,
        (__int64)&v10,
        (__int64)&v15,
        (__int64)&v14,
        (__int64)&v13);
    }
  }
}
