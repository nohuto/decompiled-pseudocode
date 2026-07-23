/*
 * XREFs of sub_140A31BC0 @ 0x140A31BC0
 * Callers:
 *     <none>
 * Callees:
 *     KeSetEvent @ 0x1402AFD30 (KeSetEvent.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 */

LONG __fastcall sub_140A31BC0(__int64 a1, __int64 a2)
{
  sub_14042A5E0(*(_QWORD *)(a1 + 8), a2);
  return KeSetEvent((PRKEVENT)(a1 + 104), 0, 0);
}
