/*
 * XREFs of ?IsSimulatedMonitor@DXGMONITOR@@UEBA_NXZ @ 0x1C02291F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall DXGMONITOR::IsSimulatedMonitor(DXGMONITOR *this)
{
  return *((_DWORD *)this + 78) != 1;
}
