/*
 * XREFs of ?WorkAreaMayHaveChanged@XamlLauncherState@@UEAAXXZ @ 0x1802D9F00
 * Callers:
 *     <none>
 * Callees:
 *     ?HideCortana@XamlLauncherState@@UEAAXXZ @ 0x1800607F0 (-HideCortana@XamlLauncherState@@UEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?HideCortanaDueToDisplayChange@StartWindowTelemetry@@SAXXZ @ 0x180505A58 (-HideCortanaDueToDisplayChange@StartWindowTelemetry@@SAXXZ.c)
 */

void __fastcall XamlLauncherState::WorkAreaMayHaveChanged(XamlLauncherState *this)
{
  __int64 v2; // rdx

  (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 7) + 104LL))(*((_QWORD *)this + 7));
  if ( *((_DWORD *)this + 10) == 7 )
  {
    StartWindowTelemetry::HideCortanaDueToDisplayChange();
    XamlLauncherState::HideCortana(this, v2);
  }
}
