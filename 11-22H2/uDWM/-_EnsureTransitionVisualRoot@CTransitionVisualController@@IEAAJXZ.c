/*
 * XREFs of ?_EnsureTransitionVisualRoot@CTransitionVisualController@@IEAAJXZ @ 0x18000C620
 * Callers:
 *     ?CreateAnimationComponent@CTransitionVisualController@@QEAAJPEAVCWindowData@@W4DWMTRANSITION_TARGET@@_NHPEAVCStoryboard@@PEAUtagRECT@@4H2PEAPEAVCAnimationComponent@@@Z @ 0x18000BB60 (-CreateAnimationComponent@CTransitionVisualController@@QEAAJPEAVCWindowData@@W4DWMTRANSITION_TAR.c)
 *     ?SetupZOrder@CTransitionVisualController@@QEAAJXZ @ 0x18000CCB0 (-SetupZOrder@CTransitionVisualController@@QEAAJXZ.c)
 *     ?RemoveAnimationComponent@CTransitionVisualController@@QEAAJPEAVCAnimationComponent@@@Z @ 0x18000D1DC (-RemoveAnimationComponent@CTransitionVisualController@@QEAAJPEAVCAnimationComponent@@@Z.c)
 *     ?_EnsureStagingVisualRoot@CTransitionVisualController@@IEAAJXZ @ 0x18000D2F0 (-_EnsureStagingVisualRoot@CTransitionVisualController@@IEAAJXZ.c)
 *     ?AddAnimationComponent@CTransitionVisualController@@QEAAJPEAVCAnimationComponent@@@Z @ 0x18000D3E8 (-AddAnimationComponent@CTransitionVisualController@@QEAAJPEAVCAnimationComponent@@@Z.c)
 *     ?CreateNullAnimationComponentWithWindow@CTransitionVisualController@@QEAAJPEAVCWindowData@@HPEAVCStoryboard@@_NPEAPEAVCAnimationComponent@@@Z @ 0x1800EB818 (-CreateNullAnimationComponentWithWindow@CTransitionVisualController@@QEAAJPEAVCWindowData@@HPEAV.c)
 * Callees:
 *     ?_SetDesktopId@CTransitionVisualController@@IEAAJ_K@Z @ 0x18000C7C4 (-_SetDesktopId@CTransitionVisualController@@IEAAJ_K@Z.c)
 *     ?InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z @ 0x180022C70 (-InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180035400 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?Create@CVisual@@SAJPEAPEAV1@@Z @ 0x180037EFC (-Create@CVisual@@SAJPEAPEAV1@@Z.c)
 *     ?GetRenderTargetRootVisualForDesktop@CWindowList@@QEAAPEAVCVisual@@_K@Z @ 0x1800412B8 (-GetRenderTargetRootVisualForDesktop@CWindowList@@QEAAPEAVCVisual@@_K@Z.c)
 *     ?GetOverlayRootVisualForDesktop@CWindowList@@QEAAPEAVCVisual@@_K_N@Z @ 0x180046348 (-GetOverlayRootVisualForDesktop@CWindowList@@QEAAPEAVCVisual@@_K_N@Z.c)
 *     ?RemoveAll@VisualCollection@@QEAAJXZ @ 0x18004FC20 (-RemoveAll@VisualCollection@@QEAAJXZ.c)
 *     ?Remove@VisualCollection@@QEAAJPEAVCVisual@@@Z @ 0x180050730 (-Remove@VisualCollection@@QEAAJPEAVCVisual@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18006610C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CTransitionVisualController::_EnsureTransitionVisualRoot(
        CTransitionVisualController *this,
        __int64 a2,
        __int64 a3)
{
  volatile signed __int32 *v3; // rsi
  volatile signed __int32 *v4; // r14
  int v5; // edi
  bool v6; // zf
  struct CVisual **v8; // rbx
  int v10; // eax
  int v11; // eax
  struct CVisual *OverlayRootVisualForDesktop; // rax
  unsigned __int64 v13; // rdx
  struct CVisual *v14; // rdi
  struct CVisual *RenderTargetRootVisualForDesktop; // rax
  int inserted; // eax
  int v17; // eax
  int v18; // eax
  struct CVisual *v19; // rax
  int v20; // eax
  struct CVisual *v21; // rax
  struct CVisual *v22; // rax
  CBaseObject *v23; // rcx
  bool v24; // [rsp+20h] [rbp-10h]
  struct CVisual *v25; // [rsp+60h] [rbp+30h] BYREF
  struct CVisual *v26; // [rsp+68h] [rbp+38h] BYREF
  unsigned __int64 v27; // [rsp+70h] [rbp+40h] BYREF

  v3 = 0LL;
  v4 = 0LL;
  v5 = 0;
  v25 = 0LL;
  v6 = *((_QWORD *)this + 12) == -1LL;
  v26 = 0LL;
  if ( !v6 )
    goto LABEL_2;
  if ( (unsigned int)GetDesktopID(1LL, &v27, a3) )
  {
    v10 = CTransitionVisualController::_SetDesktopId(this, v27);
    v5 = v10;
    if ( v10 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(
        0x14u,
        &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST,
        2u,
        v10,
        0x260u,
        0LL);
      v8 = (struct CVisual **)((char *)this + 8);
      goto LABEL_29;
    }
LABEL_2:
    v8 = (struct CVisual **)((char *)this + 8);
    if ( !*((_QWORD *)this + 1) )
    {
      v11 = CVisual::Create(&v25);
      v5 = v11;
      if ( v11 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(
          0x14u,
          &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST,
          2u,
          v11,
          0x265u,
          0LL);
        v3 = (volatile signed __int32 *)v25;
        goto LABEL_29;
      }
      OverlayRootVisualForDesktop = CWindowList::GetOverlayRootVisualForDesktop(
                                      *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 54),
                                      *((_QWORD *)this + 12),
                                      0);
      v13 = *((_QWORD *)this + 12);
      v14 = OverlayRootVisualForDesktop;
      if ( OverlayRootVisualForDesktop )
      {
        RenderTargetRootVisualForDesktop = CWindowList::GetRenderTargetRootVisualForDesktop(
                                             *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 54),
                                             v13);
        v3 = (volatile signed __int32 *)v25;
        inserted = VisualCollection::InsertRelative(
                     (struct CVisual *)((char *)RenderTargetRootVisualForDesktop + 32),
                     v25,
                     v14,
                     0,
                     v24);
        v5 = inserted;
        if ( inserted < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(
            0x14u,
            &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST,
            2u,
            inserted,
            0x269u,
            0LL);
          goto LABEL_29;
        }
      }
      else
      {
        v19 = CWindowList::GetRenderTargetRootVisualForDesktop(
                *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 54),
                v13);
        v3 = (volatile signed __int32 *)v25;
        v20 = VisualCollection::InsertRelative((struct CVisual *)((char *)v19 + 32), v25, 0LL, 0, v24);
        v5 = v20;
        if ( v20 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(
            0x14u,
            &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST,
            2u,
            v20,
            0x26Du,
            0LL);
          goto LABEL_29;
        }
      }
      *v8 = (struct CVisual *)v3;
      if ( v3 )
      {
        _InterlockedIncrement(v3 + 2);
        v3 = (volatile signed __int32 *)v25;
        v4 = (volatile signed __int32 *)v26;
      }
    }
    if ( *((_QWORD *)this + 2) )
    {
LABEL_4:
      if ( v5 >= 0 )
        goto LABEL_5;
      goto LABEL_29;
    }
    v17 = CVisual::Create(&v26);
    v5 = v17;
    if ( v17 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(
        0x14u,
        &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST,
        2u,
        v17,
        0x274u,
        0LL);
      v4 = (volatile signed __int32 *)v26;
    }
    else
    {
      v4 = (volatile signed __int32 *)v26;
      v18 = VisualCollection::InsertRelative((struct CVisual *)((char *)*v8 + 32), v26, 0LL, 0, v24);
      v5 = v18;
      if ( v18 >= 0 )
      {
        *((_QWORD *)this + 2) = v4;
        if ( v4 )
        {
          _InterlockedIncrement(v4 + 2);
          v3 = (volatile signed __int32 *)v25;
          v4 = (volatile signed __int32 *)v26;
          goto LABEL_5;
        }
        goto LABEL_4;
      }
      MilInstrumentationCheckHR_MaybeFailFast(
        0x14u,
        &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST,
        2u,
        v18,
        0x275u,
        0LL);
    }
LABEL_29:
    if ( v3 )
    {
      VisualCollection::RemoveAll((VisualCollection *)(v3 + 8));
      v21 = CWindowList::GetRenderTargetRootVisualForDesktop(
              *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 54),
              *((_QWORD *)this + 12));
      VisualCollection::Remove((struct CVisual *)((char *)v21 + 32), (struct CVisual *)v3);
    }
    if ( v4 )
    {
      VisualCollection::RemoveAll((struct CVisual *)((char *)*v8 + 32));
      v22 = CWindowList::GetRenderTargetRootVisualForDesktop(
              *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 54),
              *((_QWORD *)this + 12));
      VisualCollection::Remove((struct CVisual *)((char *)v22 + 32), *v8);
    }
    goto LABEL_33;
  }
  v5 = -2147467259;
  MilInstrumentationCheckHR_MaybeFailFast(
    0x14u,
    &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST,
    2u,
    -2147467259,
    0x25Du,
    0LL);
  v8 = (struct CVisual **)((char *)this + 8);
LABEL_33:
  if ( *v8 )
  {
    CBaseObject::Release(*v8);
    *v8 = 0LL;
  }
  v23 = (CBaseObject *)*((_QWORD *)this + 2);
  if ( v23 )
  {
    CBaseObject::Release(v23);
    *((_QWORD *)this + 2) = 0LL;
  }
LABEL_5:
  if ( v3 )
    CBaseObject::Release((CBaseObject *)v3);
  if ( v4 )
    CBaseObject::Release((CBaseObject *)v4);
  return (unsigned int)v5;
}
