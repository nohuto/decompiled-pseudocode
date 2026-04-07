/*
 * XREFs of ?NonDelegatingGetIids@?$root_implements@UWindowJointResizeTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@U13456@UIBitmapManager@45@@impl@winrt@@IEAAHPEAIPEAPEAUguid@3@@Z @ 0x1800EDBC0
 * Callers:
 *     ?GetIids@?$implements@UWindowJointResizeTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@U13456@UIBitmapManager@45@@winrt@@UEAAJPEAKPEAPEAU_GUID@@@Z @ 0x1800ED8D0 (-GetIids@-$implements@UWindowJointResizeTransitionHandler@implementation@Private@Transitions@Udw.c)
 * Callees:
 *     WINRT_IMPL_CoTaskMemAlloc @ 0x18005DE95 (WINRT_IMPL_CoTaskMemAlloc.c)
 *     memmove_0 @ 0x180066364 (memmove_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800663A0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall winrt::impl::root_implements<winrt::Udwm::Transitions::Private::implementation::WindowJointResizeTransitionHandler,winrt::Udwm::Transitions::Private::WindowJointResizeTransitionHandler,Udwm::Transitions::IBitmapManager>::NonDelegatingGetIids(
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
