/*
 * XREFs of sub_140855C60 @ 0x140855C60
 * Callers:
 *     <none>
 * Callees:
 *     KeSetEvent @ 0x1402AFD30 (KeSetEvent.c)
 *     sub_140B26348 @ 0x140B26348 (sub_140B26348.c)
 */

LONG sub_140855C60()
{
  sub_140B26348();
  return KeSetEvent(&stru_140C51E68, 0, 0);
}
