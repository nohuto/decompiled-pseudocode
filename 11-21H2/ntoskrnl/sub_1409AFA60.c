/*
 * XREFs of sub_1409AFA60 @ 0x1409AFA60
 * Callers:
 *     <none>
 * Callees:
 *     KeSetEvent @ 0x1402AFD30 (KeSetEvent.c)
 *     sub_14035BB4C @ 0x14035BB4C (sub_14035BB4C.c)
 */

LONG __fastcall sub_1409AFA60(PRKEVENT Event)
{
  sub_14035BB4C(dword_140D06E40, (__int64)_misaligned_access, 0LL, 2);
  return KeSetEvent(Event, 0, 0);
}
