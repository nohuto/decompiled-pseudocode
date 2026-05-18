/*
 * XREFs of sub_18004BAD8 @ 0x18004BAD8
 * Callers:
 *     sub_18004B180 @ 0x18004B180 (sub_18004B180.c)
 *     sub_18004C2F0 @ 0x18004C2F0 (sub_18004C2F0.c)
 *     sub_18004C480 @ 0x18004C480 (sub_18004C480.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_18004BAD8(__int64 a1)
{
  return 0x2E8BA2E8BA2E8BA3LL * ((__int64)(*(_QWORD *)(a1 + 112) - *(_QWORD *)(a1 + 104)) >> 3);
}
