/*
 * XREFs of ?CreateInstance@__IFadeNonVisibleItemsInvokePolicyFactory@Switcher@Experiences@ComposableShell@WindowsInternal@@UE$AAAPE$AAVFadeNonVisibleItemsInvokePolicy@2345@PE$AAUISwitchItemDataSource@Multitasking@4Internal@Windows@@VRect@Foundation@Windows@@@Z @ 0x1800153B8
 * Callers:
 *     ??0FadeNonVisibleItemsInvokePolicy@Switcher@Experiences@ComposableShell@WindowsInternal@@QE$AAA@PE$AAUISwitchItemDataSource@Multitasking@3Internal@Windows@@VRect@Foundation@8@@Z @ 0x1800152A8 (--0FadeNonVisibleItemsInvokePolicy@Switcher@Experiences@ComposableShell@WindowsInternal@@QE$AAA@.c)
 * Callees:
 *     ?__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z @ 0x1800F6658 (-__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?__abi_WinRTraiseException@@YAXJ@Z @ 0x18041F378 (-__abi_WinRTraiseException@@YAXJ@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall WindowsInternal::ComposableShell::Experiences::Switcher::__IFadeNonVisibleItemsInvokePolicyFactory::CreateInstance(
        __int64 *a1,
        __int64 a2,
        __int128 *a3)
{
  __int64 v3; // rax
  int v4; // eax
  __int64 v5; // rbx
  __int128 v7; // [rsp+30h] [rbp-18h] BYREF
  __int64 v8; // [rsp+50h] [rbp+8h] BYREF

  v8 = 0LL;
  v3 = *a1;
  v7 = *a3;
  v4 = (*(__int64 (__fastcall **)(__int64 *, __int64, __int128 *, __int64 *))(v3 + 48))(a1, a2, &v7, &v8);
  if ( v4 < 0 )
  {
    __abi_WinRTraiseException(v4);
    JUMPOUT(0x180015432LL);
  }
  v5 = __abi_winrt_ptr_ctor(v8);
  if ( v8 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  return v5;
}
