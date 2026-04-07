/*
 * XREFs of ?StopAnimation@CTopLevelWindow3D@@QEAAJXZ @ 0x180027828
 * Callers:
 *     ?SetParent@CTopLevelWindow3D@@UEAAJPEAVCVisual@@@Z @ 0x18000CBA0 (-SetParent@CTopLevelWindow3D@@UEAAJPEAVCVisual@@@Z.c)
 *     ??1CTopLevelWindow3D@@MEAA@XZ @ 0x18000FD6C (--1CTopLevelWindow3D@@MEAA@XZ.c)
 *     ?OnSizeChanged@CTopLevelWindow3D@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x18000FE80 (-OnSizeChanged@CTopLevelWindow3D@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 *     ?OnWindowDataDestroyed@CWindowList@@QEAAXPEAVCWindowData@@@Z @ 0x18001C528 (-OnWindowDataDestroyed@CWindowList@@QEAAXPEAVCWindowData@@@Z.c)
 *     ?ImmediateDestroyWindow@CWindowList@@AEAAXPEAVCWindowData@@@Z @ 0x180022660 (-ImmediateDestroyWindow@CWindowList@@AEAAXPEAVCWindowData@@@Z.c)
 *     ?ValidateVisual@CTopLevelWindow3D@@UEAAJXZ @ 0x180029A50 (-ValidateVisual@CTopLevelWindow3D@@UEAAJXZ.c)
 *     ?OnWindowStyleUpdated@CTopLevelWindow3D@@QEAAJXZ @ 0x18002E740 (-OnWindowStyleUpdated@CTopLevelWindow3D@@QEAAJXZ.c)
 *     ?UpdateWindowScale@CWindowList@@QEAAJPEAVCWindowData@@H@Z @ 0x180030C00 (-UpdateWindowScale@CWindowList@@QEAAJPEAVCWindowData@@H@Z.c)
 *     ?ShowWindow@CTopLevelWindow3D@@QEAAJ_N0@Z @ 0x180035B2C (-ShowWindow@CTopLevelWindow3D@@QEAAJ_N0@Z.c)
 *     ?EnsureTopLevelWindow@CWindowList@@AEAAJPEAVCWindowData@@@Z @ 0x180038808 (-EnsureTopLevelWindow@CWindowList@@AEAAJPEAVCWindowData@@@Z.c)
 *     ?SetWindowData@CTopLevelWindow3D@@QEAAXPEAVCWindowData@@@Z @ 0x180049ED4 (-SetWindowData@CTopLevelWindow3D@@QEAAXPEAVCWindowData@@@Z.c)
 *     ?StartDelayHideAnimation@CTopLevelWindow3D@@QEAAJXZ @ 0x1800E6BC8 (-StartDelayHideAnimation@CTopLevelWindow3D@@QEAAJXZ.c)
 *     _lambda_95d8fb2efa1b08d320c8654ffeeb34da_::operator() @ 0x1800E9D38 (_lambda_95d8fb2efa1b08d320c8654ffeeb34da_--operator().c)
 *     ?_StopAnimations@CTransitionVisualController@@IEAAXPEAVCWindowData@@@Z @ 0x1800EFD98 (-_StopAnimations@CTransitionVisualController@@IEAAXPEAVCWindowData@@@Z.c)
 *     ?StopAnimation@?$produce@UTopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@UITopLevelWindow3DWrapper@345@@impl@winrt@@UEAAHXZ @ 0x1800F8780 (-StopAnimation@-$produce@UTopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@UITopLe.c)
 *     ?Unload@UserResizeVisual@implementation@Transitions@Udwm@winrt@@AEAAXXZ @ 0x1800FFAC8 (-Unload@UserResizeVisual@implementation@Transitions@Udwm@winrt@@AEAAXXZ.c)
 * Callees:
 *     GetAnimationScenarioNameFromGUID @ 0x1800039A4 (GetAnimationScenarioNameFromGUID.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800045F8 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x18000A060 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ?UnregisterForGlobalTimeChangeNotification@CDesktopManager@@SA_NPEAVCVisual@@@Z @ 0x18000ED0C (-UnregisterForGlobalTimeChangeNotification@CDesktopManager@@SA_NPEAVCVisual@@@Z.c)
 *     ?GetScenarioGuid@CTopLevelWindow3D@@AEAAXW4WindowAnimationType@1@PEAU_GUID@@@Z @ 0x180010EF0 (-GetScenarioGuid@CTopLevelWindow3D@@AEAAXW4WindowAnimationType@1@PEAU_GUID@@@Z.c)
 *     McTemplateU0qp_EtwEventWriteTransfer @ 0x180010FC0 (McTemplateU0qp_EtwEventWriteTransfer.c)
 *     ?QueueDestroySprite@CWindowList@@QEAAJPEAVCWindowData@@@Z @ 0x180011DA8 (-QueueDestroySprite@CWindowList@@QEAAJPEAVCWindowData@@@Z.c)
 *     ?reset@?$com_ptr_t@VIAnimationFrameStats@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800134C8 (-reset@-$com_ptr_t@VIAnimationFrameStats@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?ShowWindow@CTopLevelWindow@@QEAAJ_N@Z @ 0x180027570 (-ShowWindow@CTopLevelWindow@@QEAAJ_N@Z.c)
 *     ?ReleaseSceneObjects@CTopLevelWindow3D@@AEAAXXZ @ 0x180027768 (-ReleaseSceneObjects@CTopLevelWindow3D@@AEAAXXZ.c)
 *     __security_check_cookie @ 0x180060050 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180063740 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_IsInLivePreview@CLivePreview@@AEAA_NPEBVCWindowData@@@Z @ 0x1800C42AC (-_IsInLivePreview@CLivePreview@@AEAA_NPEBVCWindowData@@@Z.c)
 */

