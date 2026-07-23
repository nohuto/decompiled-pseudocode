/*
 * XREFs of sub_1409BEB80 @ 0x1409BEB80
 * Callers:
 *     sub_1405EDDF0 @ 0x1405EDDF0 (sub_1405EDDF0.c)
 * Callees:
 *     KeSetEvent @ 0x1402AFD30 (KeSetEvent.c)
 */

__int64 __fastcall sub_1409BEB80(__int64 a1)
{
  KeSetEvent(*(PRKEVENT *)(a1 + 16), 1, 0);
  return 0LL;
}
