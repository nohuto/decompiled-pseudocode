/*
 * XREFs of ?Activate@CLivePreview@@QEAAJXZ @ 0x1800C1F14
 * Callers:
 *     ?Activate@CLivePreview@@QEAAJPEAPEAUHWND__@@IPEAU2@W4LIVEPREVIEW_TRIGGER@@IPEAUtagRECT@@@Z @ 0x1800C1B08 (-Activate@CLivePreview@@QEAAJPEAPEAUHWND__@@IPEAU2@W4LIVEPREVIEW_TRIGGER@@IPEAUtagRECT@@@Z.c)
 *     ?ReActivate@CLivePreview@@QEAAJXZ @ 0x1800C25E4 (-ReActivate@CLivePreview@@QEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800045F8 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetRootVisualForDesktop@CWindowList@@QEAAPEAVCRenderDataVisual@@_K@Z @ 0x18001E184 (-GetRootVisualForDesktop@CWindowList@@QEAAPEAVCRenderDataVisual@@_K@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180028A00 (-Release@CBaseObject@@QEAAKXZ.c)
 *     McGenEventWrite_EtwEventWriteTransfer @ 0x180034B10 (McGenEventWrite_EtwEventWriteTransfer.c)
 *     ?InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z @ 0x180034D80 (-InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z.c)
 *     __security_check_cookie @ 0x180060050 (__security_check_cookie.c)
 *     ?EnableLivePreviewInputHooks@CDesktopManager@@SAJ_N0@Z @ 0x1800B06E4 (-EnableLivePreviewInputHooks@CDesktopManager@@SAJ_N0@Z.c)
 *     ?Create@CImmersiveState@@SAJPEAPEAV1@_K@Z @ 0x1800BFC10 (-Create@CImmersiveState@@SAJPEAPEAV1@_K@Z.c)
 *     ?_AnimateOpaqueVisuals@CLivePreview@@AEAAJXZ @ 0x1800C2D14 (-_AnimateOpaqueVisuals@CLivePreview@@AEAAJXZ.c)
 *     ?_ClearAnimatedVisuals@CLivePreview@@AEAAXXZ @ 0x1800C31CC (-_ClearAnimatedVisuals@CLivePreview@@AEAAXXZ.c)
 *     ?_ClearAnimationOpaqueVisuals@CLivePreview@@AEAAJXZ @ 0x1800C328C (-_ClearAnimationOpaqueVisuals@CLivePreview@@AEAAJXZ.c)
 *     ?_CollectWindows@CLivePreview@@AEAAJXZ @ 0x1800C3570 (-_CollectWindows@CLivePreview@@AEAAJXZ.c)
 *     ?_FadeOutToGlass@CLivePreview@@AEAAJXZ @ 0x1800C3A14 (-_FadeOutToGlass@CLivePreview@@AEAAJXZ.c)
 */

__int64 __fastcall CLivePreview::Activate(CLivePreview *this)
{
  const unsigned __int16 *v2; // r8
  unsigned __int64 v3; // rdx
  int v4; // eax
  __int64 v5; // rax
  int v6; // eax
  int v7; // eax
  int v8; // eax
  __int64 v9; // r8
  int v10; // eax
  unsigned int v11; // edi
  int v12; // eax
  struct CRenderDataVisual *RootVisualForDesktop; // rax
  __int64 v14; // r8
  struct CVisual *v15; // r8
  int inserted; // eax
  CBaseObject *v17; // rcx
  unsigned __int64 v19; // [rsp+30h] [rbp-38h] BYREF
  __int64 v20; // [rsp+38h] [rbp-30h] BYREF
  _BYTE v21[16]; // [rsp+40h] [rbp-28h] BYREF

  GetDesktopID(1LL, &v20);
  GetDesktopID(2LL, &v19);
  v3 = v19;
  if ( v20 == v19 )
  {
    *((_QWORD *)this + 37) = v19;
    if ( *((_QWORD *)this + 70) || (v4 = CImmersiveState::Create((struct CImmersiveState **)this + 70, v3), v4 >= 0) )
    {
      v5 = *((_QWORD *)this + 69);
      if ( v5 && ((*(_DWORD *)(v5 + 132) - 8) & 0xFFFFFFFD) == 0 )
        *((_QWORD *)this + 69) = *(_QWORD *)(*((_QWORD *)this + 70) + 48LL);
      if ( *((_BYTE *)this + 288) )
      {
        RootVisualForDesktop = CWindowList::GetRootVisualForDesktop(
                                 *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 52),
                                 *((_QWORD *)this + 37));
        v14 = *((_QWORD *)this + 69);
        if ( v14 )
          v15 = *(struct CVisual **)(v14 + 440);
        else
          v15 = 0LL;
        inserted = VisualCollection::InsertRelative(
                     (struct CRenderDataVisual *)((char *)RootVisualForDesktop + 32),
                     this,
                     v15,
                     0,
                     1);
        if ( inserted < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, inserted, 0x3EBu);
          goto LABEL_22;
        }
      }
      else
      {
        if ( !*((_DWORD *)this + 84) )
        {
          v6 = CLivePreview::_CollectWindows(this);
          if ( v6 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v6, 0x3DEu);
            goto LABEL_22;
          }
        }
        v7 = CDesktopManager::EnableLivePreviewInputHooks(1, *((_DWORD *)this + 142) != 2, v2);
        if ( v7 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v7, 0x3E0u);
          goto LABEL_22;
        }
        *((_BYTE *)this + 288) = 1;
        v8 = CLivePreview::_FadeOutToGlass(this);
        if ( v8 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v8, 0x3E2u);
          goto LABEL_22;
        }
        if ( *((_DWORD *)this + 84) )
        {
          if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
            McGenEventWrite_EtwEventWriteTransfer(
              Microsoft_Windows_Dwm_Udwm_Provider_Context,
              (__int64)&UdwmLivePreviewAnimation_Start,
              v9,
              1,
              (__int64)v21);
          NotifyWinEvent(0x21u, *((HWND *)CDesktopManager::s_pDesktopManagerInstance + 75), 0, 0);
        }
      }
      v10 = CLivePreview::_AnimateOpaqueVisuals(this);
      v11 = v10;
      if ( v10 >= 0 )
        return v11;
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v10, 0x3EEu);
    }
    else
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v4, 0x3CDu);
    }
  }
LABEL_22:
  while ( 1 )
  {
    v12 = CLivePreview::_ClearAnimationOpaqueVisuals(this);
    v11 = v12;
    if ( v12 >= 0 )
      break;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v12, 0x3F8u);
  }
  CLivePreview::_ClearAnimatedVisuals(this);
  v17 = (CBaseObject *)*((_QWORD *)this + 70);
  if ( v17 )
  {
    CBaseObject::Release(v17);
    *((_QWORD *)this + 70) = 0LL;
  }
  return v11;
}
