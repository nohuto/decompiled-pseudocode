/*
 * XREFs of sub_1800339DC @ 0x1800339DC
 * Callers:
 *     sub_180033400 @ 0x180033400 (sub_180033400.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_180010F54 @ 0x180010F54 (sub_180010F54.c)
 *     sub_180011B24 @ 0x180011B24 (sub_180011B24.c)
 *     sub_18001246C @ 0x18001246C (sub_18001246C.c)
 *     sub_18001DB68 @ 0x18001DB68 (sub_18001DB68.c)
 *     sub_180026650 @ 0x180026650 (sub_180026650.c)
 *     sub_18002A0C4 @ 0x18002A0C4 (sub_18002A0C4.c)
 *     sub_18002DE00 @ 0x18002DE00 (sub_18002DE00.c)
 *     sub_18002E0A8 @ 0x18002E0A8 (sub_18002E0A8.c)
 *     sub_18002F854 @ 0x18002F854 (sub_18002F854.c)
 *     sub_18003475C @ 0x18003475C (sub_18003475C.c)
 *     sub_18003477C @ 0x18003477C (sub_18003477C.c)
 *     sub_1800347C8 @ 0x1800347C8 (sub_1800347C8.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E39B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=8
__int64 __fastcall sub_1800339DC(__int64 a1, __int64 *a2)
{
  __int64 v4; // rax
  unsigned int v5; // r15d
  __int64 v6; // rcx
  const char *v7; // rax
  _QWORD *v8; // rax
  void (__fastcall *v9)(__int64, _QWORD *); // r8
  __int64 v10; // rcx
  __int64 *v11; // rbx
  __int64 *i; // rsi
  unsigned __int64 v13; // rbx
  __int64 v14; // rdx
  _QWORD *v15; // r8
  __int64 result; // rax
  __int64 v17; // rcx
  _BYTE v18[16]; // [rsp+38h] [rbp-71h] BYREF
  _BYTE v19[16]; // [rsp+48h] [rbp-61h] BYREF
  _BYTE v20[16]; // [rsp+58h] [rbp-51h] BYREF
  __int64 v21; // [rsp+68h] [rbp-41h] BYREF
  __int64 v22; // [rsp+70h] [rbp-39h]
  _QWORD v23[7]; // [rsp+90h] [rbp-19h] BYREF
  _QWORD *v24; // [rsp+C8h] [rbp+1Fh]

  sub_18002A0C4(a1 + 8, (__int64)v20);
  v4 = sub_18003475C(a1);
  sub_18002A0C4(v4, (__int64)v19);
  sub_18002A0C4(*a2 + 24, (__int64)v18);
  v5 = sub_180026650(*a2);
  v7 = (const char *)sub_18002E0A8(&v21, (_QWORD *)(v6 + 80));
  if ( *((_QWORD *)v7 + 3) >= 0x10uLL )
    v7 = *(const char **)v7;
  sub_18001DB68(&stru_1801C8288, 3, "Engine::DetachDevice() -- detaching device id %u -- %s", v5, v7);
  sub_180011B24((__int64)&v21);
  v8 = sub_18001246C(&v21, a2);
  v9(a1, v8);
  sub_18001246C(&v21, a2);
  v24 = 0LL;
  if ( sub_18002F854() )
  {
    v23[0] = &std::_Func_impl_no_alloc<_lambda_d2182d05379cb014900636156d153b19_,void,std::shared_ptr<Spectre::Engine::Component> const &>::`vftable';
    v23[1] = v21;
    v23[2] = v22;
    v10 = 0LL;
    v24 = v23;
  }
  else
  {
    v10 = v22;
  }
  if ( v10 )
    sub_180010530(v10);
  v11 = *(__int64 **)(a1 + 704);
  for ( i = *(__int64 **)(a1 + 712); v11 != i; v11 += 2 )
  {
    sub_18002A0C4(*v11 + 16, (__int64)&v21);
    sub_18002DE00(*v11, (__int64)v23);
    sub_180010F54((__int64)&v21);
  }
  v13 = 0LL;
  if ( sub_1800347C8(a1) )
  {
    do
    {
      sub_18003477C(a1, &v21, v13);
      if ( v21 )
        (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v21 + 24LL))(v21, v5);
      if ( v22 )
        sub_180010530(v22);
      ++v13;
    }
    while ( v13 < sub_1800347C8(a1) );
    v15 = v24;
  }
  if ( v15 )
  {
    LOBYTE(v14) = v15 != v23;
    (*(void (__fastcall **)(_QWORD *, __int64))(*v15 + 32LL))(v15, v14);
    v24 = 0LL;
  }
  sub_180010F54((__int64)v18);
  sub_180010F54((__int64)v19);
  result = sub_180010F54((__int64)v20);
  v17 = a2[1];
  if ( v17 )
    return sub_180010530(v17);
  return result;
}
