/*
 * XREFs of sub_1800627F0 @ 0x1800627F0
 * Callers:
 *     sub_1800627D0 @ 0x1800627D0 (sub_1800627D0.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     sub_180040EEC @ 0x180040EEC (sub_180040EEC.c)
 *     sub_180062F10 @ 0x180062F10 (sub_180062F10.c)
 *     sub_18006EA80 @ 0x18006EA80 (sub_18006EA80.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E39B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
_QWORD *__fastcall sub_1800627F0(__int64 a1, _QWORD *a2)
{
  _QWORD *v4; // rdx
  _QWORD v6[7]; // [rsp+30h] [rbp-58h] BYREF
  _QWORD *v7; // [rsp+68h] [rbp-20h]

  *a2 = 0LL;
  a2[1] = 0LL;
  a2[2] = 0LL;
  sub_18006EA80(a2);
  v7 = 0LL;
  if ( (unsigned __int8)sub_180062F10() )
  {
    v6[0] = &std::_Func_impl_no_alloc<_lambda_750ab9e5186891eb31094975a637ff02_,void,std::shared_ptr<Spectre::Engine::SceneNode const> const &>::`vftable';
    v6[1] = a2;
    v7 = v6;
  }
  sub_180040EEC(a1, (__int64)v6);
  if ( v7 )
  {
    v4 = v6;
    LOBYTE(v4) = v7 != v6;
    (*(void (__fastcall **)(_QWORD *, _QWORD *))(*v7 + 32LL))(v7, v4);
  }
  return a2;
}
