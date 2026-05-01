/*
 * XREFs of ?HideInputView@TouchKeyboardExperienceManager@@AEAAJI_N@Z @ 0x1805113EC
 * Callers:
 *     _lambda_d5c88dcaa14c8e92d4b27569fe675d9e_::operator() @ 0x180208DAC (_lambda_d5c88dcaa14c8e92d4b27569fe675d9e_--operator().c)
 *     ?HideAllInputViews@TouchKeyboardExperienceManager@@AEAAXXZ @ 0x1802DB4DC (-HideAllInputViews@TouchKeyboardExperienceManager@@AEAAXXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?UnregisterWithLightDismiss@SingleViewLightDismissHelper@@QEAAXXZ @ 0x1800664B0 (-UnregisterWithLightDismiss@SingleViewLightDismissHelper@@QEAAXXZ.c)
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800D5AF0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??4IUnknown@Foundation@Windows@winrt@@QEAAAEAU0123@$$QEAU0123@@Z @ 0x180172F30 (--4IUnknown@Foundation@Windows@winrt@@QEAAAEAU0123@$$QEAU0123@@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     ??1?$tip_test@U_tip_OnLaunchedTest@XamlExplorerHostTipTests@@@tip@@QEAA@XZ @ 0x180206AA0 (--1-$tip_test@U_tip_OnLaunchedTest@XamlExplorerHostTipTests@@@tip@@QEAA@XZ.c)
 *     ?FireInputPaneHidingEvent@TouchKeyboardExperienceManager@@AEAAXI_N@Z @ 0x1802092F0 (-FireInputPaneHidingEvent@TouchKeyboardExperienceManager@@AEAAXI_N@Z.c)
 *     ?GetInputAppState@TouchKeyboardExperienceManager@@AEAA?AW4PLM_APPLICATION_STATE@@XZ @ 0x18020A518 (-GetInputAppState@TouchKeyboardExperienceManager@@AEAA-AW4PLM_APPLICATION_STATE@@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?FindViewInfo@TouchKeyboardExperienceManager@@AEAAJIAEAV?$shared_ptr@UKBViewInfo@@@std@@@Z @ 0x1802DB1F8 (-FindViewInfo@TouchKeyboardExperienceManager@@AEAAJIAEAV-$shared_ptr@UKBViewInfo@@@std@@@Z.c)
 *     ?UnboostPriority@KBViewInfo@@QEAAXXZ @ 0x1802DC6D2 (-UnboostPriority@KBViewInfo@@QEAAXXZ.c)
 *     ??1?$ComPtr@UIShellRotationManager@@@WRL@Microsoft@@QEAA@XZ @ 0x18038BBC0 (--1-$ComPtr@UIShellRotationManager@@@WRL@Microsoft@@QEAA@XZ.c)
 *     ??$HideAnimationRejected@AEAIPEBG@TouchKeyboardExperienceTelemetryLogger@@SAXAEAI$$QEAPEBG@Z @ 0x180508634 (--$HideAnimationRejected@AEAIPEBG@TouchKeyboardExperienceTelemetryLogger@@SAXAEAI$$QEAPEBG@Z.c)
 *     ??$PrimaryViewAnimationStarting@_NAEBI@TouchKeyboardExperienceTelemetryLogger@@SAX$$QEA_NAEBI@Z @ 0x180508CEC (--$PrimaryViewAnimationStarting@_NAEBI@TouchKeyboardExperienceTelemetryLogger@@SAX$$QEA_NAEBI@Z.c)
 *     ??$StoryboardCompleted@AEAU?$atomic@I@std@@_N_N@TouchKeyboardExperienceTelemetryLogger@@SAXAEAU?$atomic@I@std@@$$QEA_N1@Z @ 0x180509104 (--$StoryboardCompleted@AEAU-$atomic@I@std@@_N_N@TouchKeyboardExperienceTelemetryLogger@@SAXAEAU-.c)
 *     ?AnimateInputView@TouchKeyboardExperienceManager@@AEAAJPEAUKBViewInfo@@PEAUHWND__@@_N@Z @ 0x18050D884 (-AnimateInputView@TouchKeyboardExperienceManager@@AEAAJPEAUKBViewInfo@@PEAUHWND__@@_N@Z.c)
 *     _anonymous_namespace_::IsAnimationEnabled @ 0x180513030 (_anonymous_namespace_--IsAnimationEnabled.c)
 *     ?IsRectNull@KeyboardHosting@@YA_NAEBUtagRECT@@@Z @ 0x180513280 (-IsRectNull@KeyboardHosting@@YA_NAEBUtagRECT@@@Z.c)
 *     ?NotifyCurrentVisibilityState@TouchKeyboardExperienceManager@@AEAAJI_N0@Z @ 0x180513744 (-NotifyCurrentVisibilityState@TouchKeyboardExperienceManager@@AEAAJI_N0@Z.c)
 *     ?SetViewInfoCloakAndReportVisibilityChanged@TouchKeyboardExperienceManager@@AEAAXPEAUKBViewInfo@@_N@Z @ 0x180516194 (-SetViewInfoCloakAndReportVisibilityChanged@TouchKeyboardExperienceManager@@AEAAXPEAUKBViewInfo@.c)
 *     _anonymous_namespace_::StringifyApplicationState @ 0x18051B3EC (_anonymous_namespace_--StringifyApplicationState.c)
 *     ?UpdateShellRunningAnimationInShellPreference@TouchKeyboardExperienceManager@@AEAAXIPEBG_N@Z @ 0x18051BBA4 (-UpdateShellRunningAnimationInShellPreference@TouchKeyboardExperienceManager@@AEAAXIPEBG_N@Z.c)
 *     ?NotifyPrimaryViewAnimationStarting@TabTipAdapter@KeyboardHosting@@QEAAJAEBUtagRECT@@I@Z @ 0x180525490 (-NotifyPrimaryViewAnimationStarting@TabTipAdapter@KeyboardHosting@@QEAAJAEBUtagRECT@@I@Z.c)
 *     ?ComputePrimaryViewAnimationDurations@AnimationCoordinationHelper@KeyboardHosting@@SA?AV?$tuple@II@std@@_N0AEBUtagRECT@@@Z @ 0x18052F5D8 (-ComputePrimaryViewAnimationDurations@AnimationCoordinationHelper@KeyboardHosting@@SA-AV-$tuple@.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall TouchKeyboardExperienceManager::HideInputView(TouchKeyboardExperienceManager *this, int a2, char a3)
{
  unsigned int v4; // r15d
  int ViewInfo; // eax
  unsigned int v7; // ebx
  __int64 v8; // rdx
  KBViewInfo *v9; // r14
  unsigned int InputAppState; // eax
  const struct tagRECT *v11; // rdx
  const struct tagRECT *v12; // rdx
  __int128 *v13; // rcx
  __int64 v14; // r8
  __int128 v15; // xmm0
  unsigned int v16; // ebx
  int v17; // eax
  char v18; // al
  volatile __int32 *v19; // rdi
  __int64 v20; // rdi
  __int64 (__fastcall *v21)(__int64, __int64 *); // rbx
  int v22; // eax
  __int64 v23; // rdx
  int v24; // eax
  char v25; // al
  bool v26; // r8
  char v28; // [rsp+20h] [rbp-39h] BYREF
  char v29; // [rsp+21h] [rbp-38h] BYREF
  char v30; // [rsp+22h] [rbp-37h] BYREF
  char v31; // [rsp+23h] [rbp-36h] BYREF
  _BYTE v32[4]; // [rsp+24h] [rbp-35h] BYREF
  __int64 v33; // [rsp+28h] [rbp-31h] BYREF
  unsigned int v34; // [rsp+30h] [rbp-29h] BYREF
  __int64 v35; // [rsp+38h] [rbp-21h] BYREF
  HWND v36; // [rsp+40h] [rbp-19h] BYREF
  KBViewInfo *v37[2]; // [rsp+48h] [rbp-11h] BYREF
  unsigned int v38[2]; // [rsp+58h] [rbp-1h] BYREF
  __int128 v39; // [rsp+60h] [rbp+7h] BYREF
  struct tagRECT v40; // [rsp+70h] [rbp+17h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+5Fh]

  v4 = a2;
  LODWORD(v33) = a2;
  *(_OWORD *)v37 = 0LL;
  ViewInfo = TouchKeyboardExperienceManager::FindViewInfo((RTL_SRWLOCK *)this, a2, (__int64)v37);
  v7 = ViewInfo;
  if ( ViewInfo < 0 )
  {
    v8 = 1342LL;
LABEL_44:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v8,
      (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
      (const char *)(unsigned int)ViewInfo);
    goto LABEL_48;
  }
  v9 = v37[0];
  if ( !*((_DWORD *)v37[0] + 39) || !(unsigned __int8)anonymous_namespace_::IsAnimationEnabled() )
    goto LABEL_7;
  InputAppState = TouchKeyboardExperienceManager::GetInputAppState((RTL_SRWLOCK *)this);
  if ( InputAppState != 1 )
  {
    v36 = (HWND)anonymous_namespace_::StringifyApplicationState(InputAppState);
    TouchKeyboardExperienceTelemetryLogger::HideAnimationRejected<unsigned int &,unsigned short const *>(
      &v33,
      (__int64 *)&v36);
LABEL_7:
    ViewInfo = (*(__int64 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)v9 + 1) + 40LL))(*((_QWORD *)v9 + 1), 1LL);
    v7 = ViewInfo;
    if ( ViewInfo < 0 )
    {
      v8 = 1356LL;
      goto LABEL_44;
    }
    TouchKeyboardExperienceManager::SetViewInfoCloakAndReportVisibilityChanged(this, v9, 1);
    v25 = *((_BYTE *)this + 937);
    *((_BYTE *)this + 937) = 0;
    if ( v25 )
    {
      v31 = 1;
      v32[0] = 0;
      TouchKeyboardExperienceTelemetryLogger::StoryboardCompleted<std::atomic<unsigned int> &,bool,bool>(
        (int *)this + 233,
        v32,
        &v31);
      TouchKeyboardExperienceManager::UpdateShellRunningAnimationInShellPreference(
        this,
        *((_DWORD *)this + 233),
        L"Hide",
        0);
    }
    goto LABEL_38;
  }
  if ( *((_DWORD *)this + 153) != *((_DWORD *)v9 + 26) )
  {
    v33 = 0LL;
    v20 = *((_QWORD *)v9 + 1);
    v21 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v20 + 32LL);
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v33);
    v22 = v21(v20, &v33);
    v7 = v22;
    if ( v22 >= 0 )
    {
      v22 = (*(__int64 (__fastcall **)(__int64, HWND *))(*(_QWORD *)v33 + 24LL))(v33, &v36);
      v7 = v22;
      if ( v22 >= 0 )
      {
        v24 = TouchKeyboardExperienceManager::AnimateInputView(this, v9, v36, 0);
        if ( v24 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x588,
            (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
            (const char *)(unsigned int)v24);
        Microsoft::WRL::ComPtr<IShellRotationManager>::~ComPtr<IShellRotationManager>(&v33);
        goto LABEL_39;
      }
      v23 = 1415LL;
    }
    else
    {
      v23 = 1413LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v23,
      (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
      (const char *)(unsigned int)v22);
    Microsoft::WRL::ComPtr<IShellRotationManager>::~ComPtr<IShellRotationManager>(&v33);
    goto LABEL_48;
  }
  v40 = 0LL;
  if ( KeyboardHosting::IsRectNull((KBViewInfo *)((char *)v9 + 136), v11) )
    v15 = *(_OWORD *)((char *)v9 + 120);
  else
    v15 = *v13;
  v39 = v15;
  if ( !*((_BYTE *)this + 937)
    || *((_DWORD *)this + 233) != *((_DWORD *)v37[0] + 26)
    || !KeyboardHosting::IsRectNull((KeyboardHosting *)&v39, v12) )
  {
    KeyboardHosting::AnimationCoordinationHelper::ComputePrimaryViewAnimationDurations(v38, 0LL, v14, &v39);
    v16 = v38[0];
    v34 = v38[0];
    v28 = 0;
    TouchKeyboardExperienceTelemetryLogger::PrimaryViewAnimationStarting<bool,unsigned int const &>(&v28, (int *)&v34);
    v17 = KeyboardHosting::TabTipAdapter::NotifyPrimaryViewAnimationStarting(
            *((KeyboardHosting::TabTipAdapter **)this + 73),
            &v40,
            v16);
    if ( v17 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x56F,
        (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
        (const char *)(unsigned int)v17);
  }
  v18 = *((_BYTE *)this + 936);
  *((_BYTE *)this + 936) = 0;
  if ( v18 )
  {
    v35 = 0LL;
    winrt::Windows::Foundation::IUnknown::operator=(
      (TouchKeyboardExperienceManager *)((char *)this + 832),
      (winrt::Windows::Foundation::IUnknown *)&v35);
    if ( v35 )
      winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v35);
    v29 = 1;
    v30 = 1;
    v19 = (volatile __int32 *)((char *)this + 932);
    TouchKeyboardExperienceTelemetryLogger::StoryboardCompleted<std::atomic<unsigned int> &,bool,bool>(
      (int *)this + 233,
      &v30,
      &v29);
    TouchKeyboardExperienceManager::UpdateShellRunningAnimationInShellPreference(
      this,
      *((_DWORD *)this + 233),
      L"Show",
      0);
  }
  else
  {
    v19 = (volatile __int32 *)((char *)this + 932);
  }
  ViewInfo = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 101) + 96LL))(*((_QWORD *)this + 101));
  v7 = ViewInfo;
  if ( ViewInfo < 0 )
  {
    v8 = 1403LL;
    goto LABEL_44;
  }
  ViewInfo = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD))(**((_QWORD **)this + 101) + 80LL))(
               *((_QWORD *)this + 101),
               1000LL,
               0LL);
  v7 = ViewInfo;
  if ( ViewInfo < 0 )
  {
    v8 = 1404LL;
    goto LABEL_44;
  }
  *((_BYTE *)this + 938) = 1;
  *((_BYTE *)this + 937) = 1;
  _InterlockedExchange(v19, *((_DWORD *)this + 153));
LABEL_38:
  v9 = v37[0];
  v4 = v33;
LABEL_39:
  TouchKeyboardExperienceManager::FireInputPaneHidingEvent(this, v4, 0);
  *(_OWORD *)((char *)v9 + 120) = 0LL;
  *(_OWORD *)((char *)v9 + 136) = 0LL;
  if ( a3 )
  {
    ViewInfo = TouchKeyboardExperienceManager::NotifyCurrentVisibilityState(this, v4, v26, 1);
    v7 = ViewInfo;
    if ( ViewInfo < 0 )
    {
      v8 = 1432LL;
      goto LABEL_44;
    }
  }
  ViewInfo = (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)v9 + 344LL))(*(_QWORD *)v9, 3LL);
  v7 = ViewInfo;
  if ( ViewInfo < 0 )
  {
    v8 = 1435LL;
    goto LABEL_44;
  }
  if ( *((_BYTE *)v9 + 154) )
  {
    SingleViewLightDismissHelper::UnregisterWithLightDismiss((TouchKeyboardExperienceManager *)((char *)this + 592));
    *((_DWORD *)this + 152) = -1;
  }
  KBViewInfo::UnboostPriority(v9);
  v7 = 0;
LABEL_48:
  tip::tip_test<XamlExplorerHostTipTests::_tip_OnLaunchedTest>::~tip_test<XamlExplorerHostTipTests::_tip_OnLaunchedTest>((__int64)v37);
  return v7;
}
