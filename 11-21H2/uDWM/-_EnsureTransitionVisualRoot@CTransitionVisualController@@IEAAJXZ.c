/*
 * XREFs of ?_EnsureTransitionVisualRoot@CTransitionVisualController@@IEAAJXZ @ 0x1800EE9F0
 * Callers:
 *     ?AddAnimationComponent@CTransitionVisualController@@QEAAJPEAVCAnimationComponent@@@Z @ 0x1800E9DE4 (-AddAnimationComponent@CTransitionVisualController@@QEAAJPEAVCAnimationComponent@@@Z.c)
 *     ?CreateAnimationComponent@CTransitionVisualController@@QEAAJPEAVCWindowData@@W4DWMTRANSITION_TARGET@@_NHPEAVCStoryboard@@PEAUtagRECT@@4H2PEAPEAVCAnimationComponent@@@Z @ 0x1800EA26C (-CreateAnimationComponent@CTransitionVisualController@@QEAAJPEAVCWindowData@@W4DWMTRANSITION_TAR.c)
 *     ?CreateNullAnimationComponentWithWindow@CTransitionVisualController@@QEAAJPEAVCWindowData@@HPEAVCStoryboard@@_NPEAPEAVCAnimationComponent@@@Z @ 0x1800EC5BC (-CreateNullAnimationComponentWithWindow@CTransitionVisualController@@QEAAJPEAVCWindowData@@HPEAV.c)
 *     ?RemoveAnimationComponent@CTransitionVisualController@@QEAAJPEAVCAnimationComponent@@@Z @ 0x1800EDB00 (-RemoveAnimationComponent@CTransitionVisualController@@QEAAJPEAVCAnimationComponent@@@Z.c)
 *     ?SetupZOrder@CTransitionVisualController@@QEAAJXZ @ 0x1800EE154 (-SetupZOrder@CTransitionVisualController@@QEAAJXZ.c)
 *     ?_EnsureStagingVisualRoot@CTransitionVisualController@@IEAAJXZ @ 0x1800EE88C (-_EnsureStagingVisualRoot@CTransitionVisualController@@IEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800045F8 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?RemoveAll@VisualCollection@@QEAAJXZ @ 0x18000C710 (-RemoveAll@VisualCollection@@QEAAJXZ.c)
 *     ?Remove@VisualCollection@@QEAAJPEAVCVisual@@@Z @ 0x18000CD38 (-Remove@VisualCollection@@QEAAJPEAVCVisual@@@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180028A00 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z @ 0x180034D80 (-InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z.c)
 *     ?GetRenderTargetRootVisualForDesktop@CWindowList@@QEAAPEAVCVisual@@_K@Z @ 0x18003FD6C (-GetRenderTargetRootVisualForDesktop@CWindowList@@QEAAPEAVCVisual@@_K@Z.c)
 *     ?Create@CVisual@@SAJPEAPEAV1@@Z @ 0x180046E0C (-Create@CVisual@@SAJPEAPEAV1@@Z.c)
 *     ?GetOverlayRootVisualForDesktop@CWindowList@@QEAAPEAVCVisual@@_K_N@Z @ 0x18004E938 (-GetOverlayRootVisualForDesktop@CWindowList@@QEAAPEAVCVisual@@_K_N@Z.c)
 *     ?_SetDesktopId@CTransitionVisualController@@IEAAJ_K@Z @ 0x1800EF1AC (-_SetDesktopId@CTransitionVisualController@@IEAAJ_K@Z.c)
 */

