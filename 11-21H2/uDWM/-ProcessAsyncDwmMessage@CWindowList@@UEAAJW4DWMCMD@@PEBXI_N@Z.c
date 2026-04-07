/*
 * XREFs of ?ProcessAsyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEBXI_N@Z @ 0x180021CF0
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800045F8 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?SetWindowAttribute@CWindowList@@AEAAJPEBUMILCMD_DWM_WINDOWATTRIBUTE@@@Z @ 0x180010368 (-SetWindowAttribute@CWindowList@@AEAAJPEBUMILCMD_DWM_WINDOWATTRIBUTE@@@Z.c)
 *     ?AnimationChange@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_NOTIFYANIMATIONCHANGE@@@Z @ 0x180012A9C (-AnimationChange@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_NOTIFYANIMATIONCHANGE@@@Z.c)
 *     ?SendSwitchModeCommand@CDesktopManager@@SAJ_K@Z @ 0x180016BA0 (-SendSwitchModeCommand@CDesktopManager@@SAJ_K@Z.c)
 *     ?MouseLeaveWindow@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_MOUSELEAVEWINDOW@@@Z @ 0x18001AF24 (-MouseLeaveWindow@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_MOUSELEAVEWINDOW@@@Z.c)
 *     ?SettingsChange@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_NOTIFYSETTINGSCHANGE@@@Z @ 0x18001D898 (-SettingsChange@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_NOTIFYSETTINGSCHANGE@@@Z.c)
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x18001DB80 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x18001EAE0 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?IconChange@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_NOTIFYICONCHANGE@@@Z @ 0x180020C14 (-IconChange@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_NOTIFYICONCHANGE@@@Z.c)
 *     ?SetTitle@CWindowData@@QEAAJPEAGH@Z @ 0x180022160 (-SetTitle@CWindowData@@QEAAJPEAGH@Z.c)
 *     ?SyncWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@PEAVCWindowData@@@Z @ 0x180023170 (-SyncWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@PEAVCWindowData@@@Z.c)
 *     ??0CWindowData@@QEAA@XZ @ 0x180023D44 (--0CWindowData@@QEAA@XZ.c)
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x180040BB0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ??$as@UIRotationTransitionManager@Private@Transitions@Udwm@winrt@@Utype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@impl@5@$0A@@impl@winrt@@YA?AUIRotationTransitionManager@Private@Transitions@Udwm@1@PEAUtype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@01@@Z @ 0x18004207C (--$as@UIRotationTransitionManager@Private@Transitions@Udwm@winrt@@Utype@-$abi@UIUnknown@Foundati.c)
 *     ?GetCurrent@TransitionManager@implementation@Transitions@Udwm@winrt@@SA?AU1345@XZ @ 0x1800420E4 (-GetCurrent@TransitionManager@implementation@Transitions@Udwm@winrt@@SA-AU1345@XZ.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_TATest@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18004225C (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_TATest@@@details@wil@@QEAAX_NW4ReportingK.c)
 *     ?OnTitleUpdated@CWindowIconic@@QEAAJ_N@Z @ 0x18004B5F4 (-OnTitleUpdated@CWindowIconic@@QEAAJ_N@Z.c)
 *     ?DesktopCreate@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_NOTIFYDESKTOPCREATE@@@Z @ 0x18004CAF0 (-DesktopCreate@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_NOTIFYDESKTOPCREATE@@@Z.c)
 *     ?GetMagnifierControlForDesktop@CWindowList@@QEAAPEAVCMagnifierControl@@_K@Z @ 0x18004DF2C (-GetMagnifierControlForDesktop@CWindowList@@QEAAPEAVCMagnifierControl@@_K@Z.c)
 *     ?ShellWindowChange@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_NOTIFYSHELLWINDOWCHANGE@@@Z @ 0x18005B5C8 (-ShellWindowChange@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_NOTIFYSHELLWINDOWCHANGE@@@Z.c)
 *     ?StartupEnd@CWindowList@@AEAAJXZ @ 0x18005D0C4 (-StartupEnd@CWindowList@@AEAAJXZ.c)
 *     ?StartupBegin@CWindowList@@AEAAJXZ @ 0x18005DB0C (-StartupBegin@CWindowList@@AEAAJXZ.c)
 *     ?SetNotifyWindow@CImmersiveIconicBitmapRegistry@@QEAAXPEAUHWND__@@@Z @ 0x18005F588 (-SetNotifyWindow@CImmersiveIconicBitmapRegistry@@QEAAXPEAUHWND__@@@Z.c)
 *     __security_check_cookie @ 0x180060050 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180063740 (_guard_xfg_dispatch_icall_nop.c)
 *     ?OnShowContact@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_SHOWCONTACT@@@Z @ 0x180068D86 (-OnShowContact@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_SHOWCONTACT@@@Z.c)
 *     ?SetExclusiveView@CAnalogCompositorManager@@SAJI@Z @ 0x18009DC30 (-SetExclusiveView@CAnalogCompositorManager@@SAJI@Z.c)
 *     ?OnContact@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_NATURALINPUTCONTACT@@@Z @ 0x1800AB6E0 (-OnContact@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_NATURALINPUTCONTACT@@@Z.c)
 *     ?OnMultiContact@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_NATURALINPUTMULTICONTACT@@@Z @ 0x1800AC5F4 (-OnMultiContact@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_NATURALINPUTMULTICONTACT@@@Z.c)
 *     ?OnTether@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_TETHERCONTACT@@@Z @ 0x1800AC744 (-OnTether@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_TETHERCONTACT@@@Z.c)
 *     ?UpdateEnableClearForRenderTargets@CDesktopManager@@QEAAXXZ @ 0x1800B15D8 (-UpdateEnableClearForRenderTargets@CDesktopManager@@QEAAXXZ.c)
 *     ?OnMagnifierApiMessage@CMagnifierControl@@QEAAJW4DWMCMD@@PEBX_N@Z @ 0x1800C6CF0 (-OnMagnifierApiMessage@CMagnifierControl@@QEAAJW4DWMCMD@@PEBX_N@Z.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_MagnifierWithinEdgesNoJitter@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800C78CC (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_MagnifierWithinEdgesNoJitter@@@details@wi.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x1800D3CDC (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 *     ?UpdateTitle@CTopLevelWindow@@QEAAJPEAG@Z @ 0x1800E66D4 (-UpdateTitle@CTopLevelWindow@@QEAAJPEAG@Z.c)
 *     ?DesktopFree@CWindowList@@AEAAXPEBUMILCMD_DWM_REDIRECTION_NOTIFYDESKTOPFREE@@@Z @ 0x180102DFC (-DesktopFree@CWindowList@@AEAAXPEBUMILCMD_DWM_REDIRECTION_NOTIFYDESKTOPFREE@@@Z.c)
 *     ?EndTransition@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_ENDTRANSITION@@@Z @ 0x180103418 (-EndTransition@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_ENDTRANSITION@@@Z.c)
 *     ?ModeChange@CWindowList@@AEAAJXZ @ 0x180104B8C (-ModeChange@CWindowList@@AEAAJXZ.c)
 *     ?OnWindowArrangementContinue@CWindowList@@AEAAJPEBUMILCMD_DWM_WINDOWARRANGEMENTNOTIFICATION@@@Z @ 0x180104E2C (-OnWindowArrangementContinue@CWindowList@@AEAAJPEBUMILCMD_DWM_WINDOWARRANGEMENTNOTIFICATION@@@Z.c)
 *     ?OnWindowArrangementEnd@CWindowList@@AEAAJXZ @ 0x180104EDC (-OnWindowArrangementEnd@CWindowList@@AEAAJXZ.c)
 *     ?OnWindowArrangementStart@CWindowList@@AEAAJPEBUMILCMD_DWM_WINDOWARRANGEMENTNOTIFICATION@@@Z @ 0x180104FD8 (-OnWindowArrangementStart@CWindowList@@AEAAJPEBUMILCMD_DWM_WINDOWARRANGEMENTNOTIFICATION@@@Z.c)
 *     ?RegisterSharedVirtualDesktopVisual@CWindowList@@UEAAJPEAUHWND__@@T_LARGE_INTEGER@@PEAX@Z @ 0x180105550 (-RegisterSharedVirtualDesktopVisual@CWindowList@@UEAAJPEAUHWND__@@T_LARGE_INTEGER@@PEAX@Z.c)
 *     ?RotationModeChange@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_NOTIFYROTATIONMODECHANGE@@@Z @ 0x180105E24 (-RotationModeChange@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_NOTIFYROTATIONMODECHANGE@@@Z.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CWindowList::ProcessAsyncDwmMessage(CWindowList *a1, int a2, __int64 a3, unsigned int a4, char a5)
{
  unsigned __int64 *v6; // rsi
  unsigned int v8; // ebx
  unsigned int v9; // edi
  int v10; // edx
  int v11; // edx
  __int64 v12; // rdx
  __int64 v13; // rsi
  __int64 v14; // rax
  struct IDwmWindow *v15; // r12
  CWindowData *v16; // rax
  CWindowData *v17; // rax
  int WindowText; // eax
  int v19; // eax
  CVisual *v20; // rcx
  CWindowIconic *v21; // rcx
  __int64 v22; // rcx
  unsigned int v23; // edx
  int v26; // edx
  int v27; // edx
  int v28; // edx
  int v29; // edx
  int v30; // eax
  int v31; // edx
  int v32; // edx
  int v33; // edx
  int v34; // edx
  int v35; // edx
  int v36; // edx
  int v37; // edx
  int v38; // edx
  int v39; // edx
  unsigned int v40; // eax
  __int64 v41; // rcx
  _QWORD *v42; // rax
  int v43; // edx
  int v44; // edx
  int v45; // edx
  int v46; // r9d
  struct CMagnifierControl *v47; // rax
  __int64 v48; // r9
  int v49; // eax
  struct _RTL_CRITICAL_SECTION **v50; // rcx
  int v51; // edx
  int v52; // edx
  int v53; // edx
  int v54; // edx
  int v55; // edx
  struct CMagnifierControl *v56; // rax
  __int64 v57; // r9
  int v58; // eax
  struct CMagnifierControl *v59; // rax
  __int64 v60; // r9
  int v61; // eax
  struct CMagnifierControl *v62; // rax
  __int64 v63; // r9
  int v64; // eax
  struct CMagnifierControl *v65; // rax
  __int64 v66; // r9
  int v67; // eax
  struct CMagnifierControl *v68; // rax
  __int64 v69; // r9
  int v70; // eax
  struct CMagnifierControl *v71; // rax
  __int64 v72; // r9
  int v73; // eax
  int v74; // ecx
  int v75; // ecx
  int v76; // edx
  int v77; // edx
  int v78; // edx
  int v79; // edx
  __int64 v80; // rdx
  int v81; // eax
  struct CMagnifierControl *MagnifierControlForDesktop; // rax
  __int64 v83; // r9
  int v84; // eax
  struct CMagnifierControl *v85; // rax
  __int64 v86; // r9
  int v87; // eax
  struct CMagnifierControl *v88; // rax
  __int64 v89; // r9
  int v90; // eax
  struct CMagnifierControl *v91; // rax
  __int64 v92; // r9
  int v93; // eax
  struct CMagnifierControl *v94; // rax
  __int64 v95; // r9
  int v96; // eax
  unsigned int v97; // [rsp+20h] [rbp-258h]
  unsigned int v98; // [rsp+20h] [rbp-258h]
  struct _RTL_CRITICAL_SECTION *v99; // [rsp+30h] [rbp-248h] BYREF
  unsigned __int64 v100; // [rsp+38h] [rbp-240h] BYREF
  WCHAR pString[256]; // [rsp+40h] [rbp-238h] BYREF

  v6 = (unsigned __int64 *)a3;
  v8 = -2147467263;
  v9 = 0;
  if ( !*((_BYTE *)CDesktopManager::s_pDesktopManagerInstance + 24) )
    return 0;
  if ( a2 == 1073741851 && a4 == 12 )
  {
    CWindowList::MouseLeaveWindow(a1, (const struct MILCMD_DWM_REDIRECTION_MOUSELEAVEWINDOW *)a3);
    return 0;
  }
  if ( !a5 )
  {
    v26 = a2 - 1073741861;
    if ( v26 )
    {
      v27 = v26 - 1;
      if ( v27 )
      {
        v28 = v27 - 9;
        if ( v28 )
        {
          v29 = v28 - 1;
          if ( v29 )
          {
            v36 = v29 - 19;
            if ( !v36 )
            {
              if ( a4 != 12 )
                return v8;
              CContactManager::OnShowContact(
                *((CContactManager **)CDesktopManager::s_pDesktopManagerInstance + 19),
                (const struct MILCMD_DWM_REDIRECTION_SHOWCONTACT *)a3);
              return 0;
            }
            v37 = v36 - 1;
            if ( !v37 )
            {
              if ( a4 != 20 )
                return v8;
              CContactManager::OnTether(
                *((CContactManager **)CDesktopManager::s_pDesktopManagerInstance + 19),
                (const struct MILCMD_DWM_REDIRECTION_TETHERCONTACT *)a3);
              return 0;
            }
            v38 = v37 - 6;
            if ( !v38 )
            {
              if ( a4 != 8 )
                return v8;
              CWindowList::EndTransition(
                CDesktopManager::s_pDesktopManagerInstance,
                (const struct MILCMD_DWM_REDIRECTION_ENDTRANSITION *)a3);
              return 0;
            }
            v39 = v38 - 12;
            if ( !v39 )
            {
              if ( a4 != 12 )
                return v8;
              CImmersiveIconicBitmapRegistry::SetNotifyWindow(
                *((CImmersiveIconicBitmapRegistry **)CDesktopManager::s_pDesktopManagerInstance + 29),
                *(HWND *)(a3 + 4));
              return 0;
            }
            if ( v39 != 33 )
              return v8;
            if ( a4 == 8 )
              return (unsigned int)CAnalogCompositorManager::SetExclusiveView(*(_DWORD *)(a3 + 4));
            v46 = -2003303421;
            v8 = -2003303421;
            v98 = 641;
LABEL_99:
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v46, v98);
            return v8;
          }
          if ( a4 != 8 )
            return v8;
          v30 = CWindowList::SettingsChange(a1, (const struct MILCMD_DWM_REDIRECTION_NOTIFYSETTINGSCHANGE *)a3);
          v8 = v30;
          if ( v30 >= 0 )
            return v8;
          v98 = 600;
        }
        else
        {
          v30 = CWindowList::ModeChange(CDesktopManager::s_pDesktopManagerInstance);
          v8 = v30;
          if ( v30 >= 0 )
            return v8;
          v98 = 594;
        }
      }
      else
      {
        v30 = CWindowList::StartupEnd(a1);
        v8 = v30;
        if ( v30 >= 0 )
          return v8;
        v98 = 590;
      }
    }
    else
    {
      v30 = CWindowList::StartupBegin(a1);
      v8 = v30;
      if ( v30 >= 0 )
        return v8;
      v98 = 586;
    }
    goto LABEL_97;
  }
  if ( a2 > 1073741923 )
  {
    if ( a2 > 1073741932 )
    {
      v76 = a2 - 1073741933;
      if ( v76 )
      {
        v77 = v76 - 1;
        if ( v77 )
        {
          v78 = v77 - 1;
          if ( v78 )
          {
            v79 = v78 - 1;
            if ( v79 )
            {
              v80 = (unsigned int)(v79 - 1);
              if ( (_DWORD)v80 )
              {
                if ( (_DWORD)v80 == 2 && a4 == 4 )
                {
                  LOBYTE(a3) = 3;
                  LOBYTE(v80) = 1;
                  wil::details::FeatureImpl<__WilFeatureTraits_Feature_TATest>::ReportUsage(
                    &`wil::Feature<__WilFeatureTraits_Feature_TATest>::GetImpl'::`2'::impl,
                    v80,
                    a3);
                  winrt::Udwm::Transitions::implementation::TransitionManager::GetCurrent(&v99);
                  winrt::impl::as<winrt::Udwm::Transitions::Private::IRotationTransitionManager,winrt::impl::abi<winrt::Windows::Foundation::IUnknown,void>::type,0>(
                    &v100,
                    v99);
                  v81 = (*(__int64 (__fastcall **)(unsigned __int64))(*(_QWORD *)v100 + 48LL))(v100);
                  if ( v81 < 0 )
                    winrt::throw_hresult((unsigned int)v81);
                  winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v100);
                  if ( v99 )
                    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v99);
                  return 0;
                }
                return v8;
              }
              LODWORD(v80) = 1;
              wil::details::FeatureImpl<__WilFeatureTraits_Feature_MagnifierWithinEdgesNoJitter>::ReportUsage(
                &`wil::Feature<__WilFeatureTraits_Feature_MagnifierWithinEdgesNoJitter>::GetImpl'::`2'::impl,
                v80);
              if ( a4 != 24 )
              {
                v8 = -2003303421;
                MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2003303421, 0x204u);
                return v8;
              }
              v100 = (unsigned __int64)&CDesktopManager::s_csDwmInstance;
              EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
              MagnifierControlForDesktop = CWindowList::GetMagnifierControlForDesktop(
                                             *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 52),
                                             *(unsigned __int64 *)((char *)v6 + 4));
              if ( MagnifierControlForDesktop )
              {
                LOBYTE(v83) = a5;
                v84 = CMagnifierControl::OnMagnifierApiMessage(MagnifierControlForDesktop, 1073741937LL, v6, v83);
                v8 = v84;
                if ( v84 < 0 )
                  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v84, 0x20Eu);
              }
            }
            else
            {
              if ( a4 != 16 )
              {
                v8 = -2003303421;
                MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2003303421, 0x1F1u);
                return v8;
              }
              v100 = (unsigned __int64)&CDesktopManager::s_csDwmInstance;
              EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
              v85 = CWindowList::GetMagnifierControlForDesktop(
                      *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 52),
                      *(unsigned __int64 *)((char *)v6 + 4));
              if ( v85 )
              {
                LOBYTE(v86) = a5;
                v87 = CMagnifierControl::OnMagnifierApiMessage(v85, 1073741936LL, v6, v86);
                v8 = v87;
                if ( v87 < 0 )
                  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v87, 0x1FBu);
              }
            }
          }
          else
          {
            if ( a4 != 112 )
            {
              v8 = -2003303421;
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2003303421, 0x1DFu);
              return v8;
            }
            v100 = (unsigned __int64)&CDesktopManager::s_csDwmInstance;
            EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
            v88 = CWindowList::GetMagnifierControlForDesktop(
                    *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 52),
                    *(unsigned __int64 *)((char *)v6 + 4));
            if ( v88 )
            {
              LOBYTE(v89) = a5;
              v90 = CMagnifierControl::OnMagnifierApiMessage(v88, 1073741935LL, v6, v89);
              v8 = v90;
              if ( v90 < 0 )
                MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v90, 0x1E9u);
            }
          }
        }
        else
        {
          if ( a4 != 16 )
          {
            v8 = -2003303421;
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2003303421, 0x1CFu);
            return v8;
          }
          v100 = (unsigned __int64)&CDesktopManager::s_csDwmInstance;
          EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
          v91 = CWindowList::GetMagnifierControlForDesktop(
                  *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 52),
                  *(unsigned __int64 *)((char *)v6 + 4));
          if ( v91 )
          {
            LOBYTE(v92) = a5;
            v93 = CMagnifierControl::OnMagnifierApiMessage(v91, 1073741934LL, v6, v92);
            v8 = v93;
            if ( v93 < 0 )
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v93, 0x1D8u);
          }
        }
      }
      else
      {
        if ( a4 != 24 )
        {
          v8 = -2003303421;
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2003303421, 0x1BFu);
          return v8;
        }
        v100 = (unsigned __int64)&CDesktopManager::s_csDwmInstance;
        EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
        v94 = CWindowList::GetMagnifierControlForDesktop(
                *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 52),
                *(unsigned __int64 *)((char *)v6 + 12));
        if ( v94 )
        {
          LOBYTE(v95) = a5;
          v96 = CMagnifierControl::OnMagnifierApiMessage(v94, 1073741933LL, v6, v95);
          v8 = v96;
          if ( v96 < 0 )
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v96, 0x1C8u);
        }
      }
      v50 = (struct _RTL_CRITICAL_SECTION **)&v100;
LABEL_111:
      CGuard<CDwmCS>::~CGuard<CDwmCS>(v50);
      return v8;
    }
    if ( a2 != 1073741932 )
    {
      v51 = a2 - 1073741924;
      if ( v51 )
      {
        v52 = v51 - 1;
        if ( v52 )
        {
          v53 = v52 - 1;
          if ( v53 )
          {
            v54 = v53 - 1;
            if ( v54 )
            {
              v55 = v54 - 3;
              if ( v55 )
              {
                if ( v55 != 1 )
                  return v8;
                if ( a4 != 28 )
                {
                  v8 = -2003303421;
                  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2003303421, 0x1AEu);
                  return v8;
                }
                v99 = &CDesktopManager::s_csDwmInstance;
                EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
                v56 = CWindowList::GetMagnifierControlForDesktop(
                        *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 52),
                        *(unsigned __int64 *)((char *)v6 + 4));
                if ( v56
                  && (LOBYTE(v57) = a5,
                      v58 = CMagnifierControl::OnMagnifierApiMessage(v56, 1073741931LL, v6, v57),
                      v8 = v58,
                      v58 < 0) )
                {
                  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v58, 0x1B7u);
                }
                else
                {
                  CDesktopManager::UpdateEnableClearForRenderTargets(CDesktopManager::s_pDesktopManagerInstance);
                }
              }
              else
              {
                if ( a4 != 112 )
                {
                  v8 = -2003303421;
                  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2003303421, 0x19Eu);
                  return v8;
                }
                v99 = &CDesktopManager::s_csDwmInstance;
                EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
                v59 = CWindowList::GetMagnifierControlForDesktop(
                        *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 52),
                        *(unsigned __int64 *)((char *)v6 + 4));
                if ( v59 )
                {
                  LOBYTE(v60) = a5;
                  v61 = CMagnifierControl::OnMagnifierApiMessage(v59, 1073741930LL, v6, v60);
                  v8 = v61;
                  if ( v61 < 0 )
                    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v61, 0x1A7u);
                }
              }
            }
            else
            {
              if ( a4 != 232 )
              {
                v8 = -2003303421;
                MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2003303421, 0x18Eu);
                return v8;
              }
              v99 = &CDesktopManager::s_csDwmInstance;
              EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
              v62 = CWindowList::GetMagnifierControlForDesktop(
                      *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 52),
                      v6[28]);
              if ( v62 )
              {
                LOBYTE(v63) = a5;
                v64 = CMagnifierControl::OnMagnifierApiMessage(v62, 1073741927LL, v6, v63);
                v8 = v64;
                if ( v64 < 0 )
                  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v64, 0x197u);
              }
            }
          }
          else
          {
            if ( a4 != 232 )
            {
              v8 = -2003303421;
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2003303421, 0x17Eu);
              return v8;
            }
            v99 = &CDesktopManager::s_csDwmInstance;
            EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
            v65 = CWindowList::GetMagnifierControlForDesktop(
                    *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 52),
                    v6[28]);
            if ( v65 )
            {
              LOBYTE(v66) = a5;
              v67 = CMagnifierControl::OnMagnifierApiMessage(v65, 1073741926LL, v6, v66);
              v8 = v67;
              if ( v67 < 0 )
                MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v67, 0x187u);
            }
          }
        }
        else
        {
          if ( a4 != 120 )
          {
            v8 = -2003303421;
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2003303421, 0x16Eu);
            return v8;
          }
          v99 = &CDesktopManager::s_csDwmInstance;
          EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
          v68 = CWindowList::GetMagnifierControlForDesktop(
                  *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 52),
                  *(unsigned __int64 *)((char *)v6 + 12));
          if ( v68 )
          {
            LOBYTE(v69) = a5;
            v70 = CMagnifierControl::OnMagnifierApiMessage(v68, 1073741925LL, v6, v69);
            v8 = v70;
            if ( v70 < 0 )
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v70, 0x177u);
          }
        }
      }
      else
      {
        if ( a4 != 20 )
        {
          v8 = -2003303421;
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2003303421, 0x15Eu);
          return v8;
        }
        v99 = &CDesktopManager::s_csDwmInstance;
        EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
        v71 = CWindowList::GetMagnifierControlForDesktop(
                *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 52),
                *(unsigned __int64 *)((char *)v6 + 12));
        if ( v71 )
        {
          LOBYTE(v72) = a5;
          v73 = CMagnifierControl::OnMagnifierApiMessage(v71, 1073741924LL, v6, v72);
          v8 = v73;
          if ( v73 < 0 )
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v73, 0x167u);
        }
      }
LABEL_109:
      v50 = &v99;
      goto LABEL_111;
    }
    v74 = *(_DWORD *)(a3 + 4);
    if ( v74 )
    {
      v75 = v74 - 1;
      if ( v75 )
      {
        if ( v75 != 1 )
        {
          v8 = -2147024809;
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024809, 0x223u);
          return v8;
        }
        v30 = CWindowList::OnWindowArrangementEnd(a1);
        v8 = v30;
        if ( v30 >= 0 )
          return v8;
        v98 = 544;
      }
      else
      {
        v30 = CWindowList::OnWindowArrangementContinue(a1, (const struct MILCMD_DWM_WINDOWARRANGEMENTNOTIFICATION *)a3);
        v8 = v30;
        if ( v30 >= 0 )
          return v8;
        v98 = 541;
      }
    }
    else
    {
      v30 = CWindowList::OnWindowArrangementStart(a1, (const struct MILCMD_DWM_WINDOWARRANGEMENTNOTIFICATION *)a3);
      v8 = v30;
      if ( v30 >= 0 )
        return v8;
      v98 = 538;
    }
LABEL_97:
    v46 = v30;
    goto LABEL_99;
  }
  if ( a2 == 1073741923 )
  {
    if ( a4 != 24 )
    {
      v8 = -2003303421;
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2003303421, 0x14Eu);
      return v8;
    }
    v99 = &CDesktopManager::s_csDwmInstance;
    EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
    v47 = CWindowList::GetMagnifierControlForDesktop(
            *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 52),
            *(unsigned __int64 *)((char *)v6 + 12));
    if ( v47 )
    {
      LOBYTE(v48) = a5;
      v49 = CMagnifierControl::OnMagnifierApiMessage(v47, 1073741923LL, v6, v48);
      v8 = v49;
      if ( v49 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v49, 0x157u);
    }
    goto LABEL_109;
  }
  if ( a2 == 1073741867 )
  {
    if ( a4 <= 0x18 || *(_DWORD *)(a3 + 20) >= 0xFFFFFFE8 || a4 < *(_DWORD *)(a3 + 20) + 24 || *(_DWORD *)(a3 + 4) )
      return v8;
    return (unsigned int)CWindowList::SetWindowAttribute(a1, (const struct MILCMD_DWM_WINDOWATTRIBUTE *)a3);
  }
  if ( a2 > 1073741867 )
  {
    v34 = a2 - 1073741869;
    if ( !v34 )
    {
      if ( a4 != 16 )
        return v8;
      CWindowList::AnimationChange(a1, (const struct MILCMD_DWM_REDIRECTION_NOTIFYANIMATIONCHANGE *)a3);
      return 0;
    }
    v35 = v34 - 5;
    if ( v35 )
    {
      v43 = v35 - 6;
      if ( !v43 )
      {
        if ( a4 != 8 )
          return v8;
        return (unsigned int)CWindowList::RotationModeChange(
                               a1,
                               (const struct MILCMD_DWM_REDIRECTION_NOTIFYROTATIONMODECHANGE *)a3);
      }
      v44 = v43 - 7;
      if ( v44 )
      {
        v45 = v44 - 1;
        if ( v45 )
        {
          if ( v45 == 18 )
          {
            if ( a4 == 28 )
            {
              CWindowList::RegisterSharedVirtualDesktopVisual(
                *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 52),
                *(HWND *)(a3 + 4),
                *(union _LARGE_INTEGER *)(a3 + 12),
                *(void **)(a3 + 20));
            }
            else
            {
              v8 = -2003303421;
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2003303421, 0x229u);
            }
          }
          return v8;
        }
        if ( a4 - 21 > 0x13D7 )
          return v8;
        if ( *(_DWORD *)(a3 + 8) >= 0xFFFFFFEC )
          return v8;
        if ( a4 != *(_DWORD *)(a3 + 8) + 20 )
          return v8;
        v30 = CContactManager::OnMultiContact(
                *((CContactManager **)CDesktopManager::s_pDesktopManagerInstance + 19),
                (const struct MILCMD_DWM_REDIRECTION_NATURALINPUTMULTICONTACT *)a3);
        v8 = v30;
        if ( v30 >= 0 )
          return v8;
        v98 = 223;
      }
      else
      {
        if ( a4 != 56 )
          return v8;
        v30 = CContactManager::OnContact(
                *((CContactManager **)CDesktopManager::s_pDesktopManagerInstance + 19),
                (const struct MILCMD_DWM_REDIRECTION_NATURALINPUTCONTACT *)a3);
        v8 = v30;
        if ( v30 >= 0 )
          return v8;
        v98 = 200;
      }
    }
    else
    {
      GetDesktopID(1LL, &v100);
      v30 = CDesktopManager::SendSwitchModeCommand(v100);
      v8 = v30;
      if ( v30 >= 0 )
        return v8;
      v98 = 573;
    }
    goto LABEL_97;
  }
  v10 = a2 - 1073741832;
  if ( !v10 )
  {
    if ( a4 != 28 )
      return v8;
    return (unsigned int)CWindowList::IconChange(a1, (const struct MILCMD_DWM_REDIRECTION_NOTIFYICONCHANGE *)a3);
  }
  v11 = v10 - 1;
  if ( v11 )
  {
    v31 = v11 - 4;
    if ( !v31 )
    {
      if ( a4 != 20 )
        return v8;
      CWindowList::ShellWindowChange(a1, (const struct MILCMD_DWM_REDIRECTION_NOTIFYSHELLWINDOWCHANGE *)a3);
      return 0;
    }
    v32 = v31 - 1;
    if ( v32 )
    {
      v33 = v32 - 2;
      if ( v33 )
      {
        if ( v33 != 7 )
          return v8;
      }
      else
      {
        if ( a4 != 12 )
          return v8;
        CWindowList::DesktopFree(a1, (const struct MILCMD_DWM_REDIRECTION_NOTIFYDESKTOPFREE *)a3);
      }
      return 0;
    }
    if ( a4 != 12 )
      return v8;
    return (unsigned int)CWindowList::DesktopCreate(a1, (const struct MILCMD_DWM_REDIRECTION_NOTIFYDESKTOPCREATE *)a3);
  }
  if ( a4 == 12 )
  {
    v100 = (unsigned __int64)&CDesktopManager::s_csDwmInstance;
    EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
    v12 = *(unsigned __int64 *)((char *)v6 + 4);
    v8 = 0;
    v13 = 0LL;
    if ( v12 )
    {
      v14 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)CDesktopManager::s_pDesktopManagerInstance + 7) + 8LL))(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 7));
      v15 = (struct IDwmWindow *)v14;
      if ( v14 )
      {
        v13 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v14 + 8LL))(v14);
        if ( !v13 )
        {
          v16 = (CWindowData *)(*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                   + 16LL))(
                                 WPF::g_pProcessHeap,
                                 840LL);
          v99 = (struct _RTL_CRITICAL_SECTION *)v16;
          if ( v16 && (v17 = CWindowData::CWindowData(v16), (v13 = (__int64)v17) != 0) )
          {
            *((_QWORD *)v17 + 3) = v15;
            (**(void (__fastcall ***)(struct IDwmWindow *, CWindowData *))v15)(v15, v17);
            *(_QWORD *)(v13 + 40) = (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)v15 + 24LL))(v15);
            v8 = CWindowList::SyncWindowData(a1, v15, (struct CWindowData *)v13);
            if ( (v8 & 0x80000000) == 0 )
              goto LABEL_17;
            v40 = 2084;
          }
          else
          {
            v8 = -2147024882;
            v40 = 2080;
          }
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v8, v40);
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v8, 0x803u);
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v8, 0xE5Du);
          goto LABEL_23;
        }
      }
    }
LABEL_17:
    if ( v13 )
    {
      WindowText = InternalGetWindowText(*(HWND *)(v13 + 40), pString, 256);
      v19 = CWindowData::SetTitle((CWindowData *)v13, pString, WindowText);
      v8 = v19;
      if ( v19 < 0 )
      {
        v97 = 3683;
      }
      else
      {
        v20 = *(CVisual **)(v13 + 440);
        if ( v20 )
          CVisual::SetDirtyFlags(v20, 0x10000);
        v21 = *(CWindowIconic **)(v13 + 488);
        if ( !v21 || (v19 = CWindowIconic::OnTitleUpdated(v21, 1), v8 = v19, v19 >= 0) )
        {
          v22 = *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 55);
          v23 = *(_DWORD *)(v22 + 368);
          if ( v23 )
          {
            v41 = *(_QWORD *)(v22 + 344);
            v42 = (_QWORD *)(v41 + 8);
            while ( *v42 != v13 )
            {
              ++v9;
              v42 += 6;
              if ( v9 >= v23 )
                goto LABEL_23;
            }
            CTopLevelWindow::UpdateTitle(*(CTopLevelWindow **)(v41 + 48LL * v9), *(unsigned __int16 **)(v13 + 16));
          }
          goto LABEL_23;
        }
        v97 = 3692;
      }
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v19, v97);
    }
LABEL_23:
    LeaveCriticalSection(&CDesktopManager::s_csDwmInstance);
  }
  return v8;
}
