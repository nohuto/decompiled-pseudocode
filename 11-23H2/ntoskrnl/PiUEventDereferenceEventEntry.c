/*
 * XREFs of PiUEventDereferenceEventEntry @ 0x140782218
 * Callers:
 *     PiUEventDequeuePendingEventWorker @ 0x14078207C (PiUEventDequeuePendingEventWorker.c)
 *     PiUEventProcessEventWorker @ 0x1407820E0 (PiUEventProcessEventWorker.c)
 *     PiUEventNotifyUserMode @ 0x1407839EC (PiUEventNotifyUserMode.c)
 * Callees:
 *     ExAcquireFastMutex @ 0x140230720 (ExAcquireFastMutex.c)
 *     ExReleaseFastMutex @ 0x140230860 (ExReleaseFastMutex.c)
 *     KeSetEvent @ 0x14023C5E0 (KeSetEvent.c)
 *     PiUEventFreeEventEntry @ 0x14078260C (PiUEventFreeEventEntry.c)
 */

__int64 __fastcall PiUEventDereferenceEventEntry(PVOID P)
{
  unsigned int v2; // edi

  ExAcquireFastMutex(*((PFAST_MUTEX *)P + 2));
  v2 = --*((_DWORD *)P + 14);
  if ( *((_BYTE *)P + 68) && v2 == 1 )
    KeSetEvent(*((PRKEVENT *)P + 3), 0, 0);
  ExReleaseFastMutex(*((PFAST_MUTEX *)P + 2));
  if ( !v2 )
    PiUEventFreeEventEntry(P);
  return v2;
}
