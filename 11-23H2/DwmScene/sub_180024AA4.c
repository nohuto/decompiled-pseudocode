/*
 * XREFs of sub_180024AA4 @ 0x180024AA4
 * Callers:
 *     sub_180026238 @ 0x180026238 (sub_180026238.c)
 * Callees:
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_180010574 @ 0x180010574 (sub_180010574.c)
 *     sub_180010F54 @ 0x180010F54 (sub_180010F54.c)
 *     sub_180011D0C @ 0x180011D0C (sub_180011D0C.c)
 *     sub_18001246C @ 0x18001246C (sub_18001246C.c)
 *     sub_180015604 @ 0x180015604 (sub_180015604.c)
 *     sub_180017544 @ 0x180017544 (sub_180017544.c)
 *     sub_18002A0C4 @ 0x18002A0C4 (sub_18002A0C4.c)
 *     sub_1800331F0 @ 0x1800331F0 (sub_1800331F0.c)
 */

// Hidden C++ exception states: #wind=4
_QWORD *__fastcall sub_180024AA4(__int64 a1, _QWORD *a2, _QWORD *a3)
{
  _QWORD *v6; // rax
  __int64 v7; // rcx
  __int64 v9; // [rsp+28h] [rbp-40h] BYREF
  volatile signed __int32 *v10; // [rsp+30h] [rbp-38h]
  _QWORD v11[6]; // [rsp+38h] [rbp-30h] BYREF

  sub_180017544(a2);
  sub_18002A0C4(a1 + 808, v11);
  sub_180015604(&v9, a2);
  sub_180011D0C((__int64 *)(a1 + 864), &v9);
  if ( v10 )
    sub_180010574(v10);
  sub_180010F54((__int64)v11);
  v6 = sub_18001246C(v11, a3);
  sub_1800331F0(a1, *a2, v6);
  v7 = a3[1];
  if ( v7 )
    sub_180010530(v7);
  return a2;
}
