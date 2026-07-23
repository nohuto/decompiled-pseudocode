/*
 * XREFs of sub_140AA4090 @ 0x140AA4090
 * Callers:
 *     <none>
 * Callees:
 *     sub_1406021F8 @ 0x1406021F8 (sub_1406021F8.c)
 *     sub_140AA568C @ 0x140AA568C (sub_140AA568C.c)
 */

__int64 __fastcall sub_140AA4090(__int64 a1)
{
  __int64 v1; // rcx

  sub_1406021F8(*(_QWORD *)(a1 + 8), 8uLL);
  LOBYTE(v1) = 2;
  return sub_140AA568C(v1);
}
