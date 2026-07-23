/*
 * XREFs of sub_140AA4360 @ 0x140AA4360
 * Callers:
 *     <none>
 * Callees:
 *     sub_140AA568C @ 0x140AA568C (sub_140AA568C.c)
 */

__int64 __fastcall sub_140AA4360(__int64 a1)
{
  LOBYTE(a1) = *(_BYTE *)(*(_QWORD *)(a1 + 24) + 92LL);
  return sub_140AA568C(a1);
}
