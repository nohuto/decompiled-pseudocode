/*
 * XREFs of ??1Completer@?$static_lazy@VTaskbarSearchAppPositionerTelemetry@@@details@wil@@QEAA@XZ @ 0x180144450
 * Callers:
 *     ?get@?$static_lazy@VTaskbarSearchAppPositionerTelemetry@@@details@wil@@QEAAPEAVTaskbarSearchAppPositionerTelemetry@@P6AXXZ@Z @ 0x1801443BC (-get@-$static_lazy@VTaskbarSearchAppPositionerTelemetry@@@details@wil@@QEAAPEAVTaskbarSearchAppP.c)
 * Callees:
 *     ?get@?$static_lazy@VSearchAppLauncherLogging@@@details@wil@@QEAAPEAVSearchAppLauncherLogging@@P6AXXZ@Z @ 0x180092A5C (-get@-$static_lazy@VSearchAppLauncherLogging@@@details@wil@@QEAAPEAVSearchAppLauncherLogging@@P6.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

BOOL __fastcall wil::details::static_lazy<TaskbarSearchAppPositionerTelemetry>::Completer::~Completer(__int64 a1)
{
  DWORD v1; // edx
  LPINIT_ONCE v3; // rbx
  __int64 v4; // rdx
  union _RTL_RUN_ONCE v5; // rax

  v1 = *(_DWORD *)(a1 + 8);
  if ( !v1 )
  {
    v3 = *(LPINIT_ONCE *)a1;
    v4 = wil::details::static_lazy<SearchAppLauncherLogging>::get(
           a1,
           _lambda_96ed31eb20dc318a71419abe3e3a699d_::_lambda_invoker_cdecl_)[1];
    v5.Ptr = v3[1].Ptr;
    v3[2].Ptr = (PVOID)v4;
    LOBYTE(v3[3].Ptr) = 0;
    HIDWORD(v3[3].Ptr) = 1;
    (*((void (__fastcall **)(LPINIT_ONCE))v5.Ptr + 1))(v3 + 1);
    v1 = *(_DWORD *)(a1 + 8);
  }
  return InitOnceComplete(*(LPINIT_ONCE *)a1, v1, (LPVOID)(*(_QWORD *)a1 + 8LL));
}
