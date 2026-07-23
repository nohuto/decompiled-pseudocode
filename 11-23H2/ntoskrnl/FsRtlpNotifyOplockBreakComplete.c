/*
 * XREFs of FsRtlpNotifyOplockBreakComplete @ 0x14093E530
 * Callers:
 *     <none>
 * Callees:
 *     IofCompleteRequest @ 0x1402C9C10 (IofCompleteRequest.c)
 */

void __fastcall FsRtlpNotifyOplockBreakComplete(__int64 a1, IRP *a2)
{
  IofCompleteRequest(a2, 1);
}
