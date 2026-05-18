/*
 * XREFs of sub_180088BB8 @ 0x180088BB8
 * Callers:
 *     sub_180088B98 @ 0x180088B98 (sub_180088B98.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     sub_180010884 @ 0x180010884 (sub_180010884.c)
 *     sub_180011088 @ 0x180011088 (sub_180011088.c)
 *     sub_1800126E8 @ 0x1800126E8 (sub_1800126E8.c)
 *     sub_18001292C @ 0x18001292C (sub_18001292C.c)
 *     sub_180045F10 @ 0x180045F10 (sub_180045F10.c)
 *     sub_180088D80 @ 0x180088D80 (sub_180088D80.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800FEEF0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_180088BB8(__int64 a1, __int64 a2)
{
  _QWORD *v4; // rdi
  __int64 v5; // rdx
  char *v6; // rcx
  _QWORD *v7; // rdx
  _QWORD v9[7]; // [rsp+30h] [rbp-58h] BYREF
  _QWORD *v10; // [rsp+68h] [rbp-20h]

  *(_QWORD *)a2 = 0LL;
  *(_QWORD *)(a2 + 8) = 0LL;
  *(_QWORD *)(a2 + 16) = 0LL;
  v4 = (_QWORD *)sub_180011088(0x200uLL);
  sub_18001292C(*(char **)a2, *(char **)(a2 + 8), v4);
  v6 = *(char **)a2;
  if ( *(_QWORD *)a2 )
  {
    sub_1800126E8((__int64)v6, *(_QWORD *)(a2 + 8));
    sub_180010884(*(char **)a2, (*(_QWORD *)(a2 + 16) - *(_QWORD *)a2) & 0xFFFFFFFFFFFFFFF0uLL);
  }
  *(_QWORD *)a2 = v4;
  *(_QWORD *)(a2 + 8) = v4;
  *(_QWORD *)(a2 + 16) = v4 + 64;
  v10 = 0LL;
  if ( (unsigned __int8)sub_180088D80(v6, v5) )
  {
    v9[0] = &std::_Func_impl_no_alloc<_lambda_7184ac0b1d10aa8b036768733263c113_,void,std::shared_ptr<Spectre::Engine::SceneNode const> const &>::`vftable';
    v9[1] = a2;
    v10 = v9;
  }
  sub_180045F10(a1, (__int64)v9);
  if ( v10 )
  {
    v7 = v9;
    LOBYTE(v7) = v10 != v9;
    (*(void (__fastcall **)(_QWORD *, _QWORD *))(*v10 + 32LL))(v10, v7);
  }
  return a2;
}
