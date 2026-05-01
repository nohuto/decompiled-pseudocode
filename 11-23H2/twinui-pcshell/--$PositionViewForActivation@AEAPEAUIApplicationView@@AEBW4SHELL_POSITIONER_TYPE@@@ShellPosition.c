/*
 * XREFs of ??$PositionViewForActivation@AEAPEAUIApplicationView@@AEBW4SHELL_POSITIONER_TYPE@@@ShellPositionerTelemetry@@SAXAEAPEAUIApplicationView@@AEBW4SHELL_POSITIONER_TYPE@@@Z @ 0x180017298
 * Callers:
 *     ?HandleActivationRequest@ShellPositionerManager@@AEAAJW4ActivationRequestType@1@PEAUIApplicationView@@PEAUIImmersiveMonitor@@PEAUIUnknown@@PEAUIPresentationRequestedArgs@@1PEAKPEAUtagRECT@@@Z @ 0x180016D58 (-HandleActivationRequest@ShellPositionerManager@@AEAAJW4ActivationRequestType@1@PEAUIApplication.c)
 * Callees:
 *     ?IsEnabled@ShellPositionerTelemetry@@SA_NE_K@Z @ 0x180017348 (-IsEnabled@ShellPositionerTelemetry@@SA_NE_K@Z.c)
 *     ??1Completer@?$static_lazy@VTabletModeTelemetry@@@details@wil@@QEAA@XZ @ 0x1800173DC (--1Completer@-$static_lazy@VTabletModeTelemetry@@@details@wil@@QEAA@XZ.c)
 *     ?PositionViewForActivation_@ShellPositionerTelemetry@@QEBAXPEAUIApplicationView@@W4SHELL_POSITIONER_TYPE@@@Z @ 0x180017454 (-PositionViewForActivation_@ShellPositionerTelemetry@@QEBAXPEAUIApplicationView@@W4SHELL_POSITIO.c)
 *     atexit @ 0x1801C6CEC (atexit.c)
 */

char __fastcall ShellPositionerTelemetry::PositionViewForActivation<IApplicationView * &,enum SHELL_POSITIONER_TYPE const &>(
        _QWORD *a1,
        unsigned int *a2)
{
  char result; // al
  __int64 v5; // rcx
  union _RTL_RUN_ONCE *v6; // [rsp+20h] [rbp-18h] BYREF
  int v7; // [rsp+28h] [rbp-10h]
  WINBOOL fPending; // [rsp+50h] [rbp+18h] BYREF
  LPVOID Context; // [rsp+58h] [rbp+20h] BYREF

  result = ShellPositionerTelemetry::IsEnabled((unsigned __int8)a1, (unsigned __int64)a2);
  if ( result )
  {
    Context = 0LL;
    if ( __std_init_once_begin_initialize(&`ShellPositionerTelemetry::Instance'::`2'::wrapper, 0, &fPending, &Context) )
    {
      if ( fPending )
      {
        v6 = &`ShellPositionerTelemetry::Instance'::`2'::wrapper;
        Context = &qword_18098EA48;
        qword_18098EA48 = (__int64)&IamTraceLogging::`vftable';
        atexit(_lambda_8642547911a9ee42fdc61caf8f8cd99f_::_lambda_invoker_cdecl_);
        v7 = 0;
        wil::details::static_lazy<TabletModeTelemetry>::Completer::~Completer(&v6);
      }
    }
    return ShellPositionerTelemetry::PositionViewForActivation_(v5, *a1, *a2);
  }
  return result;
}
