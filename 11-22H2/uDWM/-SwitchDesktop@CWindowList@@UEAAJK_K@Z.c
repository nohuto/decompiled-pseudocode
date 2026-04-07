/*
 * XREFs of ?SwitchDesktop@CWindowList@@UEAAJK_K@Z @ 0x180040960
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x180025534 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x18002FA10 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ?GetRootVisualForDesktop@CWindowList@@QEAAPEAVCRenderDataVisual@@_K@Z @ 0x1800360BC (-GetRootVisualForDesktop@CWindowList@@QEAAPEAVCRenderDataVisual@@_K@Z.c)
 *     ?StopRotation@?$consume_Udwm_Transitions_Private_IRotationTransitionManager@UIRotationTransitionManager@Private@Transitions@Udwm@winrt@@@impl@winrt@@QEBA@XZ @ 0x180040BCC (-StopRotation@-$consume_Udwm_Transitions_Private_IRotationTransitionManager@UIRotationTransition.c)
 *     ??$as@UIRotationTransitionManager@Private@Transitions@Udwm@winrt@@Utype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@impl@5@$0A@@impl@winrt@@YA?AUIRotationTransitionManager@Private@Transitions@Udwm@1@PEAUtype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@01@@Z @ 0x180040C04 (--$as@UIRotationTransitionManager@Private@Transitions@Udwm@winrt@@Utype@-$abi@UIUnknown@Foundati.c)
 *     ?GetCurrent@TransitionManager@implementation@Transitions@Udwm@winrt@@SA?AU1345@XZ @ 0x180040DF0 (-GetCurrent@TransitionManager@implementation@Transitions@Udwm@winrt@@SA-AU1345@XZ.c)
 *     ?SendSwitchModeCommand@CDesktopManager@@SAJ_K@Z @ 0x180040F8C (-SendSwitchModeCommand@CDesktopManager@@SAJ_K@Z.c)
 *     ?DesktopSwitchImmediately@CWindowList@@AEAAJ_K@Z @ 0x180041174 (-DesktopSwitchImmediately@CWindowList@@AEAAJ_K@Z.c)
 *     ?GetRenderTargetRootVisualForDesktop@CWindowList@@QEAAPEAVCVisual@@_K@Z @ 0x1800412B8 (-GetRenderTargetRootVisualForDesktop@CWindowList@@QEAAPEAVCVisual@@_K@Z.c)
 *     ?BringDesktopToFront@CWindowList@@QEAAJPEAVCVisual@@@Z @ 0x1800413E0 (-BringDesktopToFront@CWindowList@@QEAAJPEAVCVisual@@@Z.c)
 *     ?AbortAllAnimations@CAnimationScheduler@@QEAAXXZ @ 0x18004159C (-AbortAllAnimations@CAnimationScheduler@@QEAAXXZ.c)
 *     ?StartAnimation@CLoginTransition@@QEAAJHPEAVCVisual@@0_K@Z @ 0x180042620 (-StartAnimation@CLoginTransition@@QEAAJHPEAVCVisual@@0_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18006610C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800663A0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Stop@CScreenRotation@@QEAAX_N0@Z @ 0x1800D80E4 (-Stop@CScreenRotation@@QEAAX_N0@Z.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CWindowList::SwitchDesktop(CWindowList *this, int a2, unsigned __int64 a3)
{
  int started; // eax
  CScreenRotation *v7; // rcx
  unsigned int v8; // edi
  struct CVisual *RenderTargetRootVisualForDesktop; // rax
  CLoginTransition *v11; // rdi
  __int64 v12; // rax
  struct CVisual *RootVisualForDesktop; // rax
  int v14; // r9d
  unsigned int v15; // [rsp+20h] [rbp-58h]
  __int64 v16; // [rsp+30h] [rbp-48h] BYREF
  __int64 v17; // [rsp+38h] [rbp-40h] BYREF
  struct _RTL_CRITICAL_SECTION *v18; // [rsp+40h] [rbp-38h] BYREF

  v18 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  started = CDesktopManager::SendSwitchModeCommand(a3);
  if ( started < 0 )
  {
    v15 = 7386;
    goto LABEL_22;
  }
  winrt::Udwm::Transitions::implementation::TransitionManager::GetCurrent(&v17);
  winrt::impl::as<winrt::Udwm::Transitions::Private::IRotationTransitionManager,winrt::impl::abi<winrt::Windows::Foundation::IUnknown,void>::type,0>(
    &v16,
    v17);
  winrt::impl::consume_Udwm_Transitions_Private_IRotationTransitionManager<winrt::Udwm::Transitions::Private::IRotationTransitionManager>::StopRotation(&v16);
  if ( v16 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v16);
  if ( v17 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v17);
  v7 = (CScreenRotation *)*((_QWORD *)this + 66);
  if ( v7 && *((_QWORD *)v7 + 3) )
    CScreenRotation::Stop(v7, 0, 0);
  if ( *((_QWORD *)this + 70) && (a2 == 55 || a2 == 65) && *((_BYTE *)CDesktopManager::s_pDesktopManagerInstance + 22) )
  {
    RenderTargetRootVisualForDesktop = CWindowList::GetRenderTargetRootVisualForDesktop(this, a3);
    started = CWindowList::BringDesktopToFront(this, RenderTargetRootVisualForDesktop);
    if ( started < 0 )
    {
      v15 = 7412;
      goto LABEL_22;
    }
    CAnimationScheduler::AbortAllAnimations(*((CAnimationScheduler **)CDesktopManager::s_pDesktopManagerInstance + 23));
    started = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance
                                                                + 6)
                                                              + 24LL)
                                                + 24LL))(*(_QWORD *)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance
                                                                     + 6)
                                                                   + 24LL));
    if ( started < 0 )
    {
      v15 = 7416;
      goto LABEL_22;
    }
    v11 = (CLoginTransition *)*((_QWORD *)this + 69);
    if ( !v11 )
    {
      v12 = (*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
              WPF::g_pProcessHeap,
              88LL);
      v11 = (CLoginTransition *)v12;
      if ( v12 )
      {
        *(_QWORD *)v12 = &CLoginTransition::`vftable';
        *(_QWORD *)(v12 + 8) = 0LL;
        *(_QWORD *)(v12 + 16) = 0LL;
        *(_QWORD *)(v12 + 24) = 0LL;
        *(_QWORD *)(v12 + 32) = 0LL;
        *(_QWORD *)(v12 + 40) = 0LL;
        *(_QWORD *)(v12 + 48) = 0LL;
        *(_BYTE *)(v12 + 68) = 0;
        *(_DWORD *)(v12 + 72) = -1;
        *(_QWORD *)(v12 + 80) = -1LL;
      }
      else
      {
        v11 = 0LL;
      }
      *((_QWORD *)this + 69) = v11;
      if ( !v11 )
      {
        v15 = 7421;
        v14 = -2147024882;
        goto LABEL_29;
      }
    }
    RootVisualForDesktop = CWindowList::GetRootVisualForDesktop(this, a3);
    started = CLoginTransition::StartAnimation(v11, a2, *((struct CVisual **)this + 70), RootVisualForDesktop, a3);
    v8 = started;
    if ( started < 0 )
    {
      v15 = 7425;
LABEL_22:
      v14 = started;
LABEL_29:
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v14, v15, 0LL);
      JUMPOUT(0x180082C17LL);
    }
  }
  else
  {
    v8 = CWindowList::DesktopSwitchImmediately(this, a3);
  }
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v18);
  return v8;
}
