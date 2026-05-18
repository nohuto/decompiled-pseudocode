/*
 * XREFs of sub_180035FAC @ 0x180035FAC
 * Callers:
 *     sub_180035810 @ 0x180035810 (sub_180035810.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     sub_180010884 @ 0x180010884 (sub_180010884.c)
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     sub_18001F2B4 @ 0x18001F2B4 (sub_18001F2B4.c)
 *     sub_180028544 @ 0x180028544 (sub_180028544.c)
 *     sub_18002C460 @ 0x18002C460 (sub_18002C460.c)
 *     j_LanguageEnumProc @ 0x18002C8D8 (j_LanguageEnumProc.c)
 *     sub_18003036C @ 0x18003036C (sub_18003036C.c)
 *     sub_1800306A0 @ 0x1800306A0 (sub_1800306A0.c)
 *     sub_1800317FC @ 0x1800317FC (sub_1800317FC.c)
 *     sub_180037268 @ 0x180037268 (sub_180037268.c)
 *     sub_180037288 @ 0x180037288 (sub_180037288.c)
 *     sub_1800372D8 @ 0x1800372D8 (sub_1800372D8.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800FEEF0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=12
__int64 __fastcall sub_180035FAC(__int64 *a1, __int64 *a2)
{
  __int64 v4; // rax
  unsigned int v5; // r15d
  __int64 v6; // rcx
  __int64 *v7; // rax
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 *v13; // rbx
  __int64 *v14; // r14
  unsigned __int64 i; // rbx
  _QWORD *v16; // rdx
  __int128 v18; // [rsp+30h] [rbp-D0h] BYREF
  __int128 v19; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v20; // [rsp+58h] [rbp-A8h] BYREF
  char v21; // [rsp+60h] [rbp-A0h]
  __int64 v22; // [rsp+68h] [rbp-98h] BYREF
  char v23; // [rsp+70h] [rbp-90h]
  __int64 v24; // [rsp+78h] [rbp-88h] BYREF
  char v25; // [rsp+80h] [rbp-80h]
  __int64 v26; // [rsp+88h] [rbp-78h] BYREF
  char v27; // [rsp+90h] [rbp-70h]
  __int64 *v28; // [rsp+98h] [rbp-68h]
  char *v29[3]; // [rsp+A0h] [rbp-60h] BYREF
  unsigned __int64 v30; // [rsp+B8h] [rbp-48h]
  _QWORD v31[7]; // [rsp+C0h] [rbp-40h] BYREF
  _QWORD *v32; // [rsp+F8h] [rbp-8h]

  v28 = a2;
  sub_18002C460((__int64)(a1 + 1), (__int64)&v26);
  v4 = sub_180037268(a1);
  sub_18002C460(v4, (__int64)&v24);
  sub_18002C460(*a2 + 24, (__int64)&v22);
  v5 = sub_180028544(*a2);
  v7 = sub_1800306A0((__int64 *)v29, (_QWORD *)(v6 + 80));
  if ( (unsigned __int64)v7[3] >= 0x10 )
    v7 = (__int64 *)*v7;
  sub_18001F2B4(&stru_1801EA288, 3, "Engine::DetachDevice() -- detaching device id %u -- %s", v5, (const char *)v7);
  if ( v30 >= 0x10 )
    sub_180010884(v29[0], v30 + 1);
  v8 = *a1;
  v18 = 0LL;
  v9 = a2[1];
  if ( v9 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v9 + 8));
    v9 = a2[1];
  }
  *(_QWORD *)&v18 = *a2;
  *((_QWORD *)&v18 + 1) = v9;
  (*(void (__fastcall **)(__int64 *, __int128 *))(v8 + 152))(a1, &v18);
  v10 = a2[1];
  if ( v10 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v10 + 8));
    v10 = a2[1];
  }
  *(_QWORD *)&v19 = *a2;
  *((_QWORD *)&v19 + 1) = v10;
  v32 = 0LL;
  if ( sub_1800317FC() )
  {
    v31[0] = &std::_Func_impl_no_alloc<_lambda_d2182d05379cb014900636156d153b19_,void,std::shared_ptr<Spectre::Engine::Component> const &>::`vftable';
    v31[1] = v11;
    v31[2] = v12;
    v19 = 0LL;
    v32 = v31;
  }
  sub_180010910((__int64)&v19);
  v13 = (__int64 *)a1[88];
  v14 = (__int64 *)a1[89];
  while ( v13 != v14 )
  {
    sub_18002C460(*v13 + 16, (__int64)&v20);
    sub_18003036C(*v13, (__int64)v31);
    if ( v21 )
      j_LanguageEnumProc(v20);
    v13 += 2;
  }
  for ( i = 0LL; i < sub_1800372D8(a1); ++i )
  {
    sub_180037288(a1, v29, i);
    if ( v29[0] )
      (*(void (__fastcall **)(char *, _QWORD))(*(_QWORD *)v29[0] + 24LL))(v29[0], v5);
    sub_180010910((__int64)v29);
  }
  if ( v32 )
  {
    v16 = v31;
    LOBYTE(v16) = v32 != v31;
    (*(void (__fastcall **)(_QWORD *, _QWORD *))(*v32 + 32LL))(v32, v16);
    v32 = 0LL;
  }
  if ( v23 )
    j_LanguageEnumProc(v22);
  if ( v25 )
    j_LanguageEnumProc(v24);
  if ( v27 )
    j_LanguageEnumProc(v26);
  return sub_180010910((__int64)a2);
}
