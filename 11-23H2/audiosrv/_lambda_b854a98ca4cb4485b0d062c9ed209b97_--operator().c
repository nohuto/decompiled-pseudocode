/*
 * XREFs of _lambda_b854a98ca4cb4485b0d062c9ed209b97_::operator() @ 0x18014AC44
 * Callers:
 *     wil::details::lambda_call__lambda_b854a98ca4cb4485b0d062c9ed209b97___::_lambda_call__lambda_b854a98ca4cb4485b0d062c9ed209b97___ @ 0x18014A650 (wil--details--lambda_call__lambda_b854a98ca4cb4485b0d062c9ed209b97___--_lambda_call__lambda_b854.c)
 *     ?IsEffectPackConfigurationApplicableToEndpoint@CEndpointCharacteristics@@AEAAJAEAV?$shared_ptr@$$CBUEffectPackConfiguration@@@std@@PEA_N@Z @ 0x18014D6DC (-IsEffectPackConfigurationApplicableToEndpoint@CEndpointCharacteristics@@AEAAJAEAV-$shared_ptr@$.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapSz@G@@U?$_tlgWrapperByRef@$0BA@@@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByRef@$0BA@@@AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x180149608 (--$Write@U-$_tlgWrapSz@G@@U-$_tlgWrapperByRef@$0BA@@@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTempla.c)
 */

__int64 __fastcall lambda_b854a98ca4cb4485b0d062c9ed209b97_::operator()(__int64 a1)
{
  __int64 v1; // r8
  _DWORD *v2; // r9
  int v3; // edx
  __int64 *v4; // rax
  __int64 v5; // rcx
  __int64 v6; // rdx
  __int64 result; // rax
  int v8; // [rsp+50h] [rbp+8h] BYREF
  __int64 v9; // [rsp+58h] [rbp+10h] BYREF
  const WCHAR *v10; // [rsp+60h] [rbp+18h] BYREF

  v1 = *(_QWORD *)a1;
  v2 = *(_DWORD **)(*(_QWORD *)a1 + 8288LL);
  if ( *v2 > 5u )
  {
    v3 = **(_DWORD **)(a1 + 16);
    v4 = *(__int64 **)(a1 + 8);
    v5 = *(_QWORD *)(*(_QWORD *)a1 + 8288LL);
    v8 = v3;
    v6 = *v4;
    v10 = *(const WCHAR **)(v1 + 48);
    v9 = v6;
    return _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByRef<16>,_tlgWrapperByVal<4>>(
             v5,
             byte_18019625B,
             v1,
             (__int64)v2,
             &v10,
             &v9,
             (__int64)&v8);
  }
  return result;
}
