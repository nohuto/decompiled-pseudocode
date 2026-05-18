/*
 * XREFs of sub_180061784 @ 0x180061784
 * Callers:
 *     sub_18006D0BC @ 0x18006D0BC (sub_18006D0BC.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     sub_18001DE1C @ 0x18001DE1C (sub_18001DE1C.c)
 *     sub_18002771C @ 0x18002771C (sub_18002771C.c)
 *     sub_180062F28 @ 0x180062F28 (sub_180062F28.c)
 */

__int64 __fastcall sub_180061784(__int64 a1, _QWORD *a2)
{
  char v3; // al
  void **v4; // rdx
  __int64 v5; // rcx
  _QWORD *v6; // rax
  __int64 v7; // rdx
  _QWORD v9[7]; // [rsp+20h] [rbp-39h] BYREF
  _QWORD *v10; // [rsp+58h] [rbp-1h]
  _BYTE v11[56]; // [rsp+60h] [rbp+7h] BYREF
  __int64 v12; // [rsp+98h] [rbp+3Fh]

  v10 = 0LL;
  v3 = sub_180062F28(*a2);
  if ( v3 )
  {
    v9[1] = v5;
    v4 = &std::_Func_impl_no_alloc<_lambda_947c2138106fe11b43b65bbf065188b9_,void,Spectre::Engine::ImageProcessingEffect const &,std::shared_ptr<Spectre::Engine::Texture> const &>::`vftable';
    v9[0] = &std::_Func_impl_no_alloc<_lambda_947c2138106fe11b43b65bbf065188b9_,void,Spectre::Engine::ImageProcessingEffect const &,std::shared_ptr<Spectre::Engine::Texture> const &>::`vftable';
    v10 = v9;
  }
  v6 = (_QWORD *)((unsigned __int64)v9 & -(__int64)(v3 != 0));
  if ( v6 == v9 || *(_QWORD *)(a1 + 56) == a1 )
  {
    v12 = 0LL;
    sub_18002771C((__int64)v11, (__int64)v9);
    sub_18002771C((__int64)v9, a1);
    sub_18002771C(a1, (__int64)v11);
    sub_18001DE1C((__int64)v11, v7);
  }
  else
  {
    v10 = *(_QWORD **)(a1 + 56);
    *(_QWORD *)(a1 + 56) = v6;
  }
  sub_18001DE1C((__int64)v9, (__int64)v4);
  return a1;
}
