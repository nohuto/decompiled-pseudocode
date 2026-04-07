/*
 * XREFs of ?ForceUpdateScene@CWindowList@@QEAAJXZ @ 0x1800407B0
 * Callers:
 *     ?UpdateScene@CWindowList@@UEAAJXZ @ 0x1800405C0 (-UpdateScene@CWindowList@@UEAAJXZ.c)
 *     ?DwmEventThreadProc@CDesktopManager@@CAKPEAX@Z @ 0x1800512B0 (-DwmEventThreadProc@CDesktopManager@@CAKPEAX@Z.c)
 *     ?StartImpl@CDisplaySecondaryOnlyAnimatedVisual@@EEAAJXZ @ 0x18005CBB0 (-StartImpl@CDisplaySecondaryOnlyAnimatedVisual@@EEAAJXZ.c)
 *     ?CaptureAndScheduleExitAnimation@CDisplayMixedModeAnimatedVisual@@AEAAJXZ @ 0x1800B8778 (-CaptureAndScheduleExitAnimation@CDisplayMixedModeAnimatedVisual@@AEAAJXZ.c)
 *     ?StartImpl@CDisplaySecondaryOnlyToDuplicateAnimatedVisual@@EEAAJXZ @ 0x1800BA940 (-StartImpl@CDisplaySecondaryOnlyToDuplicateAnimatedVisual@@EEAAJXZ.c)
 *     ?StartImpl@CDisplaySecondaryOnlyToExtendAnimatedVisual@@EEAAJXZ @ 0x1800BB530 (-StartImpl@CDisplaySecondaryOnlyToExtendAnimatedVisual@@EEAAJXZ.c)
 *     ?SetCompSyncHandle@CTabSwitch@@UEAAXPEAX@Z @ 0x1800D8BC0 (-SetCompSyncHandle@CTabSwitch@@UEAAXPEAX@Z.c)
 *     ?HandleScreenRotation@CWindowList@@QEAAJHH@Z @ 0x180104448 (-HandleScreenRotation@CWindowList@@QEAAJHH@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800049E0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?unconditional_release_ref@?$com_ptr@UTopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@@winrt@@AEAAXXZ @ 0x180007AB4 (-unconditional_release_ref@-$com_ptr@UTopLevelWindow3DWrapper@implementation@Transitions@Udwm@wi.c)
 *     ?UpdateSceneImpl@CDesktopManager@@AEAAJPEAVCVisual@@@Z @ 0x180009CF0 (-UpdateSceneImpl@CDesktopManager@@AEAAJPEAVCVisual@@@Z.c)
 *     ?MoveTransitionAndTouchVisualToFront@CWindowList@@QEAAJXZ @ 0x1800150C0 (-MoveTransitionAndTouchVisualToFront@CWindowList@@QEAAJXZ.c)
 *     McGenEventWrite_EtwEventWriteTransfer @ 0x180034B10 (McGenEventWrite_EtwEventWriteTransfer.c)
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x180040BB0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ??$as@UIRotationTransitionManager@Private@Transitions@Udwm@winrt@@Utype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@impl@5@$0A@@impl@winrt@@YA?AUIRotationTransitionManager@Private@Transitions@Udwm@1@PEAUtype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@01@@Z @ 0x18004207C (--$as@UIRotationTransitionManager@Private@Transitions@Udwm@winrt@@Utype@-$abi@UIUnknown@Foundati.c)
 *     ??$as@UTransitionManager@Transitions@Udwm@winrt@@U1implementation@234@$0A@@impl@winrt@@YA?AUTransitionManager@Transitions@Udwm@1@PEAU2implementation@341@@Z @ 0x18004216C (--$as@UTransitionManager@Transitions@Udwm@winrt@@U1implementation@234@$0A@@impl@winrt@@YA-AUTran.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_TATest@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18004225C (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_TATest@@@details@wil@@QEAAX_NW4ReportingK.c)
 *     ??$make_self@UTransitionManager@implementation@Transitions@Udwm@winrt@@$$V@winrt@@YA?AU?$com_ptr@UTransitionManager@implementation@Transitions@Udwm@winrt@@@0@XZ @ 0x18005C194 (--$make_self@UTransitionManager@implementation@Transitions@Udwm@winrt@@$$V@winrt@@YA-AU-$com_ptr.c)
 *     __security_check_cookie @ 0x180060050 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180063740 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009870C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x1800D3CDC (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CWindowList::ForceUpdateScene(CWindowList *this)
{
  int v2; // esi
  CDesktopManager *v3; // rcx
  CDesktopManager *v4; // rbx
  __int64 v5; // r14
  unsigned int i; // edi
  __int64 v7; // rdx
  CDesktopManager *v8; // rcx
  _QWORD *v9; // rdi
  __int64 v10; // r8
  struct _RTL_CRITICAL_SECTION *v11; // rbx
  struct CVisual *v12; // rdx
  struct CVisual *v13; // rdx
  __int64 v14; // rdi
  _QWORD *v15; // rax
  char v16; // r14
  struct _RTL_CRITICAL_SECTION *v17; // rcx
  int v18; // eax
  __int64 v19; // rbx
  int v20; // eax
  CDesktopManager *v21; // rcx
  struct CVisual *v22; // rdx
  __int64 v23; // rax
  struct CVisual *v24; // rdx
  struct CVisual *v25; // rdx
  __int64 v26; // r8
  __int64 v27; // rdx
  int v28; // eax
  __int64 v29; // rcx
  char *v30; // rdi
  int v31; // eax
  __int64 *v33; // rbx
  __int64 v34; // rax
  CDesktopManager *v35; // rcx
  DWORD LastError; // ebx
  int v37; // [rsp+20h] [rbp-88h]
  PVOID RestartKey; // [rsp+30h] [rbp-78h] BYREF
  __int64 v39; // [rsp+38h] [rbp-70h] BYREF
  __int64 v40; // [rsp+40h] [rbp-68h] BYREF
  __int64 v41; // [rsp+48h] [rbp-60h] BYREF
  __int64 v42; // [rsp+50h] [rbp-58h]
  struct _RTL_CRITICAL_SECTION *v43; // [rsp+58h] [rbp-50h]
  CWindowList *v44; // [rsp+60h] [rbp-48h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+0h]

  v44 = this;
  v2 = 0;
  v43 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  RestartKey = 0LL;
  v4 = CDesktopManager::s_pDesktopManagerInstance;
  v5 = *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 23);
  v42 = v5;
  for ( i = 0; i < *((_DWORD *)v4 + 184); ++i )
    CDesktopManager::UpdateSceneImpl(v3, *(struct CVisual **)(*((_QWORD *)v4 + 89) + 8LL * i));
  v9 = RtlEnumerateGenericTableWithoutSplaying((PRTL_GENERIC_TABLE)((char *)this + 8), &RestartKey);
  if ( v9 )
  {
    v11 = v43;
    do
    {
      v12 = (struct CVisual *)v9[3];
      if ( v12 )
        CDesktopManager::UpdateSceneImpl(v8, v12);
      v13 = (struct CVisual *)v9[5];
      if ( v13 )
        CDesktopManager::UpdateSceneImpl(v8, v13);
      v14 = v9[7];
      if ( v14 )
      {
        v15 = *(_QWORD **)(v14 + 96);
        if ( v15 )
        {
          if ( v15[2] && v15[6] && (v2 |= 1u, (v11 = (struct _RTL_CRITICAL_SECTION *)v15[3]) != 0LL) )
          {
            ((void (__fastcall *)(_QWORD))v11->DebugInfo->CriticalSection)(v15[3]);
            v16 = 1;
          }
          else
          {
            v16 = 0;
          }
          if ( (v2 & 1) != 0 )
          {
            v2 &= ~1u;
            v17 = v11;
            if ( v11 )
            {
              v11 = 0LL;
              ((void (__fastcall *)(struct _RTL_CRITICAL_SECTION *))v17->DebugInfo->ProcessLocksList.Flink)(v17);
            }
          }
          if ( v16 )
          {
            v18 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(*(_QWORD *)(v14 + 96) + 16LL) + 64LL))(*(_QWORD *)(*(_QWORD *)(v14 + 96) + 16LL));
            if ( v18 < 0 )
              wil::details::in1diag3::Return_Hr(
                retaddr,
                (void *)0x190,
                (int)"clientcore\\windows\\dwm\\udwm\\globallightset.cpp",
                (const char *)(unsigned int)v18);
          }
        }
      }
      v9 = RtlEnumerateGenericTableWithoutSplaying((PRTL_GENERIC_TABLE)((char *)this + 8), &RestartKey);
    }
    while ( v9 );
    v5 = v42;
  }
  LOBYTE(v10) = 3;
  LOBYTE(v7) = 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_TATest>::ReportUsage(
    &`wil::Feature<__WilFeatureTraits_Feature_TATest>::GetImpl'::`2'::impl,
    v7,
    v10);
  if ( !winrt::Udwm::Transitions::implementation::TransitionManager::m_instance )
  {
    v33 = (__int64 *)winrt::make_self<winrt::Udwm::Transitions::implementation::TransitionManager,>(&v39);
    if ( &winrt::Udwm::Transitions::implementation::TransitionManager::m_instance != v33 )
    {
      if ( winrt::Udwm::Transitions::implementation::TransitionManager::m_instance )
        winrt::com_ptr<winrt::Udwm::Transitions::implementation::TopLevelWindow3DWrapper>::unconditional_release_ref(&winrt::Udwm::Transitions::implementation::TransitionManager::m_instance);
      v34 = *v33;
      *v33 = 0LL;
      winrt::Udwm::Transitions::implementation::TransitionManager::m_instance = v34;
    }
    if ( v39 )
      winrt::com_ptr<winrt::Udwm::Transitions::implementation::TopLevelWindow3DWrapper>::unconditional_release_ref(&v39);
  }
  winrt::impl::as<winrt::Udwm::Transitions::TransitionManager,winrt::Udwm::Transitions::implementation::TransitionManager,0>(
    &v41,
    winrt::Udwm::Transitions::implementation::TransitionManager::m_instance);
  v19 = v41;
  winrt::impl::as<winrt::Udwm::Transitions::Private::IRotationTransitionManager,winrt::impl::abi<winrt::Windows::Foundation::IUnknown,void>::type,0>(
    &v40,
    v41);
  v20 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v40 + 64LL))(v40);
  if ( v20 < 0 )
    winrt::throw_hresult((unsigned int)v20);
  winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v40);
  if ( v19 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v41);
  v22 = (struct CVisual *)*((_QWORD *)this + 67);
  if ( v22 && *((_QWORD *)v22 + 3) )
    CDesktopManager::UpdateSceneImpl(v21, v22);
  v23 = *((_QWORD *)this + 71);
  if ( v23 )
  {
    v24 = *(struct CVisual **)(v23 + 48);
    if ( v24 )
      CDesktopManager::UpdateSceneImpl(v21, v24);
  }
  if ( v5 && *(_QWORD *)(v5 + 8) )
  {
    CWindowList::MoveTransitionAndTouchVisualToFront(this);
    CDesktopManager::UpdateSceneImpl(v35, *(struct CVisual **)(v5 + 8));
  }
  v25 = (struct CVisual *)*((_QWORD *)this + 73);
  if ( v25 && *((_QWORD *)v25 + 3) )
    CDesktopManager::UpdateSceneImpl(v21, v25);
  (*(void (__fastcall **)(_QWORD))(**((_QWORD **)CDesktopManager::s_pDesktopManagerInstance + 56) + 56LL))(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 56));
  if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
    McGenEventWrite_EtwEventWriteTransfer(
      Microsoft_Windows_Dwm_Udwm_Provider_Context,
      (__int64)&CommitChannel_UpdateScene,
      v26,
      1,
      (__int64)&v44);
  v27 = *((_QWORD *)this + 80);
  if ( (unsigned __int64)(v27 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
    v27 = *((_QWORD *)this + 78);
  v28 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance
                                                                   + 5)
                                                                 + 16LL)
                                                   + 32LL))(
          *(_QWORD *)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 5) + 16LL),
          v27);
  if ( v28 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x1A95,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\windowlist.cpp",
      (const char *)(unsigned int)v28,
      v37);
  *((_BYTE *)this + 658) = 0;
  v29 = *((_QWORD *)this + 78);
  if ( v29 )
  {
    NtDCompositionCommitSynchronizationObject(v29);
    ConfirmResizeCommit(*((_QWORD *)this + 79));
    *((_QWORD *)this + 79) = 0LL;
    CloseHandle(*((HANDLE *)this + 78));
    *((_QWORD *)this + 78) = 0LL;
  }
  v30 = (char *)*((_QWORD *)this + 80);
  if ( (unsigned __int64)(v30 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
  {
    LastError = GetLastError();
    CloseHandle(v30);
    SetLastError(LastError);
  }
  *((_QWORD *)this + 80) = 0LL;
  v31 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 5)
                                                        + 32LL)
                                          + 24LL))(*(_QWORD *)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 5)
                                                             + 32LL));
  if ( v31 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x1A9C,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\windowlist.cpp",
      (const char *)(unsigned int)v31,
      v37);
  LeaveCriticalSection(&CDesktopManager::s_csDwmInstance);
  return 0LL;
}
