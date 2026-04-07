/*
 * XREFs of ?_StageCloneRelative@CTransitionVisualController@@IEAAJPEAVCTopLevelWindow@@PEAVCVisual@@_N122PEA_N@Z @ 0x180003710
 * Callers:
 *     ?EnsureSnapshot@CTransitionVisualController@@QEAAJPEAVCWindowData@@@Z @ 0x18000B844 (-EnsureSnapshot@CTransitionVisualController@@QEAAJPEAVCWindowData@@@Z.c)
 *     ?CreateAnimationComponent@CTransitionVisualController@@QEAAJPEAVCWindowData@@W4DWMTRANSITION_TARGET@@_NHPEAVCStoryboard@@PEAUtagRECT@@4H2PEAPEAVCAnimationComponent@@@Z @ 0x18000BB60 (-CreateAnimationComponent@CTransitionVisualController@@QEAAJPEAVCWindowData@@W4DWMTRANSITION_TAR.c)
 *     ?_SetupHighZOrderStaticWindows@CTransitionVisualController@@IEAAJXZ @ 0x18000EF34 (-_SetupHighZOrderStaticWindows@CTransitionVisualController@@IEAAJXZ.c)
 *     _lambda_7924ac7615675ed6f4f46acaa8a90be9_::operator() @ 0x1800EA43C (_lambda_7924ac7615675ed6f4f46acaa8a90be9_--operator().c)
 *     ?_StageCloneWithOwnedWindows@CTransitionVisualController@@IEAAJPEAVCTopLevelWindow@@PEAVCVisual@@HW4StagedBackgroundPolicy@1@@Z @ 0x1800EC850 (-_StageCloneWithOwnedWindows@CTransitionVisualController@@IEAAJPEAVCTopLevelWindow@@PEAVCVisual@.c)
 * Callees:
 *     ?_MoveWindowOffscreen@CTransitionVisualController@@KAXPEAVCTopLevelWindow@@_N@Z @ 0x180004EA8 (-_MoveWindowOffscreen@CTransitionVisualController@@KAXPEAVCTopLevelWindow@@_N@Z.c)
 *     ?CloneVisualTreeForLivePreview@CTopLevelWindow@@QEAAJ_NPEAPEAV1@@Z @ 0x1800063E0 (-CloneVisualTreeForLivePreview@CTopLevelWindow@@QEAAJ_NPEAPEAV1@@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18001F59C (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z @ 0x180022C70 (-InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180035400 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?SetOffset@CVisual@@QEAAXPEBUtagPOINT@@@Z @ 0x1800434D8 (-SetOffset@CVisual@@QEAAXPEBUtagPOINT@@@Z.c)
 *     ?Remove@VisualCollection@@QEAAJPEAVCVisual@@@Z @ 0x180050730 (-Remove@VisualCollection@@QEAAJPEAVCVisual@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18006610C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?AllowSnapshotForSWR@CTransitionVisualController@@SA_NPEAUHWND__@@@Z @ 0x1800EA65C (-AllowSnapshotForSWR@CTransitionVisualController@@SA_NPEAUHWND__@@@Z.c)
 *     ?SetHitTestVisibility@CVisual@@QEAAJ_N@Z @ 0x180105AD4 (-SetHitTestVisibility@CVisual@@QEAAJ_N@Z.c)
 */

