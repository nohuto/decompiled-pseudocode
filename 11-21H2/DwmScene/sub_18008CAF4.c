/*
 * XREFs of sub_18008CAF4 @ 0x18008CAF4
 * Callers:
 *     sub_180030788 @ 0x180030788 (sub_180030788.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     sub_18001875C @ 0x18001875C (sub_18001875C.c)
 *     sub_180067590 @ 0x180067590 (sub_180067590.c)
 *     sub_180088AF8 @ 0x180088AF8 (sub_180088AF8.c)
 *     sub_18008CAE8 @ 0x18008CAE8 (sub_18008CAE8.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800FEEF0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
_QWORD *__fastcall sub_18008CAF4(_QWORD *a1)
{
  __int64 *v2; // rax
  __int64 v3; // rax
  __int64 *v4; // rdx
  __int64 v6[7]; // [rsp+30h] [rbp-58h] BYREF
  __int64 *v7; // [rsp+68h] [rbp-20h]

  v2 = sub_18001875C(v6, (__int64)&qword_1801F6478);
  sub_180067590((__int64)a1, (__int64)v2);
  *a1 = &Spectre::Engine::BackgroundUnlitShaderExtension::`vftable';
  v7 = 0LL;
  if ( sub_18008CAE8() )
  {
    v6[0] = (__int64)&std::_Func_impl_no_alloc<_lambda_bf891fdd623fe213d977bbf9c972eb66_,void,Spectre::Engine::LightConstants *>::`vftable';
    v7 = v6;
  }
  v3 = o__aligned_malloc(592LL, 16LL);
  sub_180088AF8((__int64)(a1 + 14), v3, (__int64)v6);
  if ( v7 )
  {
    v4 = v6;
    LOBYTE(v4) = v7 != v6;
    (*(void (__fastcall **)(__int64 *, __int64 *))(*v7 + 32))(v7, v4);
  }
  return a1;
}
