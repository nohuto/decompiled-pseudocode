/*
 * XREFs of sub_1403DF5C0 @ 0x1403DF5C0
 * Callers:
 *     <none>
 * Callees:
 *     KeSetEvent @ 0x1402AFD30 (KeSetEvent.c)
 */

char __fastcall sub_1403DF5C0(__int64 a1)
{
  KeSetEvent((PRKEVENT)(a1 + 40), 0, 0);
  return 0;
}
