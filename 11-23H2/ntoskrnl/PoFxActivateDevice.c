/*
 * XREFs of PoFxActivateDevice @ 0x140322C44
 * Callers:
 *     PipProcessDevNodeTree @ 0x1406CB690 (PipProcessDevNodeTree.c)
 *     PiProcessQueryDeviceState @ 0x14079328C (PiProcessQueryDeviceState.c)
 *     PipEnumerateDevice @ 0x140794D7C (PipEnumerateDevice.c)
 *     PnpDeleteLockedDeviceNode @ 0x140868428 (PnpDeleteLockedDeviceNode.c)
 *     PiProcessResourceRequirementsChanged @ 0x1409594D4 (PiProcessResourceRequirementsChanged.c)
 *     PnpQueryStopDeviceNode @ 0x14096E828 (PnpQueryStopDeviceNode.c)
 *     PopFxUpdateVetoMaskWork @ 0x140985F50 (PopFxUpdateVetoMaskWork.c)
 *     PopIssueDirectedPowerTransition @ 0x14098BCE0 (PopIssueDirectedPowerTransition.c)
 * Callees:
 *     PopFxActivateDevice @ 0x140322C60 (PopFxActivateDevice.c)
 */

__int64 __fastcall PoFxActivateDevice(__int64 a1)
{
  return PopFxActivateDevice(a1, 0LL, 0LL);
}
