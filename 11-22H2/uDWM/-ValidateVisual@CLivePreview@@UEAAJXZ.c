/*
 * XREFs of ?ValidateVisual@CLivePreview@@UEAAJXZ @ 0x1800C73A0
 * Callers:
 *     <none>
 * Callees:
 *     ?ClearInstructions@CRenderDataVisual@@QEAAJXZ @ 0x18001F610 (-ClearInstructions@CRenderDataVisual@@QEAAJXZ.c)
 *     ?ValidateVisual@CVisual@@UEAAJXZ @ 0x18002E5D0 (-ValidateVisual@CVisual@@UEAAJXZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180035400 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?UnregisterForGlobalTimeChangeNotification@CDesktopManager@@SA_NPEAVCVisual@@@Z @ 0x18003865C (-UnregisterForGlobalTimeChangeNotification@CDesktopManager@@SA_NPEAVCVisual@@@Z.c)
 *     ?SendRoundTripRequest@CDesktopManager@@QEAAJPEAI@Z @ 0x1800477A0 (-SendRoundTripRequest@CDesktopManager@@QEAAJPEAI@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800663A0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Update@CDoubleResourceProxy@@QEAAJN@Z @ 0x18006CDA8 (-Update@CDoubleResourceProxy@@QEAAJN@Z.c)
 *     ?GetCurrentOpacity@CLivePreviewTimeline@@QEAANXZ @ 0x18006D1C0 (-GetCurrentOpacity@CLivePreviewTimeline@@QEAANXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009D824 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_CleanupClonedVisualTree@CLivePreview@@AEAAJXZ @ 0x1800C79F8 (-_CleanupClonedVisualTree@CLivePreview@@AEAAJXZ.c)
 *     ?_ClearAnimatedVisuals@CLivePreview@@AEAAXXZ @ 0x1800C7AD4 (-_ClearAnimatedVisuals@CLivePreview@@AEAAXXZ.c)
 *     ?_ClearAnimationOpaqueVisuals@CLivePreview@@AEAAJXZ @ 0x1800C7B80 (-_ClearAnimationOpaqueVisuals@CLivePreview@@AEAAJXZ.c)
 *     ?_ReleasePerMonitorResources@CLivePreview@@AEAAXXZ @ 0x1800C8CD8 (-_ReleasePerMonitorResources@CLivePreview@@AEAAXXZ.c)
 */

__int64 __fastcall CLivePreview::ValidateVisual(CLivePreview *this)
{
  int v2; // edi
  __int64 v3; // rdx
  CBaseObject *v5; // rcx
  double CurrentOpacity; // xmm0_8
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v2 = CVisual::ValidateVisual(this);
  if ( v2 < 0 )
  {
    v3 = 1587LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v3,
      (__int64)"clientcore\\windows\\dwm\\udwm\\livepreview.cpp",
      (const char *)(unsigned int)v2);
    return (unsigned int)v2;
  }
  if ( (*((_DWORD *)this + 22) & 0x2000) != 0 )
  {
    if ( !*((_DWORD *)this + 135)
      && *((_DWORD *)this + 140) == 3
      && (unsigned __int8)EtwEventEnabled(
                            Microsoft_Windows_Dwm_Udwm_Provider_Context[0],
                            &PerfTrack_UdwmLivePreviewAnimation_FirstFrameFinished_Info)
      && !GetSystemMetrics(8193) )
    {
      CDesktopManager::SendRoundTripRequest(CDesktopManager::s_pDesktopManagerInstance, (unsigned int *)this + 139);
    }
    if ( *(_BYTE *)(*((_QWORD *)this + 55) + 72LL) )
    {
      if ( *((_DWORD *)this + 84)
        && (unsigned __int8)EtwEventEnabled(
                              Microsoft_Windows_Dwm_Udwm_Provider_Context[0],
                              &UdwmLivePreviewAnimation_Stop) )
      {
        CDesktopManager::SendRoundTripRequest(CDesktopManager::s_pDesktopManagerInstance, (unsigned int *)this + 138);
      }
      if ( *((_DWORD *)this + 140) == 4 )
      {
        CLivePreview::_ClearAnimatedVisuals(this);
        v2 = CLivePreview::_CleanupClonedVisualTree(this);
        if ( v2 < 0 )
        {
          v3 = 1610LL;
          goto LABEL_3;
        }
        v2 = CLivePreview::_ClearAnimationOpaqueVisuals(this);
        if ( v2 < 0 )
        {
          v3 = 1611LL;
          goto LABEL_3;
        }
        CLivePreview::_ReleasePerMonitorResources(this);
        v5 = (CBaseObject *)*((_QWORD *)this + 66);
        if ( v5 )
        {
          CBaseObject::Release(v5);
          *((_QWORD *)this + 66) = 0LL;
        }
        v2 = CRenderDataVisual::ClearInstructions(this);
        if ( v2 < 0 )
        {
          v3 = 1616LL;
          goto LABEL_3;
        }
      }
      *((_DWORD *)this + 135) = 0;
      CDesktopManager::UnregisterForGlobalTimeChangeNotification(this);
    }
    else
    {
      ++*((_DWORD *)this + 135);
    }
    CurrentOpacity = CLivePreviewTimeline::GetCurrentOpacity(*((CLivePreviewTimeline **)this + 55));
    v2 = CDoubleResourceProxy::Update(*((CDoubleResourceProxy **)this + 56), CurrentOpacity);
    if ( v2 < 0 )
    {
      v3 = 1629LL;
      goto LABEL_3;
    }
    if ( *((_BYTE *)this + 289) )
    {
      (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 60) + 112LL))(*((_QWORD *)this + 60));
      (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 58) + 64LL))(*((_QWORD *)this + 58));
    }
    v2 = CDoubleResourceProxy::Update(*((CDoubleResourceProxy **)this + 57), 1.0 - CurrentOpacity);
    if ( v2 < 0 )
    {
      v3 = 1639LL;
      goto LABEL_3;
    }
    *((_DWORD *)this + 22) &= ~0x2000u;
  }
  return 0LL;
}
