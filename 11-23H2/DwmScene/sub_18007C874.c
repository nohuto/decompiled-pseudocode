/*
 * XREFs of sub_18007C874 @ 0x18007C874
 * Callers:
 *     sub_18007C854 @ 0x18007C854 (sub_18007C854.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     sub_180013280 @ 0x180013280 (sub_180013280.c)
 *     sub_180040EEC @ 0x180040EEC (sub_180040EEC.c)
 *     sub_18007CA44 @ 0x18007CA44 (sub_18007CA44.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E39B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_18007C874(__int64 a1, __int64 a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  _QWORD *v6; // rdx
  _QWORD v8[7]; // [rsp+30h] [rbp-58h] BYREF
  _QWORD *v9; // [rsp+68h] [rbp-20h]

  *(_QWORD *)a2 = 0LL;
  *(_QWORD *)(a2 + 8) = 0LL;
  *(_QWORD *)(a2 + 16) = 0LL;
  sub_180013280((char **)a2);
  v9 = 0LL;
  if ( (unsigned __int8)sub_18007CA44(v5, v4) )
  {
    v8[0] = &std::_Func_impl_no_alloc<_lambda_7184ac0b1d10aa8b036768733263c113_,void,std::shared_ptr<Spectre::Engine::SceneNode const> const &>::`vftable';
    v8[1] = a2;
    v9 = v8;
  }
  sub_180040EEC(a1, (__int64)v8);
  if ( v9 )
  {
    v6 = v8;
    LOBYTE(v6) = v9 != v8;
    (*(void (__fastcall **)(_QWORD *, _QWORD *))(*v9 + 32LL))(v9, v6);
  }
  return a2;
}
