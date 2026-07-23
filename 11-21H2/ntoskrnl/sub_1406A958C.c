/*
 * XREFs of sub_1406A958C @ 0x1406A958C
 * Callers:
 *     sub_140232710 @ 0x140232710 (sub_140232710.c)
 * Callees:
 *     KeSetEvent @ 0x1402AFD30 (KeSetEvent.c)
 */

LONG __fastcall sub_1406A958C(__int64 a1)
{
  return KeSetEvent((PRKEVENT)(*(_QWORD *)(a1 + 24) + 856LL), 0, 0);
}
