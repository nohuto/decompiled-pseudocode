/*
 * XREFs of ?GetOverlayRootVisualForDesktop@CWindowList@@QEAAPEAVCVisual@@_K_N@Z @ 0x180046348
 * Callers:
 *     ?_EnsureTransitionVisualRoot@CTransitionVisualController@@IEAAJXZ @ 0x18000C620 (-_EnsureTransitionVisualRoot@CTransitionVisualController@@IEAAJXZ.c)
 *     ?AddToTouchNode@CContactManager@@AEAAJ_KPEAVCVisual@@@Z @ 0x180046280 (-AddToTouchNode@CContactManager@@AEAAJ_KPEAVCVisual@@@Z.c)
 *     ?RemoveFromTouchNode@CContactManager@@AEAAJ_KPEAVCVisual@@@Z @ 0x1800462F4 (-RemoveFromTouchNode@CContactManager@@AEAAJ_KPEAVCVisual@@@Z.c)
 *     ?UpdateOutputDuplication@CProjectionBorderManager@@UEAAJPEBU_D3DKMT_OUTPUTDUPL_LOWBOX_CONTEXTS_@@@Z @ 0x1800D3210 (-UpdateOutputDuplication@CProjectionBorderManager@@UEAAJPEBU_D3DKMT_OUTPUTDUPL_LOWBOX_CONTEXTS_@.c)
 *     ?_AddProjectionBorderForDisplay@CProjectionBorderManager@@AEAAJPEAUHMONITOR__@@AEBUDWM_CAPTURE_TOKEN@@@Z @ 0x1800D3F64 (-_AddProjectionBorderForDisplay@CProjectionBorderManager@@AEAAJPEAUHMONITOR__@@AEBUDWM_CAPTURE_T.c)
 * Callees:
 *     ?InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z @ 0x180022C70 (-InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z.c)
 *     ?FindElement@?$CGenericTableMap@_KUDESKTOP_WINDOWLIST_MAP_ENTRY@CWindowList@@@@QEAAPEAUDESKTOP_WINDOWLIST_MAP_ENTRY@CWindowList@@_K@Z @ 0x18002AD84 (-FindElement@-$CGenericTableMap@_KUDESKTOP_WINDOWLIST_MAP_ENTRY@CWindowList@@@@QEAAPEAUDESKTOP_W.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180035400 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?Create@CVisual@@SAJPEAPEAV1@@Z @ 0x180037EFC (-Create@CVisual@@SAJPEAPEAV1@@Z.c)
 *     ?GetRenderTargetRootVisualForDesktop@CWindowList@@QEAAPEAVCVisual@@_K@Z @ 0x1800412B8 (-GetRenderTargetRootVisualForDesktop@CWindowList@@QEAAPEAVCVisual@@_K@Z.c)
 *     ?RemoveAll@VisualCollection@@QEAAJXZ @ 0x18004FC20 (-RemoveAll@VisualCollection@@QEAAJXZ.c)
 *     ?Remove@VisualCollection@@QEAAJPEAVCVisual@@@Z @ 0x180050730 (-Remove@VisualCollection@@QEAAJPEAVCVisual@@@Z.c)
 *     ?InternalRelease@?$ComPtr@VCVisualSurfaceProxy@@@WRL@Microsoft@@IEAAKXZ @ 0x1800541A4 (-InternalRelease@-$ComPtr@VCVisualSurfaceProxy@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18006610C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

// Hidden C++ exception states: #wind=1
struct CVisual *__fastcall CWindowList::GetOverlayRootVisualForDesktop(CWindowList *this, __int64 a2, char a3)
{
  __int64 v5; // rdi
  _QWORD *Element; // rax
  _QWORD *v7; // rsi
  int inserted; // eax
  unsigned int v10; // r9d
  struct CVisual *RenderTargetRootVisualForDesktop; // rax
  CBaseObject *v12; // rcx
  unsigned int v13; // [rsp+20h] [rbp-18h]
  struct CVisual *v14; // [rsp+40h] [rbp+8h] BYREF

  v5 = 0LL;
  v14 = 0LL;
  Element = CGenericTableMap<unsigned __int64,CWindowList::DESKTOP_WINDOWLIST_MAP_ENTRY>::FindElement(
              (struct _RTL_GENERIC_TABLE *)((char *)this + 8),
              a2);
  v7 = Element;
  if ( a3 )
  {
    if ( !Element )
      goto LABEL_4;
    if ( Element[5] )
      goto LABEL_3;
    Microsoft::WRL::ComPtr<CVisualSurfaceProxy>::InternalRelease(&v14);
    inserted = CVisual::Create(&v14);
    if ( inserted < 0 )
    {
      v10 = 1912;
    }
    else
    {
      inserted = VisualCollection::InsertRelative(
                   (VisualCollection *)(v7[1] + 32LL),
                   (unsigned __int64)v14,
                   0LL,
                   0,
                   v13);
      if ( inserted >= 0 )
      {
        v7[5] = v14;
        if ( v14 )
          _InterlockedIncrement((volatile signed __int32 *)v14 + 2);
        goto LABEL_3;
      }
      v10 = 1913;
    }
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, inserted, v10, 0LL);
    if ( v14 )
    {
      VisualCollection::RemoveAll((struct CVisual *)((char *)v14 + 32));
      RenderTargetRootVisualForDesktop = CWindowList::GetRenderTargetRootVisualForDesktop(
                                           *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 54),
                                           a2);
      VisualCollection::Remove((struct CVisual *)((char *)RenderTargetRootVisualForDesktop + 32), v14);
    }
    v12 = (CBaseObject *)v7[5];
    if ( v12 )
    {
      CBaseObject::Release(v12);
      v7[5] = 0LL;
    }
    goto LABEL_3;
  }
  if ( Element )
LABEL_3:
    v5 = v7[5];
LABEL_4:
  Microsoft::WRL::ComPtr<CVisualSurfaceProxy>::InternalRelease(&v14);
  return (struct CVisual *)v5;
}
