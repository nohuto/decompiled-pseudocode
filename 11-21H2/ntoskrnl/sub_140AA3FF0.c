/*
 * XREFs of sub_140AA3FF0 @ 0x140AA3FF0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1406021F8 @ 0x1406021F8 (sub_1406021F8.c)
 *     sub_140AA568C @ 0x140AA568C (sub_140AA568C.c)
 */

__int64 __fastcall sub_140AA3FF0(__int64 a1)
{
  __int64 v2; // rcx

  sub_1406021F8(*(_QWORD *)(a1 + 16), 8uLL);
  sub_1406021F8(*(_QWORD *)(a1 + 8), 0x18uLL);
  LOBYTE(v2) = 12;
  return sub_140AA568C(v2);
}
