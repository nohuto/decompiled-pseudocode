/*
 * XREFs of sub_1800D57BC @ 0x1800D57BC
 * Callers:
 *     sub_1800D5EA0 @ 0x1800D5EA0 (sub_1800D5EA0.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     sub_18001DE1C @ 0x18001DE1C (sub_18001DE1C.c)
 *     sub_18002771C @ 0x18002771C (sub_18002771C.c)
 *     sub_1800D5894 @ 0x1800D5894 (sub_1800D5894.c)
 */

__int64 __fastcall sub_1800D57BC(__int64 a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int128 v4; // xmm0
  __int128 v5; // xmm1
  __int64 v6; // rdx
  void **v8; // [rsp+20h] [rbp-39h] BYREF
  __int128 v9; // [rsp+28h] [rbp-31h]
  __int128 v10; // [rsp+38h] [rbp-21h]
  __int64 v11; // [rsp+48h] [rbp-11h]
  void ***v12; // [rsp+58h] [rbp-1h]
  _BYTE v13[56]; // [rsp+60h] [rbp+7h] BYREF
  __int64 v14; // [rsp+98h] [rbp+3Fh]

  v12 = 0LL;
  if ( (unsigned __int8)sub_1800D5894() )
  {
    v4 = *(_OWORD *)v2;
    v5 = *(_OWORD *)(v2 + 16);
    v8 = &std::_Func_impl_no_alloc<_lambda_5efd0f16faa6f6439fdb99826dc3e8ab_,void,std::shared_ptr<Spectre::Engine::Texture>,enum Spectre::Engine::Format,unsigned int>::`vftable';
    v9 = v4;
    v12 = &v8;
    v11 = *(_QWORD *)(v2 + 32);
    v10 = v5;
  }
  else if ( *(_QWORD *)(a1 + 56) != a1 )
  {
    v12 = *(void ****)(a1 + 56);
    *(_QWORD *)(a1 + 56) = v3;
    goto LABEL_4;
  }
  v14 = v3;
  sub_18002771C((__int64)v13, (__int64)&v8);
  sub_18002771C((__int64)&v8, a1);
  sub_18002771C(a1, (__int64)v13);
  sub_18001DE1C((__int64)v13, v6);
LABEL_4:
  sub_18001DE1C((__int64)&v8, v2);
  return a1;
}
