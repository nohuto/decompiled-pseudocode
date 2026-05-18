/*
 * XREFs of sub_18009AA00 @ 0x18009AA00
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_180011020 @ 0x180011020 (sub_180011020.c)
 *     sub_180011B24 @ 0x180011B24 (sub_180011B24.c)
 *     sub_180017648 @ 0x180017648 (sub_180017648.c)
 *     sub_180017C9C @ 0x180017C9C (sub_180017C9C.c)
 *     sub_18004347C @ 0x18004347C (sub_18004347C.c)
 *     sub_18004F760 @ 0x18004F760 (sub_18004F760.c)
 *     sub_180060138 @ 0x180060138 (sub_180060138.c)
 *     sub_180060800 @ 0x180060800 (sub_180060800.c)
 *     sub_180060980 @ 0x180060980 (sub_180060980.c)
 *     sub_18007F33C @ 0x18007F33C (sub_18007F33C.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E39B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_18009AA00(__int64 *a1, __int64 a2, int **a3)
{
  _QWORD *v6; // rbx
  _QWORD *v7; // rax
  __int64 *v8; // rax
  __int64 *v9; // rsi
  __int64 v10; // rbx
  void **v11; // rax
  int *v12; // r15
  int *i; // rbx
  __int64 v15; // [rsp+30h] [rbp-49h] BYREF
  __int64 v16; // [rsp+40h] [rbp-39h] BYREF
  __int64 v17; // [rsp+48h] [rbp-31h]
  _QWORD v18[4]; // [rsp+50h] [rbp-29h] BYREF
  _BYTE v19[32]; // [rsp+70h] [rbp-9h] BYREF

  (*(void (__fastcall **)(__int64 *, _BYTE *))(*a1 + 184))(a1, v19);
  v6 = sub_18004347C((__int64)(a1 + 1), &v15);
  v7 = sub_180017648(v18, (__int64)v19);
  v8 = sub_18004F760(a2, &v16, v7, v6);
  v9 = a1 + 7;
  sub_180011020(a1 + 7, v8);
  if ( v17 )
    sub_180010530(v17);
  v10 = *v9;
  v11 = (void **)(*(__int64 (__fastcall **)(__int64 *, _QWORD *))(*a1 + 176))(a1, v18);
  sub_18007F33C(v10, v11);
  sub_180017C9C((_QWORD *)(*v9 + 528), (__int64)a3);
  (*(void (__fastcall **)(__int64 *))(*a1 + 136))(a1);
  (*(void (__fastcall **)(__int64 *))(*a1 + 160))(a1);
  (*(void (__fastcall **)(__int64 *))(*a1 + 168))(a1);
  v12 = a3[1];
  for ( i = *a3; i != v12; ++i )
  {
    sub_180060138(*v9, *i);
    (*(void (__fastcall **)(__int64 *, __int64))(*a1 + 152))(a1, a2);
    sub_180060980(*v9);
  }
  (*(void (__fastcall **)(__int64 *, __int64))(*a1 + 144))(a1, a2);
  sub_180060800(*v9);
  return sub_180011B24((__int64)v19);
}
