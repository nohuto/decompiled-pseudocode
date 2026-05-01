/*
 * XREFs of ??$RequestContextCreatedFromProcessThread@KAEAKPEBGPEBGPEBGPEBG@PinManagerTelemetry@@SAX$$QEAKAEAK$$QEAPEBG222@Z @ 0x18069A8F4
 * Callers:
 *     ?FromProcessThread@PinRequestContext@@SA?AV?$shared_ptr@VPinRequestContext@@@std@@PEAXK@Z @ 0x1806A137C (-FromProcessThread@PinRequestContext@@SA-AV-$shared_ptr@VPinRequestContext@@@std@@PEAXK@Z.c)
 * Callees:
 *     ?get@?$static_lazy@VPinManagerTelemetry@@@details@wil@@QEAAPEAVPinManagerTelemetry@@P6AXXZ@Z @ 0x180084D90 (-get@-$static_lazy@VPinManagerTelemetry@@@details@wil@@QEAAPEAVPinManagerTelemetry@@P6AXXZ@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U?$_tlgWrapSz@G@@U2@U2@U2@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@3AEBU?$_tlgWrapSz@G@@444AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x18069AE84 (--$Write@U-$_tlgWrapperByVal@$03@@U1@U-$_tlgWrapSz@G@@U2@U2@U2@U-$_tlgWrapperByVal@$07@@@-$_tlgW.c)
 */

__int64 *__fastcall PinManagerTelemetry::RequestContextCreatedFromProcessThread<unsigned long,unsigned long &,unsigned short const *,unsigned short const *,unsigned short const *,unsigned short const *>(
        int *a1,
        int *a2,
        __int64 *a3,
        __int64 *a4,
        __int64 *a5,
        __int64 *a6)
{
  __int64 *result; // rax
  _DWORD *v11; // r10
  __int64 v12; // rcx
  int v13; // [rsp+68h] [rbp+17h] BYREF
  int v14; // [rsp+6Ch] [rbp+1Bh] BYREF
  __int64 v15; // [rsp+70h] [rbp+1Fh] BYREF
  __int64 v16; // [rsp+78h] [rbp+27h] BYREF
  __int64 v17; // [rsp+80h] [rbp+2Fh] BYREF
  __int64 v18; // [rsp+88h] [rbp+37h] BYREF
  __int64 v19; // [rsp+90h] [rbp+3Fh] BYREF

  result = wil::details::static_lazy<PinManagerTelemetry>::get(
             (__int64)a1,
             (void (__cdecl *)())_lambda_0da5e8ba5c2e2fa19b2167a51cfd1f3e_::_lambda_invoker_cdecl_);
  v11 = (_DWORD *)result[1];
  if ( *v11 > 5u )
  {
    v15 = 0x1000000LL;
    v16 = *a6;
    v12 = *a5;
    v18 = *a4;
    v19 = *a3;
    v13 = *a2;
    v14 = *a1;
    v17 = v12;
    return (__int64 *)_tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<8>>(
                        (int)v11,
                        (int)&dword_180877237,
                        (__int64)&v14,
                        (__int64)&v13,
                        (__int64)&v19,
                        (__int64)&v18,
                        (__int64)&v17,
                        (__int64)&v16,
                        (__int64)&v15);
  }
  return result;
}
