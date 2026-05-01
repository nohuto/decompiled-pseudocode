/*
 * XREFs of ?DismissViewAnimated@GuidedSnapAssistViewController@@QE$AAAXW4DismissOptions@@@Z @ 0x1807894FC
 * Callers:
 *     ?OnAppSnapped@XamlSnapAssistViewHost@@UEAAJ_KURect@Foundation@Windows@ABI@@@Z @ 0x18076CF90 (-OnAppSnapped@XamlSnapAssistViewHost@@UEAAJ_KURect@Foundation@Windows@ABI@@@Z.c)
 *     ?HostWindowActivationChanged@?QIXamlSwitcherWindowInteractionEvents@@GuidedSnapAssistViewController@@UE$AAAX_N_K@Z @ 0x1807895E0 (-HostWindowActivationChanged@-QIXamlSwitcherWindowInteractionEvents@@GuidedSnapAssi_ea_1807895E0.c)
 *     ?OnLightDismiss@?QIXamlSwitcherWindowInteractionEvents@@GuidedSnapAssistViewController@@UE$AAAXXZ @ 0x180789D98 (-OnLightDismiss@-QIXamlSwitcherWindowInteractionEvents@@GuidedSnapAssistViewController@@UE$AAAXX.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18000D700 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800D5AF0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ??4IUnknown@Foundation@Windows@winrt@@QEAAAEAU0123@$$QEAU0123@@Z @ 0x180172F30 (--4IUnknown@Foundation@Windows@winrt@@QEAAAEAU0123@$$QEAU0123@@Z.c)
 *     ??$query@UIXamlSnapAssistViewHostInternal@@@?$com_ptr_t@UIMultitaskingViewHost@@Uerr_exception_policy@wil@@@wil@@QEBA?AV?$com_ptr_t@UIXamlSnapAssistViewHostInternal@@Uerr_exception_policy@wil@@@1@XZ @ 0x18028DCCC (--$query@UIXamlSnapAssistViewHostInternal@@@-$com_ptr_t@UIMultitaskingViewHost@@Uerr_exception_p.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Cancel@?$consume_Windows_System_Threading_IThreadPoolTimer@UIThreadPoolTimer@Threading@System@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x1802D2E9A (-Cancel@-$consume_Windows_System_Threading_IThreadPoolTimer@UIThreadPoolTimer@Threading@System@W.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall GuidedSnapAssistViewController::DismissViewAnimated(__int64 a1, char a2)
{
  winrt::Windows::Foundation::IUnknown *v4; // rbx
  HWND v5; // rcx
  _QWORD *v6; // rax
  __int64 v7; // [rsp+30h] [rbp+8h] BYREF

  v4 = (winrt::Windows::Foundation::IUnknown *)(a1 + 376);
  if ( *(_QWORD *)(a1 + 376) )
  {
    winrt::impl::consume_Windows_System_Threading_IThreadPoolTimer<winrt::Windows::System::Threading::IThreadPoolTimer>::Cancel((_QWORD *)(a1 + 376));
    v7 = 0LL;
    winrt::Windows::Foundation::IUnknown::operator=(v4, (winrt::Windows::Foundation::IUnknown *)&v7);
    if ( v7 )
      winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v7);
  }
  if ( (a2 & 1) != 0 )
  {
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 80) + 24LL))(*(_QWORD *)(a1 + 80));
    v5 = *(HWND *)(*(_QWORD *)(a1 + 384) + 120LL);
    if ( v5 )
      SetForegroundWindow(v5);
  }
  v6 = wil::com_ptr_t<IMultitaskingViewHost,wil::err_exception_policy>::query<IXamlSnapAssistViewHostInternal>(
         (__int64 (__fastcall ****)(_QWORD, GUID *, _QWORD *))(a1 + 56),
         &v7);
  (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v6 + 32LL))(*v6);
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v7);
}
