/*
 * XREFs of ?TaskflowImmersiveShellBroker_StartupPerf_@TaskFlowDataEngineTelemetry@@QEAAX_JG_KPEB_J_N@Z @ 0x1800A77D4
 * Callers:
 *     _lambda_c6edb9ea9ae2a095d75d0a6fb7353035_::operator() @ 0x1800A7290 (_lambda_c6edb9ea9ae2a095d75d0a6fb7353035_--operator().c)
 * Callees:
 *     _tlgKeywordOn @ 0x180091B58 (_tlgKeywordOn.c)
 *     ?get@?$static_lazy@VTaskFlowDataEngineTelemetry@@@details@wil@@QEAAPEAVTaskFlowDataEngineTelemetry@@P6AXXZ@Z @ 0x1800A80C4 (-get@-$static_lazy@VTaskFlowDataEngineTelemetry@@@details@wil@@QEAAPEAVTaskFlowDataEngineTelemet.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapperArray@$07@@U?$_tlgWrapperByVal@$00@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3AEBU?$_tlgWrapperArray@$07@@AEBU?$_tlgWrapperByVal@$00@@3@Z @ 0x1800A8164 (--$Write@U-$_tlgWrapperByVal@$07@@U1@U-$_tlgWrapperArray@$07@@U-$_tlgWrapperByVal@$00@@U1@@-$_tl.c)
 */

void __fastcall TaskFlowDataEngineTelemetry::TaskflowImmersiveShellBroker_StartupPerf_(
        TaskFlowDataEngineTelemetry *this,
        __int64 a2,
        __int16 a3,
        __int64 a4,
        const __int64 *a5,
        bool a6)
{
  _DWORD *v9; // rcx
  int v10; // ecx
  __int64 v11; // [rsp+50h] [rbp-38h] BYREF
  __int64 v12; // [rsp+58h] [rbp-30h] BYREF
  __int64 v13; // [rsp+60h] [rbp-28h] BYREF
  __int64 v14; // [rsp+68h] [rbp-20h] BYREF
  __int16 v15; // [rsp+70h] [rbp-18h]
  __int64 v16; // [rsp+90h] [rbp+8h] BYREF

  v16 = (__int64)this;
  v9 = *(_DWORD **)(wil::details::static_lazy<TaskFlowDataEngineTelemetry>::get(
                      this,
                      _lambda_fac79a549a8b210f59d21e9b666a8346_::_lambda_invoker_cdecl_)
                  + 8);
  if ( *v9 > 5u )
  {
    if ( tlgKeywordOn((__int64)v9, 0x400000000000LL) )
    {
      LOBYTE(v16) = a6;
      v14 = (__int64)a5;
      v11 = 0x1000000LL;
      v15 = a3;
      v12 = a4;
      v13 = a2;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperArray<8>,_tlgWrapperByVal<1>,_tlgWrapperByVal<8>>(
        v10,
        (__int64)&v13,
        (__int64)&v12,
        (__int64)&v14,
        (__int64)&v16,
        (__int64)&v11);
    }
  }
}
