/*
 * XREFs of ?unconditional_release_ref@?$com_ptr@VXamlLauncher@@@winrt@@AEAAXXZ @ 0x1801060D8
 * Callers:
 *     ??1?$com_ptr@VXamlLauncher@@@winrt@@QEAA@XZ @ 0x18006DF94 (--1-$com_ptr@VXamlLauncher@@@winrt@@QEAA@XZ.c)
 *     _lambda_9b41e49093e020fa356c5dbea766620b_::operator() @ 0x18009284C (_lambda_9b41e49093e020fa356c5dbea766620b_--operator().c)
 *     ?InitializeHolographicContextIdentifier@XamlLauncher@@AEAAJXZ @ 0x1800F3BE0 (-InitializeHolographicContextIdentifier@XamlLauncher@@AEAAJXZ.c)
 *     ?PublishServices@XamlLauncher@@UEAAJPEAUIServiceProvider@@PEAUIProfferService@@@Z @ 0x180105FC0 (-PublishServices@XamlLauncher@@UEAAJPEAUIServiceProvider@@PEAUIProfferService@@@Z.c)
 *     ?copy_ref@?$com_ptr@VXamlLauncher@@@winrt@@AEAAXPEAVXamlLauncher@@@Z @ 0x1801A91D8 (-copy_ref@-$com_ptr@VXamlLauncher@@@winrt@@AEAAXPEAVXamlLauncher@@@Z.c)
 *     winrt::impl::implements_delegate_winrt::Windows::Foundation::TypedEventHandler_winrt::WindowsUdk::UI::Shell::ShellViewCoordinator_winrt::WindowsUdk::UI::Shell::ShowShellViewRequestedEventArgs___lambda_bdb7e0a8ebff4ddc8c702491ecdd9a07___::Release @ 0x1801B22A0 (winrt--impl--implements_delegate_winrt--Windows--Foundation--TypedEventHandler_winr_ea_1801B22A0.c)
 *     ?release_ref@?$com_ptr@VXamlLauncher@@@winrt@@AEAAXXZ @ 0x1801BCD9C (-release_ref@-$com_ptr@VXamlLauncher@@@winrt@@AEAAXXZ.c)
 *     wistd::function_void___cdecl(enum_Windows::Internal::Shell::Holographic::UserDisplayContext_const_&)_::function_void___cdecl(enum_Windows::Internal::Shell::Holographic::UserDisplayContext_const_&)___lambda_0e377e64aae41d271781dea56205f73a__void_ @ 0x1801FB300 (wistd--function_void___cdecl(enum_Windows--Internal--Shell--Holographic--UserDisplayContext_cons.c)
 *     wistd::__function::__func__lambda_0e377e64aae41d271781dea56205f73a__void___cdecl(enum_Windows::Internal::Shell::Holographic::UserDisplayContext_const_&)_::___func__lambda_0e377e64aae41d271781dea56205f73a__void___cdecl(enum_Windows::Internal::Shell::Holographic::UserDisplayContext_const_&)_ @ 0x1801FE4F8 (wistd--__function--__func__lambda_0e377e64aae41d271781dea56205f73a__void___cdecl(enum_Windows--I.c)
 *     wistd::__function::__func__lambda_0e377e64aae41d271781dea56205f73a__void___cdecl(enum_Windows::Internal::Shell::Holographic::UserDisplayContext_const_&)_::destroy @ 0x180201760 (wistd--__function--__func__lambda_0e377e64aae41d271781dea56205f73a__void___cdecl(en_ea_180201760.c)
 *     _lambda_bdb7e0a8ebff4ddc8c702491ecdd9a07_::__lambda_bdb7e0a8ebff4ddc8c702491ecdd9a07_ @ 0x1804FFD80 (_lambda_bdb7e0a8ebff4ddc8c702491ecdd9a07_--__lambda_bdb7e0a8ebff4ddc8c702491ecdd9a07_.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall winrt::com_ptr<XamlLauncher>::unconditional_release_ref(__int64 *a1)
{
  __int64 v2; // rcx

  v2 = *a1;
  *a1 = 0LL;
  return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,CWRLObjectWithSite,Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,IImmersiveLauncher,IImmersiveLauncherTrayNotify,IImmersiveShellHookNotification,IServiceProvider,IImmersiveShellComponent,IImmersiveLauncherCortana,IXamlLauncherStateCallback,IPrivilegedOperationsConsumer,IImmersiveLauncherInternal>>::Release(v2);
}
