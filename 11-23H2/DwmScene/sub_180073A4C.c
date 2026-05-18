/*
 * XREFs of sub_180073A4C @ 0x180073A4C
 * Callers:
 *     sub_180073624 @ 0x180073624 (sub_180073624.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_180010DD0 @ 0x180010DD0 (sub_180010DD0.c)
 *     sub_180011B24 @ 0x180011B24 (sub_180011B24.c)
 *     sub_18001246C @ 0x18001246C (sub_18001246C.c)
 *     sub_180026580 @ 0x180026580 (sub_180026580.c)
 *     sub_180026B04 @ 0x180026B04 (sub_180026B04.c)
 *     sub_1800391CC @ 0x1800391CC (sub_1800391CC.c)
 *     sub_1800A2214 @ 0x1800A2214 (sub_1800A2214.c)
 *     sub_1800A22CC @ 0x1800A22CC (sub_1800A22CC.c)
 */

// Hidden C++ exception states: #wind=6
_QWORD **__fastcall sub_180073A4C(__int64 a1, _QWORD **a2, __int64 a3, __int64 *a4)
{
  _QWORD *v6; // rax
  _QWORD **v8; // [rsp+20h] [rbp-29h] BYREF
  __int64 v9; // [rsp+28h] [rbp-21h]
  __int64 v10; // [rsp+38h] [rbp-11h] BYREF
  __int64 v11; // [rsp+40h] [rbp-9h]
  __int64 v12; // [rsp+48h] [rbp-1h] BYREF
  __int64 v13; // [rsp+50h] [rbp+7h]
  _BYTE v14[16]; // [rsp+58h] [rbp+Fh] BYREF
  _QWORD v15[4]; // [rsp+68h] [rbp+1Fh] BYREF

  v8 = a2;
  v6 = (_QWORD *)sub_180026580(*a4);
  sub_18001246C(&v8, v6);
  sub_180010DD0(v15, (__int64)"IPM_ResolveMultisampledInput");
  sub_1800A2214(v14, &v8, v15);
  sub_180011B24((__int64)v15);
  sub_180026B04(*(_QWORD *)(a1 + 456), &v12);
  sub_18001246C(&v10, (_QWORD *)(a1 + 64));
  sub_1800391CC(v8, (__int64)&v10, (__int64)&v12);
  sub_18001246C(a2, (_QWORD *)(a1 + 64));
  if ( v11 )
    sub_180010530(v11);
  if ( v13 )
    sub_180010530(v13);
  sub_1800A22CC(v14);
  if ( v9 )
    sub_180010530(v9);
  return a2;
}