__int64 __fastcall CTopLevelWindow3D::StopAnimation(CTopLevelWindow3D *this)
{
  __int64 v2; // rcx
  unsigned int v3; // edi
  __int64 v4; // rdx
  char v5; // r11
  char v6; // r11
  CTopLevelWindow *v7; // rcx
  int v8; // eax
  CLivePreview *v10; // rcx
  __int64 **v11; // rdi
  bool v12; // al
  __int64 *v13; // rcx
  __int64 v14; // r8
  __int64 v15; // rdx
  __int64 v16; // rcx
  bool v17; // zf
  int v18; // ecx
  __int64 v19; // rsi
  __int64 v20; // rdi
  __int64 v21; // rcx
  int v22; // eax
  __int64 *v23; // rcx
  __int64 v24; // rax
  __int64 v25; // rdx
  int v26; // r8d
  void (__fastcall *v27)(__int64 *, int *, _QWORD *, _QWORD, _QWORD, unsigned __int16 *, _QWORD, int); // rax
  int v28; // eax
  _QWORD v29[4]; // [rsp+60h] [rbp-A8h] BYREF
  int v30; // [rsp+80h] [rbp-88h]
  __int128 v31; // [rsp+88h] [rbp-80h] BYREF
  __int64 v32; // [rsp+98h] [rbp-70h]
  int v33; // [rsp+A0h] [rbp-68h]
  GUID v34; // [rsp+A8h] [rbp-60h] BYREF
  unsigned __int16 v35[64]; // [rsp+B8h] [rbp-50h] BYREF

  v2 = *((_QWORD *)this + 76);
  if ( v2 )
  {
    v28 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
    v3 = v28;
    if ( v28 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v28, 0x829u);
      return v3;
    }
  }
  if ( !*((_QWORD *)this + 46) )
  {
    if ( *((_BYTE *)this + 536) && CDesktopManager::UnregisterForGlobalTimeChangeNotification(this) )
      *((_BYTE *)this + 536) = 0;
    goto LABEL_4;
  }
  if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
    McTemplateU0qp_EtwEventWriteTransfer(
      v2,
      (int)&UdwmAnimation_Stop,
      *((_DWORD *)this + 96),
      *(_QWORD *)(*((_QWORD *)this + 42) + 40LL));
  v11 = (__int64 **)((char *)this + 376);
  if ( *((_QWORD *)this + 47) )
  {
    CTopLevelWindow3D::GetScenarioGuid(v2, *((_DWORD *)this + 96), &v34);
    GetAnimationScenarioNameFromGUID(&v34.Data1, v35);
    if ( (*(int (__fastcall **)(__int64 *, __int128 *))(**v11 + 88))(*v11, &v31) >= 0 )
    {
      v23 = *v11;
      v30 = v33;
      v24 = *((_QWORD *)this + 46);
      v25 = *v23;
      *(_OWORD *)&v29[1] = v31;
      v26 = (int)*(double *)(v24 + 24);
      v27 = *(void (__fastcall **)(__int64 *, int *, _QWORD *, _QWORD, _QWORD, unsigned __int16 *, _QWORD, int))(v25 + 200);
      v29[3] = v32;
      v27(v23, &dword_180141868, &v29[1], 0LL, 0LL, v35, 0LL, v26);
    }
    (*(void (__fastcall **)(__int64 *))(**v11 + 40))(*v11);
    wil::com_ptr_t<IAnimationFrameStats,wil::err_returncode_policy>::reset((__int64 *)this + 47);
  }
  v12 = CDesktopManager::s_fTimelineDirty;
  v13 = (__int64 *)((char *)this + 392);
  v14 = 15LL;
  do
  {
    v15 = *v13;
    if ( *v13 )
    {
      v17 = (*(_DWORD *)(v15 + 8))-- == 1;
      if ( v17 )
        v12 = 1;
      *v13 = 0LL;
      CDesktopManager::s_fTimelineDirty = v12;
    }
    ++v13;
    --v14;
  }
  while ( v14 );
  v16 = *((_QWORD *)this + 46);
  if ( v16 )
  {
    v17 = (*(_DWORD *)(v16 + 8))-- == 1;
    if ( v17 )
      v12 = 1;
    *((_QWORD *)this + 46) = 0LL;
    CDesktopManager::s_fTimelineDirty = v12;
  }
  if ( CDesktopManager::UnregisterForGlobalTimeChangeNotification(this) )
    --*((_DWORD *)CDesktopManager::s_pDesktopManagerInstance + 9);
  v18 = *((_DWORD *)this + 96);
  if ( v18 == 9 && !*((_BYTE *)this + 296) )
    goto LABEL_45;
  if ( !*((_DWORD *)this + 97) )
    goto LABEL_29;
  if ( (unsigned int)(v18 - 7) > 2 )
  {
LABEL_45:
    *(_OWORD *)((char *)this + 316) = *(_OWORD *)(*((_QWORD *)this + 42) + 48LL);
LABEL_29:
    if ( (unsigned int)(v18 - 7) > 2 )
      *((_DWORD *)this + 97) = 0;
  }
  *((_DWORD *)this + 96) = 0;
