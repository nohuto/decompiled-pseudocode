/*
 * XREFs of sub_180016288 @ 0x180016288
 * Callers:
 *     sub_180018FC0 @ 0x180018FC0 (sub_180018FC0.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     sub_180012440 @ 0x180012440 (sub_180012440.c)
 *     sub_180013348 @ 0x180013348 (sub_180013348.c)
 *     sub_180017088 @ 0x180017088 (sub_180017088.c)
 *     sub_180040F64 @ 0x180040F64 (sub_180040F64.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E39B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
_QWORD *__fastcall sub_180016288(__int64 a1, _QWORD *a2, __int64 a3)
{
  _QWORD *v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  _QWORD *v9; // rdx
  _QWORD v11[5]; // [rsp+38h] [rbp-31h] BYREF
  _QWORD v12[7]; // [rsp+60h] [rbp-9h] BYREF
  _QWORD *v13; // [rsp+98h] [rbp+2Fh]

  v11[4] = a3;
  *a2 = 0LL;
  a2[1] = 0LL;
  v6 = sub_180012440(v11, a3);
  v13 = 0LL;
  if ( (unsigned __int8)sub_180017088(v8, v7, v6) )
  {
    v12[0] = &std::_Func_impl_no_alloc<_lambda_e4f8b105d577d0521f3737a824532f0c_,bool,std::shared_ptr<Spectre::Engine::SceneNode> const &>::`vftable';
    v12[1] = a2;
    v13 = v12;
  }
  sub_180040F64(a1, v12);
  if ( v13 )
  {
    v9 = v12;
    LOBYTE(v9) = v13 != v12;
    (*(void (__fastcall **)(_QWORD *, _QWORD *))(*v13 + 32LL))(v13, v9);
  }
  sub_180013348(a3);
  return a2;
}