__int64 __fastcall CTransitionVisualController::_EnsureTransitionVisualRoot(CTransitionVisualController *this)
{
  volatile signed __int32 *v1; // rsi
  volatile signed __int32 *v2; // r14
  unsigned int v3; // ebx
  bool v4; // zf
  int v6; // eax
  int v7; // eax
  struct CVisual *OverlayRootVisualForDesktop; // rax
  __int64 v9; // rdx
  struct CVisual *v10; // rbx
  struct CVisual *v11; // rax
  int inserted; // eax
  struct CVisual *v13; // rax
  int v14; // eax
  int v15; // eax
  int v16; // eax
  struct CVisual *RenderTargetRootVisualForDesktop; // rax
  struct CVisual *v18; // rax
  CBaseObject *v19; // rcx
  CBaseObject *v20; // rcx
  struct CVisual *v22; // [rsp+60h] [rbp+30h] BYREF
  struct CVisual *v23; // [rsp+68h] [rbp+38h] BYREF
  unsigned __int64 v24; // [rsp+70h] [rbp+40h] BYREF

  v1 = 0LL;
  v2 = 0LL;
  v3 = 0;
  v22 = 0LL;
  v4 = *((_QWORD *)this + 12) == -1LL;
  v23 = 0LL;
  if ( v4 )
  {
    if ( !(unsigned int)GetDesktopID(1LL, &v24) )
    {
      v3 = -2147467259;
      MilInstrumentationCheckHR_MaybeFailFast(
        0x14u,
        &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST,
        2LL,
        -2147467259,
        0x25Du);
LABEL_25:
      v19 = (CBaseObject *)*((_QWORD *)this + 1);
      if ( v19 )
      {
        CBaseObject::Release(v19);
        *((_QWORD *)this + 1) = 0LL;
      }
      v20 = (CBaseObject *)*((_QWORD *)this + 2);
      if ( v20 )
      {
        CBaseObject::Release(v20);
        *((_QWORD *)this + 2) = 0LL;
      }
      goto LABEL_31;
    }
    v6 = CTransitionVisualController::_SetDesktopId(this, v24);
    v3 = v6;
    if ( v6 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(
        0x14u,
        &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST,
        2LL,
        v6,
        0x260u);
LABEL_21:
      if ( v1 )
      {
        VisualCollection::RemoveAll((VisualCollection *)(v1 + 8));
        RenderTargetRootVisualForDesktop = CWindowList::GetRenderTargetRootVisualForDesktop(
                                             *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 52),
                                             *((_QWORD *)this + 12));
        VisualCollection::Remove(
          (struct CVisual *)((char *)RenderTargetRootVisualForDesktop + 32),
          (struct CVisual *)v1);
      }
      if ( v2 )
      {
        VisualCollection::RemoveAll((VisualCollection *)(*((_QWORD *)this + 1) + 32LL));
        v18 = CWindowList::GetRenderTargetRootVisualForDesktop(
                *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 52),
                *((_QWORD *)this + 12));
        VisualCollection::Remove((struct CVisual *)((char *)v18 + 32), *((struct CVisual **)this + 1));
      }
      goto LABEL_25;
    }
  }
  if ( !*((_QWORD *)this + 1) )
  {
    v7 = CVisual::Create(&v22);
    v3 = v7;
    if ( v7 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(
        0x14u,
        &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST,
        2LL,
        v7,
        0x265u);
      v1 = (volatile signed __int32 *)v22;
      goto LABEL_21;
    }
    OverlayRootVisualForDesktop = CWindowList::GetOverlayRootVisualForDesktop(
                                    *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 52),
                                    *((_QWORD *)this + 12),
                                    0);
    v9 = *((_QWORD *)this + 12);
    v10 = OverlayRootVisualForDesktop;
    if ( OverlayRootVisualForDesktop )
    {
      v11 = CWindowList::GetRenderTargetRootVisualForDesktop(
              *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 52),
              v9);
      v1 = (volatile signed __int32 *)v22;
      inserted = VisualCollection::InsertRelative((struct CVisual *)((char *)v11 + 32), v22, v10, 0, 1);
      v3 = inserted;
      if ( inserted < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(
          0x14u,
          &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST,
          2LL,
          inserted,
          0x269u);
        goto LABEL_21;
      }
    }
    else
    {
      v13 = CWindowList::GetRenderTargetRootVisualForDesktop(
              *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 52),
              v9);
      v1 = (volatile signed __int32 *)v22;
      v14 = VisualCollection::InsertRelative((struct CVisual *)((char *)v13 + 32), v22, 0LL, 0, 1);
      v3 = v14;
      if ( v14 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(
          0x14u,
          &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST,
          2LL,
          v14,
          0x26Du);
        goto LABEL_21;
      }
    }
    *((_QWORD *)this + 1) = v1;
    if ( v1 )
    {
      _InterlockedIncrement(v1 + 2);
      v1 = (volatile signed __int32 *)v22;
      v2 = (volatile signed __int32 *)v23;
    }
  }
  if ( *((_QWORD *)this + 2) )
    goto LABEL_31;
  v15 = CVisual::Create(&v23);
  v3 = v15;
  if ( v15 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(
      0x14u,
      &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST,
      2LL,
      v15,
      0x274u);
    v2 = (volatile signed __int32 *)v23;
    goto LABEL_21;
  }
  v2 = (volatile signed __int32 *)v23;
  v16 = VisualCollection::InsertRelative((VisualCollection *)(*((_QWORD *)this + 1) + 32LL), v23, 0LL, 0, 1);
  v3 = v16;
  if ( v16 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(
      0x14u,
      &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST,
      2LL,
      v16,
      0x275u);
    goto LABEL_21;
  }
  *((_QWORD *)this + 2) = v2;
  if ( v2 )
  {
    _InterlockedIncrement(v2 + 2);
    v1 = (volatile signed __int32 *)v22;
    v2 = (volatile signed __int32 *)v23;
  }
LABEL_31:
  if ( v1 )
    CBaseObject::Release((CBaseObject *)v1);
  if ( v2 )
    CBaseObject::Release((CBaseObject *)v2);
  return v3;
}
