/*
 * XREFs of StorASyncScsiPassThroughCompletion @ 0x1C0022B60
 * Callers:
 *     PortPassThroughExSendAsync @ 0x1C008860C (PortPassThroughExSendAsync.c)
 *     PortPassThroughSendAsync @ 0x1C00889F4 (PortPassThroughSendAsync.c)
 * Callees:
 *     RaidCompleteRequestEx @ 0x1C0008480 (RaidCompleteRequestEx.c)
 */

__int64 __fastcall StorASyncScsiPassThroughCompletion(IRP *a1)
{
  return RaidCompleteRequestEx(a1, 0, a1->IoStatus.Status);
}
