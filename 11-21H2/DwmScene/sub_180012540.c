/*
 * XREFs of sub_180012540 @ 0x180012540
 * Callers:
 *     sub_180012520 @ 0x180012520 (sub_180012520.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     sub_180010884 @ 0x180010884 (sub_180010884.c)
 *     sub_180011088 @ 0x180011088 (sub_180011088.c)
 *     sub_1800126E8 @ 0x1800126E8 (sub_1800126E8.c)
 *     sub_180012920 @ 0x180012920 (sub_180012920.c)
 *     sub_18001292C @ 0x18001292C (sub_18001292C.c)
 *     sub_180045F10 @ 0x180045F10 (sub_180045F10.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800FEEF0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 *__fastcall sub_180012540(__int64 a1, __int64 *a2)
{
  __int64 v4; // rdi
  __int64 v5; // rdx
  __int64 v6; // rcx
  _QWORD *v7; // rdx
  _QWORD v9[7]; // [rsp+30h] [rbp-58h] BYREF
  _QWORD *v10; // [rsp+68h] [rbp-20h]

  *a2 = 0LL;
  a2[1] = 0LL;
  a2[2] = 0LL;
  v4 = sub_180011088(0x200uLL);
  sub_18001292C(*a2, a2[1], v4);
  v6 = *a2;
  if ( *a2 )
  {
    sub_1800126E8(v6, a2[1]);
    sub_180010884((char *)*a2, (a2[2] - *a2) & 0xFFFFFFFFFFFFFFF0uLL);
  }
  *a2 = v4;
  a2[1] = v4;
  a2[2] = v4 + 512;
  v10 = 0LL;
  if ( (unsigned __int8)sub_180012920(v6, v5) )
  {
    v9[0] = &std::_Func_impl_no_alloc<_lambda_38672d4837fba783512361a26dc8aa1f_,void,std::shared_ptr<Spectre::Engine::SceneNode const> const &>::`vftable';
    v9[1] = a2;
    v10 = v9;
  }
  sub_180045F10(a1, v9);
  if ( v10 )
  {
    v7 = v9;
    LOBYTE(v7) = v10 != v9;
    (*(void (__fastcall **)(_QWORD *, _QWORD *))(*v10 + 32LL))(v10, v7);
  }
  return a2;
}
