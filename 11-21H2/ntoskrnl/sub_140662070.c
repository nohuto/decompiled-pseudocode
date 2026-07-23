/*
 * XREFs of sub_140662070 @ 0x140662070
 * Callers:
 *     <none>
 * Callees:
 *     KeSetEvent @ 0x1402AFD30 (KeSetEvent.c)
 */

LONG __fastcall sub_140662070(struct _KEVENT *a1)
{
  return KeSetEvent(a1, 0, 0);
}
