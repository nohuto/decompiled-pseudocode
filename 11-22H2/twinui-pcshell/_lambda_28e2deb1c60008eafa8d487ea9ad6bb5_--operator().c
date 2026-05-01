/*
 * XREFs of _lambda_28e2deb1c60008eafa8d487ea9ad6bb5_::operator() @ 0x180772438
 * Callers:
 *     winrt::impl::delegate_winrt::Windows::Foundation::TypedEventHandler_winrt::Windows::UI::Xaml::UIElement_winrt::Windows::UI::Xaml::Input::ContextRequestedEventArgs___lambda_28e2deb1c60008eafa8d487ea9ad6bb5___::Invoke @ 0x180774820 (winrt--impl--delegate_winrt--Windows--Foundation--TypedEventHandler_winrt--Windows--UI--Xaml--UI.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18000D700 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800D5AF0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ?__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z @ 0x18010E5F4 (-__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z.c)
 *     ?TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z @ 0x18014E10C (-TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z.c)
 *     ??4IUnknown@Foundation@Windows@winrt@@QEAAAEAU0123@AEBU0123@@Z @ 0x180176D7C (--4IUnknown@Foundation@Windows@winrt@@QEAAAEAU0123@AEBU0123@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$from_cx@UIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@winrt@@@@YA?AUIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@winrt@@PE$AAVObject@Platform@@@Z @ 0x180770E40 (--$from_cx@UIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@winrt@@@@YA-AUIVirtual.c)
 *     ??$try_query@UIVirtualDesktopSwitcherHost@@@?$com_ptr_t@UIWeakReference@@Uerr_failfast_policy@wil@@@wil@@QEBA?AV?$com_ptr_t@UIVirtualDesktopSwitcherHost@@Uerr_failfast_policy@wil@@@1@XZ @ 0x1807712B0 (--$try_query@UIVirtualDesktopSwitcherHost@@@-$com_ptr_t@UIWeakReference@@Uerr_failfast_policy@wi.c)
 *     ?GetVirtualDesktopFromOriginalSource@__IVirtualDesktopBarElementPublicNonVirtuals@Switcher@Experiences@ComposableShell@WindowsInternal@@UE$AAAPE$AAUIVirtualDesktop@Multitasking@4Internal@Windows@@PE$AAVObject@Platform@@@Z @ 0x1807743A0 (-GetVirtualDesktopFromOriginalSource@__IVirtualDesktopBarElementPublicNonVirtuals@Switcher@Exper.c)
 *     ?OriginalSource@?$consume_Windows_UI_Xaml_IRoutedEventArgs@UContextRequestedEventArgs@Input@Xaml@UI@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x180774DE0 (-OriginalSource@-$consume_Windows_UI_Xaml_IRoutedEventArgs@UContextRequestedEventArgs@Input@Xaml.c)
 *     ?StopPointerExitedTimer@VirtualDesktopSwitcherHost@@AEAAXXZ @ 0x180776A30 (-StopPointerExitedTimer@VirtualDesktopSwitcherHost@@AEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=7
void __fastcall lambda_28e2deb1c60008eafa8d487ea9ad6bb5_::operator()(
        struct IWeakReference **a1,
        winrt::Windows::Foundation::IUnknown *a2,
        winrt::Windows::Foundation::IUnknown *a3)
{
  unsigned __int64 v5; // r13
  __int64 *v6; // rax
  void *v7; // r15
  __int64 VirtualDesktopFromOriginalSource; // rdi
  __int64 (__fastcall ***v9)(_QWORD, void *, _QWORD *); // rbx
  void *v10[2]; // [rsp+20h] [rbp-38h] BYREF
  __int64 (__fastcall ***v11)(_QWORD, void *, _QWORD *); // [rsp+30h] [rbp-28h]
  unsigned __int64 v12; // [rsp+38h] [rbp-20h]
  int v13; // [rsp+40h] [rbp-18h]
  __int64 v14; // [rsp+A0h] [rbp+48h] BYREF
  winrt::Windows::Foundation::IUnknown *v15; // [rsp+A8h] [rbp+50h]
  winrt::Windows::Foundation::IUnknown *v16; // [rsp+B0h] [rbp+58h]
  __int64 v17; // [rsp+B8h] [rbp+60h] BYREF

  v16 = a3;
  v15 = a2;
  wil::com_ptr_t<IWeakReference,wil::err_failfast_policy>::try_query<IVirtualDesktopSwitcherHost>(a1, v10);
  if ( v10[0] )
  {
    v5 = ((unsigned __int64)v10[0] - 8) & -(__int64)(v10[0] != 0LL);
    v12 = (v5 + 32) & -(__int64)(v5 != 0);
    v13 = CObjectWithThreadUseDetection::TryEnterOnCurrentThread(v12, 1);
    *(_BYTE *)(v5 + 456) = 1;
    VirtualDesktopSwitcherHost::StopPointerExitedTimer((VirtualDesktopSwitcherHost *)v5);
    v6 = (__int64 *)winrt::impl::consume_Windows_UI_Xaml_IRoutedEventArgs<winrt::Windows::UI::Xaml::Input::ContextRequestedEventArgs>::OriginalSource(
                      a3,
                      &v17);
    v7 = (void *)__abi_winrt_ptr_ctor(*v6);
    v10[1] = v7;
    if ( v17 )
      winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v17);
    VirtualDesktopFromOriginalSource = WindowsInternal::ComposableShell::Experiences::Switcher::__IVirtualDesktopBarElementPublicNonVirtuals::GetVirtualDesktopFromOriginalSource(
                                         *(_QWORD *)(v5 + 168),
                                         v7);
    v11 = (__int64 (__fastcall ***)(_QWORD, void *, _QWORD *))VirtualDesktopFromOriginalSource;
    v9 = (__int64 (__fastcall ***)(_QWORD, void *, _QWORD *))__abi_winrt_ptr_ctor(VirtualDesktopFromOriginalSource);
    v11 = v9;
    if ( VirtualDesktopFromOriginalSource )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)VirtualDesktopFromOriginalSource + 16LL))(VirtualDesktopFromOriginalSource);
    from_cx<winrt::Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop>(&v14, v9);
    if ( v14 )
    {
      winrt::Windows::Foundation::IUnknown::operator=(
        (winrt::Windows::Foundation::IUnknown *)(v5 + 504),
        (winrt::Windows::Foundation::IUnknown *)&v14);
      if ( v14 )
        winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v14);
    }
    if ( v9 )
      ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, void *, _QWORD *)))(*v9)[2])(v9);
    if ( v7 )
      (*(void (__fastcall **)(void *))(*(_QWORD *)v7 + 16LL))(v7);
    if ( v13 >= 0 )
      LeaveCriticalSection((LPCRITICAL_SECTION)((v5 + 32) & -(__int64)(v5 != 0)));
  }
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)v10);
  if ( *(_QWORD *)a2 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref(a2);
  if ( *(_QWORD *)a3 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref(a3);
}