__int64 __fastcall CTransitionVisualController::_StageCloneRelative(
        CTransitionVisualController *this,
        struct CTopLevelWindow *a2,
        struct CVisual *a3,
        char a4,
        struct CVisual *a5,
        bool a6,
        bool a7,
        bool *a8)
{
  __int64 v8; // rax
  int inserted; // ebx
  int v14; // eax
  CVisual *v15; // r15
  struct tagPOINT *v16; // rcx
  bool v17; // dl
  VisualCollection *v18; // r13
  int v19; // r14d
  __int64 v20; // rax
  bool *v21; // rbx
  char *v22; // r10
  unsigned int v23; // r12d
  __int64 v24; // rax
  unsigned int v25; // edx
  bool v27; // al
  unsigned int v28; // eax
  __int64 v29; // rcx
  __int64 v30; // rax
  bool v31; // [rsp+20h] [rbp-30h]
  CBaseObject *v32; // [rsp+30h] [rbp-20h] BYREF
  __int128 v33; // [rsp+38h] [rbp-18h] BYREF
  __int64 v34; // [rsp+48h] [rbp-8h]
  struct tagPOINT v35; // [rsp+88h] [rbp+38h] BYREF

  v8 = *((_QWORD *)a2 + 94);
  inserted = 0;
  v32 = 0LL;
  if ( (*(_BYTE *)(v8 + 672) & 4) != 0 )
    return (unsigned int)inserted;
  v14 = CTopLevelWindow::CloneVisualTreeForLivePreview(a2, 0, &v32);
  v15 = v32;
  inserted = v14;
  if ( v14 < 0 )
  {
    v18 = (struct CVisual *)((char *)a3 + 32);
    v19 = v14;
    v23 = 137;
  }
  else
  {
    v16 = (struct tagPOINT *)*((_QWORD *)a2 + 94);
    if ( v16 )
      v35 = v16[6];
    else
      v35 = (struct tagPOINT)*((_QWORD *)a2 + 15);
    CVisual::SetOffset(v32, &v35);
    if ( a4 )
      CVisual::SetHitTestVisibility(v15, v17);
    v18 = (struct CVisual *)((char *)a3 + 32);
    if ( a6 )
    {
      inserted = VisualCollection::InsertRelative(v18, v15, a5, 1, v31);
      v19 = inserted;
      if ( inserted >= 0 )
        goto LABEL_9;
      v23 = 159;
    }
    else
    {
      inserted = VisualCollection::InsertRelative(v18, v15, a5, 0, v31);
      v19 = inserted;
      if ( inserted >= 0 )
      {
LABEL_9:
        if ( a7 )
        {
          v20 = *((_QWORD *)a2 + 94);
          if ( !v20 || (*(_DWORD *)(v20 + 680) & 0x20000000) == 0 )
            CTransitionVisualController::_MoveWindowOffscreen(a2, 1);
        }
        v21 = a8;
        *(_QWORD *)&v33 = a2;
        *((_QWORD *)&v33 + 1) = v15;
        LOBYTE(v34) = a4;
        *(_WORD *)((char *)&v34 + 1) = 257;
        if ( a8 )
        {
          v27 = *a8 && CTransitionVisualController::AllowSnapshotForSWR(*(HWND *)(*((_QWORD *)a2 + 94) + 40LL));
          *v21 = v27;
          BYTE2(v34) = v27;
        }
        v22 = (char *)this + 24;
        v23 = 181;
        v24 = *((unsigned int *)v22 + 6);
        v25 = v24 + 1;
        if ( (int)v24 + 1 < (unsigned int)v24 )
        {
          inserted = -2147024362;
          v28 = 181;
          v19 = -2147024362;
        }
        else
        {
          v19 = 0;
          if ( v25 <= *((_DWORD *)v22 + 5) )
          {
            v29 = 3 * v24;
            v30 = *(_QWORD *)v22;
            *(_OWORD *)(v30 + 8 * v29) = v33;
            *(_QWORD *)(v30 + 8 * v29 + 16) = v34;
            *((_DWORD *)v22 + 6) = v25;
            goto LABEL_16;
          }
          v19 = DynArrayImpl<0>::AddMultipleAndSet(v22, 24LL, 1LL, &v33);
          inserted = v19;
          if ( v19 >= 0 )
          {
LABEL_16:
            inserted = v19;
            _InterlockedIncrement((volatile signed __int32 *)a2 + 2);
            return (unsigned int)inserted;
          }
          v28 = 192;
        }
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, inserted, v28, 0LL);
        goto LABEL_32;
      }
      v23 = 163;
    }
  }
LABEL_32:
  MilInstrumentationCheckHR_MaybeFailFast(
    0x14u,
    &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST,
    2u,
    v19,
    v23,
    0LL);
  if ( v15 )
  {
    CTransitionVisualController::_MoveWindowOffscreen(a2, 0);
    VisualCollection::Remove(v18, v15);
    CBaseObject::Release(v15);
  }
  return (unsigned int)inserted;
}
