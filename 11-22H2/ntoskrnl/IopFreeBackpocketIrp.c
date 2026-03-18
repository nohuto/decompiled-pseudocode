/*
 * XREFs of IopFreeBackpocketIrp @ 0x1405555DC
 * Callers:
 *     IopFreeReserveIrp @ 0x14055564C (IopFreeReserveIrp.c)
 * Callees:
 *     KeSetEvent @ 0x14023C5C0 (KeSetEvent.c)
 */

LONG __fastcall IopFreeBackpocketIrp(IRP *a1, char a2)
{
  struct _KEVENT *v2; // rcx
  LONG result; // eax

  if ( a1 == Irp )
  {
    v2 = (struct _KEVENT *)&word_140C5DC90;
    qword_140C5DC88 = 0LL;
    _InterlockedExchange(&dword_140C5DC80, 0);
    return KeSetEvent(v2, a2, 0);
  }
  if ( a1 == qword_140C5DCA8 )
  {
    v2 = &stru_140C5DCC0;
    qword_140C5DCB8 = 0LL;
    _InterlockedExchange(&dword_140C5DCB0, 0);
    return KeSetEvent(v2, a2, 0);
  }
  result = (int)qword_140C5DCD8;
  *(_QWORD *)&a1->Type = qword_140C5DCD8;
  qword_140C5DCD8 = a1;
  return result;
}
