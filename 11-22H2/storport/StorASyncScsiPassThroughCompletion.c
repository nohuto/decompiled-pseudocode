/*
 * XREFs of StorASyncScsiPassThroughCompletion @ 0x1C0022040
 * Callers:
 *     PortPassThroughExSendAsync @ 0x1C00A1DE0 (PortPassThroughExSendAsync.c)
 *     PortPassThroughSendAsync @ 0x1C00A1E80 (PortPassThroughSendAsync.c)
 * Callees:
 *     RaidCompleteRequestEx @ 0x1C0003280 (RaidCompleteRequestEx.c)
 */

__int64 __fastcall StorASyncScsiPassThroughCompletion(IRP *a1)
{
  return RaidCompleteRequestEx(a1, 0, a1->IoStatus.Status);
}
