/*
 * XREFs of IoGetIoPriorityHint @ 0x140221E10
 * Callers:
 *     IoRetrievePriorityInfo @ 0x14033FD80 (IoRetrievePriorityInfo.c)
 *     sub_140731680 @ 0x140731680 (sub_140731680.c)
 * Callees:
 *     <none>
 */

IO_PRIORITY_HINT __stdcall IoGetIoPriorityHint(PIRP Irp)
{
  IO_PRIORITY_HINT result; // eax
  PETHREAD Thread; // rdx

  if ( ((Irp->Flags >> 17) & 7) == 0 )
    return 2;
  result = ((Irp->Flags >> 17) & 7) - 1;
  if ( result < IoPriorityNormal )
  {
    Thread = Irp->Tail.Overlay.Thread;
    if ( Thread )
    {
      if ( *((_DWORD *)Thread + 360) )
        return 2;
    }
  }
  return result;
}
