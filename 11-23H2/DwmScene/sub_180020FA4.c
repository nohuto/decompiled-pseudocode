/*
 * XREFs of sub_180020FA4 @ 0x180020FA4
 * Callers:
 *     sub_1800CF0F4 @ 0x1800CF0F4 (sub_1800CF0F4.c)
 *     sub_1800CF1C0 @ 0x1800CF1C0 (sub_1800CF1C0.c)
 * Callees:
 *     sub_180011BA0 @ 0x180011BA0 (sub_180011BA0.c)
 *     sub_1800208C4 @ 0x1800208C4 (sub_1800208C4.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_180020FA4(__int64 a1, __int64 a2)
{
  const void *v4[5]; // [rsp+30h] [rbp-28h] BYREF

  *(_QWORD *)a2 = 0LL;
  *(_QWORD *)(a2 + 16) = 0LL;
  *(_QWORD *)(a2 + 16) = 0LL;
  *(_QWORD *)(a2 + 24) = 15LL;
  *(_BYTE *)a2 = 0;
  sub_1800208C4(a1 + 24, (__int64)v4);
  if ( v4[0] )
    sub_180011BA0((void **)a2, v4[0], (size_t)v4[1]);
  return a2;
}
