/*
 * XREFs of ?get_weak@?$implements@UDashboardManager@implementation@Shell@Internal@Windows@winrt@@U13456@Uimmersive_shell_component@6@UIImmersiveWindowMessageNotification@@UIEdgeUiTouchInvocation@@@winrt@@QEAA?AU?$weak_ref@UDashboardManager@implementation@Shell@Internal@Windows@winrt@@@2@XZ @ 0x1801CF87C
 * Callers:
 *     ?perform_delayed_initialization@DashboardManager@implementation@Shell@Internal@Windows@winrt@@UEAAXXZ @ 0x1801805B0 (-perform_delayed_initialization@DashboardManager@implementation@Shell@Internal@Windows@winrt@@UE.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UIGlobalInterfaceTable@impl@winrt@@@winrt@@AEAAXXZ @ 0x1800F70DC (-unconditional_release_ref@-$com_ptr@UIGlobalInterfaceTable@impl@winrt@@@winrt@@AEAAXXZ.c)
 *     ?check_hresult@winrt@@YAXUhresult@1@@Z @ 0x1800F9C28 (-check_hresult@winrt@@YAXUhresult@1@@Z.c)
 *     ?make_weak_ref@?$root_implements@Uimmersive_shell_component@winrt@@UIObjectWithSite@@UIServiceProvider@@UIImmersiveShellComponent@@UIInspectable@Foundation@Windows@2@@impl@winrt@@AEAAPEAUIWeakReferenceSource@23@XZ @ 0x1800F9E24 (-make_weak_ref@-$root_implements@Uimmersive_shell_component@winrt@@UIObjectWithSite@@UIServicePr.c)
 *     _CxxThrowException_0 @ 0x180188F6C (_CxxThrowException_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ??0bad_alloc@std@@QEAA@XZ @ 0x1802D6558 (--0bad_alloc@std@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=2
_QWORD *__fastcall winrt::implements<winrt::Windows::Internal::Shell::implementation::DashboardManager,winrt::Windows::Internal::Shell::DashboardManager,winrt::immersive_shell_component,IImmersiveWindowMessageNotification,IEdgeUiTouchInvocation>::get_weak(
        __int64 a1,
        _QWORD *a2)
{
  __int64 weak_ref; // rax
  unsigned int v4; // eax
  _BYTE pExceptionObject[32]; // [rsp+28h] [rbp-20h] BYREF
  __int64 v7; // [rsp+50h] [rbp+8h] BYREF
  _QWORD *v8; // [rsp+58h] [rbp+10h]

  v8 = a2;
  weak_ref = winrt::impl::root_implements<winrt::immersive_shell_component,IObjectWithSite,IServiceProvider,IImmersiveShellComponent,winrt::Windows::Foundation::IInspectable>::make_weak_ref((volatile signed __int64 *)(a1 + 56));
  if ( !weak_ref )
  {
    std::bad_alloc::bad_alloc((std::bad_alloc *)pExceptionObject);
    throw (std::bad_alloc *)pExceptionObject;
  }
  v7 = weak_ref;
  *a2 = 0LL;
  v4 = (*(__int64 (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)weak_ref + 24LL))(weak_ref, a2);
  winrt::check_hresult(v4);
  winrt::com_ptr<winrt::impl::IGlobalInterfaceTable>::unconditional_release_ref(&v7);
  return a2;
}
