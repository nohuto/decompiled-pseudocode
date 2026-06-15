/*
 * XREFs of ?CreateBridgeStreamToTargetStreamGroup@CBridgeStreamInstanceProxy@@UEAAJPEAUBRIDGE_STREAM_DESCRIPTOR@@PEAUIStreamGroupProxy@@PEAUSystemAudioStream@@@Z @ 0x180106270
 * Callers:
 *     <none>
 * Callees:
 *     ?get@?$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@P6AXXZ@Z @ 0x180024B78 (-get@-$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@.c)
 *     _lambda_95431caa3866d5f4deaba272c401a3f9_::operator() @ 0x1800734FC (_lambda_95431caa3866d5f4deaba272c401a3f9_--operator().c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$07@@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$07@@44@Z @ 0x1800D7D98 (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$07@@U2@U2@@-$_tlgWriteTemplate@$$A6AJPEBU.c)
 */

__int64 __fastcall CBridgeStreamInstanceProxy::CreateBridgeStreamToTargetStreamGroup(
        CBridgeStreamInstanceProxy *this,
        struct BRIDGE_STREAM_DESCRIPTOR *a2,
        struct IStreamGroupProxy *a3,
        struct SystemAudioStream *a4)
{
  char *v4; // rsi
  unsigned int v6; // ebx
  __int64 v7; // rcx
  _DWORD *v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  struct IStreamGroupProxy *v12; // [rsp+48h] [rbp-9h] BYREF
  __int64 v13; // [rsp+50h] [rbp-1h] BYREF
  char *v14; // [rsp+58h] [rbp+7h] BYREF
  _QWORD v15[9]; // [rsp+60h] [rbp+Fh] BYREF
  unsigned int v16; // [rsp+B8h] [rbp+67h] BYREF
  struct BRIDGE_STREAM_DESCRIPTOR *v17; // [rsp+C0h] [rbp+6Fh] BYREF
  struct IStreamGroupProxy *v18; // [rsp+C8h] [rbp+77h] BYREF
  struct SystemAudioStream *v19; // [rsp+D0h] [rbp+7Fh] BYREF

  v19 = a4;
  v18 = a3;
  v17 = a2;
  v4 = (char *)this - 40;
  v15[1] = (char *)this - 40;
  v15[0] = &v18;
  v15[2] = &v17;
  v15[3] = &v19;
  v6 = lambda_95431caa3866d5f4deaba272c401a3f9_::operator()((__int64)v15);
  v8 = (_DWORD *)wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
                   v7,
                   _lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_)[1];
  if ( *v8 > 4u )
  {
    v12 = v18;
    v13 = *((_QWORD *)this - 1);
    v14 = v4;
    v16 = v6;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>>(
      (__int64)v8,
      byte_180192A92,
      v9,
      v10,
      (__int64)&v16,
      (__int64)&v14,
      (__int64)&v13,
      (__int64)&v12);
  }
  return v6;
}
