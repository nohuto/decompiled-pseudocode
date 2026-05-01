/*
 * XREFs of _lambda_e1408536c029d8c29a87d65e8f468219_::operator() @ 0x180051330
 * Callers:
 *     winrt::impl::delegate_winrt::Windows::Foundation::TypedEventHandler_winrt::Windows::Internal::ComposableShell::Multitasking::ISwitchItemDataView_winrt::Windows::Internal::ComposableShell::Multitasking::IEvaluateItemEventArgs___lambda_e1408536c029d8c29a87d65e8f468219___::Invoke @ 0x180051220 (winrt--impl--delegate_winrt--Windows--Foundation--TypedEventHandler_winrt--Windows-_ea_180051220.c)
 * Callees:
 *     ??1?$com_ptr_t@UISnapAssistCallback2@WindowSnapping@Shell@Internal@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000B3E0 (--1-$com_ptr_t@UISnapAssistCallback2@WindowSnapping@Shell@Internal@Windows@@Uerr_returncode_poli.c)
 *     ?unconditional_release_ref@?$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ @ 0x180017BFC (-unconditional_release_ref@-$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ.c)
 *     ??$as@UIInspectable@@Utype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@impl@winrt@@$0A@@impl@winrt@@YA?AU?$com_ptr@UIInspectable@@@1@PEAUtype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@01@@Z @ 0x1800514A4 (--$as@UIInspectable@@Utype@-$abi@UIUnknown@Foundation@Windows@winrt@@X@impl@winrt@@$0A@@impl@win.c)
 *     ?GetApplicationViewForItemData@AppViewDataSourceHelpers@@YAJPEAUIInspectable@@AEBU_GUID@@PEAPEAX@Z @ 0x180051A60 (-GetApplicationViewForItemData@AppViewDataSourceHelpers@@YAJPEAUIInspectable@@AEBU_GUID@@PEAPEAX.c)
 *     ?Data@?$consume_Windows_Internal_ComposableShell_Multitasking_ISwitchItem@UISwitchItem@Multitasking@ComposableShell@Internal@Windows@winrt@@@impl@winrt@@QEBA?AUIInspectable@Foundation@Windows@3@XZ @ 0x180051B38 (-Data@-$consume_Windows_Internal_ComposableShell_Multitasking_ISwitchItem@UISwitchItem@Multitask.c)
 *     ?Item@?$consume_Windows_Internal_ComposableShell_Multitasking_IEvaluateItemEventArgs@UIEvaluateItemEventArgs@Multitasking@ComposableShell@Internal@Windows@winrt@@@impl@winrt@@QEBA?AUISwitchItem@Multitasking@ComposableShell@Internal@Windows@3@XZ @ 0x180051B8C (-Item@-$consume_Windows_Internal_ComposableShell_Multitasking_IEvaluateItemEventArgs@UIEvaluateI.c)
 *     ?EvaluationState@?$consume_Windows_Internal_ComposableShell_Multitasking_IEvaluateItemEventArgs@UIEvaluateItemEventArgs@Multitasking@ComposableShell@Internal@Windows@winrt@@@impl@winrt@@QEBAXAEBW4SwitchItemInclusion@Multitasking@ComposableShell@Internal@Windows@3@@Z @ 0x180051BE0 (-EvaluationState@-$consume_Windows_Internal_ComposableShell_Multitasking_IEvaluateItemEventArgs@.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_VpmUpdates@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800A01A0 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_VpmUpdates@@@details@wil@@QEAAX_NW4Report.c)
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800F70B0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18012A008 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=11
void __fastcall lambda_e1408536c029d8c29a87d65e8f468219_::operator()(
        _QWORD *a1,
        winrt::Windows::Foundation::IUnknown *a2,
        winrt::Windows::Foundation::IUnknown *a3)
{
  __int64 v6; // rdx
  struct IInspectable *v7; // rdx
  void **v8; // r9
  int ApplicationViewForItemData; // eax
  __int64 v10; // rax
  int v11; // eax
  __int64 v12; // [rsp+20h] [rbp-38h] BYREF
  __int64 v13; // [rsp+28h] [rbp-30h] BYREF
  struct _GUID v14; // [rsp+30h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  AppViewDataSourceHelpers *v16; // [rsp+78h] [rbp+20h] BYREF

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_VpmUpdates>::ReportUsage(
    &`wil::Feature<__WilFeatureTraits_Feature_VpmUpdates>::GetImpl'::`2'::impl,
    0LL);
  LODWORD(v16) = 0;
  winrt::impl::consume_Windows_Internal_ComposableShell_Multitasking_IEvaluateItemEventArgs<winrt::Windows::Internal::ComposableShell::Multitasking::IEvaluateItemEventArgs>::EvaluationState(
    a3,
    &v16);
  winrt::impl::consume_Windows_Internal_ComposableShell_Multitasking_IEvaluateItemEventArgs<winrt::Windows::Internal::ComposableShell::Multitasking::IEvaluateItemEventArgs>::Item(
    a3,
    v14.Data4);
  *(_QWORD *)&v14.Data1 = 0LL;
  v6 = *(_QWORD *)winrt::impl::consume_Windows_Internal_ComposableShell_Multitasking_ISwitchItem<winrt::Windows::Internal::ComposableShell::Multitasking::ISwitchItem>::Data(
                    v14.Data4,
                    &v12);
  winrt::impl::as<IInspectable,winrt::impl::abi<winrt::Windows::Foundation::IUnknown,void>::type,0>(&v16, v6);
  ApplicationViewForItemData = AppViewDataSourceHelpers::GetApplicationViewForItemData(v16, v7, &v14, v8);
  if ( ApplicationViewForItemData < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0xFE,
      (unsigned int)"pcshell\\twinui\\xamlmultitaskingview\\lib\\taskviewframe.cpp",
      (const char *)(unsigned int)ApplicationViewForItemData,
      v12);
  if ( v16 )
    winrt::com_ptr<ISnapComponent>::unconditional_release_ref((__int64 *)&v16);
  if ( v12 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v12);
  v13 = 0LL;
  v10 = **(_QWORD **)&v14.Data1;
  v13 = 0LL;
  if ( (*(int (__fastcall **)(_QWORD, __int64 *))(v10 + 80))(*(_QWORD *)&v14.Data1, &v13) >= 0 )
  {
    v11 = (*(__int64 (__fastcall **)(_QWORD, __int64, AppViewDataSourceHelpers **))(*(_QWORD *)*a1 + 96LL))(
            *a1,
            v13,
            &v16);
    if ( v11 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x106,
        (unsigned int)"pcshell\\twinui\\xamlmultitaskingview\\lib\\taskviewframe.cpp",
        (const char *)(unsigned int)v11,
        v12);
    if ( !(_DWORD)v16 )
    {
      LODWORD(v12) = 1;
      winrt::impl::consume_Windows_Internal_ComposableShell_Multitasking_IEvaluateItemEventArgs<winrt::Windows::Internal::ComposableShell::Multitasking::IEvaluateItemEventArgs>::EvaluationState(
        a3,
        &v12);
    }
  }
  wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>(&v13);
  wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>((__int64 *)&v14);
  if ( *(_QWORD *)v14.Data4 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)v14.Data4);
  if ( *(_QWORD *)a2 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref(a2);
  if ( *(_QWORD *)a3 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref(a3);
}
