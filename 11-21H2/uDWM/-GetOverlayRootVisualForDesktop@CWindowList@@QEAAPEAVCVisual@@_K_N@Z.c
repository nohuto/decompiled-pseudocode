/*
 * XREFs of ?GetOverlayRootVisualForDesktop@CWindowList@@QEAAPEAVCVisual@@_K_N@Z @ 0x18004E938
 * Callers:
 *     ?MoveTransitionAndTouchVisualToFront@CWindowList@@QEAAJXZ @ 0x1800150C0 (-MoveTransitionAndTouchVisualToFront@CWindowList@@QEAAJXZ.c)
 *     ?AddToTouchNode@CContactManager@@AEAAJ_KPEAVCVisual@@@Z @ 0x18004E86C (-AddToTouchNode@CContactManager@@AEAAJ_KPEAVCVisual@@@Z.c)
 *     ?RemoveFromTouchNode@CContactManager@@AEAAJ_KPEAVCVisual@@@Z @ 0x18004E8E4 (-RemoveFromTouchNode@CContactManager@@AEAAJ_KPEAVCVisual@@@Z.c)
 *     ?UpdateOutputDuplication@CProjectionBorderManager@@UEAAJPEBU_D3DKMT_OUTPUTDUPL_LOWBOX_CONTEXTS_@@@Z @ 0x1800CE320 (-UpdateOutputDuplication@CProjectionBorderManager@@UEAAJPEBU_D3DKMT_OUTPUTDUPL_LOWBOX_CONTEXTS_@.c)
 *     ?_AddProjectionBorderForDisplay@CProjectionBorderManager@@AEAAJPEAUHMONITOR__@@AEBUDWM_CAPTURE_TOKEN@@@Z @ 0x1800CEE8C (-_AddProjectionBorderForDisplay@CProjectionBorderManager@@AEAAJPEAUHMONITOR__@@AEBUDWM_CAPTURE_T.c)
 *     ?_EnsureTransitionVisualRoot@CTransitionVisualController@@IEAAJXZ @ 0x1800EE9F0 (-_EnsureTransitionVisualRoot@CTransitionVisualController@@IEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800045F8 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?RemoveAll@VisualCollection@@QEAAJXZ @ 0x18000C710 (-RemoveAll@VisualCollection@@QEAAJXZ.c)
 *     ?Remove@VisualCollection@@QEAAJPEAVCVisual@@@Z @ 0x18000CD38 (-Remove@VisualCollection@@QEAAJPEAVCVisual@@@Z.c)
 *     ?InternalRelease@?$ComPtr@VCVisualSurfaceProxy@@@WRL@Microsoft@@IEAAKXZ @ 0x18000E904 (-InternalRelease@-$ComPtr@VCVisualSurfaceProxy@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180028A00 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?FindElement@?$CGenericTableMap@_KUDESKTOP_WINDOWLIST_MAP_ENTRY@CWindowList@@@@QEAAPEAUDESKTOP_WINDOWLIST_MAP_ENTRY@CWindowList@@_K@Z @ 0x180030A74 (-FindElement@-$CGenericTableMap@_KUDESKTOP_WINDOWLIST_MAP_ENTRY@CWindowList@@@@QEAAPEAUDESKTOP_W.c)
 *     ?InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z @ 0x180034D80 (-InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z.c)
 *     ?GetRenderTargetRootVisualForDesktop@CWindowList@@QEAAPEAVCVisual@@_K@Z @ 0x18003FD6C (-GetRenderTargetRootVisualForDesktop@CWindowList@@QEAAPEAVCVisual@@_K@Z.c)
 *     ?Create@CVisual@@SAJPEAPEAV1@@Z @ 0x180046E0C (-Create@CVisual@@SAJPEAPEAV1@@Z.c)
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
  struct CVisual *v13; // [rsp+40h] [rbp+8h] BYREF

  v5 = 0LL;
  v13 = 0LL;
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
    Microsoft::WRL::ComPtr<CVisualSurfaceProxy>::InternalRelease(&v13);
    inserted = CVisual::Create(&v13);
    if ( inserted < 0 )
    {
      v10 = 1801;
    }
    else
    {
      inserted = VisualCollection::InsertRelative((VisualCollection *)(v7[1] + 32LL), v13, 0LL, 0, 1);
      if ( inserted >= 0 )
      {
        v7[5] = v13;
        if ( v13 )
          _InterlockedIncrement((volatile signed __int32 *)v13 + 2);
        goto LABEL_3;
      }
      v10 = 1802;
    }
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, inserted, v10);
    if ( v13 )
    {
      VisualCollection::RemoveAll((struct CVisual *)((char *)v13 + 32));
      RenderTargetRootVisualForDesktop = CWindowList::GetRenderTargetRootVisualForDesktop(
                                           *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 52),
                                           a2);
      VisualCollection::Remove((struct CVisual *)((char *)RenderTargetRootVisualForDesktop + 32), v13);
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
  Microsoft::WRL::ComPtr<CVisualSurfaceProxy>::InternalRelease(&v13);
  return (struct CVisual *)v5;
}
