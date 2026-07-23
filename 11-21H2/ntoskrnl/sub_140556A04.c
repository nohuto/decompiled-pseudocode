/*
 * XREFs of sub_140556A04 @ 0x140556A04
 * Callers:
 *     sub_140556A74 @ 0x140556A74 (sub_140556A74.c)
 * Callees:
 *     KeSetEvent @ 0x1402AFD30 (KeSetEvent.c)
 */

LONG __fastcall sub_140556A04(IRP *a1, char a2)
{
  struct _KEVENT *v2; // rcx
  LONG result; // eax

  if ( a1 == Irp )
  {
    qword_140C47088 = 0LL;
    _InterlockedExchange(&dword_140C47080, 0);
    v2 = (struct _KEVENT *)&word_140C47090;
    return KeSetEvent(v2, a2, 0);
  }
  if ( a1 == qword_140C470A8 )
  {
    qword_140C470B8 = 0LL;
    _InterlockedExchange(&dword_140C470B0, 0);
    v2 = &stru_140C470C0;
    return KeSetEvent(v2, a2, 0);
  }
  result = (int)qword_140C470D8;
  *(_QWORD *)&a1->Type = qword_140C470D8;
  qword_140C470D8 = a1;
  return result;
}
