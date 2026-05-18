/*
 * XREFs of sub_1800C27CC @ 0x1800C27CC
 * Callers:
 *     sub_1800C6BF0 @ 0x1800C6BF0 (sub_1800C6BF0.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     sub_18001DE1C @ 0x18001DE1C (sub_18001DE1C.c)
 *     sub_18002771C @ 0x18002771C (sub_18002771C.c)
 *     sub_1800C3A08 @ 0x1800C3A08 (sub_1800C3A08.c)
 */

__int64 __fastcall sub_1800C27CC(__int64 a1)
{
  char v2; // al
  __int64 v3; // rdx
  _QWORD *v4; // rax
  __int64 v5; // rdx
  _QWORD v7[7]; // [rsp+20h] [rbp-39h] BYREF
  _QWORD *v8; // [rsp+58h] [rbp-1h]
  _BYTE v9[56]; // [rsp+60h] [rbp+7h] BYREF
  __int64 v10; // [rsp+98h] [rbp+3Fh]

  v8 = 0LL;
  v2 = sub_1800C3A08();
  if ( v2 )
  {
    v7[0] = &std::_Func_impl_no_alloc<_lambda_76d404fbcba0e82d74f92b1af906afb0_,std::shared_ptr<Spectre::Engine::RendererResource>,>::`vftable';
    v8 = v7;
  }
  v4 = (_QWORD *)((unsigned __int64)v7 & -(__int64)(v2 != 0));
  if ( v4 == v7 || *(_QWORD *)(a1 + 56) == a1 )
  {
    v10 = 0LL;
    sub_18002771C((__int64)v9, (__int64)v7);
    sub_18002771C((__int64)v7, a1);
    sub_18002771C(a1, (__int64)v9);
    sub_18001DE1C((__int64)v9, v5);
  }
  else
  {
    v8 = *(_QWORD **)(a1 + 56);
    *(_QWORD *)(a1 + 56) = v4;
  }
  sub_18001DE1C((__int64)v7, v3);
  return a1;
}
