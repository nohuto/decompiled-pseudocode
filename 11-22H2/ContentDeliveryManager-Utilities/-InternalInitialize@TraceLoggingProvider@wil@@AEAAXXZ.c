/*
 * XREFs of ?InternalInitialize@TraceLoggingProvider@wil@@AEAAXXZ @ 0x180037CC8
 * Callers:
 *     ??1Completer@?$static_lazy@VTaskbarContentDeliveryPinningTelemetry@@@details@wil@@QEAA@XZ @ 0x18002C338 (--1Completer@-$static_lazy@VTaskbarContentDeliveryPinningTelemetry@@@details@wil@@QEAA@XZ.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z@Z @ 0x18003BF9C (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILT.c)
 *     ??1Completer@?$static_lazy@VContentDeliveryManagerTelemetry@Background@ContentDeliveryManager@@@details@wil@@QEAA@XZ @ 0x1800484B8 (--1Completer@-$static_lazy@VContentDeliveryManagerTelemetry@Background@ContentDeliveryManager@@@.c)
 * Callees:
 *     <none>
 */

void __fastcall wil::TraceLoggingProvider::InternalInitialize(wil::TraceLoggingProvider *this)
{
  __int64 v1; // rax

  v1 = *(_QWORD *)this;
  *((_DWORD *)this + 5) = 1;
  (*(void (**)(void))(v1 + 8))();
}
