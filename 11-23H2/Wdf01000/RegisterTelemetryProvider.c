/*
 * XREFs of RegisterTelemetryProvider @ 0x1C004DB60
 * Callers:
 *     FxLibraryCommonCommission @ 0x1C002BFD8 (FxLibraryCommonCommission.c)
 * Callees:
 *     InitializeTelemetryAssertsKMWorkerInternal @ 0x1C0086BDC (InitializeTelemetryAssertsKMWorkerInternal.c)
 *     TraceLoggingRegisterEx_EtwRegister_EtwSetInformation @ 0x1C00B0350 (TraceLoggingRegisterEx_EtwRegister_EtwSetInformation.c)
 */

int __fastcall RegisterTelemetryProvider(
        __int64 a1,
        void (__fastcall *a2)(const _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, _EVENT_FILTER_DESCRIPTOR *, void *),
        void *a3)
{
  _STRING DestinationString; // [rsp+20h] [rbp-28h] BYREF
  _STRING v5; // [rsp+30h] [rbp-18h] BYREF

  DestinationString = 0LL;
  if ( !_InterlockedExchangeAdd(&g_AssertsOperational, 0) )
  {
    RtlInitAnsiString(&DestinationString, "wdf01000.sys");
    v5 = DestinationString;
    InitializeTelemetryAssertsKMWorkerInternal(&v5);
  }
  return TraceLoggingRegisterEx_EtwRegister_EtwSetInformation(&Tlgg_TelemetryProviderProv, a2, a3);
}
