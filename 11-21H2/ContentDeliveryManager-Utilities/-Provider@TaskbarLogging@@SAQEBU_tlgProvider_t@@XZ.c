/*
 * XREFs of ?Provider@TaskbarLogging@@SAQEBU_tlgProvider_t@@XZ @ 0x18003C0DC
 * Callers:
 *     ??$TaskbarOutOfSpaceForPin@AEBQEBG@TaskbarContentDeliveryPinningTelemetry@@SAXAEBQEBG@Z @ 0x180025DD8 (--$TaskbarOutOfSpaceForPin@AEBQEBG@TaskbarContentDeliveryPinningTelemetry@@SAXAEBQEBG@Z.c)
 *     ??1Completer@?$static_lazy@VTaskbarContentDeliveryPinningTelemetry@@@details@wil@@QEAA@XZ @ 0x18002905C (--1Completer@-$static_lazy@VTaskbarContentDeliveryPinningTelemetry@@@details@wil@@QEAA@XZ.c)
 * Callees:
 *     atexit @ 0x180022154 (atexit.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z@Z @ 0x1800409FC (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILT.c)
 */

const struct _tlgProvider_t *TaskbarLogging::Provider(void)
{
  void (*v0)(const struct _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, void *); // r8
  WINBOOL fPending; // [rsp+30h] [rbp+8h] BYREF
  LPVOID Context; // [rsp+38h] [rbp+10h] BYREF

  Context = 0LL;
  if ( InitOnceBeginInitialize(&`TaskbarLogging::Instance'::`2'::wrapper, 0, &fPending, &Context) && fPending )
  {
    Context = qword_1801AF3B0;
    qword_1801AF3B0[0] = &CreativeFramework::Logging::ShellPlacementLogging::`vftable';
    qword_1801AF3C8 = (struct _tlgProvider_t *)&`TaskbarLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(_lambda_fb11ae61ca52cbbca3d237d126ab4bed_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_1801AF3B0, qword_1801AF3C8, v0);
    InitOnceComplete(&`TaskbarLogging::Instance'::`2'::wrapper, 0, qword_1801AF3B0);
  }
  return (const struct _tlgProvider_t *)*((_QWORD *)Context + 1);
}
