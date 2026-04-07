/*
 * XREFs of ?Stop@CScreenRotation@@QEAAX_N0@Z @ 0x1800D3484
 * Callers:
 *     ?SwitchDesktop@CWindowList@@UEAAJK_K@Z @ 0x180040370 (-SwitchDesktop@CWindowList@@UEAAJK_K@Z.c)
 *     ??1CScreenRotation@@MEAA@XZ @ 0x1800D2060 (--1CScreenRotation@@MEAA@XZ.c)
 *     ?Capture@CScreenRotation@@QEAAJXZ @ 0x1800D2248 (-Capture@CScreenRotation@@QEAAJXZ.c)
 *     ?CreateLiveDesktopVisual@CScreenRotation@@AEAAJXZ @ 0x1800D26C8 (-CreateLiveDesktopVisual@CScreenRotation@@AEAAJXZ.c)
 *     ?OnAnimationComplete@CScreenRotation@@UEAAJI@Z @ 0x1800D2C10 (-OnAnimationComplete@CScreenRotation@@UEAAJI@Z.c)
 *     ?OnGlobalTimeUpdated@CScreenRotation@@MEAAJXZ @ 0x1800D2D90 (-OnGlobalTimeUpdated@CScreenRotation@@MEAAJXZ.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@Utype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@impl@winrt@@@winrt@@AEAAXXZ @ 0x180006224 (-unconditional_release_ref@-$com_ptr@Utype@-$abi@UIUnknown@Foundation@Windows@winrt@@X@impl@winr.c)
 *     McTemplateU0q_EtwEventWriteTransfer @ 0x180008C6C (McTemplateU0q_EtwEventWriteTransfer.c)
 *     ?RemoveAll@VisualCollection@@QEAAJXZ @ 0x18000C710 (-RemoveAll@VisualCollection@@QEAAJXZ.c)
 *     ?Remove@VisualCollection@@QEAAJPEAVCVisual@@@Z @ 0x18000CD38 (-Remove@VisualCollection@@QEAAJPEAVCVisual@@@Z.c)
 *     ?reset@?$com_ptr_t@VIAnimationFrameStats@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800134C8 (-reset@-$com_ptr_t@VIAnimationFrameStats@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?UnregisterForAnimationCompleteNotification@CAnimationEngine@@QEAAJPEAUIAnimationListener@@@Z @ 0x180014410 (-UnregisterForAnimationCompleteNotification@CAnimationEngine@@QEAAJPEAUIAnimationListener@@@Z.c)
 *     ?ScheduleStopAnimation@CAnimationEngine@@QEAAJI@Z @ 0x180014600 (-ScheduleStopAnimation@CAnimationEngine@@QEAAJI@Z.c)
 *     ?Release@CAnimationEngine@@UEAAKXZ @ 0x180015140 (-Release@CAnimationEngine@@UEAAKXZ.c)
 *     ?AcquireAnimationEngine@CDesktopManager@@SAPEAVCAnimationEngine@@XZ @ 0x180015930 (-AcquireAnimationEngine@CDesktopManager@@SAPEAVCAnimationEngine@@XZ.c)
 *     ?ClearInstructions@CRenderDataVisual@@QEAAJXZ @ 0x18002730C (-ClearInstructions@CRenderDataVisual@@QEAAJXZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180028A00 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x180040BB0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     __security_check_cookie @ 0x180060050 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180063740 (_guard_xfg_dispatch_icall_nop.c)
 *     ??4?$com_ptr@UIWeakReference@impl@winrt@@@winrt@@QEAAAEAU01@$$QEAU01@@Z @ 0x1800D20F4 (--4-$com_ptr@UIWeakReference@impl@winrt@@@winrt@@QEAAAEAU01@$$QEAU01@@Z.c)
 *     ?AnimationComplete@?$consume_Udwm_Transitions_Private_IScreenRotationTransitionHandlerWrapper@UScreenRotationTransitionHandlerWrapper@Private@Transitions@Udwm@winrt@@@impl@winrt@@QEBAXXZ @ 0x1800D21C4 (-AnimationComplete@-$consume_Udwm_Transitions_Private_IScreenRotationTransitionHandlerWrapper@US.c)
 *     ?CleanupTimeline@CScreenRotation@@AEAAXXZ @ 0x1800D25D4 (-CleanupTimeline@CScreenRotation@@AEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CScreenRotation::Stop(CScreenRotation *this, char a2, char a3)
{
  CAnimationEngine *v6; // rax
  CAnimationEngine *v7; // rdi
  unsigned int v8; // edx
  unsigned int v9; // edx
  __int64 **v10; // rsi
  __int64 v11; // rcx
  __int64 *v12; // rcx
  __int64 v13; // rax
  void *v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rcx
  __int64 v17; // rcx
  __int64 *v18; // rdi
  __int64 v19; // rcx
  __int64 v20; // rcx
  __int64 v21; // rbx
  __int64 v22; // [rsp+50h] [rbp-29h] BYREF
  __int64 v23; // [rsp+58h] [rbp-21h] BYREF
  __int128 v24; // [rsp+60h] [rbp-19h] BYREF
  __int64 v25; // [rsp+70h] [rbp-9h]
  int v26; // [rsp+78h] [rbp-1h]
  __int128 v27; // [rsp+80h] [rbp+7h] BYREF
  __int64 v28; // [rsp+90h] [rbp+17h]
  int v29; // [rsp+98h] [rbp+1Fh]

  CScreenRotation::CleanupTimeline(this);
  v6 = CDesktopManager::AcquireAnimationEngine();
  v7 = v6;
  if ( v6 )
  {
    CAnimationEngine::UnregisterForAnimationCompleteNotification(
      v6,
      (struct IAnimationListener *)(((unsigned __int64)this + 288) & -(__int64)(this != 0LL)));
    v8 = *((_DWORD *)this + 91);
    if ( v8 != -1 )
    {
      CAnimationEngine::ScheduleStopAnimation(v7, v8);
      *((_DWORD *)this + 91) = -1;
    }
    v9 = *((_DWORD *)this + 92);
    if ( v9 != -1 )
    {
      CAnimationEngine::ScheduleStopAnimation(v7, v9);
      *((_DWORD *)this + 92) = -1;
    }
  }
  v10 = (__int64 **)((char *)this + 392);
  v11 = *((_QWORD *)this + 49);
  if ( v11 )
  {
    if ( (*(int (__fastcall **)(__int64, __int128 *))(*(_QWORD *)v11 + 88LL))(v11, &v27) >= 0 )
    {
      v12 = *v10;
      v13 = **v10;
      v24 = v27;
      v25 = v28;
      v26 = v29;
      (*(void (__fastcall **)(__int64 *, int *, __int128 *, _QWORD, _QWORD, const wchar_t *, _QWORD, int))(v13 + 200))(
        v12,
        &dword_180141868,
        &v24,
        0LL,
        0LL,
        L"Auto Screen Rotation",
        0LL,
        1500);
    }
    (*(void (__fastcall **)(__int64 *))(**v10 + 40))(*v10);
    wil::com_ptr_t<IAnimationFrameStats,wil::err_returncode_policy>::reset((__int64 *)this + 49);
  }
  if ( v7 )
    CAnimationEngine::Release(v7);
  *((_BYTE *)this + 337) = 0;
  if ( *((_BYTE *)this + 336) )
  {
    *((_BYTE *)this + 336) = 0;
    if ( *((_BYTE *)this + 388) )
    {
      if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) == 0 )
        goto LABEL_19;
      v14 = &UdwmHardwareExpression_Animation_Stop;
    }
    else
    {
      if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) == 0 )
        goto LABEL_19;
      v14 = &UdwmScreenRotation_Animation_Stop;
    }
    McTemplateU0q_EtwEventWriteTransfer(v11, (int)v14, *((_DWORD *)this + 88));
  }
LABEL_19:
  VisualCollection::RemoveAll((CScreenRotation *)((char *)this + 32));
  CRenderDataVisual::ClearInstructions(this);
  if ( !a2 )
  {
    CRenderDataVisual::ClearInstructions(this);
    v15 = *((_QWORD *)this + 3);
    if ( v15 )
      VisualCollection::Remove((VisualCollection *)(v15 + 32), this);
    *((_WORD *)this + 169) = 0;
    *((_DWORD *)this + 87) = 0;
    v16 = *((_QWORD *)this + 40);
    if ( v16 )
    {
      CBaseObject::Release((CBaseObject *)(v16 + 8));
      *((_QWORD *)this + 40) = 0LL;
    }
  }
  v17 = *((_QWORD *)this + 41);
  if ( v17 )
  {
    CBaseObject::Release((CBaseObject *)(v17 + 8));
    *((_QWORD *)this + 41) = 0LL;
  }
  if ( !a3 )
  {
    v18 = (__int64 *)((char *)this + 400);
    v19 = *((_QWORD *)this + 50);
    v23 = v19;
    if ( v19 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 8LL))(v19);
      winrt::com_ptr<winrt::impl::abi<winrt::Windows::Foundation::IUnknown,void>::type>::unconditional_release_ref(&v23);
      v20 = *v18;
      if ( *v18 )
      {
        v22 = 0LL;
        (*(void (__fastcall **)(__int64, __int64 *, __int64 *))(*(_QWORD *)v20 + 24LL))(
          v20,
          &winrt::impl::guid_v<winrt::Udwm::Transitions::ITransitionHandler>,
          &v22);
        v21 = v22;
      }
      else
      {
        v21 = 0LL;
      }
      v23 = v21;
      winrt::impl::consume_Udwm_Transitions_Private_IScreenRotationTransitionHandlerWrapper<winrt::Udwm::Transitions::Private::ScreenRotationTransitionHandlerWrapper>::AnimationComplete(&v23);
      v22 = 0LL;
      winrt::com_ptr<winrt::impl::IWeakReference>::operator=(v18, &v22);
      if ( v22 )
        winrt::com_ptr<winrt::impl::abi<winrt::Windows::Foundation::IUnknown,void>::type>::unconditional_release_ref(&v22);
      if ( v21 )
        winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v23);
    }
  }
}
