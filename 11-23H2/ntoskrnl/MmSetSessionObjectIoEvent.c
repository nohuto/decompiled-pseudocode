/*
 * XREFs of MmSetSessionObjectIoEvent @ 0x1407B3D44
 * Callers:
 *     IopSessionChangeWorker @ 0x14033BEE0 (IopSessionChangeWorker.c)
 * Callees:
 *     KeSetEvent @ 0x14023C5E0 (KeSetEvent.c)
 */

LONG __fastcall MmSetSessionObjectIoEvent(__int64 a1)
{
  return KeSetEvent((PRKEVENT)(*(_QWORD *)(a1 + 24) + 760LL), 0, 0);
}
