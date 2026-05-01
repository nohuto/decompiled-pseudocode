/*
 * XREFs of ??$GetValue@I@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyValue@Foundation@3@EAAJPEAI@Z1@Z @ 0x180093960
 * Callers:
 *     ?_ShowViewAsyncWorker@CAppViewManager@@AEAAJPEAUHWND__@@0AEBUShowViewAsyncOptions@1@PEAUIPropertySet@Collections@Foundation@Windows@@PEAUIAsyncCallback@@PEAUIPresentationRequestedArgs@@@Z @ 0x180027C4C (-_ShowViewAsyncWorker@CAppViewManager@@AEAAJPEAUHWND__@@0AEBUShowViewAsyncOptions@1@PEAUIPropert.c)
 *     ?WindowEventDispatcher_PendingActivationPropertySetAdded_@ViewManagerInteropTabTraceLogging@@QEAAXPEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x18005ABD8 (-WindowEventDispatcher_PendingActivationPropertySetAdded_@ViewManagerInteropTabTraceLogging@@QEA.c)
 *     ?_IsPropertySetContextHolographic@HolographicPositioner@@AEAA?AW4HolographicDetermination@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x180093558 (-_IsPropertySetContextHolographic@HolographicPositioner@@AEAA-AW4HolographicDetermination@@PEAUI.c)
 *     ?AppViewActivationRequested@WindowEventDispatcher@@UEAAJPEAUIAppViewActivationRequestedEventArgs@WindowManagement@ApplicationModel@Internal@Windows@@@Z @ 0x180094910 (-AppViewActivationRequested@WindowEventDispatcher@@UEAAJPEAUIAppViewActivationRequestedEventArgs.c)
 *     ?GetDetailsForActivation@PositionerPropertySetHelpers@@YAJPEAUIApplicationView@@PEAUIUnknown@@PEAW4ActivationPropertyFlags@1@PEAUViewSizePreferences@1@@Z @ 0x180097200 (-GetDetailsForActivation@PositionerPropertySetHelpers@@YAJPEAUIApplicationView@@PEAUIUnknown@@PE.c)
 *     ?GetTargetPresenterKind@ViewModePreferencesHelpers@@YAJPEAUIPropertySet@Collections@Foundation@Windows@@PEAW4ApplicationWindowPresenterKindInternal@WindowingEnvironment@ApplicationModel@Internal@5@PEA_N@Z @ 0x18009908C (-GetTargetPresenterKind@ViewModePreferencesHelpers@@YAJPEAUIPropertySet@Collections@Foundation@W.c)
 *     ?_IsPropertySetCallerProcessExplorer@HolographicPositioner@@AEAA_NPEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x18009B3A8 (-_IsPropertySetCallerProcessExplorer@HolographicPositioner@@AEAA_NPEAUIPropertySet@Collections@F.c)
 *     ?ControlGainedForActivation@CDesktopPositioner@@UEAAJPEAUIApplicationView@@W4SHELL_POSITIONER_TYPE@@PEAUIUnknown@@@Z @ 0x180105E20 (-ControlGainedForActivation@CDesktopPositioner@@UEAAJPEAUIApplicationView@@W4SHELL_POSITIONER_TY.c)
 *     ?GetSourceViewSizePreferenceFromPropertySet@ViewSizePreferenceHelpers@@YAJPEAUIPropertySet@Collections@Foundation@Windows@@PEAW4APPLICATION_VIEW_SIZE_PREFERENCE@@PEAPEAUHWND__@@@Z @ 0x18031F8BC (-GetSourceViewSizePreferenceFromPropertySet@ViewSizePreferenceHelpers@@YAJPEAUIPropertySet@Colle.c)
 *     ?GetTargetViewSizePreferenceFromPropertySet@ViewSizePreferenceHelpers@@YAJPEAUIPropertySet@Collections@Foundation@Windows@@PEAW4APPLICATION_VIEW_SIZE_PREFERENCE@@@Z @ 0x18031F9B4 (-GetTargetViewSizePreferenceFromPropertySet@ViewSizePreferenceHelpers@@YAJPEAUIPropertySet@Colle.c)
 *     ?ControlGainedForActivation@HolographicPositioner@@UEAAJPEAUIApplicationView@@W4SHELL_POSITIONER_TYPE@@PEAUIUnknown@@@Z @ 0x1803CDAD0 (-ControlGainedForActivation@HolographicPositioner@@UEAAJPEAUIApplicationView@@W4SHELL_POSITIONER.c)
 *     ?_HandleSwitchAsyncActivation@HolographicPositioner@@AEAAJPEAUIApplicationView@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x1803D2184 (-_HandleSwitchAsyncActivation@HolographicPositioner@@AEAAJPEAUIApplicationView@@PEAUIPropertySet.c)
 *     ?_IsPropertySetActivationSourceProcessIdForeground@HolographicPositioner@@AEAAJPEAUIPropertySet@Collections@Foundation@Windows@@PEAUHWND__@@PEAH@Z @ 0x1803D2730 (-_IsPropertySetActivationSourceProcessIdForeground@HolographicPositioner@@AEAAJPEAUIPropertySet@.c)
 *     ?_IsSelfActivation@HolographicPositioner@@AEAAJPEAUIApplicationView@@PEAUIPropertySet@Collections@Foundation@Windows@@PEAH@Z @ 0x1803D2908 (-_IsSelfActivation@HolographicPositioner@@AEAAJPEAUIApplicationView@@PEAUIPropertySet@Collection.c)
 *     ?UwpWindowActivating@UwpWindowEventDispatcher@@UEAAJPEAUIUwpWindowActivatingEventArgs@UwpWindowLifecycleManagement@Shell@Internal@Windows@@@Z @ 0x1803F2EE0 (-UwpWindowActivating@UwpWindowEventDispatcher@@UEAAJPEAUIUwpWindowActivatingEventArgs@UwpWindowL.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x18002E1D4 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ReleaseAndGetAddressOf@?$ComPtr@UIInspectable@@@WRL@Microsoft@@QEAAPEAPEAUIInspectable@@XZ @ 0x18015C524 (-ReleaseAndGetAddressOf@-$ComPtr@UIInspectable@@@WRL@Microsoft@@QEAAPEAPEAUIInspectable@@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ??_9IPropertyValue@Foundation@Windows@@$BGA@AA @ 0x1801ED720 (--_9IPropertyValue@Foundation@Windows@@$BGA@AA.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall Windows::Internal::ShellHelpers::PropertySetHelper::GetValue<unsigned int>(
        __int64 (__fastcall ****a1)(_QWORD, GUID *, __int64 *),
        __int64 a2,
        __int64 a3,
        _DWORD *a4)
{
  __int64 (__fastcall ***v6)(_QWORD, GUID *, __int64 *); // rcx
  int v7; // eax
  int v8; // ebx
  __int64 v9; // rbx
  __int64 (__fastcall *v10)(__int64, __int64, __int64); // rdi
  __int64 AddressOf; // rax
  __int64 v12; // rcx
  int v14; // eax
  int v15; // eax
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  __int64 (__fastcall ***v17)(_QWORD, GUID *, __int64 *); // [rsp+50h] [rbp+8h] BYREF
  __int64 v18; // [rsp+60h] [rbp+18h] BYREF
  __int64 v19; // [rsp+68h] [rbp+20h] BYREF

  *a4 = 0;
  v19 = 0LL;
  v18 = 0LL;
  v6 = *a1;
  if ( !v6 )
  {
    v8 = -2147467261;
    goto LABEL_5;
  }
  v7 = (**v6)(v6, &GUID_1b0d3570_0877_5ec2_8a2c_3b9539506aca, &v18);
  v8 = v7;
  if ( v7 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1B,
      (__int64)"onecore\\internal\\shell\\inc\\PropertySetHelpers.h",
      (const char *)(unsigned int)v7);
    goto LABEL_5;
  }
  v17 = 0LL;
  v9 = v18;
  v10 = *(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v18 + 48LL);
  AddressOf = Microsoft::WRL::ComPtr<IInspectable>::ReleaseAndGetAddressOf(&v17);
  v8 = v10(v9, a2, AddressOf);
  if ( v8 < 0 )
  {
LABEL_4:
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v17);
LABEL_5:
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v18);
    goto LABEL_6;
  }
  v14 = (**v17)(v17, &GUID_4bd682dd_7554_40e9_9a9b_82654ede7e62, &v19);
  v8 = v14;
  if ( v14 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x25,
      (__int64)"onecore\\internal\\shell\\inc\\PropertySetHelpers.h",
      (const char *)(unsigned int)v14);
    goto LABEL_4;
  }
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v17);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v18);
  v15 =  Windows::Foundation::IPropertyValue::`vcall'{96,{flat}}(v19, a4);
  v8 = v15;
  if ( v15 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2F,
      (__int64)"onecore\\internal\\shell\\inc\\PropertySetHelpers.h",
      (const char *)(unsigned int)v15);
  else
    v8 = 0;
LABEL_6:
  v12 = v19;
  if ( v19 )
  {
    v19 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
  }
  return (unsigned int)v8;
}
