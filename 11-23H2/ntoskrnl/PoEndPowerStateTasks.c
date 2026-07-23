/*
 * XREFs of PoEndPowerStateTasks @ 0x140989790
 * Callers:
 *     PoPowerOffMonitor @ 0x14058F7B0 (PoPowerOffMonitor.c)
 *     PnprWakeDevices @ 0x140A9DE0C (PnprWakeDevices.c)
 * Callees:
 *     PopDispatchStateCallout @ 0x140682AC8 (PopDispatchStateCallout.c)
 */

__int64 __fastcall PoEndPowerStateTasks(_DWORD *a1)
{
  a1[4] = 8;
  return PopDispatchStateCallout(a1, 0LL);
}
