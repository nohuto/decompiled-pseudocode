/*
 * XREFs of sub_1403773B0 @ 0x1403773B0
 * Callers:
 *     <none>
 * Callees:
 *     KeSetEvent @ 0x1402AFD30 (KeSetEvent.c)
 *     sub_1407F8CD8 @ 0x1407F8CD8 (sub_1407F8CD8.c)
 */

LONG __fastcall sub_1403773B0(PRKEVENT Event)
{
  sub_1407F8CD8();
  return KeSetEvent(Event, 0, 0);
}
