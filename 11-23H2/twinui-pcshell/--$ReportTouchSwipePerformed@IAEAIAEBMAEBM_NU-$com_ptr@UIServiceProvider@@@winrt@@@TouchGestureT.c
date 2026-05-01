/*
 * XREFs of ??$ReportTouchSwipePerformed@IAEAIAEBMAEBM_NU?$com_ptr@UIServiceProvider@@@winrt@@@TouchGestureTelemetry@@SAX$$QEAIAEAIAEBM2$$QEA_N$$QEAU?$com_ptr@UIServiceProvider@@@winrt@@@Z @ 0x18064E6E0
 * Callers:
 *     ?StartSwipe@TouchGestureProcessor@@QEAAXIAEBUPoint@Foundation@Windows@winrt@@@Z @ 0x180651D0C (-StartSwipe@TouchGestureProcessor@@QEAAXIAEBUPoint@Foundation@Windows@winrt@@@Z.c)
 * Callees:
 *     ??1Completer@?$static_lazy@VTouchGestureTelemetry@@@details@wil@@QEAA@XZ @ 0x18016D558 (--1Completer@-$static_lazy@VTouchGestureTelemetry@@@details@wil@@QEAA@XZ.c)
 *     atexit @ 0x1801C6CEC (atexit.c)
 *     ?IsEnabled@TouchGestureTelemetry@@SA_NE_K@Z @ 0x180650C18 (-IsEnabled@TouchGestureTelemetry@@SA_NE_K@Z.c)
 *     ?ReportTouchSwipePerformed_@TouchGestureTelemetry@@QEAAXIIMM_NU?$com_ptr@UIServiceProvider@@@winrt@@@Z @ 0x180651874 (-ReportTouchSwipePerformed_@TouchGestureTelemetry@@QEAAXIIMM_NU-$com_ptr@UIServiceProvider@@@win.c)
 */

char __fastcall TouchGestureTelemetry::ReportTouchSwipePerformed<unsigned int,unsigned int &,float const &,float const &,bool,winrt::com_ptr<IServiceProvider>>(
        _DWORD *a1,
        _DWORD *a2,
        __int64 a3,
        _DWORD *a4,
        char *a5,
        __int64 *a6)
{
  char result; // al
  int v10; // r9d
  __int64 v11; // rcx
  WINBOOL fPending; // [rsp+40h] [rbp-38h] BYREF
  LPVOID Context; // [rsp+48h] [rbp-30h] BYREF
  __int64 v14; // [rsp+50h] [rbp-28h] BYREF
  union _RTL_RUN_ONCE *v15; // [rsp+58h] [rbp-20h] BYREF
  int v16; // [rsp+60h] [rbp-18h]

  result = TouchGestureTelemetry::IsEnabled((unsigned __int8)a1, (unsigned __int64)a2);
  if ( result )
  {
    Context = 0LL;
    if ( __std_init_once_begin_initialize(&`TouchGestureTelemetry::Instance'::`2'::wrapper, 0, &fPending, &Context) )
    {
      if ( fPending )
      {
        v15 = &`TouchGestureTelemetry::Instance'::`2'::wrapper;
        Context = &qword_18098FEB0;
        qword_18098FEB0 = (__int64)&IamTraceLogging::`vftable';
        atexit(_lambda_c1686dbf6f369f9bd2670974c78803b0_::_lambda_invoker_cdecl_);
        v16 = 0;
        wil::details::static_lazy<TouchGestureTelemetry>::Completer::~Completer((__int64)&v15);
      }
    }
    v11 = *a6;
    *a6 = 0LL;
    v14 = v11;
    LOBYTE(v11) = *a5;
    return TouchGestureTelemetry::ReportTouchSwipePerformed_(v11, *a1, *a2, v10, *a4, *a5, (__int64)&v14);
  }
  return result;
}
