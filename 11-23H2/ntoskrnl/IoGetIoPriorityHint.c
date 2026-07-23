/*
 * XREFs of IoGetIoPriorityHint @ 0x1402A7CF0
 * Callers:
 *     IopCallDriverReference @ 0x1402A7BD0 (IopCallDriverReference.c)
 *     IoRetrievePriorityInfo @ 0x140332B40 (IoRetrievePriorityInfo.c)
 *     IopSynchronousServiceTail @ 0x1406E3EC0 (IopSynchronousServiceTail.c)
 *     NtQueryInformationFile @ 0x140725270 (NtQueryInformationFile.c)
 * Callees:
 *     <none>
 */

IO_PRIORITY_HINT __stdcall IoGetIoPriorityHint(PIRP Irp)
{
  IO_PRIORITY_HINT result; // eax
  PETHREAD Thread; // r8

  if ( ((Irp->Flags >> 17) & 7) == 0 )
    return 2;
  result = ((Irp->Flags >> 17) & 7) - 1;
  if ( result < IoPriorityNormal )
  {
    Thread = Irp->Tail.Overlay.Thread;
    if ( Thread )
    {
      if ( LODWORD(Thread[1].Timer.TimerListEntry.Flink) )
        return 2;
    }
  }
  return result;
}
