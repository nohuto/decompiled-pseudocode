/*
 * XREFs of ??$AppSwitched@AEAW4SwitchLocation@PerfTrack@@PEAGAEAW4SwitchInvokeMethod@2@@AppSwitchTelemetry@PerfTrack@@SAXAEAW4SwitchLocation@1@$$QEAPEAGAEAW4SwitchInvokeMethod@1@@Z @ 0x1804BD51C
 * Callers:
 *     ?SendAppSwitchTelemetry@ViewHostTelemetry@@YAJPEAUISwitchItem@@W4SwitchLocation@PerfTrack@@W4SwitchInvokeMethod@4@@Z @ 0x1804BD838 (-SendAppSwitchTelemetry@ViewHostTelemetry@@YAJPEAUISwitchItem@@W4SwitchLocation@PerfTrack@@W4Swi.c)
 * Callees:
 *     atexit @ 0x18018879C (atexit.c)
 *     ??1Completer@?$static_lazy@VAppSwitchTelemetry@PerfTrack@@@details@wil@@QEAA@XZ @ 0x180386604 (--1Completer@-$static_lazy@VAppSwitchTelemetry@PerfTrack@@@details@wil@@QEAA@XZ.c)
 *     ?AppSwitched_@AppSwitchTelemetry@PerfTrack@@QEAAXW4SwitchLocation@2@PEBGW4SwitchInvokeMethod@2@1@Z @ 0x1804BD6DC (-AppSwitched_@AppSwitchTelemetry@PerfTrack@@QEAAXW4SwitchLocation@2@PEBGW4SwitchInvokeMethod@2@1.c)
 *     ?IsEnabled@AppSwitchTelemetry@PerfTrack@@SA_NE_K@Z @ 0x1804BD7A4 (-IsEnabled@AppSwitchTelemetry@PerfTrack@@SA_NE_K@Z.c)
 */

char __fastcall PerfTrack::AppSwitchTelemetry::AppSwitched<enum PerfTrack::SwitchLocation &,unsigned short *,enum PerfTrack::SwitchInvokeMethod &>(
        unsigned int *a1,
        _QWORD *a2,
        unsigned int *a3)
{
  char result; // al
  __int64 v7; // rcx
  LPVOID Context; // [rsp+30h] [rbp-28h] BYREF
  union _RTL_RUN_ONCE *v9; // [rsp+38h] [rbp-20h] BYREF
  int v10; // [rsp+40h] [rbp-18h]
  WINBOOL fPending; // [rsp+78h] [rbp+20h] BYREF

  result = PerfTrack::AppSwitchTelemetry::IsEnabled((unsigned __int8)a1, (unsigned __int64)a2);
  if ( result )
  {
    Context = 0LL;
    if ( __std_init_once_begin_initialize(
           &`PerfTrack::AppSwitchTelemetry::Instance'::`2'::wrapper,
           0,
           &fPending,
           &Context) )
    {
      if ( fPending )
      {
        v9 = &`PerfTrack::AppSwitchTelemetry::Instance'::`2'::wrapper;
        Context = &qword_1807B5548;
        qword_1807B5548 = (__int64)&IamTraceLogging::`vftable';
        atexit(_lambda_2ca303a503a9bc4bb017c32a5a335e85_::_lambda_invoker_cdecl_);
        v10 = 0;
        wil::details::static_lazy<PerfTrack::AppSwitchTelemetry>::Completer::~Completer((__int64)&v9);
      }
    }
    return PerfTrack::AppSwitchTelemetry::AppSwitched_(v7, *a1, *a2, *a3);
  }
  return result;
}
