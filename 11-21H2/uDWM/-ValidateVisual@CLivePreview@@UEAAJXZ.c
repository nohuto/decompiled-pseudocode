/*
 * XREFs of ?ValidateVisual@CLivePreview@@UEAAJXZ @ 0x1800C26E0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800049E0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SendRoundTripRequest@CDesktopManager@@QEAAJPEAI@Z @ 0x180009DB4 (-SendRoundTripRequest@CDesktopManager@@QEAAJPEAI@Z.c)
 *     ?UnregisterForGlobalTimeChangeNotification@CDesktopManager@@SA_NPEAVCVisual@@@Z @ 0x18000ED0C (-UnregisterForGlobalTimeChangeNotification@CDesktopManager@@SA_NPEAVCVisual@@@Z.c)
 *     ?ClearInstructions@CRenderDataVisual@@QEAAJXZ @ 0x18002730C (-ClearInstructions@CRenderDataVisual@@QEAAJXZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180028A00 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?ValidateVisual@CVisual@@UEAAJXZ @ 0x180029D90 (-ValidateVisual@CVisual@@UEAAJXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180063740 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Update@CDoubleResourceProxy@@QEAAJN@Z @ 0x1800BB8B0 (-Update@CDoubleResourceProxy@@QEAAJN@Z.c)
 *     ?_CleanupClonedVisualTree@CLivePreview@@AEAAJXZ @ 0x1800C30F0 (-_CleanupClonedVisualTree@CLivePreview@@AEAAJXZ.c)
 *     ?_ClearAnimatedVisuals@CLivePreview@@AEAAXXZ @ 0x1800C31CC (-_ClearAnimatedVisuals@CLivePreview@@AEAAXXZ.c)
 *     ?_ClearAnimationOpaqueVisuals@CLivePreview@@AEAAJXZ @ 0x1800C328C (-_ClearAnimationOpaqueVisuals@CLivePreview@@AEAAJXZ.c)
 *     ?_ReleasePerMonitorResources@CLivePreview@@AEAAXXZ @ 0x1800C43B8 (-_ReleasePerMonitorResources@CLivePreview@@AEAAXXZ.c)
 *     ?GetCurrentOpacity@CLivePreviewTimeline@@QEAANXZ @ 0x1800C5880 (-GetCurrentOpacity@CLivePreviewTimeline@@QEAANXZ.c)
 */

__int64 __fastcall CLivePreview::ValidateVisual(CLivePreview *this)
{
  int v2; // edi
  __int64 v3; // rdx
  CLivePreviewTimeline *v5; // rcx
  CBaseObject *v6; // rcx
  double CurrentOpacity; // xmm0_8
  unsigned int i; // edi
  __int64 v9; // rax
  __int64 v10; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v2 = CVisual::ValidateVisual(this);
  if ( v2 < 0 )
  {
    v3 = 1696LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v3,
      (int)"clientcore\\windows\\dwm\\udwm\\livepreview.cpp",
      (const char *)(unsigned int)v2);
    return (unsigned int)v2;
  }
  if ( (*((_DWORD *)this + 22) & 0x2000) != 0 )
  {
    if ( !*((_DWORD *)this + 143)
      && *((_DWORD *)this + 148) == 3
      && (unsigned __int8)EtwEventEnabled(
                            Microsoft_Windows_Dwm_Udwm_Provider_Context[0],
                            &PerfTrack_UdwmLivePreviewAnimation_FirstFrameFinished_Info)
      && !GetSystemMetrics(8193) )
    {
      CDesktopManager::SendRoundTripRequest(CDesktopManager::s_pDesktopManagerInstance, (unsigned int *)this + 147);
    }
    v5 = (CLivePreviewTimeline *)*((_QWORD *)this + 59);
    if ( *((_BYTE *)v5 + 72) )
    {
      if ( *((_DWORD *)this + 84)
        && (unsigned __int8)EtwEventEnabled(
                              Microsoft_Windows_Dwm_Udwm_Provider_Context[0],
                              &UdwmLivePreviewAnimation_Stop) )
      {
        CDesktopManager::SendRoundTripRequest(CDesktopManager::s_pDesktopManagerInstance, (unsigned int *)this + 146);
      }
      if ( *((_DWORD *)this + 148) == 4 )
      {
        CLivePreview::_ClearAnimatedVisuals(this);
        v2 = CLivePreview::_CleanupClonedVisualTree(this);
        if ( v2 < 0 )
        {
          v3 = 1719LL;
          goto LABEL_3;
        }
        v2 = CLivePreview::_ClearAnimationOpaqueVisuals(this);
        if ( v2 < 0 )
        {
          v3 = 1720LL;
          goto LABEL_3;
        }
        CLivePreview::_ReleasePerMonitorResources(this);
        v6 = (CBaseObject *)*((_QWORD *)this + 70);
        if ( v6 )
        {
          CBaseObject::Release(v6);
          *((_QWORD *)this + 70) = 0LL;
        }
        v2 = CRenderDataVisual::ClearInstructions(this);
        if ( v2 < 0 )
        {
          v3 = 1725LL;
          goto LABEL_3;
        }
      }
      *((_DWORD *)this + 143) = 0;
      CDesktopManager::UnregisterForGlobalTimeChangeNotification(this);
      v5 = (CLivePreviewTimeline *)*((_QWORD *)this + 59);
    }
    else
    {
      ++*((_DWORD *)this + 143);
    }
    CurrentOpacity = CLivePreviewTimeline::GetCurrentOpacity(v5);
    v2 = CDoubleResourceProxy::Update(*((CDoubleResourceProxy **)this + 60), CurrentOpacity);
    if ( v2 < 0 )
    {
      v3 = 1738LL;
      goto LABEL_3;
    }
    if ( *((_BYTE *)this + 289) )
    {
      for ( i = 0; i < *((_DWORD *)this + 116); ++i )
      {
        v9 = *((_QWORD *)this + 55);
        v10 = 32LL * i;
        if ( *(_BYTE *)(v10 + v9 + 24) )
          (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(v10 + v9) + 104LL))(*(_QWORD *)(v10 + v9));
      }
      (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 64) + 104LL))(*((_QWORD *)this + 64));
      (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 62) + 64LL))(*((_QWORD *)this + 62));
    }
    v2 = CDoubleResourceProxy::Update(*((CDoubleResourceProxy **)this + 61), 1.0 - CurrentOpacity);
    if ( v2 < 0 )
    {
      v3 = 1757LL;
      goto LABEL_3;
    }
    *((_DWORD *)this + 22) &= ~0x2000u;
  }
  return 0LL;
}
