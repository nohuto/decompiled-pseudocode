/*
 * XREFs of ??$TaskbarPinTrustedProcessChecked@PEAG_N@PinManagerTelemetry@@SAX$$QEAPEAG$$QEA_N@Z @ 0x180084CF8
 * Callers:
 *     _anonymous_namespace_::IsTrustedWindowsPinProcess @ 0x180085ECC (_anonymous_namespace_--IsTrustedWindowsPinProcess.c)
 * Callees:
 *     ?get@?$static_lazy@VPinManagerTelemetry@@@details@wil@@QEAAPEAVPinManagerTelemetry@@P6AXXZ@Z @ 0x180084D90 (-get@-$static_lazy@VPinManagerTelemetry@@@details@wil@@QEAAPEAVPinManagerTelemetry@@P6AXXZ@Z.c)
 *     ??$Write@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$00@@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$00@@AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x180084E48 (--$Write@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$00@@U-$_tlgWrapperByVal@$07@@@-$_tlgWriteTemplate.c)
 */

__int64 __fastcall PinManagerTelemetry::TaskbarPinTrustedProcessChecked<unsigned short *,bool>(__int64 *a1, _BYTE *a2)
{
  __int64 result; // rax
  _DWORD *v5; // rcx
  __int64 v6[3]; // [rsp+40h] [rbp-18h] BYREF
  __int64 v7; // [rsp+70h] [rbp+18h] BYREF
  __int64 v8; // [rsp+78h] [rbp+20h] BYREF

  result = wil::details::static_lazy<PinManagerTelemetry>::get(
             a1,
             _lambda_0da5e8ba5c2e2fa19b2167a51cfd1f3e_::_lambda_invoker_cdecl_);
  v5 = *(_DWORD **)(result + 8);
  if ( *v5 > 5u )
  {
    LOBYTE(v7) = *a2;
    v6[0] = *a1;
    v8 = 0x1000000LL;
    return _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<1>,_tlgWrapperByVal<8>>(
             (int)v5,
             (int)&dword_180876FD4,
             (__int64)v6,
             (__int64)&v7,
             (__int64)&v8);
  }
  return result;
}
