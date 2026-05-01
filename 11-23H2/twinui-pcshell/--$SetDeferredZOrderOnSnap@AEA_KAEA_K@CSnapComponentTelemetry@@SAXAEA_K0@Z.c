/*
 * XREFs of ??$SetDeferredZOrderOnSnap@AEA_KAEA_K@CSnapComponentTelemetry@@SAXAEA_K0@Z @ 0x18065D22C
 * Callers:
 *     ?SnapWindowWithZOrder@CShellSnapComponent@@UEAAJ_K0URect@Foundation@Windows@@W4SnapArrangementOptions@WindowSnapping@Shell@Internal@4@@Z @ 0x180663890 (-SnapWindowWithZOrder@CShellSnapComponent@@UEAAJ_K0URect@Foundation@Windows@@W4SnapArrangementOp.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3@Z @ 0x180038F60 (--$Write@U-$_tlgWrapperByVal@$07@@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUI.c)
 *     ?get@?$static_lazy@VWindowManagementLogging@@@details@wil@@QEAAPEAVWindowManagementLogging@@P6AXXZ@Z @ 0x1801105A4 (-get@-$static_lazy@VWindowManagementLogging@@@details@wil@@QEAAPEAVWindowManagementLogging@@P6AX.c)
 */

_QWORD *__fastcall CSnapComponentTelemetry::SetDeferredZOrderOnSnap<unsigned __int64 &,unsigned __int64 &>(
        __int64 *a1,
        __int64 *a2)
{
  _QWORD *result; // rax
  __int64 v5; // r9
  _DWORD *v6; // rcx
  __int64 v7; // [rsp+50h] [rbp+18h] BYREF
  __int64 v8; // [rsp+58h] [rbp+20h] BYREF

  result = wil::details::static_lazy<WindowManagementLogging>::get(
             (__int64)a1,
             (void (__cdecl *)())_lambda_f79d5b8d2c405e687024ad1f66b4c06d_::_lambda_invoker_cdecl_);
  v6 = (_DWORD *)result[1];
  if ( *v6 > 5u )
  {
    v7 = *a2;
    v8 = *a1;
    return (_QWORD *)_tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>>(
                       (int)v6,
                       (int)&unk_180871E3A,
                       0,
                       v5,
                       (__int64)&v8,
                       (__int64)&v7);
  }
  return result;
}
