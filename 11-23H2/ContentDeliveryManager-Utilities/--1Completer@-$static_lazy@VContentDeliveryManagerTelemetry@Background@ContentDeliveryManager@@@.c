/*
 * XREFs of ??1Completer@?$static_lazy@VContentDeliveryManagerTelemetry@Background@ContentDeliveryManager@@@details@wil@@QEAA@XZ @ 0x180048468
 * Callers:
 *     ?FallbackTelemetryCallback@ContentDeliveryManagerTelemetry@Background@ContentDeliveryManager@@SAX_NAEBUFailureInfo@wil@@@Z @ 0x180049250 (-FallbackTelemetryCallback@ContentDeliveryManagerTelemetry@Background@ContentDeliveryManager@@SA.c)
 * Callees:
 *     ?InternalInitialize@TraceLoggingProvider@wil@@AEAAXXZ @ 0x180037CC8 (-InternalInitialize@TraceLoggingProvider@wil@@AEAAXXZ.c)
 *     ?Provider@ContentDeliveryManagerLogging@Background@ContentDeliveryManager@@SAQEBU_tlgProvider_t@@XZ @ 0x18004A890 (-Provider@ContentDeliveryManagerLogging@Background@ContentDeliveryManager@@SAQEBU_tlgProvider_t@.c)
 */

BOOL __fastcall wil::details::static_lazy<ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry>::Completer::~Completer(
        __int64 a1)
{
  LPINIT_ONCE v2; // rbx

  if ( !*(_DWORD *)(a1 + 8) )
  {
    v2 = *(LPINIT_ONCE *)a1;
    v2[2].Ptr = ContentDeliveryManager::Background::ContentDeliveryManagerLogging::Provider();
    LOBYTE(v2[3].Ptr) = 0;
    wil::TraceLoggingProvider::InternalInitialize((wil::TraceLoggingProvider *)&v2[1]);
  }
  return InitOnceComplete(*(LPINIT_ONCE *)a1, *(_DWORD *)(a1 + 8), (LPVOID)(*(_QWORD *)a1 + 8LL));
}
