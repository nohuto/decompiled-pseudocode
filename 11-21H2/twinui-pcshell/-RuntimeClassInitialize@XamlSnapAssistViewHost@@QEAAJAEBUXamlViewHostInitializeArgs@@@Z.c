/*
 * XREFs of ?RuntimeClassInitialize@XamlSnapAssistViewHost@@QEAAJAEBUXamlViewHostInitializeArgs@@@Z @ 0x180602D80
 * Callers:
 *     ??$MakeAndInitialize@VXamlSnapAssistViewHost@@V1@AEBUXamlViewHostInitializeArgs@@@Details@WRL@Microsoft@@YAJPEAPEAVXamlSnapAssistViewHost@@AEBUXamlViewHostInitializeArgs@@@Z @ 0x1805FF72C (--$MakeAndInitialize@VXamlSnapAssistViewHost@@V1@AEBUXamlViewHostInitializeArgs@@@Details@WRL@Mi.c)
 * Callees:
 *     ??1?$com_ptr_t@UISnapAssistCallback2@WindowSnapping@Shell@Internal@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000B3E0 (--1-$com_ptr_t@UISnapAssistCallback2@WindowSnapping@Shell@Internal@Windows@@Uerr_returncode_poli.c)
 *     ??$convert_from_abi@UISwitchItemDataSource@Multitasking@ComposableShell@Internal@Windows@winrt@@@wil@@YA?AUISwitchItemDataSource@Multitasking@ComposableShell@Internal@Windows@winrt@@PEAUIUnknown@@@Z @ 0x18000FBD0 (--$convert_from_abi@UISwitchItemDataSource@Multitasking@ComposableShell@Internal@Windows@winrt@@.c)
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x18002E1D4 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180036EC0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?__abi_winrt_ptr_assign@@YAPEAXPEAPEAXPE$ADVObject@Platform@@@Z @ 0x180063B30 (-__abi_winrt_ptr_assign@@YAPEAXPEAPEAXPE$ADVObject@Platform@@@Z.c)
 *     ?__abi_winrt_cast_to@@YAPE$AAVObject@Platform@@_NPE$AAV12@AEBU_GUID@@@Z @ 0x1800F65E4 (-__abi_winrt_cast_to@@YAPE$AAVObject@Platform@@_NPE$AAV12@AEBU_GUID@@@Z.c)
 *     ??4IUnknown@Foundation@Windows@winrt@@QEAAAEAU0123@$$QEAU0123@@Z @ 0x1800F6DA0 (--4IUnknown@Foundation@Windows@winrt@@QEAAAEAU0123@$$QEAU0123@@Z.c)
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800F70B0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ??4?$ComPtr@UIImmersiveMonitorManager@@@WRL@Microsoft@@QEAAAEAV012@PEAUIImmersiveMonitorManager@@@Z @ 0x1800FE170 (--4-$ComPtr@UIImmersiveMonitorManager@@@WRL@Microsoft@@QEAAAEAV012@PEAUIImmersiveMonitorManager@.c)
 *     ?InitApartmentId@CObjectWithThreadUseDetection@@QEAAJXZ @ 0x180103744 (-InitApartmentId@CObjectWithThreadUseDetection@@QEAAJXZ.c)
 *     ??4?$ComPtr@UIImmersiveAppCrusher@@@WRL@Microsoft@@QEAAAEAV012@PEAUIImmersiveAppCrusher@@@Z @ 0x1801167EC (--4-$ComPtr@UIImmersiveAppCrusher@@@WRL@Microsoft@@QEAAAEAV012@PEAUIImmersiveAppCrusher@@@Z.c)
 *     ??4?$ComPtr@UIMultitaskingViewVisibilityServiceInternal@@@WRL@Microsoft@@QEAAAEAV012@PEAUIMultitaskingViewVisibilityServiceInternal@@@Z @ 0x180116850 (--4-$ComPtr@UIMultitaskingViewVisibilityServiceInternal@@@WRL@Microsoft@@QEAAAEAV012@PEAUIMultit.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18012A008 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??4?$ComPtr@UIMultitaskingViewManager@@@WRL@Microsoft@@QEAAAEAV012@PEAUIMultitaskingViewManager@@@Z @ 0x180177F98 (--4-$ComPtr@UIMultitaskingViewManager@@@WRL@Microsoft@@QEAAAEAV012@PEAUIMultitaskingViewManager@.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ??0DesktopThumbnailDevice@Desktop@Multitasking@Shell@Internal@Windows@@QE$AAA@XZ @ 0x18042DABC (--0DesktopThumbnailDevice@Desktop@Multitasking@Shell@Internal@Windows@@QE$AAA@XZ.c)
 *     ?AppViewDataSourceAdapter_CreateInstance@@YAJPEAUIApplicationViewCollection@@PEAUIApplicationViewIconLoader@@PEAUIImmersiveShellHookService@@PEAUIInspectable@@PEAPEAUIAppViewDataSourceAdapter@@@Z @ 0x180453CCC (-AppViewDataSourceAdapter_CreateInstance@@YAJPEAUIApplicationViewCollection@@PEAUIApplicationVie.c)
 *     EventRegistrationHelpers::EventListener_IVirtualDesktopNotificationService_IVirtualDesktopNotification_VirtualDesktopNotificationForwarderHelper__anonymous_namespace_::VirtualDesktopNotificationRegistration___::Register_1 @ 0x180602B94 (EventRegistrationHelpers--EventListener_IVirtualDesktopNotificationService_IVirtual_ea_180602B94.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall XamlSnapAssistViewHost::RuntimeClassInitialize(
        XamlSnapAssistViewHost *this,
        const struct XamlViewHostInitializeArgs *a2)
{
  CObjectWithThreadUseDetection *v4; // rcx
  int inited; // eax
  __int64 (__fastcall ***v6)(_QWORD, GUID *, char *); // rsi
  __int64 (__fastcall *v7)(_QWORD, GUID *, char *); // rdi
  int v8; // eax
  __int64 (__fastcall ***v9)(_QWORD, void *, char *); // rdi
  __int64 (__fastcall *v10)(_QWORD, void *, char *); // rsi
  int v11; // eax
  __int64 v12; // rdx
  __int64 v13; // r8
  void **v14; // r9
  __int64 (__fastcall ***v15)(_QWORD, __int64, __int64 *); // rbx
  __int64 v16; // rdi
  struct IInspectable *v17; // rbx
  __int64 **v18; // rdi
  int Instance; // eax
  __int64 *v20; // rcx
  __int64 v21; // rax
  int v22; // eax
  winrt::Windows::Foundation::IUnknown *v23; // rax
  __int64 v24; // rdx
  const char *v25; // r9
  __int64 result; // rax
  int v27; // [rsp+20h] [rbp-38h]
  int v28; // [rsp+20h] [rbp-38h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  __int64 (__fastcall ***v30)(_QWORD, void *, _QWORD *); // [rsp+60h] [rbp+8h] BYREF
  __int64 (__fastcall ***v31)(_QWORD, __int64, __int64 *); // [rsp+70h] [rbp+18h] BYREF
  struct IInspectable *v32; // [rsp+78h] [rbp+20h] BYREF

  v4 = (XamlSnapAssistViewHost *)((char *)this + 32);
  try
  {
    inited = CObjectWithThreadUseDetection::InitApartmentId(v4);
    if ( inited < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0xA3,
        (int)"pcshell\\twinui\\xamlmultitaskingview\\lib\\xamlsnapassistviewhost.cpp",
        (const char *)(unsigned int)inited,
        v27);
    Microsoft::WRL::ComPtr<IMultitaskingViewManager>::operator=((__int64 *)this + 11, *(_QWORD *)a2);
    Microsoft::WRL::ComPtr<IMultitaskingViewVisibilityServiceInternal>::operator=(
      (__int64 *)this + 12,
      *((_QWORD *)a2 + 6));
    v6 = (__int64 (__fastcall ***)(_QWORD, GUID *, char *))*((_QWORD *)a2 + 5);
    v7 = **v6;
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)this + 27);
    v8 = v7(v6, &GUID_d9fbe049_d665_4fc8_9bcb_0db3bc2f737c, (char *)this + 216);
    if ( v8 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0xA7,
        (int)"pcshell\\twinui\\xamlmultitaskingview\\lib\\xamlsnapassistviewhost.cpp",
        (const char *)(unsigned int)v8,
        v27);
    Microsoft::WRL::ComPtr<IImmersiveMonitorManager>::operator=((__int64 *)this + 28, *((_QWORD *)a2 + 7));
    Microsoft::WRL::ComPtr<IImmersiveAppCrusher>::operator=((__int64 *)this + 29, *((_QWORD *)a2 + 4));
    v9 = (__int64 (__fastcall ***)(_QWORD, void *, char *))*((_QWORD *)a2 + 5);
    v10 = **v9;
    if ( *((_QWORD *)this + 34) )
      winrt::Windows::Foundation::IUnknown::unconditional_release_ref((XamlSnapAssistViewHost *)((char *)this + 272));
    v11 = v10(
            v9,
            &winrt::impl::guid_v<winrt::Windows::Internal::Shell::XamlExplorerHost::IXamlExplorerHostWindowStatics>,
            (char *)this + 272);
    if ( v11 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0xAB,
        (int)"pcshell\\twinui\\xamlmultitaskingview\\lib\\xamlsnapassistviewhost.cpp",
        (const char *)(unsigned int)v11,
        v27);
    v31 = 0LL;
    v15 = (__int64 (__fastcall ***)(_QWORD, __int64, __int64 *))Windows::Internal::Shell::Multitasking::Desktop::DesktopThumbnailDevice::DesktopThumbnailDevice(
                                                                  (__int64)retaddr,
                                                                  v12,
                                                                  v13,
                                                                  v14);
    v31 = v15;
    v16 = __abi_winrt_cast_to(
            0,
            v15,
            (__int64)&_uuidof__AUIDesktopThumbnailDevice_Desktop_Multitasking_Shell_Internal_Windows__);
    v32 = (struct IInspectable *)v16;
    __abi_winrt_ptr_assign((__int64 *)this + 26, v16);
    if ( v16 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
    if ( v15 )
      ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, __int64, __int64 *)))(*v15)[2])(v15);
    v32 = (struct IInspectable *)*((_QWORD *)this + 26);
    v17 = v32;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v32);
    v18 = (__int64 **)((char *)this + 248);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)this + 31);
    Instance = AppViewDataSourceAdapter_CreateInstance(
                 *((struct IApplicationViewCollection **)a2 + 2),
                 *((struct IApplicationViewIconLoader **)a2 + 8),
                 0LL,
                 v17,
                 (struct IAppViewDataSourceAdapter **)this + 31);
    if ( Instance < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0xB0,
        (int)"pcshell\\twinui\\xamlmultitaskingview\\lib\\xamlsnapassistviewhost.cpp",
        (const char *)(unsigned int)Instance,
        v28);
    v30 = 0LL;
    v20 = *v18;
    v21 = **v18;
    v30 = 0LL;
    v22 = (*(__int64 (__fastcall **)(__int64 *, GUID *, _QWORD))(v21 + 24))(
            v20,
            &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90,
            &v30);
    if ( v22 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0xB3,
        (int)"pcshell\\twinui\\xamlmultitaskingview\\lib\\xamlsnapassistviewhost.cpp",
        (const char *)(unsigned int)v22,
        v28);
    v23 = (winrt::Windows::Foundation::IUnknown *)wil::convert_from_abi<winrt::Windows::Internal::ComposableShell::Multitasking::ISwitchItemDataSource>(
                                                    &v31,
                                                    v30);
    winrt::Windows::Foundation::IUnknown::operator=((XamlSnapAssistViewHost *)((char *)this + 192), v23);
    if ( v31 )
      winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v31);
    v24 = *((_QWORD *)a2 + 13);
    if ( v24 )
      EventRegistrationHelpers::EventListener_IVirtualDesktopNotificationService_IVirtualDesktopNotification_VirtualDesktopNotificationForwarderHelper__anonymous_namespace_::VirtualDesktopNotificationRegistration___::Register_1(
        (_QWORD *)this + 79,
        v24);
    wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>((__int64 *)&v30);
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v32);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0xBD,
                           (int)"pcshell\\twinui\\xamlmultitaskingview\\lib\\xamlsnapassistviewhost.cpp",
                           v25);
  }
  return result;
}
