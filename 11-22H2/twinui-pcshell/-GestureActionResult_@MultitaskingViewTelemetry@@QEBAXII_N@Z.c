/*
 * XREFs of ?GestureActionResult_@MultitaskingViewTelemetry@@QEBAXII_N@Z @ 0x18055D3E4
 * Callers:
 *     ??$GestureActionResult@AEAIAEAIAEAH@MultitaskingViewTelemetry@@SAXAEAI0AEAH@Z @ 0x18055D260 (--$GestureActionResult@AEAIAEAIAEAH@MultitaskingViewTelemetry@@SAXAEAI0AEAH@Z.c)
 *     ??$GestureActionResult@AEAIAEAI_N@MultitaskingViewTelemetry@@SAXAEAI0$$QEA_N@Z @ 0x18055D324 (--$GestureActionResult@AEAIAEAI_N@MultitaskingViewTelemetry@@SAXAEAI0$$QEA_N@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@U?$_tlgWrapperByVal@$00@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@4AEBU?$_tlgWrapperByVal@$00@@@Z @ 0x18003FCA8 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U2@U-$_tlgWrapperByVal@$00@@@-$_tlgWr.c)
 *     _tlgKeywordOn @ 0x1800C3AF4 (_tlgKeywordOn.c)
 *     ?get@?$static_lazy@VWindowManagementLogging@@@details@wil@@QEAAPEAVWindowManagementLogging@@P6AXXZ@Z @ 0x1801105A4 (-get@-$static_lazy@VWindowManagementLogging@@@details@wil@@QEAAPEAVWindowManagementLogging@@P6AX.c)
 */

void __fastcall MultitaskingViewTelemetry::GestureActionResult_(
        MultitaskingViewTelemetry *this,
        int a2,
        int a3,
        char a4)
{
  _DWORD *v7; // rcx
  int v8; // ecx
  __int64 v9; // r9
  int v10; // [rsp+40h] [rbp-18h] BYREF
  int v11; // [rsp+44h] [rbp-14h] BYREF
  __int64 v12; // [rsp+48h] [rbp-10h] BYREF
  MultitaskingViewTelemetry *v13; // [rsp+60h] [rbp+8h] BYREF

  v13 = this;
  v7 = (_DWORD *)wil::details::static_lazy<WindowManagementLogging>::get(
                   (__int64)this,
                   (void (__cdecl *)())_lambda_f79d5b8d2c405e687024ad1f66b4c06d_::_lambda_invoker_cdecl_)[1];
  if ( *v7 > 5u )
  {
    if ( tlgKeywordOn((__int64)v7, 0x400000000000LL) )
    {
      LOBYTE(v13) = a4;
      v10 = a3;
      v11 = a2;
      v12 = 0x1000000LL;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<1>>(
        v8,
        (int)&unk_180866092,
        0,
        v9,
        (__int64)&v12,
        (__int64)&v11,
        (__int64)&v10,
        (__int64)&v13);
    }
  }
}
