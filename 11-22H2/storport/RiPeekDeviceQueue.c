/*
 * XREFs of RiPeekDeviceQueue @ 0x1C0006980
 * Callers:
 *     RiGetEnqueueReason @ 0x1C000687C (RiGetEnqueueReason.c)
 *     RaidRemoveIoQueue @ 0x1C0021C14 (RaidRemoveIoQueue.c)
 * Callees:
 *     RiFlushDeviceLists @ 0x1C0001008 (RiFlushDeviceLists.c)
 */

union _SLIST_HEADER *__fastcall RiPeekDeviceQueue(union _SLIST_HEADER *a1)
{
  union _SLIST_HEADER *Alignment; // rbx
  union _SLIST_HEADER *v3; // rsi
  PSLIST_ENTRY EntrySList; // rax

  Alignment = (union _SLIST_HEADER *)a1[9].Alignment;
  if ( Alignment == &a1[9] )
  {
    v3 = a1 + 7;
    Alignment = 0LL;
    if ( !ExQueryDepthSList(a1 + 7) )
      RiFlushDeviceLists(a1);
    if ( ExQueryDepthSList(v3) )
    {
      EntrySList = FirstEntrySList(v3);
      if ( EntrySList )
        return (union _SLIST_HEADER *)(&EntrySList[-1].Next + 1);
    }
  }
  return Alignment;
}
