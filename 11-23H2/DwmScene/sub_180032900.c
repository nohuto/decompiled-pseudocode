/*
 * XREFs of sub_180032900 @ 0x180032900
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_180010DD0 @ 0x180010DD0 (sub_180010DD0.c)
 *     sub_180010F54 @ 0x180010F54 (sub_180010F54.c)
 *     sub_180011B24 @ 0x180011B24 (sub_180011B24.c)
 *     sub_180012440 @ 0x180012440 (sub_180012440.c)
 *     sub_18001246C @ 0x18001246C (sub_18001246C.c)
 *     sub_1800134DC @ 0x1800134DC (sub_1800134DC.c)
 *     sub_18002A070 @ 0x18002A070 (sub_18002A070.c)
 *     sub_18002DB6C @ 0x18002DB6C (sub_18002DB6C.c)
 *     sub_18003276C @ 0x18003276C (sub_18003276C.c)
 *     sub_18003BF94 @ 0x18003BF94 (sub_18003BF94.c)
 *     sub_18004051C @ 0x18004051C (sub_18004051C.c)
 */

// Hidden C++ exception states: #wind=8
__int64 __fastcall sub_180032900(__int64 a1, __int64 *a2)
{
  __int64 v4; // rdi
  _QWORD *v5; // rbx
  __int64 v6; // rax
  __int64 v7; // rbx
  _QWORD *v8; // rax
  __int64 v10; // [rsp+20h] [rbp-49h] BYREF
  __int64 v11; // [rsp+30h] [rbp-39h] BYREF
  __int64 v12; // [rsp+38h] [rbp-31h]
  __int64 v13; // [rsp+40h] [rbp-29h] BYREF
  __int64 v14; // [rsp+48h] [rbp-21h]
  _BYTE v15[16]; // [rsp+50h] [rbp-19h] BYREF
  _QWORD v16[4]; // [rsp+60h] [rbp-9h] BYREF
  void *v17[4]; // [rsp+80h] [rbp+17h] BYREF

  sub_18002A070(*a2 + 16, (__int64)v15);
  v4 = *a2;
  v5 = sub_180012440(v16, (__int64)&unk_1801D4008);
  sub_180010DD0(v17, (__int64)"DefaultCamera");
  v6 = sub_18003BF94(v17);
  sub_18004051C(v4, &v13, v6, v5, v16);
  sub_180011B24((__int64)v17);
  sub_18002DB6C(v13, &v11);
  sub_180010DD0(v17, (__int64)"DefaultCamera");
  v7 = v11;
  sub_1800134DC((void **)(v11 + 24), v17);
  sub_180011B24((__int64)v17);
  *(_BYTE *)(v7 + 72) = 0;
  v8 = sub_18001246C(&v10, &v11);
  sub_18003276C(a1, v8);
  if ( v12 )
    sub_180010530(v12);
  if ( v14 )
    sub_180010530(v14);
  return sub_180010F54((__int64)v15);
}
