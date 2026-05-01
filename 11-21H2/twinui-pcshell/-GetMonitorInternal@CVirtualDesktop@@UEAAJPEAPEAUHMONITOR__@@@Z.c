/*
 * XREFs of ?GetMonitorInternal@CVirtualDesktop@@UEAAJPEAPEAUHMONITOR__@@@Z @ 0x180186230
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CVirtualDesktop::GetMonitorInternal(CVirtualDesktop *this, HMONITOR *a2)
{
  *a2 = (HMONITOR)*((_QWORD *)this + 13);
  return 0LL;
}
