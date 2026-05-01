/*
 * XREFs of ?SwitchItemLoadError_@MultitaskingViewTelemetry@@QEBAXJ@Z @ 0x180572090
 * Callers:
 *     ??$SwitchItemLoadError@AEAJ@MultitaskingViewTelemetry@@SAXAEAJ@Z @ 0x180571E18 (--$SwitchItemLoadError@AEAJ@MultitaskingViewTelemetry@@SAXAEAJ@Z.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1800C3AF4 (_tlgKeywordOn.c)
 *     ?get@?$static_lazy@VWindowManagementLogging@@@details@wil@@QEAAPEAVWindowManagementLogging@@P6AXXZ@Z @ 0x1801105A4 (-get@-$static_lazy@VWindowManagementLogging@@@details@wil@@QEAAPEAVWindowManagementLogging@@P6AX.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x180110D88 (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$07@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgPr.c)
 */

void __fastcall MultitaskingViewTelemetry::SwitchItemLoadError_(MultitaskingViewTelemetry *this, int a2)
{
  _DWORD *v3; // rcx
  __int64 v4; // rcx
  __int64 v5; // r9
  MultitaskingViewTelemetry *v6; // [rsp+40h] [rbp+8h] BYREF
  __int64 v7; // [rsp+50h] [rbp+18h] BYREF

  v6 = this;
  v3 = (_DWORD *)wil::details::static_lazy<WindowManagementLogging>::get(
                   (__int64)this,
                   (void (__cdecl *)())_lambda_f79d5b8d2c405e687024ad1f66b4c06d_::_lambda_invoker_cdecl_)[1];
  if ( *v3 > 5u )
  {
    if ( tlgKeywordOn((__int64)v3, 0x200000000000LL) )
    {
      v7 = 0x1000000LL;
      LODWORD(v6) = a2;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
        v4,
        byte_180866903,
        0LL,
        v5,
        (__int64)&v6,
        (__int64)&v7);
    }
  }
}
