/*
 * XREFs of ImpRpcQueryEnabledStateAsync @ 0x1C007A3AC
 * Callers:
 *     ImpRpcAsyncResponseHandler @ 0x1C007AC8C (ImpRpcAsyncResponseHandler.c)
 *     ImpWorkerRoutine @ 0x1C007B0F0 (ImpWorkerRoutine.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C0079EA8 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C00ADF88 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 *     __security_check_cookie @ 0x1C00CDBD0 (__security_check_cookie.c)
 */

__int64 ImpRpcQueryEnabledStateAsync()
{
  int v1; // [rsp+40h] [rbp-48h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v2; // [rsp+48h] [rbp-40h] BYREF
  int *v3; // [rsp+68h] [rbp-20h]
  int v4; // [rsp+70h] [rbp-18h]
  int v5; // [rsp+74h] [rbp-14h]

  if ( !ImpRpcAsync )
    MicrosoftTelemetryAssertTriggeredNoArgsKM();
  if ( !ImpRpcAsync->u.Event )
    MicrosoftTelemetryAssertTriggeredNoArgsKM();
  if ( !ImpRpcBinding )
    MicrosoftTelemetryAssertTriggeredNoArgsKM();
  if ( !ImpRpcContext )
    MicrosoftTelemetryAssertTriggeredNoArgsKM();
  if ( ImpIsAsyncRpcReqPending )
    MicrosoftTelemetryAssertTriggeredNoArgsKM();
  Ndr64AsyncClientCall(
    (MIDL_STUBLESS_PROXY_INFO *)&pProxyInfo,
    3u,
    0LL,
    ImpRpcAsync,
    ImpRpcBinding,
    ImpRpcContext,
    &ImpIsActive);
  ImpIsAsyncRpcReqPending = 1;
  if ( (unsigned int)dword_1C0288780 > 5 )
  {
    v1 = 0;
    v3 = &v1;
    v4 = 4;
    v5 = 0;
    tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_1C0288780, (unsigned __int8 *)dword_1C02618CA, 0LL, 0LL, 3u, &v2);
  }
  return 0LL;
}
