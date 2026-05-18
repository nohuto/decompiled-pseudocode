/*
 * XREFs of sub_1800ED5B0 @ 0x1800ED5B0
 * Callers:
 *     sub_1800EDBD0 @ 0x1800EDBD0 (sub_1800EDBD0.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     sub_180029710 @ 0x180029710 (sub_180029710.c)
 *     sub_1800ED6D0 @ 0x1800ED6D0 (sub_1800ED6D0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800FEEF0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_1800ED5B0(__int64 a1)
{
  __int128 *v2; // rdx
  __int64 v3; // rcx
  __int128 v4; // xmm0
  __int128 v5; // xmm1
  _BYTE *v6; // rdx
  void ***v7; // rcx
  void ***v8; // rdx
  void **v10; // [rsp+20h] [rbp-39h] BYREF
  __int128 v11; // [rsp+28h] [rbp-31h]
  __int128 v12; // [rsp+38h] [rbp-21h]
  __int64 v13; // [rsp+48h] [rbp-11h]
  void ***v14; // [rsp+58h] [rbp-1h]
  _BYTE v15[56]; // [rsp+60h] [rbp+7h] BYREF
  _BYTE *v16; // [rsp+98h] [rbp+3Fh]

  v14 = 0LL;
  if ( (unsigned __int8)sub_1800ED6D0() )
  {
    v4 = *v2;
    v5 = v2[1];
    v10 = &std::_Func_impl_no_alloc<_lambda_5efd0f16faa6f6439fdb99826dc3e8ab_,void,std::shared_ptr<Spectre::Engine::Texture>,enum Spectre::Engine::Format,unsigned int>::`vftable';
    v11 = v4;
    v14 = &v10;
    v13 = *((_QWORD *)v2 + 4);
    v12 = v5;
  }
  else
  {
    v7 = *(void ****)(v3 + 56);
    if ( v7 != (void ***)a1 )
    {
      *(_QWORD *)(a1 + 56) = 0LL;
      v14 = v7;
      goto LABEL_6;
    }
  }
  v16 = 0LL;
  sub_180029710((__int64)v15, (__int64)&v10);
  sub_180029710((__int64)&v10, a1);
  sub_180029710(a1, (__int64)v15);
  if ( v16 )
  {
    v6 = v15;
    LOBYTE(v6) = v16 != v15;
    (*(void (__fastcall **)(_BYTE *, _BYTE *))(*(_QWORD *)v16 + 32LL))(v16, v6);
  }
  v7 = v14;
LABEL_6:
  if ( v7 )
  {
    v8 = &v10;
    LOBYTE(v8) = v7 != &v10;
    ((void (__fastcall *)(void ***, void ***))(*v7)[4])(v7, v8);
  }
  return a1;
}
