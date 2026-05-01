/*
 * XREFs of ??$PendingActivation@AEBQEAUHWND__@@@IamTraceLogging@@SAXAEBQEAUHWND__@@@Z @ 0x1803948DC
 * Callers:
 *     _lambda_bb299bb733d931796faa9380238be063_::operator() @ 0x18039766C (_lambda_bb299bb733d931796faa9380238be063_--operator().c)
 * Callees:
 *     atexit @ 0x1801C6CEC (atexit.c)
 *     ??1Completer@?$static_lazy@VIamTraceLogging@@@details@wil@@QEAA@XZ @ 0x180396E64 (--1Completer@-$static_lazy@VIamTraceLogging@@@details@wil@@QEAA@XZ.c)
 *     ?IsEnabled@IamTraceLogging@@SA_NE_K@Z @ 0x18039D510 (-IsEnabled@IamTraceLogging@@SA_NE_K@Z.c)
 *     ?PendingActivation_@IamTraceLogging@@QEAAXPEAUHWND__@@@Z @ 0x18039E48C (-PendingActivation_@IamTraceLogging@@QEAAXPEAUHWND__@@@Z.c)
 */

void __fastcall IamTraceLogging::PendingActivation<HWND__ * const &>(HWND *a1, unsigned __int64 a2)
{
  IamTraceLogging *v3; // rcx
  union _RTL_RUN_ONCE *v4; // [rsp+20h] [rbp-18h] BYREF
  int v5; // [rsp+28h] [rbp-10h]
  WINBOOL fPending; // [rsp+48h] [rbp+10h] BYREF
  LPVOID Context; // [rsp+50h] [rbp+18h] BYREF

  if ( IamTraceLogging::IsEnabled((unsigned __int8)a1, a2) )
  {
    Context = 0LL;
    if ( __std_init_once_begin_initialize(&`IamTraceLogging::Instance'::`2'::wrapper, 0, &fPending, &Context) )
    {
      if ( fPending )
      {
        v4 = &`IamTraceLogging::Instance'::`2'::wrapper;
        Context = &qword_18098DA78;
        qword_18098DA78 = (__int64)&IamTraceLogging::`vftable';
        atexit(_lambda_119a121fb38785c27806b92be2d82d86_::_lambda_invoker_cdecl_);
        v5 = 0;
        wil::details::static_lazy<IamTraceLogging>::Completer::~Completer(&v4);
      }
    }
    IamTraceLogging::PendingActivation_(v3, *a1);
  }
}
