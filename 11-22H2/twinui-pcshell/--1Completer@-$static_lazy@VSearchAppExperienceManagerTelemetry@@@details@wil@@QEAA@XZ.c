/*
 * XREFs of ??1Completer@?$static_lazy@VSearchAppExperienceManagerTelemetry@@@details@wil@@QEAA@XZ @ 0x180038D90
 * Callers:
 *     ?get@?$static_lazy@VSearchAppExperienceManagerTelemetry@@@details@wil@@QEAAPEAVSearchAppExperienceManagerTelemetry@@P6AXXZ@Z @ 0x180038BDC (-get@-$static_lazy@VSearchAppExperienceManagerTelemetry@@@details@wil@@QEAAPEAVSearchAppExperien.c)
 *     ?get@?$static_lazy@VSearchBoxOnTaskbarSearchAppPositionerTelemetry@@@details@wil@@QEAAPEAVSearchBoxOnTaskbarSearchAppPositionerTelemetry@@P6AXXZ@Z @ 0x1800B6618 (-get@-$static_lazy@VSearchBoxOnTaskbarSearchAppPositionerTelemetry@@@details@wil@@QEAAPEAVSearch.c)
 * Callees:
 *     ?get@?$static_lazy@VSearchAppLauncherLogging@@@details@wil@@QEAAPEAVSearchAppLauncherLogging@@P6AXXZ@Z @ 0x1800BB23C (-get@-$static_lazy@VSearchAppLauncherLogging@@@details@wil@@QEAAPEAVSearchAppLauncherLogging@@P6.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

BOOL __fastcall wil::details::static_lazy<SearchAppExperienceManagerTelemetry>::Completer::~Completer(__int64 a1)
{
  LPINIT_ONCE v2; // rbx
  union _RTL_RUN_ONCE v3; // rdx
  union _RTL_RUN_ONCE v4; // rax

  if ( !*(_DWORD *)(a1 + 8) )
  {
    v2 = *(LPINIT_ONCE *)a1;
    v3.Ptr = *(PVOID *)(wil::details::static_lazy<SearchAppLauncherLogging>::get(
                          a1,
                          _lambda_96ed31eb20dc318a71419abe3e3a699d_::_lambda_invoker_cdecl_)
                      + 8);
    v4.Ptr = v2[1].Ptr;
    v2[2].Ptr = v3.Ptr;
    LOBYTE(v2[3].Ptr) = 0;
    HIDWORD(v2[3].Ptr) = 1;
    (*((void (__fastcall **)(LPINIT_ONCE))v4.Ptr + 1))(v2 + 1);
  }
  return InitOnceComplete(*(LPINIT_ONCE *)a1, *(_DWORD *)(a1 + 8), (LPVOID)(*(_QWORD *)a1 + 8LL));
}
