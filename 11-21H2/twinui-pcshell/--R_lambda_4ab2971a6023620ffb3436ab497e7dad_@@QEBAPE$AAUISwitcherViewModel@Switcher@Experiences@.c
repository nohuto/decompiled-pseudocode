/*
 * XREFs of ??R_lambda_4ab2971a6023620ffb3436ab497e7dad_@@QEBAPE$AAUISwitcherViewModel@Switcher@Experiences@ComposableShell@WindowsInternal@@XZ @ 0x180010E9C
 * Callers:
 *     ?reset@?$unique_winrt_event_token_cx@UISwitcherViewModel@Switcher@Experiences@ComposableShell@WindowsInternal@@@wil@@QEAAXXZ @ 0x180010DCC (-reset@-$unique_winrt_event_token_cx@UISwitcherViewModel@Switcher@Experiences@ComposableShell@Wi.c)
 * Callees:
 *     ?__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z @ 0x1800F6658 (-__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 _lambda_4ab2971a6023620ffb3436ab497e7dad_::operator()()
{
  __int64 v0; // rbx
  __int64 v1; // rdi
  __int64 result; // rax

  try
  {
    v0 = Platform::Details::ResolveWeakReference();
    v1 = __abi_winrt_ptr_ctor(v0);
    if ( v0 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v0 + 16LL))(v0);
    result = v1;
  }
  catch ( ... )
  {
    return 0LL;
  }
  return result;
}
