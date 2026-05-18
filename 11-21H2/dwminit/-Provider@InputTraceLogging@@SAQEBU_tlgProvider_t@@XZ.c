/*
 * XREFs of ?Provider@InputTraceLogging@@SAQEBU_tlgProvider_t@@XZ @ 0x180008B94
 * Callers:
 *     ?ExitWait@DWM@KST@InputTraceLogging@@SAXK@Z @ 0x180008984 (-ExitWait@DWM@KST@InputTraceLogging@@SAXK@Z.c)
 *     ?Run@CKstBase@@AEAAKXZ @ 0x180008F38 (-Run@CKstBase@@AEAAKXZ.c)
 *     ?Stop@CKstBase@@QEAAXXZ @ 0x180009258 (-Stop@CKstBase@@QEAAXXZ.c)
 *     ?ThreadStart@DWM@KST@InputTraceLogging@@SAXK@Z @ 0x180009374 (-ThreadStart@DWM@KST@InputTraceLogging@@SAXK@Z.c)
 * Callees:
 *     atexit @ 0x1800021D8 (atexit.c)
 *     ??1Completer@?$static_lazy@VInputTraceLogging@@@details@wil@@QEAA@XZ @ 0x180008830 (--1Completer@-$static_lazy@VInputTraceLogging@@@details@wil@@QEAA@XZ.c)
 */

const struct _tlgProvider_t *InputTraceLogging::Provider(void)
{
  LPINIT_ONCE v1; // [rsp+20h] [rbp-18h] BYREF
  int v2; // [rsp+28h] [rbp-10h]
  WINBOOL fPending; // [rsp+40h] [rbp+8h] BYREF
  LPVOID Context; // [rsp+48h] [rbp+10h] BYREF

  Context = 0LL;
  if ( InitOnceBeginInitialize(&`InputTraceLogging::Instance'::`2'::wrapper, 0, &fPending, &Context) && fPending )
  {
    v1 = &`InputTraceLogging::Instance'::`2'::wrapper;
    Context = &qword_180019420;
    qword_180019420 = (__int64)&InputTraceLogging::`vftable';
    qword_180019438 = (__int64)&`InputTraceLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(_lambda_a8e7baa2fca040c17c3e795f3590cb07_::_lambda_invoker_cdecl_);
    v2 = 0;
    wil::details::static_lazy<InputTraceLogging>::Completer::~Completer(&v1);
  }
  return (const struct _tlgProvider_t *)*((_QWORD *)Context + 1);
}
