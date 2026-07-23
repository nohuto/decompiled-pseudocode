/*
 * XREFs of sub_1409ABEA0 @ 0x1409ABEA0
 * Callers:
 *     <none>
 * Callees:
 *     KeSetEvent @ 0x1402AFD30 (KeSetEvent.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 */

LONG __fastcall sub_1409ABEA0(PRKEVENT Event, __int64 a2)
{
  LODWORD(Event[1].Header.WaitListHead.Blink) = sub_14042A5E0(Event[1].Header.WaitListHead.Flink, a2);
  return KeSetEvent(Event, 1, 0);
}
