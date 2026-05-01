/*
 * XREFs of ?RuntimeClassInitialize@XamlSnapAssistViewHost@@QEAAJAEBUXamlViewHostInitializeArgs@@@Z @ 0x18076D520
 * Callers:
 *     ??$MakeAndInitialize@VXamlSnapAssistViewHost@@V1@AEBUXamlViewHostInitializeArgs@@@Details@WRL@Microsoft@@YAJPEAPEAVXamlSnapAssistViewHost@@AEBUXamlViewHostInitializeArgs@@@Z @ 0x180769150 (--$MakeAndInitialize@VXamlSnapAssistViewHost@@V1@AEBUXamlViewHostInitializeArgs@@@Details@WRL@Mi.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18000D700 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18001DEB0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?__abi_winrt_cast_to@@YAPE$AAVObject@Platform@@_NPE$AAV12@AEBU_GUID@@@Z @ 0x18007C280 (-__abi_winrt_cast_to@@YAPE$AAVObject@Platform@@_NPE$AAV12@AEBU_GUID@@@Z.c)
 *     ?__abi_winrt_ptr_assign@@YAPEAXPEAPEAXPE$ADVObject@Platform@@@Z @ 0x18007C2F4 (-__abi_winrt_ptr_assign@@YAPEAXPEAPEAXPE$ADVObject@Platform@@@Z.c)
 *     ??$convert_from_abi@UISwitchItemDataSource@Multitasking@ComposableShell@Internal@Windows@winrt@@@wil@@YA?AUISwitchItemDataSource@Multitasking@ComposableShell@Internal@Windows@winrt@@PEAUIUnknown@@@Z @ 0x18007D16C (--$convert_from_abi@UISwitchItemDataSource@Multitasking@ComposableShell@Internal@Windows@winrt@@.c)
 *     ?AppViewDataSourceAdapter_CreateInstance@@YAJW4DesktopSwitcherDataSourceScopeOptions@@PEAUIApplicationViewCollection@@PEAUIApplicationViewIconLoader@@PEAUIImmersiveShellHookService@@PEAUIInspectable@@4PEAPEAUIAppViewDataSourceAdapter@@@Z @ 0x180080A08 (-AppViewDataSourceAdapter_CreateInstance@@YAJW4DesktopSwitcherDataSourceScopeOptions@@PEAUIAppli.c)
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800D5AF0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_WTMPublic@@@details@wil@@QEAA_NXZ @ 0x180117BCC (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_WTMPublic@@@details@wil@@QEAA_NXZ.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_ETUpdate@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180126974 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_ETUpdate@@@details@wil@@QEAAX_NW4Reportin.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18013240C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InitApartmentId@CObjectWithThreadUseDetection@@QEAAJXZ @ 0x1801383A0 (-InitApartmentId@CObjectWithThreadUseDetection@@QEAAJXZ.c)
 *     ??4?$ComPtr@UIImmersiveMonitorManager@@@WRL@Microsoft@@QEAAAEAV012@PEAUIImmersiveMonitorManager@@@Z @ 0x18013A3B0 (--4-$ComPtr@UIImmersiveMonitorManager@@@WRL@Microsoft@@QEAAAEAV012@PEAUIImmersiveMonitorManager@.c)
 *     ??4?$ComPtr@UIImmersiveAppCrusher@@@WRL@Microsoft@@QEAAAEAV012@PEAUIImmersiveAppCrusher@@@Z @ 0x18013AD10 (--4-$ComPtr@UIImmersiveAppCrusher@@@WRL@Microsoft@@QEAAAEAV012@PEAUIImmersiveAppCrusher@@@Z.c)
 *     ??4?$ComPtr@UIMultitaskingViewVisibilityServiceInternal@@@WRL@Microsoft@@QEAAAEAV012@PEAUIMultitaskingViewVisibilityServiceInternal@@@Z @ 0x18013ADD0 (--4-$ComPtr@UIMultitaskingViewVisibilityServiceInternal@@@WRL@Microsoft@@QEAAAEAV012@PEAUIMultit.c)
 *     ??4IUnknown@Foundation@Windows@winrt@@QEAAAEAU0123@$$QEAU0123@@Z @ 0x180172F30 (--4IUnknown@Foundation@Windows@winrt@@QEAAAEAU0123@$$QEAU0123@@Z.c)
 *     ??4?$ComPtr@UIMultitaskingViewManager@@@WRL@Microsoft@@QEAAAEAV012@PEAUIMultitaskingViewManager@@@Z @ 0x1801B2998 (--4-$ComPtr@UIMultitaskingViewManager@@@WRL@Microsoft@@QEAAAEAV012@PEAUIMultitaskingViewManager@.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??0DesktopThumbnailDevice@Desktop@Multitasking@Shell@Internal@Windows@@QE$AAA@XZ @ 0x1807627D0 (--0DesktopThumbnailDevice@Desktop@Multitasking@Shell@Internal@Windows@@QE$AAA@XZ.c)
 *     ?DoesShellSessionSubKeyExist@@YA_NPEB_W@Z @ 0x18076C5AC (-DoesShellSessionSubKeyExist@@YA_NPEB_W@Z.c)
 *     EventRegistrationHelpers::EventListener_IVirtualDesktopNotificationService_IVirtualDesktopNotification_VirtualDesktopNotificationForwarderHelper__anonymous_namespace_::VirtualDesktopNotificationRegistration___::Register_1 @ 0x18076D32C (EventRegistrationHelpers--EventListener_IVirtualDesktopNotificationService_IVirtual_ea_18076D32C.c)
 */

