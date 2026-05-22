/*
 * XREFs of ?GetWindowIdFromViewId@ViewHelper@@SA_KAEAVViewHierarchyWithWindowManager@@I@Z @ 0x1800B48C0
 * Callers:
 *     ?GetInputSite@DWMFocusedInputTarget@@UEAA?AV?$ComPtr@VInputSite@@@WRL@Microsoft@@XZ @ 0x1800187E0 (-GetInputSite@DWMFocusedInputTarget@@UEAA-AV-$ComPtr@VInputSite@@@WRL@Microsoft@@XZ.c)
 *     ?PopulateInputSiteFromViewId@DWMFocusedInputTarget@@AEAAXXZ @ 0x180027D9C (-PopulateInputSiteFromViewId@DWMFocusedInputTarget@@AEAAXXZ.c)
 *     ?RequestActivation@ForegroundManager@@QEAAXPEAVActivationControllerBamoProxy@@@Z @ 0x1800B53BC (-RequestActivation@ForegroundManager@@QEAAXPEAVActivationControllerBamoProxy@@@Z.c)
 *     ?SetInputDelegation@ForegroundManager@@QEAAXPEAVInputSite@@III@Z @ 0x1800B56B0 (-SetInputDelegation@ForegroundManager@@QEAAXPEAVInputSite@@III@Z.c)
 *     ?HandleActivationChange@ActivationWatcherBamoPrincipal@@QEAAJAEBU_LUID@@0@Z @ 0x1800B7174 (-HandleActivationChange@ActivationWatcherBamoPrincipal@@QEAAJAEBU_LUID@@0@Z.c)
 *     ?InjectInteractionState@MPCHolographicInputManager@@QEAAJW4InteractionState@1@KAEBUHitTestResult3D@@PEAUIMPCTarget@@@Z @ 0x1800C6838 (-InjectInteractionState@MPCHolographicInputManager@@QEAAJW4InteractionState@1@KAEBUHitTestResult.c)
 *     ?GetFrameworkViewTypeFromFocusTarget@MPCInputRouter@@AEAA?AW4FrameworkViewType@@PEAUIFocusInputTarget@@@Z @ 0x180117610 (-GetFrameworkViewTypeFromFocusTarget@MPCInputRouter@@AEAA-AW4FrameworkViewType@@PEAUIFocusInputT.c)
 *     ?HitTest3D@MPCInputRouter@@UEAAXPEAULegacyInputInfo@@PEAUIMPCTarget@@PEAPEAU3@@Z @ 0x180117F10 (-HitTest3D@MPCInputRouter@@UEAAXPEAULegacyInputInfo@@PEAUIMPCTarget@@PEAPEAU3@@Z.c)
 *     ?Update3DFocusWNF@MPCInputRouter@@AEAAXXZ @ 0x1801195FC (-Update3DFocusWNF@MPCInputRouter@@AEAAXXZ.c)
 *     ?UpdateFocusedInputTarget3D@MPCInputRouter@@AEAAXPEAUIInputTarget@@@Z @ 0x180119828 (-UpdateFocusedInputTarget3D@MPCInputRouter@@AEAAXPEAUIInputTarget@@@Z.c)
 *     ?TryActivate@ActivationProcessor@@QEAA_NUActivationInformation@@@Z @ 0x1801D1DDC (-TryActivate@ActivationProcessor@@QEAA_NUActivationInformation@@@Z.c)
 * Callees:
 *     ?Window@?$consume_Windows_Internal_ApplicationModel_WindowManagement_IAppView@UIAppView@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x180002A6C (-Window@-$consume_Windows_Internal_ApplicationModel_WindowManagement_IAppView@UIAppView@WindowMa.c)
 *     ?GetView@ViewHierarchyWithWindowManager@@QEAA?AUAppView@WindowManagement@ApplicationModel@Internal@Windows@winrt@@I@Z @ 0x180002AC0 (-GetView@ViewHierarchyWithWindowManager@@QEAA-AUAppView@WindowManagement@ApplicationModel@Intern.c)
 *     ?Id@?$consume_Windows_Internal_ApplicationModel_WindowManagement_IWindow@UIWindow@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x180003110 (-Id@-$consume_Windows_Internal_ApplicationModel_WindowManagement_IWindow@UIWindow@WindowManageme.c)
 *     ?unconditional_release_ref@?$com_ptr@Utype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@impl@winrt@@@winrt@@AEAAXXZ @ 0x18001CCDC (-unconditional_release_ref@-$com_ptr@Utype@-$abi@UIUnknown@Foundation@Windows@winrt@@X@impl@winr.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall ViewHelper::GetWindowIdFromViewId(struct ViewHierarchyWithWindowManager *a1, int a2)
{
  char v2; // di
  _QWORD *v3; // rax
  unsigned int v4; // ecx
  __int64 v5; // rsi
  __int64 v7; // [rsp+20h] [rbp-20h] BYREF
  __int64 v8; // [rsp+28h] [rbp-18h] BYREF
  __int64 v9[2]; // [rsp+30h] [rbp-10h] BYREF
  int v10; // [rsp+68h] [rbp+28h] BYREF

  v2 = 0;
  ViewHierarchyWithWindowManager::GetView((unsigned __int64)a1, &v7, a2);
  if ( v7
    && (v2 = 1,
        *winrt::impl::consume_Windows_Internal_ApplicationModel_WindowManagement_IAppView<winrt::Windows::Internal::ApplicationModel::WindowManagement::IAppView>::Window(
           &v7,
           v9)) )
  {
    v3 = winrt::impl::consume_Windows_Internal_ApplicationModel_WindowManagement_IAppView<winrt::Windows::Internal::ApplicationModel::WindowManagement::IAppView>::Window(
           &v7,
           &v8);
    v2 = 3;
    v4 = *winrt::impl::consume_Windows_Internal_ApplicationModel_WindowManagement_IWindow<winrt::Windows::Internal::ApplicationModel::WindowManagement::IWindow>::Id(
            v3,
            &v10);
  }
  else
  {
    v4 = 0;
  }
  v5 = v4;
  if ( (v2 & 2) != 0 )
  {
    v2 &= ~2u;
    if ( v8 )
      winrt::com_ptr<winrt::impl::abi<winrt::Windows::Foundation::IUnknown,void>::type>::unconditional_release_ref(&v8);
  }
  if ( (v2 & 1) != 0 && v9[0] )
    winrt::com_ptr<winrt::impl::abi<winrt::Windows::Foundation::IUnknown,void>::type>::unconditional_release_ref(v9);
  if ( v7 )
    winrt::com_ptr<winrt::impl::abi<winrt::Windows::Foundation::IUnknown,void>::type>::unconditional_release_ref(&v7);
  return v5;
}
