/*
 * XREFs of ??$PolicyCheckError@AEAY0BM@$$CBGAEAY0DC@$$CBGAEAJ@AIAssistanceTelemetry@@SAXAEAY0BM@$$CBGAEAY0DC@$$CBGAEAJ@Z @ 0x18025DDD0
 * Callers:
 *     ?IsCopilotSupportedOSEdition@AIAssistancePolicy@@YA_NXZ @ 0x180265588 (-IsCopilotSupportedOSEdition@AIAssistancePolicy@@YA_NXZ.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapSz@G@@U1@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@3AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x1800A1DD0 (--$Write@U-$_tlgWrapSz@G@@U1@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvide.c)
 *     ?get@?$static_lazy@VAIAssistanceTelemetry@@@details@wil@@QEAAPEAVAIAssistanceTelemetry@@P6AXXZ@Z @ 0x180275774 (-get@-$static_lazy@VAIAssistanceTelemetry@@@details@wil@@QEAAPEAVAIAssistanceTelemetry@@P6AXXZ@Z.c)
 */

__int64 __fastcall AIAssistanceTelemetry::PolicyCheckError<unsigned short const (&)[28],unsigned short const (&)[50],long &>(
        __int64 a1,
        __int64 a2,
        _DWORD *a3)
{
  __int64 result; // rax
  __int64 v5; // r8
  __int64 v6; // r9
  _DWORD *v7; // rcx
  __int64 v8; // [rsp+50h] [rbp+8h] BYREF
  __int64 v9; // [rsp+58h] [rbp+10h] BYREF
  __int64 v10; // [rsp+68h] [rbp+20h] BYREF

  v9 = a2;
  v8 = a1;
  result = wil::details::static_lazy<AIAssistanceTelemetry>::get(
             a1,
             _lambda_112a6f497407e40ee53cd3a0c551aaad_::_lambda_invoker_cdecl_);
  v7 = *(_DWORD **)(result + 8);
  if ( *v7 > 5u )
  {
    LODWORD(v9) = *a3;
    v8 = (__int64)L"Failed reading SLPolicy_WindowsCopilot_Available.";
    v10 = (__int64)L"IsCopilotSupportedOSEdition";
    return _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>>(
             (int)v7,
             (int)&dword_18087BE0A,
             v5,
             v6,
             (const WCHAR **)&v10,
             (const WCHAR **)&v8,
             (__int64)&v9);
  }
  return result;
}