// Hidden C++ exception states: #wind=8
__int64 __fastcall XamlSnapAssistViewHost::RuntimeClassInitialize(
        XamlSnapAssistViewHost *this,
        const struct XamlViewHostInitializeArgs *a2)
{
  CObjectWithThreadUseDetection *v4; // rcx
  int inited; // eax
  __int64 v6; // rdx
  __int64 v7; // r8
  void **v8; // r9
  __int64 v9; // rcx
  __int64 v10; // rbx
  __int64 (__fastcall ***v11)(_QWORD, __int64, __int64 *); // rbx
  __int64 v12; // rsi
  __int64 *v13; // r15
  __int64 v14; // rbx
  int v15; // esi
  __int64 v16; // r8
  __int64 v17; // r9
  const wchar_t *v18; // rcx
  __int64 **v19; // r15
  int Instance; // eax
  __int64 *v21; // rcx
  __int64 v22; // rax
  int v23; // eax
  winrt::Windows::Foundation::IUnknown *v24; // rax
  __int64 v25; // rdx
  const char *v26; // r9
  __int64 result; // rax
  int v28; // [rsp+20h] [rbp-48h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  __int64 (__fastcall ***v30)(_QWORD, void *, _QWORD *); // [rsp+70h] [rbp+8h] BYREF
  __int64 (__fastcall ***v31)(_QWORD, __int64, __int64 *); // [rsp+80h] [rbp+18h] BYREF
  __int64 v32; // [rsp+88h] [rbp+20h] BYREF

  v4 = (XamlSnapAssistViewHost *)((char *)this + 32);
  try
  {
    inited = CObjectWithThreadUseDetection::InitApartmentId(v4);
    if ( inited < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0xC0,
        (int)"pcshell\\twinui\\xamlmultitaskingview\\lib\\xamlsnapassistviewhost.cpp",
        (const char *)(unsigned int)inited,
        v28);
    Microsoft::WRL::ComPtr<IMultitaskingViewManager>::operator=((__int64 *)this + 11, *(_QWORD *)a2);
    Microsoft::WRL::ComPtr<IMultitaskingViewVisibilityServiceInternal>::operator=(
      (__int64 *)this + 12,
      *((_QWORD *)a2 + 5));
    Microsoft::WRL::ComPtr<IImmersiveMonitorManager>::operator=((__int64 *)this + 32, *((_QWORD *)a2 + 6));
    Microsoft::WRL::ComPtr<IImmersiveAppCrusher>::operator=((__int64 *)this + 33, *((_QWORD *)a2 + 4));
    v9 = *((_QWORD *)a2 + 9);
    v10 = *((_QWORD *)this + 24);
    *((_QWORD *)this + 24) = v9;
    if ( v9 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 8LL))(v9);
    if ( v10 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
    v31 = 0LL;
    v11 = (__int64 (__fastcall ***)(_QWORD, __int64, __int64 *))Windows::Internal::Shell::Multitasking::Desktop::DesktopThumbnailDevice::DesktopThumbnailDevice(
                                                                  v9,
                                                                  v6,
                                                                  v7,
                                                                  v8);
    v31 = v11;
    v12 = __abi_winrt_cast_to(
            0,
            v11,
            (__int64)&_uuidof__AUIDesktopThumbnailDevice_Desktop_Multitasking_Shell_Internal_Windows__);
    v32 = v12;
    v13 = (__int64 *)((char *)this + 248);
    __abi_winrt_ptr_assign((_QWORD *)this + 31, v12);
    if ( v12 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
    if ( v11 )
      ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, __int64, __int64 *)))(*v11)[2])(v11);
    v14 = *v13;
    v32 = *v13;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v32);
    v15 = 1;
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_ETUpdate>::ReportUsage(
      `wil::Feature<__WilFeatureTraits_Feature_ETUpdate>::GetImpl'::`2'::impl,
      1u,
      v16,
      v17);
    if ( wil::details::FeatureImpl<__WilFeatureTraits_Feature_WTMPublic>::__private_IsEnabled((__int64)&`wil::Feature<__WilFeatureTraits_Feature_WTMPublic>::GetImpl'::`2'::impl)
      || DoesShellSessionSubKeyExist(v18) )
    {
      v15 = 3;
    }
    v19 = (__int64 **)((char *)this + 280);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)this + 35);
    Instance = AppViewDataSourceAdapter_CreateInstance(v15, *((_QWORD *)a2 + 2), *((_QWORD *)a2 + 7), 0LL);
    if ( Instance < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0xD6,
        (int)"pcshell\\twinui\\xamlmultitaskingview\\lib\\xamlsnapassistviewhost.cpp",
        (const char *)(unsigned int)Instance,
        v14);
    v30 = 0LL;
    v21 = *v19;
    v22 = **v19;
    v30 = 0LL;
    v23 = (*(__int64 (__fastcall **)(__int64 *, GUID *, _QWORD))(v22 + 24))(
            v21,
            &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90,
            &v30);
    if ( v23 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0xD9,
        (int)"pcshell\\twinui\\xamlmultitaskingview\\lib\\xamlsnapassistviewhost.cpp",
        (const char *)(unsigned int)v23,
        v14);
    v24 = (winrt::Windows::Foundation::IUnknown *)wil::convert_from_abi<winrt::Windows::Internal::ComposableShell::Multitasking::ISwitchItemDataSource>(
                                                    &v31,
                                                    v30);
    winrt::Windows::Foundation::IUnknown::operator=((XamlSnapAssistViewHost *)((char *)this + 232), v24);
    if ( v31 )
      winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v31);
    v25 = *((_QWORD *)a2 + 13);
    if ( v25 )
      EventRegistrationHelpers::EventListener_IVirtualDesktopNotificationService_IVirtualDesktopNotification_VirtualDesktopNotificationForwarderHelper__anonymous_namespace_::VirtualDesktopNotificationRegistration___::Register_1(
        (_QWORD *)this + 81,
        v25);
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v30);
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v32);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0xE3,
                           (int)"pcshell\\twinui\\xamlmultitaskingview\\lib\\xamlsnapassistviewhost.cpp",
                           v26);
  }
  return result;
}
