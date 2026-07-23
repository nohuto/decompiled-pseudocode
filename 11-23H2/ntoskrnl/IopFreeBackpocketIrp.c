/*
 * XREFs of IopFreeBackpocketIrp @ 0x140555BFC
 * Callers:
 *     IopFreeReserveIrp @ 0x140555C6C (IopFreeReserveIrp.c)
 * Callees:
 *     KeSetEvent @ 0x14023C6B0 (KeSetEvent.c)
 */

LONG __fastcall IopFreeBackpocketIrp(IRP *a1, char a2)
{
  struct _KEVENT *v2; // rcx
  LONG result; // eax

  if ( a1 == Irp )
  {
    v2 = (struct _KEVENT *)&word_140C5DBD0;
    qword_140C5DBC8 = 0LL;
    _InterlockedExchange(&dword_140C5DBC0, 0);
    return KeSetEvent(v2, a2, 0);
  }
  if ( a1 == qword_140C5DBE8 )
  {
    v2 = &stru_140C5DC00;
    qword_140C5DBF8 = 0LL;
    _InterlockedExchange(&dword_140C5DBF0, 0);
    return KeSetEvent(v2, a2, 0);
  }
  result = (int)qword_140C5DC18;
  *(_QWORD *)&a1->Type = qword_140C5DC18;
  qword_140C5DC18 = a1;
  return result;
}
