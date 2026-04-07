/*
 * XREFs of ?SwitchDesktop@CWindowList@@UEAAJK_K@Z @ 0x180040370
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800045F8 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?SendSwitchModeCommand@CDesktopManager@@SAJ_K@Z @ 0x180016BA0 (-SendSwitchModeCommand@CDesktopManager@@SAJ_K@Z.c)
 *     ?BringDesktopToFront@CWindowList@@QEAAJPEAVCVisual@@@Z @ 0x1800177C4 (-BringDesktopToFront@CWindowList@@QEAAJPEAVCVisual@@@Z.c)
 *     ?GetRootVisualForDesktop@CWindowList@@QEAAPEAVCRenderDataVisual@@_K@Z @ 0x18001E184 (-GetRootVisualForDesktop@CWindowList@@QEAAPEAVCRenderDataVisual@@_K@Z.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x18001EAE0 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?DesktopSwitchImmediately@CWindowList@@AEAAJ_K@Z @ 0x18003F928 (-DesktopSwitchImmediately@CWindowList@@AEAAJ_K@Z.c)
 *     ?AbortAllAnimations@CAnimationScheduler@@QEAAXXZ @ 0x18003FA6C (-AbortAllAnimations@CAnimationScheduler@@QEAAXXZ.c)
 *     ?GetRenderTargetRootVisualForDesktop@CWindowList@@QEAAPEAVCVisual@@_K@Z @ 0x18003FD6C (-GetRenderTargetRootVisualForDesktop@CWindowList@@QEAAPEAVCVisual@@_K@Z.c)
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x180040BB0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ??$as@UIRotationTransitionManager@Private@Transitions@Udwm@winrt@@Utype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@impl@5@$0A@@impl@winrt@@YA?AUIRotationTransitionManager@Private@Transitions@Udwm@1@PEAUtype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@01@@Z @ 0x18004207C (--$as@UIRotationTransitionManager@Private@Transitions@Udwm@winrt@@Utype@-$abi@UIUnknown@Foundati.c)
 *     ?GetCurrent@TransitionManager@implementation@Transitions@Udwm@winrt@@SA?AU1345@XZ @ 0x1800420E4 (-GetCurrent@TransitionManager@implementation@Transitions@Udwm@winrt@@SA-AU1345@XZ.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_TATest@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18004225C (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_TATest@@@details@wil@@QEAAX_NW4ReportingK.c)
 *     ?StopRotation@?$consume_Udwm_Transitions_Private_IRotationTransitionManager@UIRotationTransitionManager@Private@Transitions@Udwm@winrt@@@impl@winrt@@QEBAXXZ @ 0x1800422F0 (-StopRotation@-$consume_Udwm_Transitions_Private_IRotationTransitionManager@UIRotationTransition.c)
 *     ?StartAnimation@CLoginTransition@@QEAAJHPEAVCVisual@@0_K@Z @ 0x180045A10 (-StartAnimation@CLoginTransition@@QEAAJHPEAVCVisual@@0_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180063740 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Stop@CScreenRotation@@QEAAX_N0@Z @ 0x1800D3484 (-Stop@CScreenRotation@@QEAAX_N0@Z.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CWindowList::SwitchDesktop(CWindowList *this, int a2, unsigned __int64 a3)
{
  int started; // eax
  __int64 v7; // rdx
  __int64 v8; // r8
  CScreenRotation *v9; // rcx
  unsigned int v10; // edi
  struct CVisual *RenderTargetRootVisualForDesktop; // rax
  CLoginTransition *v13; // rdi
  __int64 v14; // rax
  struct CVisual *RootVisualForDesktop; // rax
  int v16; // r9d
  unsigned int v17; // [rsp+20h] [rbp-58h]
  __int64 v18; // [rsp+30h] [rbp-48h] BYREF
  __int64 v19; // [rsp+38h] [rbp-40h] BYREF
  struct _RTL_CRITICAL_SECTION *v20; // [rsp+40h] [rbp-38h] BYREF

  v20 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  started = CDesktopManager::SendSwitchModeCommand(a3);
  if ( started < 0 )
  {
    v17 = 7278;
    goto LABEL_21;
  }
  LOBYTE(v8) = 3;
  LOBYTE(v7) = 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_TATest>::ReportUsage(
    &`wil::Feature<__WilFeatureTraits_Feature_TATest>::GetImpl'::`2'::impl,
    v7,
    v8);
  winrt::Udwm::Transitions::implementation::TransitionManager::GetCurrent(&v19);
  winrt::impl::as<winrt::Udwm::Transitions::Private::IRotationTransitionManager,winrt::impl::abi<winrt::Windows::Foundation::IUnknown,void>::type,0>(
    &v18,
    v19);
  winrt::impl::consume_Udwm_Transitions_Private_IRotationTransitionManager<winrt::Udwm::Transitions::Private::IRotationTransitionManager>::StopRotation(&v18);
  if ( v18 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v18);
  if ( v19 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v19);
  v9 = (CScreenRotation *)*((_QWORD *)this + 67);
  if ( v9 && *((_QWORD *)v9 + 3) )
    CScreenRotation::Stop(v9, 0, 0);
  if ( *((_QWORD *)this + 72) && (a2 == 55 || a2 == 65) && *((_BYTE *)CDesktopManager::s_pDesktopManagerInstance + 22) )
  {
    RenderTargetRootVisualForDesktop = CWindowList::GetRenderTargetRootVisualForDesktop(this, a3);
    started = CWindowList::BringDesktopToFront(this, RenderTargetRootVisualForDesktop);
    if ( started < 0 )
    {
      v17 = 7316;
      goto LABEL_21;
    }
    CAnimationScheduler::AbortAllAnimations(*((CAnimationScheduler **)CDesktopManager::s_pDesktopManagerInstance + 22));
    started = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance
                                                                + 5)
                                                              + 16LL)
                                                + 24LL))(*(_QWORD *)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance
                                                                     + 5)
                                                                   + 16LL));
    if ( started < 0 )
    {
      v17 = 7320;
      goto LABEL_21;
    }
    v13 = (CLoginTransition *)*((_QWORD *)this + 71);
    if ( !v13 )
    {
      v14 = (*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
              WPF::g_pProcessHeap,
              88LL);
      v13 = (CLoginTransition *)v14;
      if ( !v14 )
      {
        *((_QWORD *)this + 71) = 0LL;
        v17 = 7325;
        v16 = -2147024882;
        goto LABEL_27;
      }
      *(_QWORD *)v14 = &CLoginTransition::`vftable';
      *(_QWORD *)(v14 + 8) = 0LL;
      *(_QWORD *)(v14 + 16) = 0LL;
      *(_QWORD *)(v14 + 24) = 0LL;
      *(_QWORD *)(v14 + 32) = 0LL;
      *(_QWORD *)(v14 + 40) = 0LL;
      *(_QWORD *)(v14 + 48) = 0LL;
      *(_BYTE *)(v14 + 68) = 0;
      *(_DWORD *)(v14 + 72) = -1;
      *(_QWORD *)(v14 + 80) = -1LL;
      *((_QWORD *)this + 71) = v14;
    }
    RootVisualForDesktop = CWindowList::GetRootVisualForDesktop(this, a3);
    started = CLoginTransition::StartAnimation(v13, a2, *((struct CVisual **)this + 72), RootVisualForDesktop, a3);
    v10 = started;
    if ( started < 0 )
    {
      v17 = 7329;
LABEL_21:
      v16 = started;
LABEL_27:
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v16, v17);
      JUMPOUT(0x18008ADE4LL);
    }
  }
  else
  {
    v10 = CWindowList::DesktopSwitchImmediately((CLoginTransition **)this, a3);
  }
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v20);
  return v10;
}
