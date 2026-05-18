/*
 * XREFs of sub_180017578 @ 0x180017578
 * Callers:
 *     sub_18001A2B0 @ 0x18001A2B0 (sub_18001A2B0.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     sub_180010884 @ 0x180010884 (sub_180010884.c)
 *     sub_1800129F4 @ 0x1800129F4 (sub_1800129F4.c)
 *     sub_1800184B4 @ 0x1800184B4 (sub_1800184B4.c)
 *     sub_180045FB4 @ 0x180045FB4 (sub_180045FB4.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800FEEF0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
_QWORD *__fastcall sub_180017578(__int64 a1, _QWORD *a2, __int64 a3)
{
  __int64 *v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  _QWORD *v9; // rdx
  unsigned __int64 v10; // rdx
  __int64 v12[5]; // [rsp+38h] [rbp-41h] BYREF
  _QWORD v13[7]; // [rsp+60h] [rbp-19h] BYREF
  _QWORD *v14; // [rsp+98h] [rbp+1Fh]

  v12[4] = a3;
  *a2 = 0LL;
  a2[1] = 0LL;
  v6 = sub_1800129F4(v12, a3);
  v14 = 0LL;
  if ( (unsigned __int8)sub_1800184B4(v8, v7, v6) )
  {
    v13[0] = &std::_Func_impl_no_alloc<_lambda_e4f8b105d577d0521f3737a824532f0c_,bool,std::shared_ptr<Spectre::Engine::SceneNode> const &>::`vftable';
    v13[1] = a2;
    v14 = v13;
  }
  sub_180045FB4(a1, v13);
  if ( v14 )
  {
    v9 = v13;
    LOBYTE(v9) = v14 != v13;
    (*(void (__fastcall **)(_QWORD *, _QWORD *))(*v14 + 32LL))(v14, v9);
  }
  v10 = *(_QWORD *)(a3 + 24);
  if ( v10 >= 8 )
    sub_180010884(*(char **)a3, 2 * v10 + 2);
  *(_QWORD *)(a3 + 16) = 0LL;
  *(_QWORD *)(a3 + 24) = 7LL;
  *(_WORD *)a3 = 0;
  return a2;
}