LABEL_4:
  if ( *((int *)this + 70) > 0 )
  {
    v19 = *((int *)this + 70);
    v20 = 0LL;
    do
    {
      v21 = *(_QWORD *)(*((_QWORD *)this + 32) + 8 * v20);
      if ( v21 )
      {
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v21 + 8), 0xFFFFFFFF) == 1 )
          (**(void (__fastcall ***)(__int64, __int64))v21)(v21, 1LL);
        *(_QWORD *)(*((_QWORD *)this + 32) + 8 * v20) = 0LL;
      }
      ++v20;
    }
    while ( v20 < v19 );
    *((_DWORD *)this + 70) = 0;
    DynArrayImpl<0>::ShrinkToSize((__int64)this + 256, 8u);
    (*(void (__fastcall **)(CTopLevelWindow3D *, __int64))(*(_QWORD *)this + 24LL))(this, 4LL);
  }
  v3 = 0;
  CTopLevelWindow3D::ReleaseSceneObjects(this);
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT((float)*((double *)this + 24) - 1.0) & _xmm) > 0.0000011920929 )
  {
    *((_QWORD *)this + 24) = 0x3FF0000000000000LL;
    (*(void (__fastcall **)(CTopLevelWindow3D *, __int64))(*(_QWORD *)this + 24LL))(this, 32LL);
  }
  v4 = *((_QWORD *)this + 42);
  v5 = *(_BYTE *)(v4 + 664);
  if ( (v5 & 4) != 0 )
  {
    v22 = CWindowList::QueueDestroySprite(
            *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 52),
            (struct CWindowData *)v4);
    v3 = v22;
    if ( v22 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v22, 0x887u);
  }
  else
  {
    v6 = v5 & 1;
    if ( !v6
      || (v10 = (CLivePreview *)*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 55), !*((_BYTE *)v10 + 288))
      || !v4
      || !CLivePreview::_IsInLivePreview(v10, (const struct CWindowData *)v4) )
    {
      v7 = *(CTopLevelWindow **)(v4 + 440);
      if ( v7 )
      {
        v8 = CTopLevelWindow::ShowWindow(v7, v6);
        v3 = v8;
        if ( v8 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v8, 0x882u);
      }
    }
  }
  return v3;
}
