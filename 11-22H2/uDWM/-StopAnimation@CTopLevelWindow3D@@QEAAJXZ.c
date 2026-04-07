/*
 * XREFs of ?StopAnimation@CTopLevelWindow3D@@QEAAJXZ @ 0x180034730
 * Callers:
 *     ?_StopAnimations@CTransitionVisualController@@IEAAXPEAVCWindowData@@@Z @ 0x1800162D4 (-_StopAnimations@CTransitionVisualController@@IEAAXPEAVCWindowData@@@Z.c)
 *     ?UpdateWindowScale@CWindowList@@QEAAJPEAVCWindowData@@H@Z @ 0x1800278D0 (-UpdateWindowScale@CWindowList@@QEAAJPEAVCWindowData@@H@Z.c)
 *     ?ValidateVisual@CTopLevelWindow3D@@UEAAJXZ @ 0x18002B800 (-ValidateVisual@CTopLevelWindow3D@@UEAAJXZ.c)
 *     ?ImmediateDestroyWindow@CWindowList@@AEAAXPEAVCWindowData@@@Z @ 0x180031A20 (-ImmediateDestroyWindow@CWindowList@@AEAAXPEAVCWindowData@@@Z.c)
 *     ?ShowWindow@CTopLevelWindow3D@@QEAAJ_N0@Z @ 0x1800343B4 (-ShowWindow@CTopLevelWindow3D@@QEAAJ_N0@Z.c)
 *     ??1CTopLevelWindow3D@@MEAA@XZ @ 0x180038120 (--1CTopLevelWindow3D@@MEAA@XZ.c)
 *     ?OnWindowStyleUpdated@CTopLevelWindow3D@@QEAAJXZ @ 0x180048970 (-OnWindowStyleUpdated@CTopLevelWindow3D@@QEAAJXZ.c)
 *     ?SetParent@CTopLevelWindow3D@@UEAAJPEAVCVisual@@@Z @ 0x180050640 (-SetParent@CTopLevelWindow3D@@UEAAJPEAVCVisual@@@Z.c)
 *     ?OnSizeChanged@CTopLevelWindow3D@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x180054720 (-OnSizeChanged@CTopLevelWindow3D@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 *     ?SetWindowData@CTopLevelWindow3D@@QEAAXPEAVCWindowData@@@Z @ 0x1800E76DC (-SetWindowData@CTopLevelWindow3D@@QEAAXPEAVCWindowData@@@Z.c)
 *     ?StartDelayHideAnimation@CTopLevelWindow3D@@QEAAJXZ @ 0x1800E77D4 (-StartDelayHideAnimation@CTopLevelWindow3D@@QEAAJXZ.c)
 *     _lambda_95d8fb2efa1b08d320c8654ffeeb34da_::operator() @ 0x1800EA504 (_lambda_95d8fb2efa1b08d320c8654ffeeb34da_--operator().c)
 *     ?StopAnimation@?$produce@UTopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@UITopLevelWindow3DWrapper@345@@impl@winrt@@UEAAHXZ @ 0x1800FB510 (-StopAnimation@-$produce@UTopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@UITopLe.c)
 *     ?Unload@UserResizeVisual@implementation@Transitions@Udwm@winrt@@AEAAXXZ @ 0x180104C18 (-Unload@UserResizeVisual@implementation@Transitions@Udwm@winrt@@AEAAXXZ.c)
 * Callees:
 *     ?QueueDestroySprite@CWindowList@@QEAAJPEAVCWindowData@@@Z @ 0x180014AA8 (-QueueDestroySprite@CWindowList@@QEAAJPEAVCWindowData@@@Z.c)
 *     McGenEventWrite_EtwEventWriteTransfer @ 0x180025580 (McGenEventWrite_EtwEventWriteTransfer.c)
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x18002FA10 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ?ShowWindow@CTopLevelWindow@@QEAAJ_N@Z @ 0x180034E90 (-ShowWindow@CTopLevelWindow@@QEAAJ_N@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180035400 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?UnregisterForGlobalTimeChangeNotification@CDesktopManager@@SA_NPEAVCVisual@@@Z @ 0x18003865C (-UnregisterForGlobalTimeChangeNotification@CDesktopManager@@SA_NPEAVCVisual@@@Z.c)
 *     ?GetCurrent@TransitionManager@implementation@Transitions@Udwm@winrt@@SA?AU1345@XZ @ 0x180040DF0 (-GetCurrent@TransitionManager@implementation@Transitions@Udwm@winrt@@SA-AU1345@XZ.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x18004F6E0 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ?GetScenarioGuid@CTopLevelWindow3D@@AEAAXW4WindowAnimationType@1@PEAU_GUID@@@Z @ 0x1800564FC (-GetScenarioGuid@CTopLevelWindow3D@@AEAAXW4WindowAnimationType@1@PEAU_GUID@@@Z.c)
 *     ?reset@?$com_ptr_t@VIDCompositionAnimationStats@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x18005671C (-reset@-$com_ptr_t@VIDCompositionAnimationStats@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x18005C460 (__security_check_cookie.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18006610C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800663A0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_IsInLivePreview@CLivePreview@@AEAA_NPEBVCWindowData@@@Z @ 0x1800C8BCC (-_IsInLivePreview@CLivePreview@@AEAA_NPEBVCWindowData@@@Z.c)
 *     ??$as@UIAnimationsTransitionManager@Private@Transitions@Udwm@winrt@@Utype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@impl@5@$0A@@impl@winrt@@YA?AUIAnimationsTransitionManager@Private@Transitions@Udwm@1@PEAUtype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@01@@Z @ 0x1800E7340 (--$as@UIAnimationsTransitionManager@Private@Transitions@Udwm@winrt@@Utype@-$abi@UIUnknown@Founda.c)
 *     ?EnsureWorkAreaChangeTransitionRemoved@?$consume_Udwm_Transitions_Private_IAnimationsTransitionManager@UIAnimationsTransitionManager@Private@Transitions@Udwm@winrt@@@impl@winrt@@QEBA@_K@Z @ 0x1800E7594 (-EnsureWorkAreaChangeTransitionRemoved@-$consume_Udwm_Transitions_Private_IAnimationsTransitionM.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CTopLevelWindow3D::StopAnimation(CTopLevelWindow3D *this, __int64 a2, __int64 a3)
{
  __int64 v5; // rcx
  int v6; // ebx
  CBaseObject *v7; // rcx
  CBaseObject *v8; // rcx
  CBaseObject *v9; // rcx
  CBaseObject *v10; // rcx
  __int64 v11; // rdx
  char v12; // r11
  bool v13; // r11
  CTopLevelWindow *v14; // rcx
  CLivePreview *v16; // rcx
  __int64 v17; // r15
  __int64 v18; // rbx
  _QWORD *v19; // r14
  __int64 v20; // rcx
  unsigned int *v21; // r15
  __int64 v22; // rcx
  __int64 v23; // rcx
  __int64 v24; // rcx
  __int64 v25; // rcx
  __int64 v26; // rcx
  __int64 v27; // rcx
  __int64 v28; // rcx
  __int64 v29; // rcx
  __int64 v30; // rcx
  __int64 v31; // rcx
  __int64 v32; // rcx
  __int64 v33; // rcx
  __int64 v34; // rcx
  __int64 v35; // rcx
  __int64 v36; // rcx
  __int64 v37; // rcx
  __int64 v38; // rax
  bool v39; // zf
  int v40; // ecx
  _DWORD *v41; // rdx
  int v42; // eax
  int v43; // eax
  __int64 v44; // rbx
  int v45; // [rsp+40h] [rbp-158h] BYREF
  __int64 v46; // [rsp+48h] [rbp-150h] BYREF
  _QWORD v47[2]; // [rsp+50h] [rbp-148h] BYREF
  _QWORD v48[2]; // [rsp+60h] [rbp-138h] BYREF
  __int128 v49; // [rsp+70h] [rbp-128h] BYREF
  __int64 v50; // [rsp+80h] [rbp-118h]
  int v51; // [rsp+88h] [rbp-110h]
  __int128 v52; // [rsp+90h] [rbp-108h] BYREF
  __int64 v53; // [rsp+A0h] [rbp-F8h]
  int v54; // [rsp+A8h] [rbp-F0h]
  _BYTE v55[16]; // [rsp+B0h] [rbp-E8h] BYREF
  _BYTE v56[16]; // [rsp+C0h] [rbp-D8h] BYREF
  int *v57; // [rsp+D0h] [rbp-C8h]
  __int64 v58; // [rsp+D8h] [rbp-C0h]
  _QWORD *v59; // [rsp+E0h] [rbp-B8h]
  __int64 v60; // [rsp+E8h] [rbp-B0h]
  _BYTE v61[128]; // [rsp+F0h] [rbp-A8h] BYREF

  v47[1] = this;
  v5 = *((_QWORD *)this + 76);
  if ( v5 )
  {
    v43 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
    v6 = v43;
    if ( v43 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v43, 0x83Fu, 0LL);
      return (unsigned int)v6;
    }
  }
  if ( *((_BYTE *)this + 299) )
  {
    *((_BYTE *)this + 299) = 0;
    winrt::Udwm::Transitions::implementation::TransitionManager::GetCurrent(v48);
    v44 = v48[0];
    winrt::impl::as<winrt::Udwm::Transitions::Private::IAnimationsTransitionManager,winrt::impl::abi<winrt::Windows::Foundation::IUnknown,void>::type,0>(
      &v46,
      v48[0]);
    winrt::impl::consume_Udwm_Transitions_Private_IAnimationsTransitionManager<winrt::Udwm::Transitions::Private::IAnimationsTransitionManager>::EnsureWorkAreaChangeTransitionRemoved(
      &v46,
      *(_QWORD *)(*((_QWORD *)this + 42) + 40LL));
    if ( v46 )
      winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v46);
    if ( v44 )
      winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)v48);
  }
  if ( !*((_QWORD *)this + 46) )
  {
    if ( *((_BYTE *)this + 536) && CDesktopManager::UnregisterForGlobalTimeChangeNotification(this) )
      *((_BYTE *)this + 536) = 0;
    goto LABEL_5;
  }
  if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
  {
    v47[0] = *(_QWORD *)(*((_QWORD *)this + 42) + 40LL);
    v21 = (unsigned int *)((char *)this + 384);
    v45 = *((_DWORD *)this + 96);
    v57 = &v45;
    v58 = 4LL;
    v59 = v47;
    v60 = 8LL;
    McGenEventWrite_EtwEventWriteTransfer(
      Microsoft_Windows_Dwm_Udwm_Provider_Context,
      (__int64)&UdwmAnimation_Stop,
      a3,
      3LL,
      (__int64)v56);
  }
  else
  {
    v21 = (unsigned int *)((char *)this + 384);
  }
  if ( *((_QWORD *)this + 47) )
  {
    CTopLevelWindow3D::GetScenarioGuid(v5, *v21, v55);
    GetAnimationScenarioNameFromGUID(v55, v61, 64LL);
    if ( (*(int (__fastcall **)(_QWORD, __int128 *))(**((_QWORD **)this + 47) + 88LL))(*((_QWORD *)this + 47), &v52) >= 0 )
    {
      v22 = *((_QWORD *)this + 47);
      v49 = v52;
      v50 = v53;
      v51 = v54;
      (*(void (__fastcall **)(__int64, __int128 *, _QWORD, _QWORD, _BYTE *, _QWORD, int))(*(_QWORD *)v22 + 216LL))(
        v22,
        &v49,
        0LL,
        0LL,
        v61,
        0LL,
        (int)*(double *)(*((_QWORD *)this + 46) + 24LL));
    }
    (*(void (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 47) + 40LL))(*((_QWORD *)this + 47), 0LL);
    wil::com_ptr_t<IDCompositionAnimationStats,wil::err_returncode_policy>::reset((char *)this + 376);
  }
  v23 = *((_QWORD *)this + 49);
  if ( v23 )
  {
    v39 = (*(_DWORD *)(v23 + 8))-- == 1;
    if ( v39 )
      CDesktopManager::s_fTimelineDirty = 1;
    *((_QWORD *)this + 49) = 0LL;
  }
  v24 = *((_QWORD *)this + 50);
  if ( v24 )
  {
    v39 = (*(_DWORD *)(v24 + 8))-- == 1;
    if ( v39 )
      CDesktopManager::s_fTimelineDirty = 1;
    *((_QWORD *)this + 50) = 0LL;
  }
  v25 = *((_QWORD *)this + 51);
  if ( v25 )
  {
    v39 = (*(_DWORD *)(v25 + 8))-- == 1;
    if ( v39 )
      CDesktopManager::s_fTimelineDirty = 1;
    *((_QWORD *)this + 51) = 0LL;
  }
  v26 = *((_QWORD *)this + 52);
  if ( v26 )
  {
    v39 = (*(_DWORD *)(v26 + 8))-- == 1;
    if ( v39 )
      CDesktopManager::s_fTimelineDirty = 1;
    *((_QWORD *)this + 52) = 0LL;
  }
  v27 = *((_QWORD *)this + 53);
  if ( v27 )
  {
    v39 = (*(_DWORD *)(v27 + 8))-- == 1;
    if ( v39 )
      CDesktopManager::s_fTimelineDirty = 1;
    *((_QWORD *)this + 53) = 0LL;
  }
  v28 = *((_QWORD *)this + 54);
  if ( v28 )
  {
    v39 = (*(_DWORD *)(v28 + 8))-- == 1;
    if ( v39 )
      CDesktopManager::s_fTimelineDirty = 1;
    *((_QWORD *)this + 54) = 0LL;
  }
  v29 = *((_QWORD *)this + 55);
  if ( v29 )
  {
    v39 = (*(_DWORD *)(v29 + 8))-- == 1;
    if ( v39 )
      CDesktopManager::s_fTimelineDirty = 1;
    *((_QWORD *)this + 55) = 0LL;
  }
  v30 = *((_QWORD *)this + 56);
  if ( v30 )
  {
    v39 = (*(_DWORD *)(v30 + 8))-- == 1;
    if ( v39 )
      CDesktopManager::s_fTimelineDirty = 1;
    *((_QWORD *)this + 56) = 0LL;
  }
  v31 = *((_QWORD *)this + 57);
  if ( v31 )
  {
    v39 = (*(_DWORD *)(v31 + 8))-- == 1;
    if ( v39 )
      CDesktopManager::s_fTimelineDirty = 1;
    *((_QWORD *)this + 57) = 0LL;
  }
  v32 = *((_QWORD *)this + 58);
  if ( v32 )
  {
    v39 = (*(_DWORD *)(v32 + 8))-- == 1;
    if ( v39 )
      CDesktopManager::s_fTimelineDirty = 1;
    *((_QWORD *)this + 58) = 0LL;
  }
  v33 = *((_QWORD *)this + 59);
  if ( v33 )
  {
    v39 = (*(_DWORD *)(v33 + 8))-- == 1;
    if ( v39 )
      CDesktopManager::s_fTimelineDirty = 1;
    *((_QWORD *)this + 59) = 0LL;
  }
  v34 = *((_QWORD *)this + 60);
  if ( v34 )
  {
    v39 = (*(_DWORD *)(v34 + 8))-- == 1;
    if ( v39 )
      CDesktopManager::s_fTimelineDirty = 1;
    *((_QWORD *)this + 60) = 0LL;
  }
  v35 = *((_QWORD *)this + 61);
  if ( v35 )
  {
    v39 = (*(_DWORD *)(v35 + 8))-- == 1;
    if ( v39 )
      CDesktopManager::s_fTimelineDirty = 1;
    *((_QWORD *)this + 61) = 0LL;
  }
  v36 = *((_QWORD *)this + 62);
  if ( v36 )
  {
    v39 = (*(_DWORD *)(v36 + 8))-- == 1;
    if ( v39 )
      CDesktopManager::s_fTimelineDirty = 1;
    *((_QWORD *)this + 62) = 0LL;
  }
  v37 = *((_QWORD *)this + 63);
  if ( v37 )
  {
    v39 = (*(_DWORD *)(v37 + 8))-- == 1;
    if ( v39 )
      CDesktopManager::s_fTimelineDirty = 1;
    *((_QWORD *)this + 63) = 0LL;
  }
  v38 = *((_QWORD *)this + 46);
  if ( v38 )
  {
    v39 = (*(_DWORD *)(v38 + 8))-- == 1;
    if ( v39 )
      CDesktopManager::s_fTimelineDirty = 1;
    *((_QWORD *)this + 46) = 0LL;
  }
  if ( CDesktopManager::UnregisterForGlobalTimeChangeNotification(this) )
    --*((_DWORD *)CDesktopManager::s_pDesktopManagerInstance + 10);
  v40 = *v21;
  if ( *v21 == 9 && !*((_BYTE *)this + 296) )
    goto LABEL_111;
  v41 = (_DWORD *)((char *)this + 388);
  if ( !*((_DWORD *)this + 97) )
    goto LABEL_60;
  if ( (unsigned int)(v40 - 7) > 2 )
  {
LABEL_111:
    *((_OWORD *)this + 20) = *(_OWORD *)(*((_QWORD *)this + 42) + 48LL);
    v41 = (_DWORD *)((char *)this + 388);
LABEL_60:
    if ( (unsigned int)(v40 - 7) > 2 )
      *v41 = 0;
  }
  *v21 = 0;
LABEL_5:
  if ( *((int *)this + 70) > 0 )
  {
    v17 = *((int *)this + 70);
    v18 = 0LL;
    v19 = (_QWORD *)((char *)this + 256);
    do
    {
      v20 = *(_QWORD *)(*v19 + 8 * v18);
      if ( v20 )
      {
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v20 + 8), 0xFFFFFFFF) == 1 )
          (**(void (__fastcall ***)(__int64, __int64))v20)(v20, 1LL);
        *(_QWORD *)(*v19 + 8 * v18) = 0LL;
      }
      ++v18;
    }
    while ( v18 < v17 );
    *((_DWORD *)this + 70) = 0;
    DynArrayImpl<0>::ShrinkToSize((char *)this + 256, 8LL);
    (*(void (__fastcall **)(CTopLevelWindow3D *, __int64))(*(_QWORD *)this + 24LL))(this, 4LL);
  }
  v6 = 0;
  v7 = (CBaseObject *)*((_QWORD *)this + 43);
  if ( v7 )
  {
    CBaseObject::Release(v7);
    *((_QWORD *)this + 43) = 0LL;
  }
  v8 = (CBaseObject *)*((_QWORD *)this + 44);
  if ( v8 )
  {
    CBaseObject::Release(v8);
    *((_QWORD *)this + 44) = 0LL;
  }
  v9 = (CBaseObject *)*((_QWORD *)this + 45);
  if ( v9 )
  {
    CBaseObject::Release(v9);
    *((_QWORD *)this + 45) = 0LL;
  }
  *((_BYTE *)this + 300) = 0;
  v10 = (CBaseObject *)*((_QWORD *)this + 68);
  *((_QWORD *)this + 68) = 0LL;
  if ( v10 )
    CBaseObject::Release(v10);
  *((_BYTE *)this + 616) = 0;
  (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD))(**(_QWORD **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL)
                                                 + 344LL))(
    *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL),
    *(unsigned int *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 24LL),
    0LL);
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT((float)*((double *)this + 24) - 1.0) & _xmm) > 0.0000011920929 )
  {
    *((_QWORD *)this + 24) = 0x3FF0000000000000LL;
    (*(void (__fastcall **)(CTopLevelWindow3D *, __int64))(*(_QWORD *)this + 24LL))(this, 32LL);
  }
  v11 = *((_QWORD *)this + 42);
  v12 = *(_BYTE *)(v11 + 672);
  if ( (v12 & 4) != 0 )
  {
    v42 = CWindowList::QueueDestroySprite(
            *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 54),
            (struct CWindowData *)v11);
    v6 = v42;
    if ( v42 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v42, 0x8ABu, 0LL);
  }
  else
  {
    v13 = v12 & 1;
    if ( !v13
      || (v16 = (CLivePreview *)*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 57), !*((_BYTE *)v16 + 288))
      || !v11
      || !CLivePreview::_IsInLivePreview(v16, (const struct CWindowData *)v11) )
    {
      v14 = *(CTopLevelWindow **)(v11 + 440);
      if ( v14 )
      {
        v6 = CTopLevelWindow::ShowWindow(v14, v13);
        if ( v6 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v6, 0x8A6u, 0LL);
      }
    }
  }
  return (unsigned int)v6;
}
