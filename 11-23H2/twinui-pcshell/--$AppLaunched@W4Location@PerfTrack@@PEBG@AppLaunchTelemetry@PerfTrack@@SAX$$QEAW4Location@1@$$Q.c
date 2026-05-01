/*
 * XREFs of ??$AppLaunched@W4Location@PerfTrack@@PEBG@AppLaunchTelemetry@PerfTrack@@SAX$$QEAW4Location@1@$$QEAPEBG@Z @ 0x18045A97C
 * Callers:
 *     ?LaunchOrCloseAppAsync@CortanaStoreAppExperienceManager@@UEAAJXZ @ 0x18045BDA0 (-LaunchOrCloseAppAsync@CortanaStoreAppExperienceManager@@UEAAJXZ.c)
 * Callees:
 *     atexit @ 0x1801C6CEC (atexit.c)
 *     ??1Completer@?$static_lazy@VAppSwitchTelemetry@PerfTrack@@@details@wil@@QEAA@XZ @ 0x18045AC58 (--1Completer@-$static_lazy@VAppSwitchTelemetry@PerfTrack@@@details@wil@@QEAA@XZ.c)
 *     ?AppLaunched_@AppLaunchTelemetry@PerfTrack@@QEAAXW4Location@2@PEBG@Z @ 0x18045AF84 (-AppLaunched_@AppLaunchTelemetry@PerfTrack@@QEAAXW4Location@2@PEBG@Z.c)
 *     ?IsEnabled@AppLaunchTelemetry@PerfTrack@@SA_NE_K@Z @ 0x18045BC70 (-IsEnabled@AppLaunchTelemetry@PerfTrack@@SA_NE_K@Z.c)
 */

char __fastcall PerfTrack::AppLaunchTelemetry::AppLaunched<enum PerfTrack::Location,unsigned short const *>(
        unsigned int *a1,
        _QWORD *a2)
{
  char result; // al
  __int64 v5; // rcx
  union _RTL_RUN_ONCE *v6; // [rsp+20h] [rbp-18h] BYREF
  int v7; // [rsp+28h] [rbp-10h]
  WINBOOL fPending; // [rsp+50h] [rbp+18h] BYREF
  LPVOID Context; // [rsp+58h] [rbp+20h] BYREF

  result = PerfTrack::AppLaunchTelemetry::IsEnabled((unsigned __int8)a1, (unsigned __int64)a2);
  if ( result )
  {
    Context = 0LL;
    if ( __std_init_once_begin_initialize(
           &`PerfTrack::AppLaunchTelemetry::Instance'::`2'::wrapper,
           0,
           &fPending,
           &Context) )
    {
      if ( fPending )
      {
        v6 = &`PerfTrack::AppLaunchTelemetry::Instance'::`2'::wrapper;
        Context = &qword_18098E2A8;
        qword_18098E2A8 = (__int64)&IamTraceLogging::`vftable';
        atexit(_lambda_15efdcdc02dcce07b3179f5b4d1fe0a3_::_lambda_invoker_cdecl_);
        v7 = 0;
        wil::details::static_lazy<PerfTrack::AppSwitchTelemetry>::Completer::~Completer(&v6);
      }
    }
    return PerfTrack::AppLaunchTelemetry::AppLaunched_(v5, *a1, *a2);
  }
  return result;
}
