/*
 * XREFs of PoFxActivateDevice @ 0x140322ED4
 * Callers:
 *     PipProcessDevNodeTree @ 0x1406CB6C0 (PipProcessDevNodeTree.c)
 *     PiProcessQueryDeviceState @ 0x14079347C (PiProcessQueryDeviceState.c)
 *     PipEnumerateDevice @ 0x140794F6C (PipEnumerateDevice.c)
 *     PnpDeleteLockedDeviceNode @ 0x140868668 (PnpDeleteLockedDeviceNode.c)
 *     PiProcessResourceRequirementsChanged @ 0x1409596D4 (PiProcessResourceRequirementsChanged.c)
 *     PnpQueryStopDeviceNode @ 0x14096EA28 (PnpQueryStopDeviceNode.c)
 *     PopFxUpdateVetoMaskWork @ 0x140986150 (PopFxUpdateVetoMaskWork.c)
 *     PopIssueDirectedPowerTransition @ 0x14098BEE0 (PopIssueDirectedPowerTransition.c)
 * Callees:
 *     PopFxActivateDevice @ 0x140322EF0 (PopFxActivateDevice.c)
 */

__int64 __fastcall PoFxActivateDevice(__int64 a1)
{
  return PopFxActivateDevice(a1, 0LL, 0LL);
}
