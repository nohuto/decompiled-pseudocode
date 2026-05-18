/*
 * XREFs of sub_1800963D0 @ 0x1800963D0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_18001246C @ 0x18001246C (sub_18001246C.c)
 *     sub_180026B04 @ 0x180026B04 (sub_180026B04.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E39B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall sub_1800963D0(__int64 a1, _QWORD *a2, __int64 a3, __int64 a4, _QWORD *a5)
{
  _QWORD *v9; // rax
  __int64 v10; // r8
  void (__fastcall *v11)(__int64, __int64, __int64, _QWORD *, __int64); // r11
  __int64 v13; // [rsp+38h] [rbp-50h] BYREF
  __int64 v14; // [rsp+40h] [rbp-48h]
  __int64 v15; // [rsp+48h] [rbp-40h] BYREF
  _QWORD v16[3]; // [rsp+58h] [rbp-30h] BYREF

  (*(void (__fastcall **)(_QWORD, __int64 *))(**(_QWORD **)(a1 + 184) + 16LL))(*(_QWORD *)(a1 + 184), &v13);
  sub_18001246C(&v15, a5);
  v9 = sub_18001246C(v16, &v13);
  v11(a1, a3, a4, v9, v10);
  sub_180026B04(*(_QWORD *)(a1 + 232), a2);
  if ( v14 )
    sub_180010530(v14);
  return a2;
}
