/*
 * XREFs of FsRtlpNotifyOplockBreakComplete @ 0x14093E3E0
 * Callers:
 *     <none>
 * Callees:
 *     IofCompleteRequest @ 0x1402C9950 (IofCompleteRequest.c)
 */

void __fastcall FsRtlpNotifyOplockBreakComplete(__int64 a1, IRP *a2)
{
  IofCompleteRequest(a2, 1);
}
