/*
 * XREFs of ??$UserPresenceFlags@_N_N_N_N@TaskFlowDataEngineTelemetry@@SAX$$QEA_N000@Z @ 0x180037A54
 * Callers:
 *     ?OnIdleStateFlagsChanged@UserPresenceListener@DataEngine@TaskFlow@Shell@Internal@Windows@@UEAAJW4SESSION_IDLE_STATE_FLAGS@@@Z @ 0x180037A00 (-OnIdleStateFlagsChanged@UserPresenceListener@DataEngine@TaskFlow@Shell@Internal@Windows@@UEAAJW.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@333@Z @ 0x180037AFC (--$Write@U-$_tlgWrapperByVal@$03@@U1@U1@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPE.c)
 *     ?get@?$static_lazy@VTaskFlowDataEngineTelemetry@@@details@wil@@QEAAPEAVTaskFlowDataEngineTelemetry@@P6AXXZ@Z @ 0x1800A80C4 (-get@-$static_lazy@VTaskFlowDataEngineTelemetry@@@details@wil@@QEAAPEAVTaskFlowDataEngineTelemet.c)
 */

__int64 __fastcall TaskFlowDataEngineTelemetry::UserPresenceFlags<bool,bool,bool,bool>(
        unsigned __int8 *a1,
        unsigned __int8 *a2,
        unsigned __int8 *a3,
        unsigned __int8 *a4)
{
  __int64 result; // rax
  int v9; // r9d
  _DWORD *v10; // rcx
  int v11; // [rsp+40h] [rbp-18h] BYREF
  int v12; // [rsp+44h] [rbp-14h] BYREF
  int v13; // [rsp+48h] [rbp-10h] BYREF
  _DWORD v14[3]; // [rsp+4Ch] [rbp-Ch] BYREF

  result = wil::details::static_lazy<TaskFlowDataEngineTelemetry>::get(
             a1,
             _lambda_fac79a549a8b210f59d21e9b666a8346_::_lambda_invoker_cdecl_);
  v10 = *(_DWORD **)(result + 8);
  if ( *v10 > 5u )
  {
    v11 = *a4;
    v12 = *a3;
    v13 = *a2;
    v14[0] = *a1;
    return _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
             (_DWORD)v10,
             (unsigned int)&unk_1806B03C5,
             0,
             v9,
             (__int64)v14,
             (__int64)&v13,
             (__int64)&v12,
             (__int64)&v11);
  }
  return result;
}
