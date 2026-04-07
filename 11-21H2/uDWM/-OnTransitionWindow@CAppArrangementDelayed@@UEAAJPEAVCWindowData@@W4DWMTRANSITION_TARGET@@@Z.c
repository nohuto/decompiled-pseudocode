/*
 * XREFs of ?OnTransitionWindow@CAppArrangementDelayed@@UEAAJPEAVCWindowData@@W4DWMTRANSITION_TARGET@@@Z @ 0x1800D81C0
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800045F8 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x18001DB80 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180028A00 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?ProcessSnapshotOnVisual@CAnimatedTransitionVisual@@QEAAJPEAVCVisual@@AEBUtagRECT@@@Z @ 0x1800455BC (-ProcessSnapshotOnVisual@CAnimatedTransitionVisual@@QEAAJPEAVCVisual@@AEBUtagRECT@@@Z.c)
 *     ?SetBeginRect@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z @ 0x180045F18 (-SetBeginRect@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180063740 (_guard_xfg_dispatch_icall_nop.c)
 *     ?GetDesktopThumbnail@CDesktopThumbnail@@SAJPEAPEAV1@@Z @ 0x1800B2884 (-GetDesktopThumbnail@CDesktopThumbnail@@SAJPEAPEAV1@@Z.c)
 *     ?CreateDesktopAnimationComponent@CTransitionVisualController@@QEAAJPEAVCWindowData@@HAEBUtagRECT@@_N2PEAVCStoryboard@@PEAPEAVCAnimationComponent@@@Z @ 0x1800EB88C (-CreateDesktopAnimationComponent@CTransitionVisualController@@QEAAJPEAVCWindowData@@HAEBUtagRECT.c)
 */

__int64 __fastcall CAppArrangementDelayed::OnTransitionWindow(struct CStoryboard *a1, __int64 a2, int a3)
{
  int v5; // eax
  CBaseObject *v6; // rbx
  const struct tagRECT *v7; // rdi
  __int64 v8; // rcx
  int DesktopThumbnail; // eax
  const struct tagRECT *v10; // r8
  CBaseObject *v11; // rdi
  int v12; // eax
  CBaseObject *v14; // [rsp+40h] [rbp-18h] BYREF
  CBaseObject *v15; // [rsp+78h] [rbp+20h] BYREF

  v15 = 0LL;
  v14 = 0LL;
  if ( (a3 & 0x20000000) == 0 || (a3 & 0xFFFu) - 38 > 1 )
    return 0LL;
  v5 = CTransitionVisualController::CreateDesktopAnimationComponent(
         *((CTransitionVisualController **)CDesktopManager::s_pDesktopManagerInstance + 23),
         (struct CWindowData *)a2,
         2,
         (const struct tagRECT *)(a2 + 676),
         1,
         1,
         a1,
         &v14);
  if ( v5 >= 0 )
  {
    v7 = (const struct tagRECT *)(a2 + 692);
    v6 = v14;
    CAnimatedTransitionVisual::SetBeginRect(*((struct tagPOINT **)v14 + 5), v7);
    v8 = *((_QWORD *)v6 + 5);
    *(struct tagRECT *)(v8 + 872) = *v7;
    CVisual::SetDirtyFlags((CVisual *)(v8 + 8), 4096);
    DesktopThumbnail = CDesktopThumbnail::GetDesktopThumbnail(&v15);
    if ( DesktopThumbnail >= 0 )
    {
      v10 = v7;
      v11 = v15;
      CAnimatedTransitionVisual::ProcessSnapshotOnVisual(*((CCachedVisualImageProxy ***)v6 + 5), v15, v10);
      v12 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 5)
                                                            + 16LL)
                                              + 24LL))(*(_QWORD *)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance
                                                                   + 5)
                                                                 + 16LL));
      if ( v12 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, &CStoryboard::MILINSTRUMENTATIONHRESULTLIST, 1LL, v12, 0xEFAu);
        goto LABEL_11;
      }
      *((_QWORD *)a1 + 23) = v6;
      _InterlockedIncrement((volatile signed __int32 *)v6 + 2);
      v6 = v14;
    }
    else
    {
      MilInstrumentationCheckHR_MaybeFailFast(
        0x14u,
        &CStoryboard::MILINSTRUMENTATIONHRESULTLIST,
        1LL,
        DesktopThumbnail,
        0xEF7u);
    }
    v11 = v15;
LABEL_11:
    if ( v11 )
      CBaseObject::Release(v11);
    goto LABEL_13;
  }
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, &CStoryboard::MILINSTRUMENTATIONHRESULTLIST, 1LL, v5, 0xEF4u);
  v6 = v14;
LABEL_13:
  if ( v6 )
    CBaseObject::Release(v6);
  return 0LL;
}
