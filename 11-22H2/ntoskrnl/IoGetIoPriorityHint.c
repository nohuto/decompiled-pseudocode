/*
 * XREFs of IoGetIoPriorityHint @ 0x1402A7940
 * Callers:
 *     IopCallDriverReference @ 0x1402A7820 (IopCallDriverReference.c)
 *     IoRetrievePriorityInfo @ 0x140332710 (IoRetrievePriorityInfo.c)
 *     IopSynchronousServiceTail @ 0x1406E3F40 (IopSynchronousServiceTail.c)
 *     NtQueryInformationFile @ 0x1407250E0 (NtQueryInformationFile.c)
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
