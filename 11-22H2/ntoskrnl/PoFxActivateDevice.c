/*
 * XREFs of PoFxActivateDevice @ 0x140322A64
 * Callers:
 *     PipProcessDevNodeTree @ 0x1406CB740 (PipProcessDevNodeTree.c)
 *     PiProcessQueryDeviceState @ 0x14079379C (PiProcessQueryDeviceState.c)
 *     PipEnumerateDevice @ 0x14079528C (PipEnumerateDevice.c)
 *     PnpDeleteLockedDeviceNode @ 0x1408688F8 (PnpDeleteLockedDeviceNode.c)
 *     PiProcessResourceRequirementsChanged @ 0x140959584 (PiProcessResourceRequirementsChanged.c)
 *     PnpQueryStopDeviceNode @ 0x14096E8D8 (PnpQueryStopDeviceNode.c)
 *     PopFxUpdateVetoMaskWork @ 0x140986000 (PopFxUpdateVetoMaskWork.c)
 *     PopIssueDirectedPowerTransition @ 0x14098BD90 (PopIssueDirectedPowerTransition.c)
 * Callees:
 *     PopFxActivateDevice @ 0x140322A80 (PopFxActivateDevice.c)
 */

__int64 __fastcall PoFxActivateDevice(__int64 a1)
{
  return PopFxActivateDevice(a1, 0LL, 0LL);
}
