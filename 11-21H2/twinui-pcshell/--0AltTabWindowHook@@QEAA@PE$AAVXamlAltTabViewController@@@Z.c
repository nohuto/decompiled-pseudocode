/*
 * XREFs of ??0AltTabWindowHook@@QEAA@PE$AAVXamlAltTabViewController@@@Z @ 0x18060DD08
 * Callers:
 *     ?RegisterKeyboardHook@XamlAltTabViewController@@QE$AAAXXZ @ 0x1805FB37C (-RegisterKeyboardHook@XamlAltTabViewController@@QE$AAAXXZ.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180097BDC (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z @ 0x1800F6658 (-__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x180188B1C (--2@YAPEAX_K@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18018F71C (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$?0AEAPE$AAVXamlAltTabViewController@@AEAPEAUHHOOK__@@@?$_Ref_count_obj2@VAltTabWindowHookData@@@std@@QEAA@AEAPE$AAVXamlAltTabViewController@@AEAPEAUHHOOK__@@@Z @ 0x18060D380 (--$-0AEAPE$AAVXamlAltTabViewController@@AEAPEAUHHOOK__@@@-$_Ref_count_obj2@VAltTabWindowHookData.c)
 */

// Hidden C++ exception states: #wind=3
_QWORD *__fastcall AltTabWindowHook::AltTabWindowHook(_QWORD *a1, __int64 a2)
{
  const char *v3; // r9
  std::_Ref_count_base *v4; // rax
  std::_Ref_count_base *v5; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v8; // [rsp+38h] [rbp+10h] BYREF
  HHOOK v9; // [rsp+40h] [rbp+18h] BYREF
  void *v10; // [rsp+48h] [rbp+20h]

  v8 = a2;
  v8 = __abi_winrt_ptr_ctor(a2);
  *a1 = 0LL;
  a1[1] = 0LL;
  if ( AltTabWindowHook::s_altTabHook )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0xBB,
      (int)"pcshell\\twinui\\xamlmultitaskingview\\lib\\xamlalttabviewcontroller.cpp",
      v3);
  v9 = SetWindowsHookExW(13, AltTabWindowHook::AltTabHookProc, 0LL, 0);
  v10 = operator new(0x28uLL);
  v4 = (std::_Ref_count_base *)std::_Ref_count_obj2<AltTabWindowHookData>::_Ref_count_obj2<AltTabWindowHookData>(
                                 (__int64)v10,
                                 &v8,
                                 (__int64 *)&v9);
  AltTabWindowHook::s_altTabHook = (__int64)v4 + 16;
  v5 = qword_1807B4BA0;
  qword_1807B4BA0 = v4;
  if ( v5 )
    std::_Ref_count_base::_Decref(v5);
  if ( v8 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  return a1;
}
