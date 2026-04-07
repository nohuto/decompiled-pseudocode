/*
 * XREFs of ?ProcessSyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEAXI_NKPEBU_REMOTE_PORT_VIEW@@PEAJPEAI@Z @ 0x18001DAC0
 * Callers:
 *     <none>
 * Callees:
 *     ?UpdateSharedVirtualDesktopVisual@CWindowList@@UEAAJKPEBUMILCMD_DWM_REDIRECTION_UPDATESHAREDVIRTUALDESKTOPVISUAL@@PEBU_REMOTE_PORT_VIEW@@@Z @ 0x1800025C0 (-UpdateSharedVirtualDesktopVisual@CWindowList@@UEAAJKPEBUMILCMD_DWM_REDIRECTION_UPDATESHAREDVIRT.c)
 *     ?UpdateThumbnailProperties@CWindowList@@AEAAJKPEAUMILCMD_DWM_REDIRECTION_UPDATETHUMBNAILPROPERTIES@@@Z @ 0x1800027DC (-UpdateThumbnailProperties@CWindowList@@AEAAJKPEAUMILCMD_DWM_REDIRECTION_UPDATETHUMBNAILPROPERTI.c)
 *     ?QueryThumbnailType@CWindowList@@AEAAJKPEAUMILCMD_DWM_REDIRECTION_QUERYTHUMBNAILTYPE@@@Z @ 0x180002880 (-QueryThumbnailType@CWindowList@@AEAAJKPEAUMILCMD_DWM_REDIRECTION_QUERYTHUMBNAILTYPE@@@Z.c)
 *     ?UnregisterThumbnail@CWindowList@@AEAAJKPEBUMILCMD_DWM_REDIRECTION_UNREGISTERTHUMBNAIL@@@Z @ 0x18000293C (-UnregisterThumbnail@CWindowList@@AEAAJKPEBUMILCMD_DWM_REDIRECTION_UNREGISTERTHUMBNAIL@@@Z.c)
 *     ?OnCreateAnimationClock@CAnimationClockCoordinator@@QEAAJU_GUID@@K@Z @ 0x180003950 (-OnCreateAnimationClock@CAnimationClockCoordinator@@QEAAJU_GUID@@K@Z.c)
 *     ?OnBeginAnimationClock@CAnimationClockCoordinator@@QEAAJU_GUID@@K@Z @ 0x18000D6EC (-OnBeginAnimationClock@CAnimationClockCoordinator@@QEAAJU_GUID@@K@Z.c)
 *     ?StartTransition@CWindowList@@AEAAJPEAUMILCMD_DWM_REDIRECTION_STARTTRANSITION@@@Z @ 0x18000DD18 (-StartTransition@CWindowList@@AEAAJPEAUMILCMD_DWM_REDIRECTION_STARTTRANSITION@@@Z.c)
 *     ?OnEndAnimationClock@CAnimationClockCoordinator@@QEAAJU_GUID@@@Z @ 0x18000DF14 (-OnEndAnimationClock@CAnimationClockCoordinator@@QEAAJU_GUID@@@Z.c)
 *     ?InvalidateIconicBitmaps@CWindowList@@AEAAJKPEBUMILCMD_DWM_REDIRECTION_INVALIDATEICONICBITMAPS@@@Z @ 0x1800114C8 (-InvalidateIconicBitmaps@CWindowList@@AEAAJKPEBUMILCMD_DWM_REDIRECTION_INVALIDATEICONICBITMAPS@@.c)
 *     ?GetTitleBarInfo@CWindowList@@AEAAJPEAUMILCMD_DWM_REDIRECTION_GETTITLEBARINFO@@@Z @ 0x18001169C (-GetTitleBarInfo@CWindowList@@AEAAJPEAUMILCMD_DWM_REDIRECTION_GETTITLEBARINFO@@@Z.c)
 *     ?QueryWindowThumbnailSourceSize@CWindowList@@AEAAJPEAUMILCMD_DWM_REDIRECTION_QUERYWINDOWTHUMBNAILSOURCESIZE@@@Z @ 0x180013AEC (-QueryWindowThumbnailSourceSize@CWindowList@@AEAAJPEAUMILCMD_DWM_REDIRECTION_QUERYWINDOWTHUMBNAI.c)
 *     ?GetWindowAttribute@CWindowList@@AEAAJPEAUMILCMD_DWM_WINDOWATTRIBUTE@@@Z @ 0x180013C5C (-GetWindowAttribute@CWindowList@@AEAAJPEAUMILCMD_DWM_WINDOWATTRIBUTE@@@Z.c)
 *     ?PostActivateLivePreview@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_ACTIVATELIVEPREVIEW@@@Z @ 0x180014FAC (-PostActivateLivePreview@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_ACTIVATELIVEPREVIEW@@@Z.c)
 *     ?IsLivePreviewAllowed@CDesktopManager@@SA_NXZ @ 0x180015344 (-IsLivePreviewAllowed@CDesktopManager@@SA_NXZ.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x180025534 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?SetColorizationParameters@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_SETCOLORIZATIONPARAMETERS@@@Z @ 0x180039458 (-SetColorizationParameters@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_SETCOLORIZATIONPARAMETER.c)
 *     ?GetMagnifierControlForDesktop@CWindowList@@QEAAPEAVCMagnifierControl@@_K@Z @ 0x1800404A4 (-GetMagnifierControlForDesktop@CWindowList@@QEAAPEAVCMagnifierControl@@_K@Z.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_1223716152@@@details@wil@@QEAA_NXZ @ 0x18006600C (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_1223716152@@@details@wil@@QEAA_NX.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_1691381050@@@details@wil@@QEAA_NXZ @ 0x180066048 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_1691381050@@@details@wil@@QEAA_NX.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_3293866296@@@details@wil@@QEAA_NXZ @ 0x180066084 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_3293866296@@@details@wil@@QEAA_NX.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_347897146@@@details@wil@@QEAA_NXZ @ 0x1800660C0 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_347897146@@@details@wil@@QEAA_NXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18006610C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800663A0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?QueryThumbnailSourceSize@CWindowList@@AEAAJKPEAUMILCMD_DWM_REDIRECTION_QUERYTHUMBNAILSOURCESIZE@@@Z @ 0x18006F030 (-QueryThumbnailSourceSize@CWindowList@@AEAAJKPEAUMILCMD_DWM_REDIRECTION_QUERYTHUMBNAILSOURCESIZE.c)
 *     ?OnGetAnimationClockTime@CAnimationClockCoordinator@@QEAAJU_GUID@@W4DWMPANIMATION_CLOCK_TIME@@PEAT_LARGE_INTEGER@@@Z @ 0x1800AA734 (-OnGetAnimationClockTime@CAnimationClockCoordinator@@QEAAJU_GUID@@W4DWMPANIMATION_CLOCK_TIME@@PE.c)
 *     ?OnGetAnimationClockToken@CAnimationClockCoordinator@@QEAAJU_GUID@@PEAPEAX@Z @ 0x1800AA7A4 (-OnGetAnimationClockToken@CAnimationClockCoordinator@@QEAAJU_GUID@@PEAPEAX@Z.c)
 *     ?OnGetSynchronizationCommitHandle@CAnimationClockCoordinator@@QEAAJAEBU_GUID@@KPEAPEAX@Z @ 0x1800AA808 (-OnGetSynchronizationCommitHandle@CAnimationClockCoordinator@@QEAAJAEBU_GUID@@KPEAPEAX@Z.c)
 *     ?OnSetAnimationClockTime@CAnimationClockCoordinator@@QEAAJU_GUID@@W4DWMPANIMATION_CLOCK_TIME@@PEBT_LARGE_INTEGER@@@Z @ 0x1800AA8C8 (-OnSetAnimationClockTime@CAnimationClockCoordinator@@QEAAJU_GUID@@W4DWMPANIMATION_CLOCK_TIME@@PE.c)
 *     ?OnFlick@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_RENDERFLICK@@@Z @ 0x1800B07F8 (-OnFlick@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_RENDERFLICK@@@Z.c)
 *     ?OnGesture@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_RENDERGESTURE@@@Z @ 0x1800B090C (-OnGesture@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_RENDERGESTURE@@@Z.c)
 *     ?UpdateSDRToHDRBoost@CDesktopManager@@QEAAJPEAUHMONITOR__@@M@Z @ 0x1800B5C2C (-UpdateSDRToHDRBoost@CDesktopManager@@QEAAJPEAUHMONITOR__@@M@Z.c)
 *     ?OnMagnifierSyncApiMessage@CMagnifierControl@@QEAAJW4DWMCMD@@PEAX_NKPEBU_REMOTE_PORT_VIEW@@PEAJPEAI@Z @ 0x1800CBCB0 (-OnMagnifierSyncApiMessage@CMagnifierControl@@QEAAJW4DWMCMD@@PEAX_NKPEBU_REMOTE_PORT_VIEW@@PEAJP.c)
 *     ?AddProjectedShadowCaster@CWindowList@@QEAAJPEAUHWND__@@PEAX1@Z @ 0x180108FEC (-AddProjectedShadowCaster@CWindowList@@QEAAJPEAUHWND__@@PEAX1@Z.c)
 *     ?GetColorizationParameters@CWindowList@@AEAAXPEAUMILCMD_DWM_REDIRECTION_GETCOLORIZATIONPARAMETERS@@@Z @ 0x18010A380 (-GetColorizationParameters@CWindowList@@AEAAXPEAUMILCMD_DWM_REDIRECTION_GETCOLORIZATIONPARAMETER.c)
 *     ?GetGlobalState@CWindowList@@AEAAJPEAUMILCMD_DWM_REDIRECTION_GETGLOBALSTATE@@@Z @ 0x18010A40C (-GetGlobalState@CWindowList@@AEAAJPEAUMILCMD_DWM_REDIRECTION_GETGLOBALSTATE@@@Z.c)
 *     ?HandleHardwareExpressionActivation@CWindowList@@AEAAJK@Z @ 0x18010A860 (-HandleHardwareExpressionActivation@CWindowList@@AEAAJK@Z.c)
 *     ?HitTestQuery@CWindowList@@AEAAJPEAUMILCMD_DWM_REDIRECTION_HITTESTQUERY@@@Z @ 0x18010AB5C (-HitTestQuery@CWindowList@@AEAAJPEAUMILCMD_DWM_REDIRECTION_HITTESTQUERY@@@Z.c)
 *     ?OnProxyWindowUpdate@CWindowList@@AEAAJPEAUHWND__@@0@Z @ 0x18010B620 (-OnProxyWindowUpdate@CWindowList@@AEAAJPEAUHWND__@@0@Z.c)
 *     ?RegisterThumbnail@CWindowList@@AEAAJKPEAUMILCMD_DWM_REDIRECTION_REGISTERTHUMBNAIL@@@Z @ 0x18010BF18 (-RegisterThumbnail@CWindowList@@AEAAJKPEAUMILCMD_DWM_REDIRECTION_REGISTERTHUMBNAIL@@@Z.c)
 *     ?SetIconicBitmapBackgroundColor@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_SETIMMERSIVEICONICDEFAULTCOLOR@@@Z @ 0x18010C73C (-SetIconicBitmapBackgroundColor@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_SETIMMERSIVEICONICD.c)
 *     ?SetIconicLivePreviewBitmap@CWindowList@@AEAAJKPEBUMILCMD_DWM_REDIRECTION_SETICONICLIVEPREVIEWBITMAP@@PEBU_REMOTE_PORT_VIEW@@@Z @ 0x18010C7F8 (-SetIconicLivePreviewBitmap@CWindowList@@AEAAJKPEBUMILCMD_DWM_REDIRECTION_SETICONICLIVEPREVIEWBI.c)
 *     ?SetIconicThumbnail@CWindowList@@AEAAJKPEBUMILCMD_DWM_REDIRECTION_SETICONICTHUMBNAIL@@PEBU_REMOTE_PORT_VIEW@@@Z @ 0x18010C94C (-SetIconicThumbnail@CWindowList@@AEAAJKPEBUMILCMD_DWM_REDIRECTION_SETICONICTHUMBNAIL@@PEBU_REMOT.c)
 *     ?TransitionBitmap@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_TRANSITIONBITMAP@@PEBU_REMOTE_PORT_VIEW@@@Z @ 0x18010D078 (-TransitionBitmap@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_TRANSITIONBITMAP@@PEBU_REMOTE_POR.c)
 *     ?UpdateAccentBlurRect@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_ACCENTBLURRECTUPDATE@@@Z @ 0x18010D450 (-UpdateAccentBlurRect@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_ACCENTBLURRECTUPDATE@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CWindowList::ProcessSyncDwmMessage(
        CWindowList *a1,
        int a2,
        __int64 a3,
        unsigned int a4,
        char a5,
        unsigned int a6,
        struct _REMOTE_PORT_VIEW *a7,
        int *a8,
        HANDLE hObject)
{
  _DWORD *v12; // r12
  int SynchronizationCommitHandle; // ebx
  unsigned int v14; // r13d
  int updated; // eax
  __int64 v16; // rcx
  __int64 v17; // rcx
  unsigned int v18; // edi
  __int64 v19; // rcx
  __int64 v20; // rax
  unsigned int v21; // ecx
  unsigned __int64 v22; // rax
  __int64 v23; // rcx
  __int64 v24; // rcx
  __int64 v25; // rcx
  __int64 v26; // rcx
  int v27; // eax
  HANDLE v28; // rcx
  __int64 v29; // rcx
  HWND v30; // rbx
  void *v31; // rcx
  struct CMagnifierControl *MagnifierControlForDesktop; // rax
  __int64 v33; // r9
  __int64 *v34; // rcx
  __int64 v35; // rax
  __int64 *v36; // rcx
  __int64 v37; // rax
  __int64 *v38; // rcx
  __int64 v39; // rax
  __int64 *v40; // rcx
  __int64 v41; // rax
  __int64 *v42; // rcx
  __int64 v43; // rax
  __int64 *v44; // rcx
  __int64 v45; // rax
  __int64 *v46; // rcx
  __int64 v47; // rax
  __int64 *v48; // rcx
  __int64 v49; // rax
  HWND v50; // rdi
  HWND v51; // rbx
  __int64 *v52; // rcx
  __int64 v53; // rax
  bool v54; // zf
  unsigned int v56; // [rsp+20h] [rbp-30h]
  struct _GUID v57; // [rsp+40h] [rbp-10h] BYREF

  v12 = hObject;
  SynchronizationCommitHandle = -2147024872;
  *(_DWORD *)hObject = 0;
  v14 = -2147467263;
  if ( a2 > 1073741916 )
  {
    if ( a2 > 1073741948 )
    {
      if ( a2 <= 1073741954 )
      {
        switch ( a2 )
        {
          case 1073741954:
            if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_3293866296>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_3293866296>::GetImpl'::`2'::impl)
              && !a5
              || a4 != 28 )
            {
              goto LABEL_215;
            }
            if ( a6 == *(_DWORD *)(a3 + 24) )
            {
              v44 = (__int64 *)*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 58);
              v45 = *v44;
              hObject = *(HANDLE *)(a3 + 20);
              updated = (*(__int64 (__fastcall **)(__int64 *, _QWORD, _QWORD, HANDLE *))(v45 + 64))(
                          v44,
                          *(_QWORD *)(a3 + 4),
                          *(_QWORD *)(a3 + 12),
                          &hObject);
              goto LABEL_213;
            }
            break;
          case 1073741949:
            if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_1691381050>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_1691381050>::GetImpl'::`2'::impl)
              && !a5
              || a4 != 28 )
            {
              goto LABEL_215;
            }
            if ( a6 == *(_DWORD *)(a3 + 24) )
            {
              v42 = (__int64 *)*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 58);
              v43 = *v42;
              hObject = *(HANDLE *)(a3 + 20);
              updated = (*(__int64 (__fastcall **)(__int64 *, _QWORD, _QWORD, HANDLE *))(v43 + 8))(
                          v42,
                          *(_QWORD *)(a3 + 4),
                          *(_QWORD *)(a3 + 12),
                          &hObject);
              goto LABEL_213;
            }
            break;
          case 1073741950:
            if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_1223716152>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_1223716152>::GetImpl'::`2'::impl)
              && !a5
              || a4 != 28 )
            {
              goto LABEL_215;
            }
            if ( a6 == *(_DWORD *)(a3 + 24) )
            {
              v40 = (__int64 *)*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 58);
              v41 = *v40;
              hObject = *(HANDLE *)(a3 + 20);
              updated = (*(__int64 (__fastcall **)(__int64 *, _QWORD, _QWORD, HANDLE *))(v41 + 32))(
                          v40,
                          *(_QWORD *)(a3 + 4),
                          *(_QWORD *)(a3 + 12),
                          &hObject);
              goto LABEL_213;
            }
            break;
          case 1073741951:
            if ( a4 != 20 )
              goto LABEL_215;
            if ( a6 == *(_DWORD *)(a3 + 16) )
            {
              v38 = (__int64 *)*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 58);
              v39 = *v38;
              hObject = *(HANDLE *)(a3 + 12);
              updated = (*(__int64 (__fastcall **)(__int64 *, _QWORD, HANDLE *))(v39 + 16))(
                          v38,
                          *(_QWORD *)(a3 + 4),
                          &hObject);
              goto LABEL_213;
            }
            break;
          case 1073741952:
            if ( a4 != 12 )
              goto LABEL_215;
            if ( a6 == *(_DWORD *)(a3 + 8) )
            {
              v36 = (__int64 *)*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 58);
              v37 = *v36;
              hObject = *(HANDLE *)(a3 + 4);
              updated = (*(__int64 (__fastcall **)(__int64 *, HANDLE *))(v37 + 24))(v36, &hObject);
              goto LABEL_213;
            }
            break;
          default:
            if ( a4 != 12 )
              goto LABEL_215;
            if ( a6 == *(_DWORD *)(a3 + 8) )
            {
              v34 = (__int64 *)*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 58);
              v35 = *v34;
              hObject = *(HANDLE *)(a3 + 4);
              updated = (*(__int64 (__fastcall **)(__int64 *, HANDLE *))(v35 + 40))(v34, &hObject);
              goto LABEL_213;
            }
            break;
        }
        goto LABEL_19;
      }
      switch ( a2 )
      {
        case 1073741955:
          if ( a4 != 12 )
            goto LABEL_215;
          if ( a6 == *(_DWORD *)(a3 + 8) )
          {
            v52 = (__int64 *)*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 58);
            v53 = *v52;
            hObject = *(HANDLE *)(a3 + 4);
            updated = (*(__int64 (__fastcall **)(__int64 *, HANDLE *))(v53 + 72))(v52, &hObject);
            goto LABEL_213;
          }
          goto LABEL_19;
        case 1073741956:
          if ( a4 == 20 )
          {
            v50 = *(HWND *)(a3 + 4);
            v51 = *(HWND *)(a3 + 12);
            if ( !(unsigned int)DwmValidateWindow(v50, a6) || v51 && !(unsigned int)DwmValidateWindow(v51, a6) )
            {
              SynchronizationCommitHandle = -2147024891;
              goto LABEL_214;
            }
            updated = CWindowList::OnProxyWindowUpdate(a1, v50, v51);
            goto LABEL_213;
          }
          goto LABEL_215;
        case 1073741957:
          if ( a4 != 16 )
            goto LABEL_215;
          if ( a6 == *(_DWORD *)(a3 + 8) )
          {
            v48 = (__int64 *)*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 58);
            v49 = *v48;
            hObject = *(HANDLE *)(a3 + 4);
            updated = (*(__int64 (__fastcall **)(__int64 *, HANDLE *, _QWORD))(v49 + 88))(
                        v48,
                        &hObject,
                        *(unsigned int *)(a3 + 12));
            goto LABEL_213;
          }
          goto LABEL_19;
        case 1073741958:
          if ( a4 != 16 )
            goto LABEL_215;
          if ( a6 == *(_DWORD *)(a3 + 8) )
          {
            v46 = (__int64 *)*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 58);
            v47 = *v46;
            hObject = *(HANDLE *)(a3 + 4);
            updated = (*(__int64 (__fastcall **)(__int64 *, HANDLE *, _QWORD))(v47 + 96))(
                        v46,
                        &hObject,
                        *(unsigned int *)(a3 + 12));
            goto LABEL_213;
          }
          goto LABEL_19;
      }
      goto LABEL_197;
    }
    if ( a2 == 1073741948 )
    {
      if ( a4 != 36 )
        goto LABEL_215;
      SynchronizationCommitHandle = -2147467263;
      *v12 = 36;
      goto LABEL_217;
    }
    if ( a2 > 1073741922 )
    {
      switch ( a2 )
      {
        case 1073741928:
          if ( a4 == 72 )
          {
            hObject = &CDesktopManager::s_csDwmInstance;
            EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
            MagnifierControlForDesktop = CWindowList::GetMagnifierControlForDesktop(
                                           *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 54),
                                           *(_QWORD *)(a3 + 56));
            LOBYTE(v33) = a5;
            SynchronizationCommitHandle = CMagnifierControl::OnMagnifierSyncApiMessage(
                                            MagnifierControlForDesktop,
                                            1073741928LL,
                                            a3,
                                            v33);
            CGuard<CDwmCS>::~CGuard<CDwmCS>(&hObject);
            goto LABEL_214;
          }
          SynchronizationCommitHandle = -2003303421;
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2003303421, 0x3D2u, 0LL);
          goto LABEL_217;
        case 1073741942:
          if ( a4 == 64 )
          {
            updated = CWindowList::TransitionBitmap(
                        (CWindowList *)(unsigned int)(a2 - 1073741942),
                        (const struct MILCMD_DWM_REDIRECTION_TRANSITIONBITMAP *)a3,
                        a7);
            goto LABEL_213;
          }
          goto LABEL_215;
        case 1073741944:
          if ( a4 == 28 )
          {
            updated = CWindowList::UpdateAccentBlurRect(
                        a1,
                        (const struct MILCMD_DWM_REDIRECTION_ACCENTBLURRECTUPDATE *)a3);
            goto LABEL_213;
          }
          goto LABEL_215;
        case 1073741945:
          if ( a4 != 20 )
            goto LABEL_215;
          updated = CDesktopManager::UpdateSDRToHDRBoost(
                      CDesktopManager::s_pDesktopManagerInstance,
                      *(HMONITOR *)(a3 + 4),
                      *(double *)(a3 + 12));
          goto LABEL_30;
      }
      if ( a2 != 1073741946 )
      {
LABEL_197:
        SynchronizationCommitHandle = -2147467263;
        goto LABEL_217;
      }
      if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_347897146>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_347897146>::GetImpl'::`2'::impl)
        && !a5
        || a4 != 28 )
      {
        goto LABEL_215;
      }
      v30 = *(HWND *)(a3 + 4);
      if ( !v30 || (unsigned int)DwmValidateWindow(*(_QWORD *)(a3 + 4), a6) )
        SynchronizationCommitHandle = CWindowList::AddProjectedShadowCaster(
                                        a1,
                                        v30,
                                        *(void **)(a3 + 12),
                                        *(void **)(a3 + 20));
      else
        SynchronizationCommitHandle = -2147024891;
      v31 = *(void **)(a3 + 12);
      if ( v31 )
        CloseHandle(v31);
      v28 = *(HANDLE *)(a3 + 20);
      if ( v28 )
        goto LABEL_124;
    }
    else
    {
      switch ( a2 )
      {
        case 1073741922:
          if ( a4 != 28 )
            goto LABEL_215;
          SynchronizationCommitHandle = CAnimationClockCoordinator::OnGetSynchronizationCommitHandle(
                                          *((CAnimationClockCoordinator **)CDesktopManager::s_pDesktopManagerInstance
                                          + 21),
                                          (const struct _GUID *)(a3 + 4),
                                          a6,
                                          &hObject);
          *(_QWORD *)(a3 + 20) = hObject;
          break;
        case 1073741917:
          if ( a4 == 24 )
          {
            v57 = *(struct _GUID *)(a3 + 4);
            updated = CAnimationClockCoordinator::OnBeginAnimationClock(
                        *((CAnimationClockCoordinator **)CDesktopManager::s_pDesktopManagerInstance + 21),
                        &v57,
                        *(_DWORD *)(a3 + 20));
            goto LABEL_213;
          }
          goto LABEL_215;
        case 1073741918:
          if ( a4 == 20 )
          {
            v57 = *(struct _GUID *)(a3 + 4);
            updated = CAnimationClockCoordinator::OnEndAnimationClock(
                        *((CAnimationClockCoordinator **)CDesktopManager::s_pDesktopManagerInstance + 21),
                        &v57);
            goto LABEL_213;
          }
          goto LABEL_215;
        case 1073741919:
          if ( a4 == 32 )
          {
            v57 = *(struct _GUID *)(a3 + 4);
            updated = CAnimationClockCoordinator::OnGetAnimationClockTime(
                        *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 21),
                        &v57,
                        *(unsigned int *)(a3 + 20),
                        a3 + 24);
            *v12 = 32;
            goto LABEL_213;
          }
          goto LABEL_215;
        case 1073741920:
          if ( a4 == 32 )
          {
            v29 = *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 21);
            v57 = *(struct _GUID *)(a3 + 4);
            updated = CAnimationClockCoordinator::OnSetAnimationClockTime(
                        v29,
                        &v57,
                        *(unsigned int *)(a3 + 20),
                        (a3 + 24) & -(__int64)(*(_QWORD *)(a3 + 24) != 0LL));
            goto LABEL_213;
          }
          goto LABEL_215;
        default:
          if ( a4 != 28 )
            goto LABEL_215;
          hObject = 0LL;
          v57 = *(struct _GUID *)(a3 + 4);
          SynchronizationCommitHandle = CAnimationClockCoordinator::OnGetAnimationClockToken(
                                          *((CAnimationClockCoordinator **)CDesktopManager::s_pDesktopManagerInstance
                                          + 21),
                                          &v57,
                                          &hObject);
          if ( SynchronizationCommitHandle >= 0 )
          {
            v27 = NtDCompositionDuplicateHandleToProcess(hObject, a6, &v57);
            SynchronizationCommitHandle = v27 | 0x10000000;
            if ( v27 >= 0 )
              *(_QWORD *)(a3 + 20) = *(_QWORD *)&v57.Data1;
            v28 = hObject;
LABEL_124:
            CloseHandle(v28);
          }
          break;
      }
    }
    *v12 = 28;
    goto LABEL_214;
  }
  if ( a2 == 1073741916 )
  {
    if ( a4 == 24 )
    {
      v57 = *(struct _GUID *)(a3 + 4);
      updated = CAnimationClockCoordinator::OnCreateAnimationClock(
                  *((CAnimationClockCoordinator **)CDesktopManager::s_pDesktopManagerInstance + 21),
                  &v57,
                  *(_DWORD *)(a3 + 20));
      goto LABEL_213;
    }
    goto LABEL_215;
  }
  if ( a2 > 1073741881 )
  {
    if ( a2 > 1073741890 )
    {
      switch ( a2 )
      {
        case 1073741897:
          if ( a4 == 48 )
          {
            updated = CWindowList::StartTransition(
                        (struct _RTL_CRITICAL_SECTION *)0x4000005C,
                        (struct MILCMD_DWM_REDIRECTION_STARTTRANSITION *)a3);
            *v12 = 48;
            goto LABEL_213;
          }
          goto LABEL_215;
        case 1073741904:
          if ( a4 == 8 )
          {
            updated = CWindowList::HandleHardwareExpressionActivation(a1, *(_DWORD *)(a3 + 4));
            goto LABEL_213;
          }
          goto LABEL_215;
        case 1073741907:
          if ( a4 == 56 )
          {
            updated = CWindowList::UpdateSharedVirtualDesktopVisual(
                        a1,
                        a6,
                        (const struct MILCMD_DWM_REDIRECTION_UPDATESHAREDVIRTUALDESKTOPVISUAL *)a3,
                        a7);
            goto LABEL_213;
          }
          goto LABEL_215;
        case 1073741911:
          if ( a4 != 16 )
            goto LABEL_215;
          v26 = *(_QWORD *)(a3 + 4);
          if ( !v26 || (unsigned int)DwmValidateWindow(v26, a6) )
          {
            updated = CWindowList::SetIconicBitmapBackgroundColor(
                        a1,
                        (const struct MILCMD_DWM_REDIRECTION_SETIMMERSIVEICONICDEFAULTCOLOR *)a3);
            goto LABEL_213;
          }
          goto LABEL_19;
      }
      goto LABEL_197;
    }
    switch ( a2 )
    {
      case 1073741890:
        if ( a4 == 16 )
        {
          updated = CContactManager::OnFlick(
                      *((CContactManager **)CDesktopManager::s_pDesktopManagerInstance + 20),
                      (const struct MILCMD_DWM_REDIRECTION_RENDERFLICK *)a3);
          goto LABEL_213;
        }
        goto LABEL_215;
      case 1073741882:
        if ( a4 != 24 )
          goto LABEL_215;
        v25 = *(_QWORD *)(a3 + 4);
        if ( !v25 || (unsigned int)DwmValidateWindow(v25, a6) )
        {
          updated = CWindowList::SetIconicThumbnail(
                      a1,
                      a6,
                      (const struct MILCMD_DWM_REDIRECTION_SETICONICTHUMBNAIL *)a3,
                      a7);
          goto LABEL_213;
        }
        goto LABEL_19;
      case 1073741884:
        if ( a4 == 16 )
        {
          updated = CWindowList::QueryThumbnailType(a1, a6, (struct MILCMD_DWM_REDIRECTION_QUERYTHUMBNAILTYPE *)a3);
          *v12 = 16;
          goto LABEL_213;
        }
        goto LABEL_215;
    }
    if ( a2 != 1073741885 )
    {
      if ( a2 == 1073741886 )
      {
        if ( a4 != 12 )
          goto LABEL_215;
        v23 = *(_QWORD *)(a3 + 4);
        if ( !v23 || (unsigned int)DwmValidateWindow(v23, a6) )
        {
          updated = CWindowList::InvalidateIconicBitmaps(
                      a1,
                      a6,
                      (const struct MILCMD_DWM_REDIRECTION_INVALIDATEICONICBITMAPS *)a3);
          goto LABEL_213;
        }
        goto LABEL_19;
      }
      if ( a2 == 1073741889 )
      {
        if ( a4 == 32 )
        {
          updated = CContactManager::OnGesture(
                      *((CContactManager **)CDesktopManager::s_pDesktopManagerInstance + 20),
                      (const struct MILCMD_DWM_REDIRECTION_RENDERGESTURE *)a3);
          goto LABEL_213;
        }
        goto LABEL_215;
      }
      goto LABEL_197;
    }
    if ( CDesktopManager::IsLivePreviewAllowed() )
    {
      if ( a4 != 32 )
        goto LABEL_215;
      v24 = *(_QWORD *)(a3 + 4);
      if ( !v24 || (unsigned int)DwmValidateWindow(v24, a6) )
      {
        updated = CWindowList::SetIconicLivePreviewBitmap(
                    a1,
                    a6,
                    (const struct MILCMD_DWM_REDIRECTION_SETICONICLIVEPREVIEWBITMAP *)a3,
                    a7);
        goto LABEL_213;
      }
      goto LABEL_19;
    }
    goto LABEL_55;
  }
  if ( a2 != 1073741881 )
  {
    if ( a2 <= 1073741859 )
    {
      if ( a2 != 1073741859 )
      {
        if ( a2 == 1073741848 )
        {
          if ( a4 != 52 )
            goto LABEL_215;
          v17 = *(_QWORD *)(a3 + 4);
          SynchronizationCommitHandle = 0;
          if ( !v17 || (unsigned int)DwmValidateWindow(v17, a6) )
          {
            CWindowList::HitTestQuery(a1, (struct MILCMD_DWM_REDIRECTION_HITTESTQUERY *)a3);
            *v12 = 52;
            goto LABEL_215;
          }
          goto LABEL_19;
        }
        if ( a2 != 1073741849 )
        {
          if ( a2 != 1073741855 )
          {
            if ( a2 == 1073741856 )
            {
              if ( a4 == 57 )
              {
                updated = CWindowList::UpdateThumbnailProperties(
                            a1,
                            a6,
                            (struct MILCMD_DWM_REDIRECTION_UPDATETHUMBNAILPROPERTIES *)a3);
                goto LABEL_213;
              }
LABEL_215:
              if ( a8 )
                *a8 = SynchronizationCommitHandle;
              goto LABEL_217;
            }
            if ( a2 == 1073741857 )
            {
              if ( a4 == 12 )
              {
                updated = CWindowList::UnregisterThumbnail(
                            a1,
                            a6,
                            (const struct MILCMD_DWM_REDIRECTION_UNREGISTERTHUMBNAIL *)a3);
LABEL_213:
                SynchronizationCommitHandle = updated;
                goto LABEL_214;
              }
              goto LABEL_215;
            }
            goto LABEL_197;
          }
          if ( a4 != 36 )
            goto LABEL_215;
          v16 = *(_QWORD *)(a3 + 12);
          if ( !v16 || (unsigned int)DwmValidateWindow(v16, a6) )
          {
            updated = CWindowList::RegisterThumbnail(a1, a6, (struct MILCMD_DWM_REDIRECTION_REGISTERTHUMBNAIL *)a3);
            goto LABEL_213;
          }
LABEL_19:
          SynchronizationCommitHandle = -2147024891;
          goto LABEL_215;
        }
        if ( a4 != 156 )
          goto LABEL_215;
        CWindowList::GetTitleBarInfo(a1, (struct MILCMD_DWM_REDIRECTION_GETTITLEBARINFO *)a3);
        *v12 = 156;
LABEL_23:
        SynchronizationCommitHandle = 0;
        goto LABEL_215;
      }
      if ( a4 != 20 )
        goto LABEL_215;
      updated = CWindowList::QueryThumbnailSourceSize(
                  a1,
                  a6,
                  (struct MILCMD_DWM_REDIRECTION_QUERYTHUMBNAILSOURCESIZE *)a3);
LABEL_30:
      *v12 = 20;
      goto LABEL_213;
    }
    switch ( a2 )
    {
      case 1073741860:
        if ( a4 == 24 )
        {
          v19 = *(_QWORD *)(a3 + 4);
          if ( !v19 || (unsigned int)DwmValidateWindow(v19, a6) )
            SynchronizationCommitHandle = CWindowList::QueryWindowThumbnailSourceSize(
                                            a1,
                                            (struct MILCMD_DWM_REDIRECTION_QUERYWINDOWTHUMBNAILSOURCESIZE *)a3);
          else
            SynchronizationCommitHandle = -2147024891;
          *v12 = 24;
LABEL_214:
          v54 = SynchronizationCommitHandle == -2147467263;
          if ( SynchronizationCommitHandle == -2147467263 )
            goto LABEL_218;
          goto LABEL_215;
        }
        goto LABEL_215;
      case 1073741865:
        if ( a4 == 36 )
        {
          updated = CWindowList::SetColorizationParameters(
                      a1,
                      (const struct MILCMD_DWM_REDIRECTION_SETCOLORIZATIONPARAMETERS *)a3);
          goto LABEL_213;
        }
        goto LABEL_215;
      case 1073741866:
        if ( a4 != 36 )
          goto LABEL_215;
        CWindowList::GetColorizationParameters(
          (CWindowList *)0x4000005C,
          (struct MILCMD_DWM_REDIRECTION_GETCOLORIZATIONPARAMETERS *)a3);
        *v12 = 36;
        goto LABEL_23;
      case 1073741867:
        if ( a5 )
        {
          if ( a4 > 0x18 )
          {
            v18 = *(_DWORD *)(a3 + 20) + 24;
            if ( *(_DWORD *)(a3 + 20) < 0xFFFFFFE8 && a4 >= v18 && *(_DWORD *)(a3 + 4) )
            {
              updated = CWindowList::GetWindowAttribute(a1, (struct MILCMD_DWM_WINDOWATTRIBUTE *)a3);
              *v12 = v18;
              goto LABEL_213;
            }
          }
        }
        goto LABEL_215;
      case 1073741876:
        if ( a4 != 20 )
          goto LABEL_215;
        updated = CWindowList::GetGlobalState(
                    (CWindowList *)0x4000005C,
                    (struct MILCMD_DWM_REDIRECTION_GETGLOBALSTATE *)a3);
        goto LABEL_30;
    }
    goto LABEL_197;
  }
  if ( !CDesktopManager::IsLivePreviewAllowed() )
  {
LABEL_55:
    SynchronizationCommitHandle = -2147024846;
    goto LABEL_215;
  }
  v20 = *(unsigned int *)(a3 + 8);
  if ( (unsigned __int64)(8 * v20) > 0xFFFFFFFF )
  {
    v56 = 859;
  }
  else
  {
    v21 = 8 * v20 + 32;
    if ( v21 < 0x20 )
    {
      v56 = 860;
    }
    else
    {
      SynchronizationCommitHandle = 0;
      if ( !*(_DWORD *)(a3 + 28) )
        goto LABEL_62;
      v22 = 16 * v20;
      if ( v22 > 0xFFFFFFFF )
      {
        v56 = 866;
      }
      else
      {
        if ( (unsigned int)v22 + v21 >= v21 )
        {
          v21 += v22;
LABEL_62:
          if ( a4 == v21 )
          {
            updated = CWindowList::PostActivateLivePreview(a1, (HWND *)a3);
            goto LABEL_213;
          }
          goto LABEL_215;
        }
        v56 = 867;
      }
    }
  }
  SynchronizationCommitHandle = -2147024362;
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024362, v56, 0LL);
LABEL_217:
  v54 = SynchronizationCommitHandle == -2147467263;
LABEL_218:
  if ( !v54 )
    return 0;
  return v14;
}
