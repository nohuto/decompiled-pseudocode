/*
 * XREFs of PoStartPowerStateTasks @ 0x1409896E4
 * Callers:
 *     PoPowerOffMonitor @ 0x14058F2C0 (PoPowerOffMonitor.c)
 *     PnprQuiesceDevices @ 0x140A9D304 (PnprQuiesceDevices.c)
 * Callees:
 *     PopDispatchStateCallout @ 0x140682AC8 (PopDispatchStateCallout.c)
 */

__int64 __fastcall PoStartPowerStateTasks(_DWORD *a1)
{
  a1[4] = 1;
  return PopDispatchStateCallout(a1, 0LL);
}
