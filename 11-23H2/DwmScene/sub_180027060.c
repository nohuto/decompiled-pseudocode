/*
 * XREFs of sub_180027060 @ 0x180027060
 * Callers:
 *     <none>
 * Callees:
 *     sub_180016F04 @ 0x180016F04 (sub_180016F04.c)
 *     sub_180024F9C @ 0x180024F9C (sub_180024F9C.c)
 *     sub_18002A570 @ 0x18002A570 (sub_18002A570.c)
 *     sub_18002A62C @ 0x18002A62C (sub_18002A62C.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E39B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_180027060(__int64 a1, _QWORD *a2)
{
  __int64 v4; // rbx
  _QWORD *v5; // rdi
  __int64 v6; // rdx
  _BYTE v8[24]; // [rsp+20h] [rbp-18h] BYREF
  int v9; // [rsp+40h] [rbp+8h] BYREF
  __int64 v10; // [rsp+48h] [rbp+10h]

  v4 = a1 + 8;
  v10 = a1 + 8;
  sub_18002A570(a1 + 8);
  v9 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*a2 + 56LL))(*a2);
  v5 = *(_QWORD **)sub_180024F9C((__int64 *)(a1 + 24), (__int64)v8, &v9);
  (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*a2 + 48LL))(*a2);
  v6 = v5[6];
  if ( v6 == v5[7] )
  {
    sub_180016F04(v5 + 5, (char *)v6, a2);
  }
  else
  {
    *(_QWORD *)v6 = 0LL;
    *(_QWORD *)(v6 + 8) = 0LL;
    *(_QWORD *)v6 = *a2;
    *(_QWORD *)(v6 + 8) = a2[1];
    *a2 = 0LL;
    a2[1] = 0LL;
    v5[6] += 16LL;
  }
  return sub_18002A62C(v4);
}
