/*
 * XREFs of ??$PackagedAppDisplayInformationRetrieved@PEBGPEBG_N@PinManagerTelemetry@@SAX$$QEAPEBG0$$QEA_N@Z @ 0x18069A6A4
 * Callers:
 *     _anonymous_namespace_::TryGetRequestorDisplayInformation @ 0x1806A7FD4 (_anonymous_namespace_--TryGetRequestorDisplayInformation.c)
 * Callees:
 *     ?get@?$static_lazy@VPinManagerTelemetry@@@details@wil@@QEAAPEAVPinManagerTelemetry@@P6AXXZ@Z @ 0x180084D90 (-get@-$static_lazy@VPinManagerTelemetry@@@details@wil@@QEAAPEAVPinManagerTelemetry@@P6AXXZ@Z.c)
 *     ??$Write@U?$_tlgWrapSz@G@@U1@U?$_tlgWrapperByVal@$00@@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@3AEBU?$_tlgWrapperByVal@$00@@AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x18069AD84 (--$Write@U-$_tlgWrapSz@G@@U1@U-$_tlgWrapperByVal@$00@@U-$_tlgWrapperByVal@$07@@@-$_tlgWriteTempl.c)
 */

__int64 *__fastcall PinManagerTelemetry::PackagedAppDisplayInformationRetrieved<unsigned short const *,unsigned short const *,bool>(
        __int64 *a1,
        __int64 *a2,
        _BYTE *a3)
{
  __int64 *result; // rax
  _DWORD *v7; // rcx
  __int64 v8; // [rsp+40h] [rbp-28h] BYREF
  __int64 v9; // [rsp+48h] [rbp-20h] BYREF
  __int64 v10[3]; // [rsp+50h] [rbp-18h] BYREF
  __int64 v11; // [rsp+88h] [rbp+20h] BYREF

  result = wil::details::static_lazy<PinManagerTelemetry>::get(
             (__int64)a1,
             (void (__cdecl *)())_lambda_0da5e8ba5c2e2fa19b2167a51cfd1f3e_::_lambda_invoker_cdecl_);
  v7 = (_DWORD *)result[1];
  if ( *v7 > 5u )
  {
    LOBYTE(v11) = *a3;
    v9 = *a2;
    v10[0] = *a1;
    v8 = 0x1000000LL;
    return (__int64 *)_tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<1>,_tlgWrapperByVal<8>>(
                        (int)v7,
                        (int)&dword_180877481,
                        (__int64)v10,
                        (__int64)&v9,
                        (__int64)&v11,
                        (__int64)&v8);
  }
  return result;
}
