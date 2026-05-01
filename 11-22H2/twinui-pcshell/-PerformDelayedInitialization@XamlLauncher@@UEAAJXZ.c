/*
 * XREFs of ?PerformDelayedInitialization@XamlLauncher@@UEAAJXZ @ 0x1800F3710
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??1?$ComPtr@UICreatingProcess@@@WRL@Microsoft@@QEAA@XZ @ 0x1800B3438 (--1-$ComPtr@UICreatingProcess@@@WRL@Microsoft@@QEAA@XZ.c)
 *     ?Stop@?$ActivityBase@VLauncherTelemetryLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1800BC60C (-Stop@-$ActivityBase@VLauncherTelemetryLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProvider.c)
 *     ?ReportVisibility@?$consume_WindowsUdk_UI_Shell_IShellViewCoordinator@UIShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@@impl@winrt@@QEBA@AEBW4ViewVisibility@Shell@UI@WindowsUdk@3@@Z @ 0x1800D6384 (-ReportVisibility@-$consume_WindowsUdk_UI_Shell_IShellViewCoordinator@UIShellViewCoordinator@She.c)
 *     ?QueryService@XamlLauncher@@UEAAJAEBU_GUID@@0PEAPEAX@Z @ 0x1800DE5F0 (-QueryService@XamlLauncher@@UEAAJAEBU_GUID@@0PEAPEAX@Z.c)
 *     IsUserAssignedAccessSingleApp @ 0x1800F194C (IsUserAssignedAccessSingleApp.c)
 *     ?InitializeCortanaExperienceManager@XamlLauncher@@AEAAJPEAUIShellExperienceManagerFactory@Experience@Shell@Internal@Windows@@@Z @ 0x1800F1AF4 (-InitializeCortanaExperienceManager@XamlLauncher@@AEAAJPEAUIShellExperienceManagerFactory@Experi.c)
 *     ?InitializeStartExperienceManager@XamlLauncher@@AEAAJPEAUIShellExperienceManagerFactory@Experience@Shell@Internal@Windows@@@Z @ 0x1800F2108 (-InitializeStartExperienceManager@XamlLauncher@@AEAAJPEAUIShellExperienceManagerFactory@Experien.c)
 *     ??1PerformDelayedInitialization@StartWindowTelemetry@@QEAA@XZ @ 0x1800F3A64 (--1PerformDelayedInitialization@StartWindowTelemetry@@QEAA@XZ.c)
 *     ??$?0$$V@PerformDelayedInitialization@StartWindowTelemetry@@AEAA@U?$integral_constant@D$0A@@wistd@@@Z @ 0x1800F3A90 (--$-0$$V@PerformDelayedInitialization@StartWindowTelemetry@@AEAA@U-$integral_constant@D$0A@@wist.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_014daf4e80f8d9d33103ca7fb469f571___ @ 0x1800F3B40 (Windows--Internal--ComTaskPool--QueueTask__lambda_014daf4e80f8d9d33103ca7fb469f571___.c)
 *     ?InitializeHolographicContextIdentifier@XamlLauncher@@AEAAJXZ @ 0x1800F3BE0 (-InitializeHolographicContextIdentifier@XamlLauncher@@AEAAJXZ.c)
 *     ?InitializeJumpViewExperienceManager@XamlLauncher@@AEAAJPEAUIShellExperienceManagerFactory@Experience@Shell@Internal@Windows@@@Z @ 0x1800F3CDC (-InitializeJumpViewExperienceManager@XamlLauncher@@AEAAJPEAUIShellExperienceManagerFactory@Exper.c)
 *     ?InitializeAutomaticInvokeTrackingInformation@XamlLauncher@@AEAAJXZ @ 0x1800F3DDC (-InitializeAutomaticInvokeTrackingInformation@XamlLauncher@@AEAAJXZ.c)
 *     ?HasLoginCompleted@PerSessionState@@YA_NXZ @ 0x1800F4580 (-HasLoginCompleted@PerSessionState@@YA_NXZ.c)
 *     ?IsRemoteAppSession@@YA_NXZ @ 0x1800F4788 (-IsRemoteAppSession@@YA_NXZ.c)
 *     ?OnFindInStartVisibilityChanged@XamlLauncher@@UEAAX_N@Z @ 0x1800F4850 (-OnFindInStartVisibilityChanged@XamlLauncher@@UEAAX_N@Z.c)
 *     ?IsBootToCloudPCSession@@YA_NXZ @ 0x1800F48A8 (-IsBootToCloudPCSession@@YA_NXZ.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_TD@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180106354 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_TD@@@details@wil@@QEAAX_NW4ReportingKind@.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_SearchBoxOnTaskbar@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1801AB2A8 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_SearchBoxOnTaskbar@@@details@wil@@QEAAX_N.c)
 *     ?IsShellLauncherEnabledForCurrentUser@@YA_NXZ @ 0x1801B225C (-IsShellLauncherEnabledForCurrentUser@@YA_NXZ.c)
 *     ?IsUserOOBEOrCredentialReset@@YA_NXZ @ 0x1801B8DA8 (-IsUserOOBEOrCredentialReset@@YA_NXZ.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     ??R_lambda_c3ba1681564c383c0b68f6e84a06906b_@@QEBA@AEA_N@Z @ 0x1801FEACC (--R_lambda_c3ba1681564c383c0b68f6e84a06906b_@@QEBA@AEA_N@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??1?$ComPtr@UIShellRotationManager@@@WRL@Microsoft@@QEAA@XZ @ 0x18038BBC0 (--1-$ComPtr@UIShellRotationManager@@@WRL@Microsoft@@QEAA@XZ.c)
 *     IsCurrentUserAssignedAccessSingleAppClassicApp @ 0x18074AA84 (IsCurrentUserAssignedAccessSingleAppClassicApp.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall XamlLauncher::PerformDelayedInitialization(XamlLauncher *this)
{
  bool v2; // al
  __int64 v3; // rcx
  PerSessionState *v4; // rcx
  HRESULT v5; // eax
  unsigned int v6; // ebx
  int Service; // eax
  __int64 v8; // rdx
  int v9; // eax
  __int64 v10; // rdx
  __int64 v11; // rdx
  char v12; // al
  unsigned int v13; // edx
  unsigned __int64 v15; // [rsp+20h] [rbp-E0h]
  _BYTE v16[8]; // [rsp+40h] [rbp-C0h] BYREF
  struct Windows::Internal::Shell::Experience::IShellExperienceManagerFactory *v17; // [rsp+48h] [rbp-B8h] BYREF
  void *ppvOut; // [rsp+50h] [rbp-B0h] BYREF
  BOOL v19; // [rsp+58h] [rbp-A8h] BYREF
  _BYTE v20[320]; // [rsp+60h] [rbp-A0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1C8h] [rbp+C8h]

  StartWindowTelemetry::PerformDelayedInitialization::PerformDelayedInitialization(v20);
  v2 = 1;
  if ( !IsUserOOBEOrCredentialReset()
    && !(unsigned int)IsUserAssignedAccessSingleApp((void *)0xFFFFFFFFFFFFFFFCLL)
    && !(unsigned int)IsCurrentUserAssignedAccessSingleAppClassicApp() )
  {
    if ( !IsShellLauncherEnabledForCurrentUser()
      || (v16[0] = 0, (int)_lambda_c3ba1681564c383c0b68f6e84a06906b_::operator()(v3, v16) < 0)
      || !v16[0] )
    {
      v2 = 0;
    }
  }
  *((_BYTE *)this + 312) = v2;
  *((_BYTE *)this + 314) = IsRemoteAppSession();
  *((_BYTE *)this + 315) = IsBootToCloudPCSession();
  if ( !PerSessionState::HasLoginCompleted(v4) )
    SetWinEventHook(0x20u, 0x20u, 0LL, XamlLauncher::s_LauncherDesktopSwitchEventProc, 0, 0, 0);
  ppvOut = 0LL;
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&ppvOut);
  v5 = IUnknown_QueryService(
         *((IUnknown **)this - 5),
         &IID_IRealmActivationHistory,
         &GUID_67136e8b_6914_43f0_8f25_05619927d22e,
         &ppvOut);
  v6 = v5;
  if ( v5 >= 0 )
  {
    v17 = 0LL;
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v17);
    Service = XamlLauncher::QueryService(
                (XamlLauncher *)((char *)this - 8),
                &stru_180826A10,
                &GUID_2e8fcb18_a0ee_41ad_8ef8_77fb3a370ca5,
                (void **)&v17);
    v6 = Service;
    if ( Service >= 0 )
    {
      Service = XamlLauncher::InitializeStartExperienceManager((IUnknown **)this - 7, v17);
      v6 = Service;
      if ( Service >= 0 )
      {
        Service = XamlLauncher::InitializeCortanaExperienceManager((XamlLauncher *)((char *)this - 56), v17);
        v6 = Service;
        if ( Service >= 0 )
        {
          Service = XamlLauncher::InitializeAutomaticInvokeTrackingInformation((XamlLauncher *)((char *)this - 56));
          v6 = Service;
          if ( Service >= 0 )
          {
            Service = XamlLauncher::InitializeJumpViewExperienceManager((XamlLauncher *)((char *)this - 56), v17);
            v6 = Service;
            if ( Service >= 0 )
            {
              v9 = XamlLauncher::InitializeHolographicContextIdentifier((XamlLauncher *)((char *)this - 56));
              if ( v9 < 0 )
                wil::details::in1diag3::_Log_Hr(
                  retaddr,
                  (void *)0x2FC,
                  (unsigned int)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncher.cpp",
                  (const char *)(unsigned int)v9,
                  v15);
              v15 = ((unsigned __int64)this + 16) & -(__int64)(this != (XamlLauncher *)56);
              Service = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, void *))(**((_QWORD **)this + 42) + 24LL))(
                          *((_QWORD *)this + 42),
                          *((_QWORD *)this + 16),
                          *((_QWORD *)this + 17),
                          ppvOut);
              v6 = Service;
              if ( Service >= 0 )
              {
                Windows::Internal::ComTaskPool::QueueTask__lambda_014daf4e80f8d9d33103ca7fb469f571___();
                LOBYTE(v10) = 1;
                wil::details::FeatureImpl<__WilFeatureTraits_Feature_TD>::ReportUsage(
                  &`wil::Feature<__WilFeatureTraits_Feature_TD>::GetImpl'::`2'::impl,
                  v10);
                LOBYTE(v11) = 1;
                wil::details::FeatureImpl<__WilFeatureTraits_Feature_SearchBoxOnTaskbar>::ReportUsage(
                  &`wil::Feature<__WilFeatureTraits_Feature_SearchBoxOnTaskbar>::GetImpl'::`2'::impl,
                  v11);
                v12 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 42) + 128LL))(*((_QWORD *)this + 42));
                XamlLauncher::OnFindInStartVisibilityChanged((XamlLauncher *)((char *)this + 16), v12);
                v19 = (*(unsigned __int8 (__fastcall **)(_QWORD))(**((_QWORD **)this + 42) + 136LL))(*((_QWORD *)this + 42)) == 0;
                winrt::impl::consume_WindowsUdk_UI_Shell_IShellViewCoordinator<winrt::WindowsUdk::UI::Shell::IShellViewCoordinator>::ReportVisibility(
                  (_QWORD *)this + 48,
                  (unsigned int *)&v19);
                wil::ActivityBase<LauncherTelemetryLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop(
                  (__int64)v20,
                  v13);
                v6 = 0;
                goto LABEL_29;
              }
              v8 = 766LL;
            }
            else
            {
              v8 = 761LL;
            }
          }
          else
          {
            v8 = 758LL;
          }
        }
        else
        {
          v8 = 756LL;
        }
      }
      else
      {
        v8 = 753LL;
      }
    }
    else
    {
      v8 = 751LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v8,
      (unsigned int)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncher.cpp",
      (const char *)(unsigned int)Service,
      v15);
LABEL_29:
    Microsoft::WRL::ComPtr<ICreatingProcess>::~ComPtr<ICreatingProcess>((__int64 *)&v17);
    goto LABEL_30;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x2EA,
    (unsigned int)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncher.cpp",
    (const char *)(unsigned int)v5,
    v15);
LABEL_30:
  Microsoft::WRL::ComPtr<IShellRotationManager>::~ComPtr<IShellRotationManager>(&ppvOut);
  StartWindowTelemetry::PerformDelayedInitialization::~PerformDelayedInitialization((StartWindowTelemetry::PerformDelayedInitialization *)v20);
  return v6;
}
