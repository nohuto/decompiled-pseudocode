/*
 * XREFs of ??R_lambda_a4d0d0877f62cc01b2b88c73646041c4_@@QEBA@XZ @ 0x18007EAC8
 * Callers:
 *     ?reset@?$unique_winrt_event_token_cx@VTaskViewTimeline@Switcher@Experiences@ComposableShell@WindowsInternal@@@wil@@QEAAXXZ @ 0x18007E8C0 (-reset@-$unique_winrt_event_token_cx@VTaskViewTimeline@Switcher@Experiences@ComposableShell@Wind.c)
 * Callees:
 *     ?__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z @ 0x18010E5F4 (-__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall _lambda_a4d0d0877f62cc01b2b88c73646041c4_::operator()(_QWORD *a1)
{
  __int64 v1; // rbx
  __int64 v2; // rdi

  v1 = Platform::Details::ResolveWeakReference(
         &_uuidof__AVTaskViewTimeline_Switcher_Experiences_ComposableShell_WindowsInternal__,
         *a1 + 8LL);
  v2 = __abi_winrt_ptr_ctor(v1);
  if ( v1 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v1 + 16LL))(v1);
  return v2;
}
