/*
 * XREFs of sub_18007FD84 @ 0x18007FD84
 * Callers:
 *     sub_180030104 @ 0x180030104 (sub_180030104.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     sub_180017648 @ 0x180017648 (sub_180017648.c)
 *     sub_18001DE1C @ 0x18001DE1C (sub_18001DE1C.c)
 *     sub_18005F7EC @ 0x18005F7EC (sub_18005F7EC.c)
 *     sub_18007C7D8 @ 0x18007C7D8 (sub_18007C7D8.c)
 *     sub_18007FD78 @ 0x18007FD78 (sub_18007FD78.c)
 */

// Hidden C++ exception states: #wind=2
_QWORD *__fastcall sub_18007FD84(_QWORD *a1)
{
  _QWORD *v2; // rax
  __int64 v3; // rax
  __int64 v4; // rdx
  _QWORD v6[7]; // [rsp+30h] [rbp-58h] BYREF
  _QWORD *v7; // [rsp+68h] [rbp-20h]

  v2 = sub_180017648(v6, (__int64)&unk_1801D8448);
  sub_18005F7EC((__int64)a1, (__int64)v2);
  *a1 = &Spectre::Engine::BackgroundUnlitShaderExtension::`vftable';
  v7 = 0LL;
  if ( sub_18007FD78() )
  {
    v6[0] = &std::_Func_impl_no_alloc<_lambda_bf891fdd623fe213d977bbf9c972eb66_,void,Spectre::Engine::LightConstants *>::`vftable';
    v7 = v6;
  }
  v3 = o__aligned_malloc(592LL, 16LL);
  sub_18007C7D8((__int64)(a1 + 14), v3, (__int64)v6);
  sub_18001DE1C((__int64)v6, v4);
  return a1;
}
