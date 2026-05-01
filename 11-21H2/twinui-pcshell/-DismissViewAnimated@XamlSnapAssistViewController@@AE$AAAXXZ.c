/*
 * XREFs of ?DismissViewAnimated@XamlSnapAssistViewController@@AE$AAAXXZ @ 0x180611130
 * Callers:
 *     ?HostWindowActivationChanged@?QIXamlSwitcherWindowInteractionEvents@@XamlSnapAssistViewController@@UE$AAAX_N_K@Z @ 0x1806112BC (-HostWindowActivationChanged@-QIXamlSwitcherWindowInteractionEvents@@XamlSnapAssist_ea_1806112BC.c)
 *     ?OnLightDismiss@?QIXamlSwitcherWindowInteractionEvents@@XamlSnapAssistViewController@@UE$AAAXXZ @ 0x180611968 (-OnLightDismiss@-QIXamlSwitcherWindowInteractionEvents@@XamlSnapAssistViewController@@UE$AAAXXZ.c)
 * Callees:
 *     ??1?$com_ptr_t@UISnapAssistCallback2@WindowSnapping@Shell@Internal@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000B3E0 (--1-$com_ptr_t@UISnapAssistCallback2@WindowSnapping@Shell@Internal@Windows@@Uerr_returncode_poli.c)
 *     ??1IElementCompositionPreviewStatics2@Hosting@Xaml@UI@Windows@winrt@@QEAA@XZ @ 0x180020128 (--1IElementCompositionPreviewStatics2@Hosting@Xaml@UI@Windows@winrt@@QEAA@XZ.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_GSAVTest@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18005F5A4 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_GSAVTest@@@details@wil@@QEAAX_NW4Reportin.c)
 *     ??0TaskbarLayout@Shell@UI@WindowsUdk@winrt@@QEAA@$$T@Z @ 0x1800F4970 (--0TaskbarLayout@Shell@UI@WindowsUdk@winrt@@QEAA@$$T@Z.c)
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800F70B0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ?check_hresult@winrt@@YAXUhresult@1@@Z @ 0x1800F9C28 (-check_hresult@winrt@@YAXUhresult@1@@Z.c)
 *     ??B?$com_ptr_t@UIWindowManagementEvents@@Uerr_returncode_policy@wil@@@wil@@QEBA_NXZ @ 0x1800F9E14 (--B-$com_ptr_t@UIWindowManagementEvents@@Uerr_returncode_policy@wil@@@wil@@QEBA_NXZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18012A008 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?reset@?$unique_ptr@VSuppressViewTransition@@U?$default_delete@VSuppressViewTransition@@@std@@@std@@QEAAXPEAVSuppressViewTransition@@@Z @ 0x1801EAAE4 (-reset@-$unique_ptr@VSuppressViewTransition@@U-$default_delete@VSuppressViewTransition@@@std@@@s.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ??4ThreadPoolTimer@Threading@System@Windows@winrt@@QEAAAEAU01234@$$QEAU01234@@Z @ 0x18032C850 (--4ThreadPoolTimer@Threading@System@Windows@winrt@@QEAAAEAU01234@$$QEAU01234@@Z.c)
 *     ?Cancel@?$consume_Windows_System_Threading_IThreadPoolTimer@UIThreadPoolTimer@Threading@System@Windows@winrt@@@impl@winrt@@QEBAXXZ @ 0x18032D85C (-Cancel@-$consume_Windows_System_Threading_IThreadPoolTimer@UIThreadPoolTimer@Threading@System@W.c)
 *     ??$convert_from_abi@UISnapAssistCallback2@WindowSnapping@Shell@Internal@Windows@winrt@@@wil@@YA?AUISnapAssistCallback2@WindowSnapping@Shell@Internal@Windows@winrt@@PEAUIUnknown@@@Z @ 0x1806105B8 (--$convert_from_abi@UISnapAssistCallback2@WindowSnapping@Shell@Internal@Windows@winrt@@@wil@@YA-.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall XamlSnapAssistViewController::DismissViewAnimated(__int64 a1)
{
  winrt::Windows::Foundation::IUnknown *v2; // rdi
  _QWORD *v3; // rcx
  __int64 v4; // r8
  __int64 v5; // r9
  unsigned int v6; // eax
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 (__fastcall ***v9)(_QWORD, GUID *, __int64 *); // rcx
  int v10; // eax
  int v11; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v13; // [rsp+30h] [rbp+8h] BYREF

  v2 = (winrt::Windows::Foundation::IUnknown *)(a1 + 408);
  if ( wil::com_ptr_t<IWindowManagementEvents,wil::err_returncode_policy>::operator bool((_QWORD *)(a1 + 408)) )
  {
    winrt::impl::consume_Windows_System_Threading_IThreadPoolTimer<winrt::Windows::System::Threading::IThreadPoolTimer>::Cancel(v3);
    winrt::WindowsUdk::UI::Shell::TaskbarLayout::TaskbarLayout(&v13);
    winrt::Windows::System::Threading::ThreadPoolTimer::operator=(v2, (winrt::Windows::Foundation::IUnknown *)&v13);
    winrt::Windows::UI::Xaml::Hosting::IElementCompositionPreviewStatics2::~IElementCompositionPreviewStatics2((winrt::Windows::UI::Xaml::Hosting::IElementCompositionPreviewStatics2 *)&v13);
  }
  if ( !*(_BYTE *)(a1 + 392) )
  {
    wil::convert_from_abi<winrt::Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2>(
      &v13,
      *(__int64 (__fastcall ****)(_QWORD, void *, _QWORD *))(a1 + 168));
    v6 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v13 + 48LL))(v13);
    winrt::check_hresult(v6);
    if ( v13 )
      winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v13);
  }
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_GSAVTest>::ReportUsage(
    `wil::Feature<__WilFeatureTraits_Feature_GSAVTest>::GetImpl'::`2'::impl,
    1u,
    v4,
    v5);
  std::unique_ptr<SuppressViewTransition>::reset((SuppressViewTransition **)(a1 + 400), 0LL);
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_GSAVTest>::ReportUsage(
    `wil::Feature<__WilFeatureTraits_Feature_GSAVTest>::GetImpl'::`2'::impl,
    1u,
    v7,
    v8);
  if ( *(_BYTE *)(a1 + 392) && *(_BYTE *)(a1 + 393) )
  {
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 56) + 40LL))(*(_QWORD *)(a1 + 56));
  }
  else
  {
    v9 = *(__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))(a1 + 56);
    v13 = 0LL;
    v10 = (**v9)(v9, &GUID_9f22a2a9_1952_42fd_a19b_00b160880172, &v13);
    if ( v10 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x17F8,
        (int)"onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\result_macros.h",
        (const char *)(unsigned int)v10,
        v11);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 32LL))(v13);
    wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>(&v13);
  }
}
