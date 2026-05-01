/*
 * XREFs of ?GetCortanaVisibleMonitor@XamlLauncherState@@UEAAJPEAPEAUHMONITOR__@@@Z @ 0x1801C2430
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall XamlLauncherState::GetCortanaVisibleMonitor(XamlLauncherState *this, HMONITOR *a2)
{
  *a2 = (HMONITOR)*((_QWORD *)this + 128);
  return 0LL;
}
