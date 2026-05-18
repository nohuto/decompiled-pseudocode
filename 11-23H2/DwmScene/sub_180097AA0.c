/*
 * XREFs of sub_180097AA0 @ 0x180097AA0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_180010574 @ 0x180010574 (sub_180010574.c)
 *     sub_180011B24 @ 0x180011B24 (sub_180011B24.c)
 *     sub_18001C680 @ 0x18001C680 (sub_18001C680.c)
 *     sub_18001E8C0 @ 0x18001E8C0 (sub_18001E8C0.c)
 *     sub_180026580 @ 0x180026580 (sub_180026580.c)
 *     sub_180030FD4 @ 0x180030FD4 (sub_180030FD4.c)
 *     sub_180031CF0 @ 0x180031CF0 (sub_180031CF0.c)
 *     sub_18004347C @ 0x18004347C (sub_18004347C.c)
 *     sub_18004C480 @ 0x18004C480 (sub_18004C480.c)
 *     sub_18005BA84 @ 0x18005BA84 (sub_18005BA84.c)
 *     sub_180097908 @ 0x180097908 (sub_180097908.c)
 *     sub_1800A2214 @ 0x1800A2214 (sub_1800A2214.c)
 *     sub_1800A22CC @ 0x1800A22CC (sub_1800A22CC.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E39B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=9
__int64 __fastcall sub_180097AA0(_QWORD *a1, __int64 *a2, _QWORD *a3, __int64 *a4, _QWORD *a5)
{
  char *v9; // rax
  __int64 v10; // rax
  __int64 *v11; // rax
  __int64 v12; // rsi
  __int64 i; // rbx
  __int64 v15; // [rsp+20h] [rbp-81h] BYREF
  __int64 v16; // [rsp+28h] [rbp-79h]
  __int64 v17; // [rsp+30h] [rbp-71h] BYREF
  __int64 v18; // [rsp+38h] [rbp-69h]
  _BYTE v19[8]; // [rsp+40h] [rbp-61h] BYREF
  volatile signed __int32 *v20; // [rsp+48h] [rbp-59h]
  _BYTE v21[16]; // [rsp+50h] [rbp-51h] BYREF
  __int64 v22[3]; // [rsp+60h] [rbp-41h] BYREF
  _QWORD v23[4]; // [rsp+78h] [rbp-29h] BYREF
  _QWORD v24[4]; // [rsp+98h] [rbp-9h] BYREF

  v9 = sub_18001C680((char *)v23, a1 + 3, byte_180115388);
  sub_18001E8C0(v24, (void **)v9, a5);
  sub_180011B24((__int64)v23);
  sub_18005BA84((__int64)a1, &v17, a2);
  sub_180026580(*a2);
  sub_1800A2214(v21, &v17, v24);
  v10 = (*(__int64 (__fastcall **)(_QWORD, _BYTE *))(*(_QWORD *)*a3 + 200LL))(*a3, v19);
  sub_180030FD4(v22, v10);
  if ( v20 )
    sub_180010574(v20);
  (*(void (__fastcall **)(_QWORD *, __int64 *, _QWORD *))(*a1 + 192LL))(a1, a2, a3);
  v11 = sub_18004347C((__int64)(a1 + 1), v23);
  sub_180097908(&v15, v11);
  v12 = a1[14];
  for ( i = a1[13]; i != v12; i += 48LL )
    sub_18004C480(*a4, &v17, 0LL, (__int64)&v15);
  (*(void (__fastcall **)(_QWORD *))(*a1 + 200LL))(a1);
  if ( v16 )
    sub_180010530(v16);
  sub_180031CF0((__int64)v22);
  sub_1800A22CC(v21);
  if ( v18 )
    sub_180010530(v18);
  return sub_180011B24((__int64)v24);
}
