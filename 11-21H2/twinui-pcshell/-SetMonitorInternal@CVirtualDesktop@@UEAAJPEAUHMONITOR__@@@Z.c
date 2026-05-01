/*
 * XREFs of ?SetMonitorInternal@CVirtualDesktop@@UEAAJPEAUHMONITOR__@@@Z @ 0x180186250
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CVirtualDesktop::SetMonitorInternal(CVirtualDesktop *this, HMONITOR a2)
{
  *((_QWORD *)this + 13) = a2;
  return 0LL;
}
