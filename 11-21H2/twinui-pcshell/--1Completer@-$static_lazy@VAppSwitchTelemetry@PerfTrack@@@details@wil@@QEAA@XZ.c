/*
 * XREFs of ??1Completer@?$static_lazy@VAppSwitchTelemetry@PerfTrack@@@details@wil@@QEAA@XZ @ 0x180386604
 * Callers:
 *     ??$AppLaunched@W4Location@PerfTrack@@PEBG@AppLaunchTelemetry@PerfTrack@@SAX$$QEAW4Location@1@$$QEAPEBG@Z @ 0x18038631C (--$AppLaunched@W4Location@PerfTrack@@PEBG@AppLaunchTelemetry@PerfTrack@@SAX$$QEAW4Location@1@$$Q.c)
 *     ?IsEnabled@AppLaunchTelemetry@PerfTrack@@SA_NE_K@Z @ 0x180387A80 (-IsEnabled@AppLaunchTelemetry@PerfTrack@@SA_NE_K@Z.c)
 *     ??$AppSwitched@AEAW4SwitchLocation@PerfTrack@@PEAGAEAW4SwitchInvokeMethod@2@@AppSwitchTelemetry@PerfTrack@@SAXAEAW4SwitchLocation@1@$$QEAPEAGAEAW4SwitchInvokeMethod@1@@Z @ 0x1804BD51C (--$AppSwitched@AEAW4SwitchLocation@PerfTrack@@PEAGAEAW4SwitchInvokeMethod@2@@AppSwitchTelemetry@.c)
 *     ?IsEnabled@AppSwitchTelemetry@PerfTrack@@SA_NE_K@Z @ 0x1804BD7A4 (-IsEnabled@AppSwitchTelemetry@PerfTrack@@SA_NE_K@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?get@?$static_lazy@VCAppLifeCycle_UILogging@@@details@wil@@QEAAPEAVCAppLifeCycle_UILogging@@P6AXXZ@Z @ 0x18038876C (-get@-$static_lazy@VCAppLifeCycle_UILogging@@@details@wil@@QEAAPEAVCAppLifeCycle_UILogging@@P6AX.c)
 */

BOOL __fastcall wil::details::static_lazy<PerfTrack::AppSwitchTelemetry>::Completer::~Completer(__int64 a1)
{
  DWORD v1; // edx
  LPINIT_ONCE v3; // rbx
  union _RTL_RUN_ONCE v4; // rdx
  union _RTL_RUN_ONCE v5; // rax

  v1 = *(_DWORD *)(a1 + 8);
  if ( !v1 )
  {
    v3 = *(LPINIT_ONCE *)a1;
    v4.Ptr = *(PVOID *)(wil::details::static_lazy<CAppLifeCycle_UILogging>::get(
                          a1,
                          _lambda_692b62e119e69287558415adb7754127_::_lambda_invoker_cdecl_)
                      + 8);
    v5.Ptr = v3[1].Ptr;
    v3[2].Ptr = v4.Ptr;
    LOBYTE(v3[3].Ptr) = 0;
    HIDWORD(v3[3].Ptr) = 1;
    (*((void (__fastcall **)(LPINIT_ONCE))v5.Ptr + 1))(v3 + 1);
    v1 = *(_DWORD *)(a1 + 8);
  }
  return InitOnceComplete(*(LPINIT_ONCE *)a1, v1, (LPVOID)(*(_QWORD *)a1 + 8LL));
}
