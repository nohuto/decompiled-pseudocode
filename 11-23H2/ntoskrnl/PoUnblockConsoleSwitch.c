/*
 * XREFs of PoUnblockConsoleSwitch @ 0x140989704
 * Callers:
 *     PoPowerOffMonitor @ 0x14058F2C0 (PoPowerOffMonitor.c)
 *     PnprWakeDevices @ 0x140A9DF9C (PnprWakeDevices.c)
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
