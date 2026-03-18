/*
 * XREFs of IopFreeReserveIrp @ 0x1405555AC
 * Callers:
 *     IopCompleteRequest @ 0x1402AB480 (IopCompleteRequest.c)
 *     IopFreeIrp @ 0x1402AF240 (IopFreeIrp.c)
 * Callees:
 *     KeSetEvent @ 0x14023C5E0 (KeSetEvent.c)
 *     IopFreeBackpocketIrp @ 0x14055553C (IopFreeBackpocketIrp.c)
 */

LONG __fastcall IopFreeReserveIrp(IRP *a1)
{
  struct _KEVENT *v1; // rcx

  a1->AllocationFlags &= 0xDEu;
  if ( a1 == IopReserveIrps )
  {
    v1 = (struct _KEVENT *)&word_140C5DB50;
    _InterlockedExchange(&dword_140C5DB48, 0);
    return KeSetEvent(v1, 1, 0);
  }
  if ( a1 == qword_140C5DB68 )
  {
    v1 = (struct _KEVENT *)&word_140C5DB78;
    _InterlockedExchange(&dword_140C5DB70, 0);
    return KeSetEvent(v1, 1, 0);
  }
  if ( a1 == qword_140C5DB90 )
  {
    v1 = &stru_140C5DBA0;
    _InterlockedExchange(&dword_140C5DB98, 0);
    return KeSetEvent(v1, 1, 0);
  }
  return IopFreeBackpocketIrp(a1, 1);
}
