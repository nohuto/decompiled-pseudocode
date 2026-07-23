/*
 * XREFs of PopIssueDirectedPowerTransition @ 0x14098BD90
 * Callers:
 *     PopSleepDeviceList @ 0x140590AA8 (PopSleepDeviceList.c)
 *     PopWakeDeviceList @ 0x140590D4C (PopWakeDeviceList.c)
 * Callees:
 *     PoFxActivateDevice @ 0x140322A64 (PoFxActivateDevice.c)
 *     PopFxIssueDirectedPowerTransition @ 0x14058AE84 (PopFxIssueDirectedPowerTransition.c)
 *     PopCompleteDirectedPowerTransitionCallback @ 0x1405904A4 (PopCompleteDirectedPowerTransitionCallback.c)
 *     PopDirectedDripsIsPnpSoftwareDeviceNode @ 0x140983A14 (PopDirectedDripsIsPnpSoftwareDeviceNode.c)
 */

void __fastcall PopIssueDirectedPowerTransition(__int64 a1, __int64 a2)
{
  ULONG_PTR v3; // rdi
  char v4; // si

  v3 = *(_QWORD *)(a2 - 160 + 80);
  if ( *(_BYTE *)a1 == 3 || (v4 = 0, PopDirectedDripsIsPnpSoftwareDeviceNode(a2 - 160)) )
  {
    PopCompleteDirectedPowerTransitionCallback(v3, a1, 0LL);
  }
  else
  {
    if ( *(_DWORD *)(a1 + 4) != 1 )
    {
      v4 = 1;
      PoFxActivateDevice(*(_QWORD *)(*(_QWORD *)(v3 + 48) + 32LL));
    }
    PopFxIssueDirectedPowerTransition(v3, v4, a1);
  }
}
