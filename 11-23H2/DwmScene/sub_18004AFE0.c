/*
 * XREFs of sub_18004AFE0 @ 0x18004AFE0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_18001246C @ 0x18001246C (sub_18001246C.c)
 *     sub_180026B04 @ 0x180026B04 (sub_180026B04.c)
 *     sub_18004AB54 @ 0x18004AB54 (sub_18004AB54.c)
 *     sub_18004CA0C @ 0x18004CA0C (sub_18004CA0C.c)
 *     sub_180060A34 @ 0x180060A34 (sub_180060A34.c)
 *     sub_1800DF794 @ 0x1800DF794 (sub_1800DF794.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E39B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall sub_18004AFE0(__int64 a1, __int64 a2, _QWORD *a3)
{
  _QWORD *v6; // rax
  __int64 v7; // r8
  _QWORD *v8; // rax
  _QWORD *v9; // rax
  __int64 v10; // rcx
  __int64 v12; // [rsp+28h] [rbp-40h] BYREF
  __int64 v13; // [rsp+30h] [rbp-38h]
  __int64 v14; // [rsp+38h] [rbp-30h] BYREF
  __int64 v15; // [rsp+40h] [rbp-28h]
  __int64 v16; // [rsp+48h] [rbp-20h] BYREF
  __int64 v17; // [rsp+50h] [rbp-18h]

  sub_18004AB54(&v12, a3);
  v6 = sub_18001246C(&v14, &v12);
  sub_18004CA0C(v7, v6);
  v8 = (_QWORD *)sub_180026B04(v12, &v16);
  v9 = (_QWORD *)sub_180060A34(*v8, &v14);
  (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD))(*(_QWORD *)*v9 + 72LL))(
    *v9,
    *(_QWORD *)(a1 + 8),
    *(_QWORD *)(a1 + 16));
  if ( v15 )
    sub_180010530(v15);
  if ( v17 )
    sub_180010530(v17);
  sub_1800DF794(a2);
  if ( v13 )
    sub_180010530(v13);
  v10 = a3[1];
  if ( v10 )
    sub_180010530(v10);
  return a2;
}
