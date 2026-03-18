/*
 * XREFs of FsRtlpNotifyOplockBreakComplete @ 0x14093E330
 * Callers:
 *     <none>
 * Callees:
 *     IofCompleteRequest @ 0x1402C9980 (IofCompleteRequest.c)
 */

void __fastcall FsRtlpNotifyOplockBreakComplete(__int64 a1, IRP *a2)
{
  IofCompleteRequest(a2, 1);
}
