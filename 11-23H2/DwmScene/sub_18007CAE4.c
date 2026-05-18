/*
 * XREFs of sub_18007CAE4 @ 0x18007CAE4
 * Callers:
 *     sub_1800306C8 @ 0x1800306C8 (sub_1800306C8.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     sub_180017648 @ 0x180017648 (sub_180017648.c)
 *     sub_18001DE1C @ 0x18001DE1C (sub_18001DE1C.c)
 *     sub_18007C7D8 @ 0x18007C7D8 (sub_18007C7D8.c)
 *     sub_18007CA38 @ 0x18007CA38 (sub_18007CA38.c)
 *     sub_180098904 @ 0x180098904 (sub_180098904.c)
 */

// Hidden C++ exception states: #wind=2
_QWORD *__fastcall sub_18007CAE4(_QWORD *a1)
{
  _QWORD *v2; // rax
  __int64 v3; // rax
  __int64 v4; // rdx
  _QWORD v6[7]; // [rsp+30h] [rbp-58h] BYREF
  _QWORD *v7; // [rsp+68h] [rbp-20h]

  v2 = sub_180017648(v6, (__int64)&unk_1801D7E88);
  sub_180098904(a1, v2);
  *a1 = &Spectre::Engine::StandardShaderExtension::`vftable';
  v7 = 0LL;
  if ( sub_18007CA38() )
  {
    v6[0] = &std::_Func_impl_no_alloc<_lambda_615f747b56e4a572d73a4444551448e6_,void,Spectre::Engine::LightConstants *>::`vftable';
    v7 = v6;
  }
  v3 = o__aligned_malloc(592LL, 16LL);
  sub_18007C7D8((__int64)(a1 + 19), v3, (__int64)v6);
  sub_18001DE1C((__int64)v6, v4);
  return a1;
}
