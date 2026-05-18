/*
 * XREFs of sub_1800D4DD0 @ 0x1800D4DD0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     sub_18000E72C @ 0x18000E72C (sub_18000E72C.c)
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_180011020 @ 0x180011020 (sub_180011020.c)
 *     sub_180011C50 @ 0x180011C50 (sub_180011C50.c)
 *     sub_18008810C @ 0x18008810C (sub_18008810C.c)
 *     sub_1800C589C @ 0x1800C589C (sub_1800C589C.c)
 *     sub_1800C7750 @ 0x1800C7750 (sub_1800C7750.c)
 *     sub_1800D4FAC @ 0x1800D4FAC (sub_1800D4FAC.c)
 *     sub_1800D52AC @ 0x1800D52AC (sub_1800D52AC.c)
 *     sub_1800D5464 @ 0x1800D5464 (sub_1800D5464.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E39B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall sub_1800D4DD0(_QWORD *a1, __int64 *a2)
{
  _QWORD *v4; // r12
  __int64 *v5; // rax
  __int64 v6; // rbx
  __int64 (__fastcall *v7)(__int64, _BYTE *, _QWORD *); // rsi
  int v8; // eax
  __int64 (__fastcall *v9)(__int64, _BYTE *, _QWORD *); // rsi
  int v10; // eax
  __int64 (__fastcall *v11)(__int64, _BYTE *, _QWORD *); // rsi
  int v12; // eax
  __int64 result; // rax
  __int64 v14; // rcx
  __int64 v15; // [rsp+20h] [rbp-E0h] BYREF
  __int64 v16; // [rsp+28h] [rbp-D8h]
  __int64 v17[2]; // [rsp+30h] [rbp-D0h] BYREF
  _BYTE v18[64]; // [rsp+40h] [rbp-C0h] BYREF
  _BYTE v19[272]; // [rsp+80h] [rbp-80h] BYREF

  v17[1] = (__int64)a2;
  v4 = a1 + 12;
  if ( *a2 )
  {
    sub_180011020(a1 + 12, a2);
  }
  else
  {
    v5 = sub_18008810C(&v15);
    sub_180011020(v4, v5);
    if ( v16 )
      sub_180010530(v16);
  }
  sub_180011C50((__int64)(a1 + 9), &v15);
  sub_1800C589C(v15, v17);
  sub_1800D5464(*v4, v18);
  v6 = v17[0];
  v7 = *(__int64 (__fastcall **)(__int64, _BYTE *, _QWORD *))(*(_QWORD *)v17[0] + 176LL);
  sub_18000E72C(a1 + 14);
  v8 = v7(v6, v18, a1 + 14);
  sub_1800C7750(v15, v8);
  sub_1800D4FAC(*v4, v19);
  v9 = *(__int64 (__fastcall **)(__int64, _BYTE *, _QWORD *))(*(_QWORD *)v6 + 160LL);
  sub_18000E72C(a1 + 15);
  v10 = v9(v6, v19, a1 + 15);
  sub_1800C7750(v15, v10);
  sub_1800D52AC(*v4, v18);
  v11 = *(__int64 (__fastcall **)(__int64, _BYTE *, _QWORD *))(*(_QWORD *)v6 + 168LL);
  sub_18000E72C(a1 + 16);
  v12 = v11(v6, v18, a1 + 16);
  sub_1800C7750(v15, v12);
  result = sub_18000E72C(v17);
  if ( v16 )
    result = sub_180010530(v16);
  v14 = a2[1];
  if ( v14 )
    return sub_180010530(v14);
  return result;
}
