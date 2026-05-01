/*
 * XREFs of ??$Write@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapperArray@$07@@U?$_tlgWrapperByVal@$00@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3AEBU?$_tlgWrapperArray@$07@@AEBU?$_tlgWrapperByVal@$00@@3@Z @ 0x1800A8164
 * Callers:
 *     ?TaskflowImmersiveShellBroker_StartupPerf_@TaskFlowDataEngineTelemetry@@QEAAX_JG_KPEB_J_N@Z @ 0x1800A77D4 (-TaskflowImmersiveShellBroker_StartupPerf_@TaskFlowDataEngineTelemetry@@QEAAX_JG_KPEB_J_N@Z.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x180090C50 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 */

ULONG __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperArray<8>,_tlgWrapperByVal<1>,_tlgWrapperByVal<8>>(
        __int64 a1,
        unsigned __int8 *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 *a7,
        __int64 a8,
        __int64 a9)
{
  struct _EVENT_DATA_DESCRIPTOR v10; // [rsp+30h] [rbp-61h] BYREF
  __int64 v11; // [rsp+50h] [rbp-41h]
  __int64 v12; // [rsp+58h] [rbp-39h]
  __int64 v13; // [rsp+60h] [rbp-31h]
  __int64 v14; // [rsp+68h] [rbp-29h]
  __int64 *v15; // [rsp+70h] [rbp-21h]
  __int64 v16; // [rsp+78h] [rbp-19h]
  __int64 v17; // [rsp+80h] [rbp-11h]
  int v18; // [rsp+88h] [rbp-9h]
  int v19; // [rsp+8Ch] [rbp-5h]
  __int64 v20; // [rsp+90h] [rbp-1h]
  __int64 v21; // [rsp+98h] [rbp+7h]
  __int64 v22; // [rsp+A0h] [rbp+Fh]
  __int64 v23; // [rsp+A8h] [rbp+17h]

  v22 = a9;
  v20 = a8;
  v23 = 8LL;
  v14 = 8LL;
  v12 = 8LL;
  v21 = 1LL;
  v17 = *a7;
  v18 = 8 * *((unsigned __int16 *)a7 + 4);
  v13 = a6;
  v11 = a5;
  v15 = a7 + 1;
  v16 = 2LL;
  v19 = 0;
  return tlgWriteTransfer_EventWriteTransfer(a1, a2, 0LL, 0LL, 8u, &v10);
}
