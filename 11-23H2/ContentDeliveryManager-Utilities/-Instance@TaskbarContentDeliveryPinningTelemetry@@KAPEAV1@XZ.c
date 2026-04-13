/*
 * XREFs of ?Instance@TaskbarContentDeliveryPinningTelemetry@@KAPEAV1@XZ @ 0x180037C10
 * Callers:
 *     ??R_lambda_3a3b929e5d63e7f37c8f1fb2c9733fad_@@QEBA@XZ @ 0x18002CEE0 (--R_lambda_3a3b929e5d63e7f37c8f1fb2c9733fad_@@QEBA@XZ.c)
 * Callees:
 *     atexit @ 0x180022964 (atexit.c)
 *     ??1Completer@?$static_lazy@VTaskbarContentDeliveryPinningTelemetry@@@details@wil@@QEAA@XZ @ 0x18002C338 (--1Completer@-$static_lazy@VTaskbarContentDeliveryPinningTelemetry@@@details@wil@@QEAA@XZ.c)
 */

struct TaskbarContentDeliveryPinningTelemetry *TaskbarContentDeliveryPinningTelemetry::Instance(void)
{
  union _RTL_RUN_ONCE *v1; // [rsp+20h] [rbp-18h] BYREF
  int v2; // [rsp+28h] [rbp-10h]
  WINBOOL fPending; // [rsp+40h] [rbp+8h] BYREF
  LPVOID Context; // [rsp+48h] [rbp+10h] BYREF

  Context = 0LL;
  if ( InitOnceBeginInitialize(
         &`TaskbarContentDeliveryPinningTelemetry::Instance'::`2'::wrapper,
         0,
         &fPending,
         &Context)
    && fPending )
  {
    v1 = &`TaskbarContentDeliveryPinningTelemetry::Instance'::`2'::wrapper;
    Context = &qword_1801964C8;
    qword_1801964C8 = (__int64)&CreativeFramework::Logging::ShellPlacementLogging::`vftable';
    atexit(_lambda_8df9595ef2b54e9d87dd50e21e23ed4b_::_lambda_invoker_cdecl_);
    v2 = 0;
    wil::details::static_lazy<TaskbarContentDeliveryPinningTelemetry>::Completer::~Completer((__int64)&v1);
  }
  return (struct TaskbarContentDeliveryPinningTelemetry *)Context;
}
