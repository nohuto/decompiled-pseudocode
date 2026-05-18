/*
 * XREFs of sub_180027444 @ 0x180027444
 * Callers:
 *     sub_180029794 @ 0x180029794 (sub_180029794.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     sub_180010884 @ 0x180010884 (sub_180010884.c)
 *     sub_180012190 @ 0x180012190 (sub_180012190.c)
 *     sub_18001875C @ 0x18001875C (sub_18001875C.c)
 *     sub_18001F5AC @ 0x18001F5AC (sub_18001F5AC.c)
 *     sub_18001F640 @ 0x18001F640 (sub_18001F640.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800FEEF0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall sub_180027444(__int64 a1, __int128 *a2)
{
  __int64 *v4; // rax
  __int64 v5; // r8
  __int64 v6; // rdi
  __int64 v7; // r8
  __int128 *v8; // rax
  char *v9; // rcx
  __int64 v10; // rdx
  bool v11; // cf
  __int64 v13[5]; // [rsp+28h] [rbp-51h] BYREF
  __int128 v14; // [rsp+50h] [rbp-29h] BYREF
  __int64 v15; // [rsp+60h] [rbp-19h]
  unsigned __int64 v16; // [rsp+68h] [rbp-11h]
  char *v17[3]; // [rsp+70h] [rbp-9h] BYREF
  unsigned __int64 v18; // [rsp+88h] [rbp+Fh]
  __int128 v19; // [rsp+90h] [rbp+17h] BYREF
  __int128 v20; // [rsp+A0h] [rbp+27h]

  v17[2] = 0LL;
  v18 = 15LL;
  LOBYTE(v17[0]) = 0;
  sub_180012190((__int64 *)v17, &unk_180128042, 0LL);
  v4 = sub_18001875C(v13, (__int64)v17);
  v6 = (__int64)v4;
  v14 = *a2;
  if ( v4[2] )
    sub_18001F640((const void **)v4, ": ", v5);
  (*(void (__fastcall **)(_QWORD, __int128 *, _QWORD))(**((_QWORD **)&v14 + 1) + 16LL))(
    *((_QWORD *)&v14 + 1),
    &v14,
    (unsigned int)v14);
  sub_18001F5AC(v6, &v14, v7);
  if ( v16 >= 0x10 )
    sub_180010884((char *)v14, v16 + 1);
  v15 = 0LL;
  v16 = 15LL;
  LOBYTE(v14) = 0;
  v19 = *(_OWORD *)v6;
  v20 = *(_OWORD *)(v6 + 16);
  *(_QWORD *)(v6 + 16) = 0LL;
  *(_QWORD *)(v6 + 24) = 15LL;
  *(_BYTE *)v6 = 0;
  v8 = &v19;
  v9 = (char *)v19;
  v10 = *((_QWORD *)&v20 + 1);
  v11 = *((_QWORD *)&v20 + 1) < 0x10uLL;
  if ( *((_QWORD *)&v20 + 1) >= 0x10uLL )
    v8 = (__int128 *)v19;
  *(_QWORD *)(a1 + 8) = v8;
  *(_QWORD *)a1 = &std::runtime_error::`vftable';
  if ( !v11 )
    sub_180010884(v9, v10 + 1);
  *(_QWORD *)a1 = &std::_System_error::`vftable';
  *(_OWORD *)(a1 + 16) = *a2;
  if ( v18 >= 0x10 )
    sub_180010884(v17[0], v18 + 1);
  *(_QWORD *)a1 = &std::system_error::`vftable';
  return a1;
}
