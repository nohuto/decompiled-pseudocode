/*
 * XREFs of sub_18007D97C @ 0x18007D97C
 * Callers:
 *     sub_18007F0F0 @ 0x18007F0F0 (sub_18007F0F0.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     sub_180010884 @ 0x180010884 (sub_180010884.c)
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     sub_180012190 @ 0x180012190 (sub_180012190.c)
 *     sub_18002850C @ 0x18002850C (sub_18002850C.c)
 *     sub_180037388 @ 0x180037388 (sub_180037388.c)
 *     sub_180056A6C @ 0x180056A6C (sub_180056A6C.c)
 *     sub_180056B94 @ 0x180056B94 (sub_180056B94.c)
 *     sub_18007D834 @ 0x18007D834 (sub_18007D834.c)
 *     sub_180092E0C @ 0x180092E0C (sub_180092E0C.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800FEEF0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
_QWORD *__fastcall sub_18007D97C(__int64 a1, _QWORD *a2, __int64 *a3, __int64 a4, _QWORD *a5)
{
  __int64 v9; // rax
  __int64 v10; // r14
  _QWORD *v11; // rax
  __int64 *v12; // rax
  __int64 v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // rcx
  void (__fastcall *v16)(__int64, __int128 *); // r8
  __int64 v17; // rdx
  __int64 v18; // rdx
  __int64 *v19; // rax
  __int64 v20; // rcx
  __int64 v21; // rdx
  __int128 v23; // [rsp+30h] [rbp-71h] BYREF
  __int64 v24; // [rsp+40h] [rbp-61h] BYREF
  __int64 v25; // [rsp+48h] [rbp-59h]
  __int128 v26; // [rsp+50h] [rbp-51h] BYREF
  _QWORD *v27; // [rsp+60h] [rbp-41h]
  _QWORD v28[2]; // [rsp+68h] [rbp-39h] BYREF
  _BYTE v29[16]; // [rsp+78h] [rbp-29h] BYREF
  char *v30[3]; // [rsp+88h] [rbp-19h] BYREF
  unsigned __int64 v31; // [rsp+A0h] [rbp-1h]

  v27 = a5;
  if ( byte_1801F7E90 )
  {
    v9 = sub_18002850C(*a3);
    v10 = sub_180037388(v9);
    v30[2] = 0LL;
    v31 = 15LL;
    LOBYTE(v30[0]) = 0;
    sub_180012190((__int64 *)v30, "Global/PlanarReflection", 0x17uLL);
    sub_180056A6C(v10, v30);
    if ( v31 >= 0x10 )
      sub_180010884(v30[0], v31 + 1);
    v11 = sub_180056B94(v10, v28);
    v12 = (__int64 *)sub_180092E0C(*v11);
    v13 = *v12;
    v14 = v12[1];
    *v12 = 0LL;
    v12[1] = 0LL;
    v24 = *a5;
    *a5 = v13;
    v25 = a5[1];
    a5[1] = v14;
    sub_180010910((__int64)&v24);
    sub_180010910((__int64)v29);
    sub_180010910((__int64)v28);
  }
  v15 = *(_QWORD *)(a1 + 272);
  v16 = *(void (__fastcall **)(__int64, __int128 *))(*(_QWORD *)v15 + 88LL);
  v26 = 0LL;
  v17 = a3[1];
  if ( v17 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v17 + 8));
    v17 = a3[1];
  }
  *(_QWORD *)&v26 = *a3;
  *((_QWORD *)&v26 + 1) = v17;
  v16(v15, &v26);
  v23 = 0LL;
  v18 = a5[1];
  if ( v18 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v18 + 8));
    v18 = a5[1];
  }
  *(_QWORD *)&v23 = *a5;
  *((_QWORD *)&v23 + 1) = v18;
  v19 = sub_18007D834(a1, v28, *a3, a4, &v23);
  v20 = *v19;
  v21 = v19[1];
  *v19 = 0LL;
  v19[1] = 0LL;
  v24 = *a5;
  *a5 = v20;
  v25 = a5[1];
  a5[1] = v21;
  sub_180010910((__int64)&v24);
  sub_180010910((__int64)v28);
  *a2 = 0LL;
  a2[1] = 0LL;
  *a2 = *a5;
  a2[1] = a5[1];
  *a5 = 0LL;
  a5[1] = 0LL;
  sub_180010910((__int64)a5);
  return a2;
}
