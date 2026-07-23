/*
 * XREFs of KeInitializeQueue @ 0x14023E540
 * Callers:
 *     sub_1406B8E18 @ 0x1406B8E18 (sub_1406B8E18.c)
 *     sub_1406B8FE0 @ 0x1406B8FE0 (sub_1406B8FE0.c)
 *     sub_140B25E30 @ 0x140B25E30 (sub_140B25E30.c)
 *     sub_140B27838 @ 0x140B27838 (sub_140B27838.c)
 *     sub_140B2DEA8 @ 0x140B2DEA8 (sub_140B2DEA8.c)
 * Callees:
 *     KeQueryActiveProcessorCountEx @ 0x140348830 (KeQueryActiveProcessorCountEx.c)
 */

void __stdcall KeInitializeQueue(PRKQUEUE Queue, ULONG Count)
{
  Queue->Header.Type = 4;
  *(_WORD *)((char *)&Queue->Header.Lock + 1) = 4096;
  Queue->Header.WaitListHead.Blink = &Queue->Header.WaitListHead;
  Queue->Header.WaitListHead.Flink = &Queue->Header.WaitListHead;
  Queue->EntryListHead.Blink = &Queue->EntryListHead;
  Queue->EntryListHead.Flink = &Queue->EntryListHead;
  Queue->ThreadListHead.Blink = &Queue->ThreadListHead;
  Queue->ThreadListHead.Flink = &Queue->ThreadListHead;
  Queue->Header.SignalState = 0;
  Queue->CurrentCount = 0;
  if ( !Count )
    Count = KeQueryActiveProcessorCountEx(0xFFFFu);
  Queue->MaximumCount = Count;
}
