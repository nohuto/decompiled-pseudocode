/*
 * XREFs of ?Activate@CLivePreview@@QEAAJXZ @ 0x1800C6BD8
 * Callers:
 *     ?CloakChange@CWindowList@@UEAAJPEAUIDwmWindow@@0_N@Z @ 0x180030A20 (-CloakChange@CWindowList@@UEAAJPEAUIDwmWindow@@0_N@Z.c)
 *     ?Activate@CLivePreview@@QEAAJPEAPEAUHWND__@@IPEAU2@W4LIVEPREVIEW_TRIGGER@@IPEAUtagRECT@@@Z @ 0x1800C67D8 (-Activate@CLivePreview@@QEAAJPEAPEAUHWND__@@IPEAU2@W4LIVEPREVIEW_TRIGGER@@IPEAUtagRECT@@@Z.c)
 * Callees:
 *     ?Create@CImmersiveState@@SAJPEAPEAV1@_K@Z @ 0x18000F520 (-Create@CImmersiveState@@SAJPEAPEAV1@_K@Z.c)
 *     ?InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z @ 0x180022C70 (-InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z.c)
 *     McGenEventWrite_EtwEventWriteTransfer @ 0x180025580 (McGenEventWrite_EtwEventWriteTransfer.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180035400 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?GetRootVisualForDesktop@CWindowList@@QEAAPEAVCRenderDataVisual@@_K@Z @ 0x1800360BC (-GetRootVisualForDesktop@CWindowList@@QEAAPEAVCRenderDataVisual@@_K@Z.c)
 *     __security_check_cookie @ 0x18005C460 (__security_check_cookie.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18006610C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?EnableLivePreviewInputHooks@CDesktopManager@@SAJ_N0@Z @ 0x1800B48B4 (-EnableLivePreviewInputHooks@CDesktopManager@@SAJ_N0@Z.c)
 *     ?_AnimateOpaqueVisuals@CLivePreview@@AEAAJXZ @ 0x1800C763C (-_AnimateOpaqueVisuals@CLivePreview@@AEAAJXZ.c)
 *     ?_ClearAnimatedVisuals@CLivePreview@@AEAAXXZ @ 0x1800C7AD4 (-_ClearAnimatedVisuals@CLivePreview@@AEAAXXZ.c)
 *     ?_ClearAnimationOpaqueVisuals@CLivePreview@@AEAAJXZ @ 0x1800C7B80 (-_ClearAnimationOpaqueVisuals@CLivePreview@@AEAAJXZ.c)
 *     ?_CollectWindows@CLivePreview@@AEAAJXZ @ 0x1800C7E70 (-_CollectWindows@CLivePreview@@AEAAJXZ.c)
 *     ?_FadeOutToGlass@CLivePreview@@AEAAJXZ @ 0x1800C8314 (-_FadeOutToGlass@CLivePreview@@AEAAJXZ.c)
 */

__int64 __fastcall CLivePreview::Activate(CLivePreview *this, __int64 a2, __int64 a3)
{
  __int64 v4; // r8
  const unsigned __int16 *v5; // r8
  unsigned __int64 v6; // rdx
  CBaseObject **v7; // rbx
  int v8; // eax
  __int64 v9; // rax
  int v10; // eax
  int v11; // eax
  int v12; // eax
  __int64 v13; // r8
  int v14; // eax
  unsigned int v15; // esi
  int v16; // eax
  struct CRenderDataVisual *RootVisualForDesktop; // rax
  __int64 v19; // r8
  struct CVisual *v20; // r8
  int inserted; // eax
  int v22; // [rsp+20h] [rbp-58h]
  unsigned __int64 v23; // [rsp+30h] [rbp-48h] BYREF
  __int64 v24; // [rsp+38h] [rbp-40h] BYREF
  _BYTE v25[16]; // [rsp+40h] [rbp-38h] BYREF

  GetDesktopID(1LL, &v24, a3);
  GetDesktopID(2LL, &v23, v4);
  v6 = v23;
  v7 = (CBaseObject **)((char *)this + 528);
  if ( v24 != v23 )
    goto LABEL_22;
  *((_QWORD *)this + 37) = v23;
  if ( *v7 || (v8 = CImmersiveState::Create((struct CImmersiveState **)this + 66, v6), v8 >= 0) )
  {
    v9 = *((_QWORD *)this + 65);
    if ( v9 && ((*(_DWORD *)(v9 + 132) - 8) & 0xFFFFFFFD) == 0 )
      *((_QWORD *)this + 65) = *((_QWORD *)*v7 + 6);
    if ( *((_BYTE *)this + 288) )
    {
      RootVisualForDesktop = CWindowList::GetRootVisualForDesktop(
                               *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 54),
                               *((_QWORD *)this + 37));
      v19 = *((_QWORD *)this + 65);
      if ( v19 )
        v20 = *(struct CVisual **)(v19 + 440);
      else
        v20 = 0LL;
      inserted = VisualCollection::InsertRelative(
                   (struct CRenderDataVisual *)((char *)RootVisualForDesktop + 32),
                   (unsigned __int64)this,
                   v20,
                   0,
                   v22);
      if ( inserted < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, inserted, 0x3D6u);
        goto LABEL_22;
      }
    }
    else
    {
      if ( !*((_DWORD *)this + 84) )
      {
        v10 = CLivePreview::_CollectWindows(this);
        if ( v10 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v10, 0x3C9u);
          goto LABEL_22;
        }
      }
      v11 = CDesktopManager::EnableLivePreviewInputHooks(1, *((_DWORD *)this + 134) != 2, v5);
      if ( v11 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v11, 0x3CBu);
        goto LABEL_22;
      }
      *((_BYTE *)this + 288) = 1;
      v12 = CLivePreview::_FadeOutToGlass(this);
      if ( v12 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v12, 0x3CDu);
        goto LABEL_22;
      }
      if ( *((_DWORD *)this + 84) )
      {
        if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
          McGenEventWrite_EtwEventWriteTransfer(
            Microsoft_Windows_Dwm_Udwm_Provider_Context,
            (__int64)&UdwmLivePreviewAnimation_Start,
            v13,
            1LL,
            (__int64)v25);
        NotifyWinEvent(0x21u, *((HWND *)CDesktopManager::s_pDesktopManagerInstance + 77), 0, 0);
      }
    }
    v14 = CLivePreview::_AnimateOpaqueVisuals(this);
    v15 = v14;
    if ( v14 >= 0 )
      return v15;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v14, 0x3D9u);
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v8, 0x3B8u);
  }
LABEL_22:
  v16 = CLivePreview::_ClearAnimationOpaqueVisuals(this);
  v15 = v16;
  if ( v16 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v16, 0x3E3u);
  CLivePreview::_ClearAnimatedVisuals(this);
  if ( *v7 )
  {
    CBaseObject::Release(*v7);
    *v7 = 0LL;
  }
  return v15;
}
