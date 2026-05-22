/*
 * XREFs of ?LogIdleTelemetry@ISMTracing@@SAXKKK@Z @ 0x1800E05F0
 * Callers:
 *     ?IdleTelemetry@MPCHeadMovementDetector@@AEAAXXZ @ 0x1800E0500 (-IdleTelemetry@MPCHeadMovementDetector@@AEAAXXZ.c)
 * Callees:
 *     ?get@?$static_lazy@VISMTracing@@@details@wil@@QEAAPEAVISMTracing@@P6AXXZ@Z @ 0x180026950 (-get@-$static_lazy@VISMTracing@@@details@wil@@QEAAPEAVISMTracing@@P6AXXZ@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@44@Z @ 0x1800DFC54 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U2@U2@@-$_tlgWriteTemplate@$$A6AJPEBU.c)
 */

void __fastcall ISMTracing::LogIdleTelemetry(__int64 a1, int a2, int a3)
{
  int v5; // esi
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  int v9; // [rsp+40h] [rbp-18h] BYREF
  int v10; // [rsp+44h] [rbp-14h] BYREF
  __int64 v11; // [rsp+48h] [rbp-10h] BYREF
  int v12; // [rsp+78h] [rbp+20h] BYREF

  v5 = a1;
  v6 = wil::details::static_lazy<ISMTracing>::get(a1, _lambda_7fd51406feab050c3f0aab483d3938ea_::_lambda_invoker_cdecl_)[1];
  if ( *(_DWORD *)v6 > 4u
    && (*(_QWORD *)(v6 + 16) & 0x400000000001LL) != 0
    && (*(_QWORD *)(v6 + 24) & 0x400000000001LL) == *(_QWORD *)(v6 + 24) )
  {
    v12 = a3;
    v9 = a2;
    v10 = v5;
    v11 = 0x2000000LL;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      v6,
      byte_180231E47,
      v7,
      v8,
      (__int64)&v11,
      (__int64)&v10,
      (__int64)&v9,
      (__int64)&v12);
  }
}
