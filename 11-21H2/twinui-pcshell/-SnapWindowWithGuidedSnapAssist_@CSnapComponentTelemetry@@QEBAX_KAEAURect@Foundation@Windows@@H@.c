/*
 * XREFs of ?SnapWindowWithGuidedSnapAssist_@CSnapComponentTelemetry@@QEBAX_KAEAURect@Foundation@Windows@@H@Z @ 0x18059622C
 * Callers:
 *     ??$SnapWindowWithGuidedSnapAssist@AEA_KAEAURect@Foundation@Windows@@AEAI@CSnapComponentTelemetry@@SAXAEA_KAEAURect@Foundation@Windows@@AEAI@Z @ 0x180590BA0 (--$SnapWindowWithGuidedSnapAssist@AEA_KAEAURect@Foundation@Windows@@AEAI@CSnapComponentTelemetry.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@U2@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@4444@Z @ 0x180017574 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U2@U2@U2@U2@@-$_tlgWriteTemplate@$$A6.c)
 *     ?get@?$static_lazy@VWindowManagementLogging@@@details@wil@@QEAAPEAVWindowManagementLogging@@P6AXXZ@Z @ 0x180091D44 (-get@-$static_lazy@VWindowManagementLogging@@@details@wil@@QEAAPEAVWindowManagementLogging@@P6AX.c)
 */

void __fastcall CSnapComponentTelemetry::SnapWindowWithGuidedSnapAssist_(
        CSnapComponentTelemetry *this,
        __int64 a2,
        struct Windows::Foundation::Rect *a3,
        int a4)
{
  _DWORD *v7; // rcx
  int v8; // [rsp+50h] [rbp-20h] BYREF
  int v9; // [rsp+54h] [rbp-1Ch] BYREF
  int v10; // [rsp+58h] [rbp-18h] BYREF
  int v11; // [rsp+5Ch] [rbp-14h] BYREF
  __int64 v12; // [rsp+60h] [rbp-10h] BYREF
  CSnapComponentTelemetry *v13; // [rsp+80h] [rbp+10h] BYREF

  v13 = this;
  v7 = (_DWORD *)wil::details::static_lazy<WindowManagementLogging>::get(
                   (__int64)this,
                   _lambda_f79d5b8d2c405e687024ad1f66b4c06d_::_lambda_invoker_cdecl_)[1];
  if ( *v7 > 5u )
  {
    v8 = *((_DWORD *)a3 + 3);
    v9 = *((_DWORD *)a3 + 2);
    v10 = *((_DWORD *)a3 + 1);
    v11 = *(_DWORD *)a3;
    LODWORD(v13) = a4;
    v12 = a2;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      (int)v7,
      (int)&unk_1806C8F3F,
      0,
      0,
      (__int64)&v12,
      (__int64)&v11,
      (__int64)&v10,
      (__int64)&v9,
      (__int64)&v8,
      (__int64)&v13);
  }
}
