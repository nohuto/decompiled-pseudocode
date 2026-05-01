/*
 * XREFs of ?Instance@SearchAppExperienceManagerTelemetry@@KAPEAV1@XZ @ 0x18019F3BC
 * Callers:
 *     ?ResetAppRectClip@UndockedSearchAppExperienceManager@@AEAAXXZ @ 0x1801A087C (-ResetAppRectClip@UndockedSearchAppExperienceManager@@AEAAXXZ.c)
 * Callees:
 *     atexit @ 0x18018879C (atexit.c)
 *     ??1Completer@?$static_lazy@VSearchAppExperienceManagerTelemetry@@@details@wil@@QEAA@XZ @ 0x18019BE10 (--1Completer@-$static_lazy@VSearchAppExperienceManagerTelemetry@@@details@wil@@QEAA@XZ.c)
 */

struct SearchAppExperienceManagerTelemetry *SearchAppExperienceManagerTelemetry::Instance(void)
{
  union _RTL_RUN_ONCE *v1; // [rsp+20h] [rbp-18h] BYREF
  int v2; // [rsp+28h] [rbp-10h]
  WINBOOL fPending; // [rsp+40h] [rbp+8h] BYREF
  LPVOID Context; // [rsp+48h] [rbp+10h] BYREF

  Context = 0LL;
  if ( __std_init_once_begin_initialize(
         &`SearchAppExperienceManagerTelemetry::Instance'::`2'::wrapper,
         0,
         &fPending,
         &Context)
    && fPending )
  {
    v1 = &`SearchAppExperienceManagerTelemetry::Instance'::`2'::wrapper;
    Context = &qword_1807B4FC0;
    qword_1807B4FC0 = (__int64)&IamTraceLogging::`vftable';
    atexit(_lambda_db4a2adff33d12a6f55c62cd979ac014_::_lambda_invoker_cdecl_);
    v2 = 0;
    wil::details::static_lazy<SearchAppExperienceManagerTelemetry>::Completer::~Completer((__int64)&v1);
  }
  return (struct SearchAppExperienceManagerTelemetry *)Context;
}
