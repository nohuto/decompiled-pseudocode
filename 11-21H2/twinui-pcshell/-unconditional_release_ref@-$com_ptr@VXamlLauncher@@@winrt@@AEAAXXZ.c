/*
 * XREFs of ?unconditional_release_ref@?$com_ptr@VXamlLauncher@@@winrt@@AEAAXXZ @ 0x18012FF18
 * Callers:
 *     ?PublishServices@XamlLauncher@@UEAAJPEAUIServiceProvider@@PEAUIProfferService@@@Z @ 0x18012FD60 (-PublishServices@XamlLauncher@@UEAAJPEAUIServiceProvider@@PEAUIProfferService@@@Z.c)
 *     ?release_ref@?$com_ptr@VXamlLauncher@@@winrt@@AEAAXXZ @ 0x18012FF04 (-release_ref@-$com_ptr@VXamlLauncher@@@winrt@@AEAAXXZ.c)
 *     ?copy_ref@?$com_ptr@VXamlLauncher@@@winrt@@AEAAXPEAVXamlLauncher@@@Z @ 0x18017D3C4 (-copy_ref@-$com_ptr@VXamlLauncher@@@winrt@@AEAAXPEAVXamlLauncher@@@Z.c)
 *     _lambda_bdb7e0a8ebff4ddc8c702491ecdd9a07_::__lambda_bdb7e0a8ebff4ddc8c702491ecdd9a07_ @ 0x1801AA1E4 (_lambda_bdb7e0a8ebff4ddc8c702491ecdd9a07_--__lambda_bdb7e0a8ebff4ddc8c702491ecdd9a07_.c)
 *     winrt::impl::implements_delegate_winrt::Windows::Foundation::TypedEventHandler_winrt::WindowsUdk::UI::Shell::ShellViewCoordinator_winrt::WindowsUdk::UI::Shell::ShowShellViewRequestedEventArgs___lambda_bdb7e0a8ebff4ddc8c702491ecdd9a07___::_implements_delegate_winrt::Windows::Foundation::TypedEventHandler_winrt::WindowsUdk::UI::Shell::ShellViewCoordinator_winrt::WindowsUdk::UI::Shell::ShowShellViewRequestedEventArgs___lambda_bdb7e0a8ebff4ddc8c702491ecdd9a07___ @ 0x1801AA268 (winrt--impl--implements_delegate_winrt--Windows--Foundation--TypedEventHandler_winr_ea_1801AA268.c)
 *     _lambda_9b41e49093e020fa356c5dbea766620b_::operator() @ 0x1801AA380 (_lambda_9b41e49093e020fa356c5dbea766620b_--operator().c)
 *     ??1?$com_ptr@VXamlLauncher@@@winrt@@QEAA@XZ @ 0x18044A4D0 (--1-$com_ptr@VXamlLauncher@@@winrt@@QEAA@XZ.c)
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
