/*
 * XREFs of PopIssueDirectedPowerTransition @ 0x1409977F0
 * Callers:
 *     PopWakeDeviceList @ 0x14038BB00 (PopWakeDeviceList.c)
 *     PopSleepDeviceList @ 0x14038BCE0 (PopSleepDeviceList.c)
 * Callees:
 *     PoFxActivateDevice @ 0x1402D2848 (PoFxActivateDevice.c)
 *     PopFxIssueDirectedPowerTransition @ 0x1405CCCFC (PopFxIssueDirectedPowerTransition.c)
 *     PopCompleteDirectedPowerTransitionCallback @ 0x1405D6DC4 (PopCompleteDirectedPowerTransitionCallback.c)
 *     PopDirectedDripsIsPnpSoftwareDeviceNode @ 0x14098C04C (PopDirectedDripsIsPnpSoftwareDeviceNode.c)
 */

__int64 __fastcall PopIssueDirectedPowerTransition(__int64 a1, __int64 a2)
{
  ULONG_PTR v3; // rdi
  char v4; // si

  v3 = *(_QWORD *)(a2 - 160 + 80);
  if ( *(_BYTE *)a1 == 3 )
    return PopCompleteDirectedPowerTransitionCallback(v3, a1, 0);
  v4 = 0;
  if ( PopDirectedDripsIsPnpSoftwareDeviceNode(a2 - 160) )
    return PopCompleteDirectedPowerTransitionCallback(v3, a1, 0);
  if ( *(_DWORD *)(a1 + 4) != 1 )
  {
    v4 = 1;
    PoFxActivateDevice(*(_QWORD *)(*(_QWORD *)(v3 + 48) + 32LL));
  }
  return PopFxIssueDirectedPowerTransition(v3, v4, a1);
}
