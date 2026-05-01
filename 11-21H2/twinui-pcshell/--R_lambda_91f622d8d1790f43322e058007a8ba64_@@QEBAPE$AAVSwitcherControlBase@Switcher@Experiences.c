/*
 * XREFs of ??R_lambda_91f622d8d1790f43322e058007a8ba64_@@QEBAPE$AAVSwitcherControlBase@Switcher@Experiences@ComposableShell@WindowsInternal@@XZ @ 0x180011018
 * Callers:
 *     ?reset@?$unique_winrt_event_token_cx@VSwitcherControlBase@Switcher@Experiences@ComposableShell@WindowsInternal@@@wil@@QEAAXXZ @ 0x180010F34 (-reset@-$unique_winrt_event_token_cx@VSwitcherControlBase@Switcher@Experiences@ComposableShell@W.c)
 * Callees:
 *     ?__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z @ 0x1800F6658 (-__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall _lambda_91f622d8d1790f43322e058007a8ba64_::operator()(_QWORD *a1)
{
  __int64 v1; // rbx
  __int64 v2; // rdi

  v1 = Platform::Details::ResolveWeakReference(
         &_uuidof__AU__ISwitcherControlBasePublicNonVirtuals_Switcher_Experiences_ComposableShell_WindowsInternal__,
         *a1 + 8LL);
  v2 = __abi_winrt_ptr_ctor(v1);
  if ( v1 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v1 + 16LL))(v1);
  return v2;
}
