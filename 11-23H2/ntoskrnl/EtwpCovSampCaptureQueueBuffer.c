/*
 * XREFs of EtwpCovSampCaptureQueueBuffer @ 0x14046A0B8
 * Callers:
 *     EtwpCovSampCaptureBufferQueue @ 0x140469FEC (EtwpCovSampCaptureBufferQueue.c)
 *     EtwpCovSampSampleBufferDecRef @ 0x140603C20 (EtwpCovSampSampleBufferDecRef.c)
 *     EtwpCovSampCaptureFlush @ 0x1409F0F10 (EtwpCovSampCaptureFlush.c)
 * Callees:
 *     KeSetEvent @ 0x14023C5E0 (KeSetEvent.c)
 *     KiInsertQueueDpc @ 0x140254790 (KiInsertQueueDpc.c)
 *     RtlpInterlockedPushEntrySList @ 0x140428EF0 (RtlpInterlockedPushEntrySList.c)
 */

int __fastcall EtwpCovSampCaptureQueueBuffer(__int64 a1, struct _SLIST_ENTRY *a2)
{
  PSLIST_ENTRY v3; // rax

  if ( KeGetCurrentIrql() <= 2u )
  {
    v3 = RtlpInterlockedPushEntrySList((PSLIST_HEADER)(a1 + 1088), a2);
    if ( !v3 )
      LODWORD(v3) = KeSetEvent((PRKEVENT)(a1 + 1104), *(_DWORD *)(a1 + 1304), 0);
  }
  else
  {
    v3 = RtlpInterlockedPushEntrySList((PSLIST_HEADER)(a1 + 1072), a2);
    if ( !v3 )
      LODWORD(v3) = KiInsertQueueDpc(a1 + 1128, 0LL, 0LL, 0LL, 0);
  }
  return (int)v3;
}
