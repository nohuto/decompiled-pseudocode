/*
 * XREFs of sub_1800161CC @ 0x1800161CC
 * Callers:
 *     sub_180016268 @ 0x180016268 (sub_180016268.c)
 * Callees:
 *     sub_180010574 @ 0x180010574 (sub_180010574.c)
 *     sub_180010F54 @ 0x180010F54 (sub_180010F54.c)
 *     sub_180011D0C @ 0x180011D0C (sub_180011D0C.c)
 *     sub_180015604 @ 0x180015604 (sub_180015604.c)
 *     sub_180017544 @ 0x180017544 (sub_180017544.c)
 *     sub_18002A0C4 @ 0x18002A0C4 (sub_18002A0C4.c)
 *     sub_180033280 @ 0x180033280 (sub_180033280.c)
 */

// Hidden C++ exception states: #wind=3
_QWORD *__fastcall sub_1800161CC(__int64 a1, _QWORD *a2)
{
  __int64 v5; // [rsp+28h] [rbp-30h] BYREF
  volatile signed __int32 *v6; // [rsp+30h] [rbp-28h]
  _BYTE v7[32]; // [rsp+38h] [rbp-20h] BYREF

  sub_180017544(a2);
  sub_18002A0C4(a1 + 808, v7);
  sub_180015604(&v5, a2);
  sub_180011D0C((__int64 *)(a1 + 864), &v5);
  if ( v6 )
    sub_180010574(v6);
  sub_180010F54((__int64)v7);
  sub_180033280(a1, *a2, 1LL);
  return a2;
}
