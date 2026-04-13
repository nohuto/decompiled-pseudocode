/*
 * XREFs of ??1Completer@?$static_lazy@VTaskbarContentDeliveryPinningTelemetry@@@details@wil@@QEAA@XZ @ 0x18002C338
 * Callers:
 *     ?Instance@TaskbarContentDeliveryPinningTelemetry@@KAPEAV1@XZ @ 0x180037C10 (-Instance@TaskbarContentDeliveryPinningTelemetry@@KAPEAV1@XZ.c)
 * Callees:
 *     ?InternalInitialize@TraceLoggingProvider@wil@@AEAAXXZ @ 0x180037CC8 (-InternalInitialize@TraceLoggingProvider@wil@@AEAAXXZ.c)
 *     ?get@?$static_lazy@VTaskbarLogging@@@details@wil@@QEAAPEAVTaskbarLogging@@P6AXXZ@Z @ 0x180043DF0 (-get@-$static_lazy@VTaskbarLogging@@@details@wil@@QEAAPEAVTaskbarLogging@@P6AXXZ@Z.c)
 */

BOOL __fastcall wil::details::static_lazy<TaskbarContentDeliveryPinningTelemetry>::Completer::~Completer(__int64 a1)
{
  LPINIT_ONCE v2; // rbx

  if ( !*(_DWORD *)(a1 + 8) )
  {
    v2 = *(LPINIT_ONCE *)a1;
    v2[2].Ptr = *(PVOID *)(wil::details::static_lazy<TaskbarLogging>::get(
                             a1,
                             _lambda_fb11ae61ca52cbbca3d237d126ab4bed_::_lambda_invoker_cdecl_)
                         + 8);
    LOBYTE(v2[3].Ptr) = 0;
    wil::TraceLoggingProvider::InternalInitialize((wil::TraceLoggingProvider *)&v2[1]);
  }
  return InitOnceComplete(*(LPINIT_ONCE *)a1, *(_DWORD *)(a1 + 8), (LPVOID)(*(_QWORD *)a1 + 8LL));
}
