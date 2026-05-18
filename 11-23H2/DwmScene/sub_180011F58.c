/*
 * XREFs of sub_180011F58 @ 0x180011F58
 * Callers:
 *     sub_180011F38 @ 0x180011F38 (sub_180011F38.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     sub_18001221C @ 0x18001221C (sub_18001221C.c)
 *     sub_180013280 @ 0x180013280 (sub_180013280.c)
 *     sub_180040EEC @ 0x180040EEC (sub_180040EEC.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E39B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
_QWORD *__fastcall sub_180011F58(__int64 a1, _QWORD *a2)
{
  _QWORD *v4; // rdx
  _QWORD v6[7]; // [rsp+30h] [rbp-58h] BYREF
  _QWORD *v7; // [rsp+68h] [rbp-20h]

  *a2 = 0LL;
  a2[1] = 0LL;
  a2[2] = 0LL;
  sub_180013280(a2);
  v7 = 0LL;
  if ( (unsigned __int8)sub_18001221C() )
  {
    v6[0] = &std::_Func_impl_no_alloc<_lambda_38672d4837fba783512361a26dc8aa1f_,void,std::shared_ptr<Spectre::Engine::SceneNode const> const &>::`vftable';
    v6[1] = a2;
    v7 = v6;
  }
  sub_180040EEC(a1, v6);
  if ( v7 )
  {
    v4 = v6;
    LOBYTE(v4) = v7 != v6;
    (*(void (__fastcall **)(_QWORD *, _QWORD *))(*v7 + 32LL))(v7, v4);
  }
  return a2;
}
