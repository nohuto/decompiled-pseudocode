/*
 * XREFs of ?GetMonitor@CLaunchToMonitor@@UEAAJPEAPEAUHMONITOR__@@@Z @ 0x1801C5410
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CLaunchToMonitor::GetMonitor(CLaunchToMonitor *this, HMONITOR *a2)
{
  *a2 = (HMONITOR)*((_QWORD *)this + 8);
  return 0LL;
}
