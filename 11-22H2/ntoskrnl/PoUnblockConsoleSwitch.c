/*
 * XREFs of PoUnblockConsoleSwitch @ 0x1409897B4
 * Callers:
 *     PoPowerOffMonitor @ 0x14058F350 (PoPowerOffMonitor.c)
 *     PnprWakeDevices @ 0x140A9E05C (PnprWakeDevices.c)
 * Callees:
 *     PopDispatchStateCallout @ 0x140682AC8 (PopDispatchStateCallout.c)
 */

__int64 __fastcall PoUnblockConsoleSwitch(_DWORD *a1, int a2)
{
  int v3; // [rsp+38h] [rbp+10h] BYREF

  v3 = a2;
  a1[4] = 7;
  return PopDispatchStateCallout(a1, (__int64)&v3);
}
