/*
 * XREFs of ??R_lambda_6817ab8103f3167592b67d220c4dea03_@@QEBA@XZ @ 0x18007F7C0
 * Callers:
 *     ?reset@?$unique_winrt_event_token_cx@VVirtualDesktopBarElementViewModel@Switcher@Experiences@ComposableShell@WindowsInternal@@@wil@@QEAAXXZ @ 0x18007F6DC (-reset@-$unique_winrt_event_token_cx@VVirtualDesktopBarElementViewModel@Switcher@Experiences@Com.c)
 * Callees:
 *     ?__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z @ 0x18010E5F4 (-__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall _lambda_6817ab8103f3167592b67d220c4dea03_::operator()(_QWORD *a1)
{
  __int64 v1; // rbx
  __int64 v2; // rdi

  v1 = Platform::Details::ResolveWeakReference(
         &_uuidof__AVVirtualDesktopBarElementViewModel_Switcher_Experiences_ComposableShell_WindowsInternal__,
         *a1 + 8LL);
  v2 = __abi_winrt_ptr_ctor(v1);
  if ( v1 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v1 + 16LL))(v1);
  return v2;
}
