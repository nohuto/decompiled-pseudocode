/*
 * XREFs of ?NonDelegatingGetIids@?$root_implements@UUserResizeVisual@implementation@Transitions@Udwm@winrt@@U1345@UIUserResizeVisualNative@34@@impl@winrt@@IEAAHPEAIPEAPEAUguid@3@@Z @ 0x1800F0FE0
 * Callers:
 *     ?GetIids@?$implements@UAnimatedTransitionVisualWrapper@implementation@Transitions@Udwm@winrt@@U1345@UITransitionAnimationVisualNative@34@@winrt@@UEAAJPEAKPEAPEAU_GUID@@@Z @ 0x1800F0D50 (-GetIids@-$implements@UAnimatedTransitionVisualWrapper@implementation@Transitions@Udwm@winrt@@U1.c)
 * Callees:
 *     WINRT_IMPL_CoTaskMemAlloc @ 0x180061D82 (WINRT_IMPL_CoTaskMemAlloc.c)
 *     memmove_0 @ 0x180063707 (memmove_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180063740 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall winrt::impl::root_implements<winrt::Udwm::Transitions::implementation::UserResizeVisual,winrt::Udwm::Transitions::UserResizeVisual,Udwm::Transitions::IUserResizeVisualNative>::NonDelegatingGetIids(
        __int64 a1,
        unsigned int *a2,
        _QWORD *a3)
{
  unsigned int v5; // eax
  void *v6; // rax
  unsigned int v8; // [rsp+20h] [rbp-18h] BYREF
  void *Src; // [rsp+28h] [rbp-10h]

  if ( !a1 )
    a1 = 16LL;
  (*(void (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)a1 + 32LL))(a1, &v8);
  v5 = v8;
  if ( v8 )
  {
    *a2 = v8;
    v6 = WINRT_IMPL_CoTaskMemAlloc(16LL * v5);
    *a3 = v6;
    if ( !v6 )
      return 2147942414LL;
    memmove_0(v6, Src, 16LL * v8);
  }
  else
  {
    *a2 = 0;
    *a3 = 0LL;
  }
  return 0LL;
}
