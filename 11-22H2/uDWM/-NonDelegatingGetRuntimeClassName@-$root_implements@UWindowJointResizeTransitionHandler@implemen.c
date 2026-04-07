/*
 * XREFs of ?NonDelegatingGetRuntimeClassName@?$root_implements@UWindowJointResizeTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@U13456@UIBitmapManager@45@@impl@winrt@@IEAAHPEAPEAX@Z @ 0x1800EDC50
 * Callers:
 *     ?GetRuntimeClassName@?$implements@UWindowJointResizeTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@U13456@UIBitmapManager@45@@winrt@@UEAAJPEAPEAUHSTRING__@@@Z @ 0x1800ED9D0 (-GetRuntimeClassName@-$implements@UWindowJointResizeTransitionHandler@implementation@Private@Tra.c)
 *     ?GetRuntimeClassName@?$produce_base@UTopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@UITopLevelWindow3DWrapper@345@X@impl@winrt@@UEAAHPEAPEAX@Z @ 0x1800ED9F0 (-GetRuntimeClassName@-$produce_base@UTopLevelWindow3DWrapper@implementation@Transitions@Udwm@win.c)
 * Callees:
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x18005BE70 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800663A0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall winrt::impl::root_implements<winrt::Udwm::Transitions::Private::implementation::WindowJointResizeTransitionHandler,winrt::Udwm::Transitions::Private::WindowJointResizeTransitionHandler,Udwm::Transitions::IBitmapManager>::NonDelegatingGetRuntimeClassName(
        __int64 a1,
        _QWORD *a2)
{
  __int64 *v3; // rax
  __int64 v4; // rcx
  __int64 result; // rax
  void *v6; // [rsp+30h] [rbp+8h] BYREF

  if ( !a1 )
    a1 = 16LL;
  try
  {
    v3 = (__int64 *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 40LL))(a1);
    v4 = *v3;
    *v3 = 0LL;
    *a2 = v4;
    winrt::handle_type<winrt::impl::hstring_traits>::close(&v6);
    result = 0LL;
  }
  catch ( ... )
  {
    return *(unsigned int *)winrt::to_hresult(&v6);
  }
  return result;
}
