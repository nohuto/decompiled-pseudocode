/*
 * XREFs of ?_StageCloneRelative@CTransitionVisualController@@IEAAJPEAVCTopLevelWindow@@PEAVCVisual@@_N122PEA_N@Z @ 0x1800EF85C
 * Callers:
 *     _lambda_7924ac7615675ed6f4f46acaa8a90be9_::operator() @ 0x1800E9C70 (_lambda_7924ac7615675ed6f4f46acaa8a90be9_--operator().c)
 *     ?CreateAnimationComponent@CTransitionVisualController@@QEAAJPEAVCWindowData@@W4DWMTRANSITION_TARGET@@_NHPEAVCStoryboard@@PEAUtagRECT@@4H2PEAPEAVCAnimationComponent@@@Z @ 0x1800EA26C (-CreateAnimationComponent@CTransitionVisualController@@QEAAJPEAVCWindowData@@W4DWMTRANSITION_TAR.c)
 *     ?EnsureSnapshot@CTransitionVisualController@@QEAAJPEAVCWindowData@@@Z @ 0x1800EC7CC (-EnsureSnapshot@CTransitionVisualController@@QEAAJPEAVCWindowData@@@Z.c)
 *     ?_SetupHighZOrderStaticWindows@CTransitionVisualController@@IEAAJXZ @ 0x1800EF294 (-_SetupHighZOrderStaticWindows@CTransitionVisualController@@IEAAJXZ.c)
 *     ?_StageCloneWithOwnedWindows@CTransitionVisualController@@IEAAJPEAVCTopLevelWindow@@PEAVCVisual@@HW4StagedBackgroundPolicy@1@@Z @ 0x1800EFAB0 (-_StageCloneWithOwnedWindows@CTransitionVisualController@@IEAAJPEAVCTopLevelWindow@@PEAVCVisual@.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800045F8 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Remove@VisualCollection@@QEAAJPEAVCVisual@@@Z @ 0x18000CD38 (-Remove@VisualCollection@@QEAAJPEAVCVisual@@@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180028A00 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z @ 0x180034D80 (-InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180035AB8 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?SetOffset@CVisual@@QEAAXPEBUtagPOINT@@@Z @ 0x180036354 (-SetOffset@CVisual@@QEAAXPEBUtagPOINT@@@Z.c)
 *     ?CloneVisualTreeForLivePreview@CTopLevelWindow@@QEAAJ_N00PEAPEAV1@@Z @ 0x1800E43A4 (-CloneVisualTreeForLivePreview@CTopLevelWindow@@QEAAJ_N00PEAPEAV1@@Z.c)
 *     ?AllowSnapshotForSWR@CTransitionVisualController@@SA_NPEAUHWND__@@@Z @ 0x1800EA06C (-AllowSnapshotForSWR@CTransitionVisualController@@SA_NPEAUHWND__@@@Z.c)
 *     ?_MoveWindowOffscreen@CTransitionVisualController@@KAXPEAVCTopLevelWindow@@_N@Z @ 0x1800EEFA0 (-_MoveWindowOffscreen@CTransitionVisualController@@KAXPEAVCTopLevelWindow@@_N@Z.c)
 *     ?SetHitTestVisibility@CVisual@@QEAAJ_N@Z @ 0x180100710 (-SetHitTestVisibility@CVisual@@QEAAJ_N@Z.c)
 */

__int64 __fastcall CTransitionVisualController::_StageCloneRelative(
        CTransitionVisualController *this,
        struct CTopLevelWindow *a2,
        struct CVisual *a3,
        __int64 a4,
        struct CVisual *a5,
        bool a6,
        bool a7,
        bool *a8)
{
  __int64 v8; // rax
  int inserted; // ebx
  char v10; // si
  int v14; // eax
  CVisual *v15; // r14
  int v16; // r9d
  unsigned int v17; // r15d
  struct tagPOINT *v18; // rcx
  bool v19; // dl
  VisualCollection *v20; // rcx
  __int64 v21; // rax
  bool *v22; // rbx
  char v23; // al
  char *v24; // r10
  __int64 v25; // rax
  unsigned int v26; // edx
  unsigned int v27; // eax
  __int64 v28; // rcx
  __int64 v29; // rax
  CBaseObject *v31; // [rsp+30h] [rbp-20h] BYREF
  __int128 v32; // [rsp+38h] [rbp-18h] BYREF
  __int64 v33; // [rsp+48h] [rbp-8h]
  struct tagPOINT v34; // [rsp+88h] [rbp+38h] BYREF

  v8 = *((_QWORD *)a2 + 94);
  inserted = 0;
  v31 = 0LL;
  v10 = a4;
  if ( (*(_BYTE *)(v8 + 664) & 4) != 0 )
    return (unsigned int)inserted;
  v14 = CTopLevelWindow::CloneVisualTreeForLivePreview(a2, 0, (__int64)a3, a4, &v31);
  v15 = v31;
  inserted = v14;
  if ( v14 < 0 )
  {
    v16 = v14;
    v17 = 137;
    goto LABEL_32;
  }
  v18 = (struct tagPOINT *)*((_QWORD *)a2 + 94);
  if ( v18 )
    v34 = v18[6];
  else
    v34 = (struct tagPOINT)*((_QWORD *)a2 + 15);
  CVisual::SetOffset((struct tagPOINT *)v31, &v34);
  if ( v10 )
    CVisual::SetHitTestVisibility(v15, v19);
  v20 = (struct CVisual *)((char *)a3 + 32);
  if ( a6 )
  {
    inserted = VisualCollection::InsertRelative(v20, v15, a5, 1u, 1);
    v16 = inserted;
    if ( inserted < 0 )
    {
      v17 = 159;
      goto LABEL_32;
    }
  }
  else
  {
    inserted = VisualCollection::InsertRelative(v20, v15, a5, 0, 1);
    v16 = inserted;
    if ( inserted < 0 )
    {
      v17 = 163;
      goto LABEL_32;
    }
  }
  if ( a7 )
  {
    v21 = *((_QWORD *)a2 + 94);
    if ( !v21 || (*(_DWORD *)(v21 + 672) & 0x20000000) == 0 )
      CTransitionVisualController::_MoveWindowOffscreen(a2, 1);
  }
  v22 = a8;
  *(_QWORD *)&v32 = a2;
  *((_QWORD *)&v32 + 1) = v15;
  LOBYTE(v33) = v10;
  *(_WORD *)((char *)&v33 + 1) = 257;
  if ( a8 )
  {
    if ( *a8 )
      v23 = CTransitionVisualController::AllowSnapshotForSWR(*(HWND *)(*((_QWORD *)a2 + 94) + 40LL));
    else
      v23 = 0;
    *v22 = v23;
    BYTE2(v33) = v23;
  }
  v24 = (char *)this + 24;
  v17 = 181;
  v25 = *((unsigned int *)v24 + 6);
  v26 = v25 + 1;
  if ( (int)v25 + 1 >= (unsigned int)v25 )
  {
    if ( v26 > *((_DWORD *)v24 + 5) )
    {
      inserted = DynArrayImpl<0>::AddMultipleAndSet((__int64)v24, 0x18u, 1, &v32);
      if ( inserted < 0 )
      {
        v27 = 192;
        goto LABEL_31;
      }
    }
    else
    {
      v28 = 3 * v25;
      inserted = 0;
      v29 = *(_QWORD *)v24;
      *(_OWORD *)(v29 + 8 * v28) = v32;
      *(_QWORD *)(v29 + 8 * v28 + 16) = v33;
      *((_DWORD *)v24 + 6) = v26;
    }
    _InterlockedIncrement((volatile signed __int32 *)a2 + 2);
    return (unsigned int)inserted;
  }
  inserted = -2147024362;
  v27 = 181;
LABEL_31:
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, inserted, v27);
  v16 = inserted;
LABEL_32:
  MilInstrumentationCheckHR_MaybeFailFast(
    0x14u,
    &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST,
    2LL,
    v16,
    v17);
  if ( v15 )
  {
    CTransitionVisualController::_MoveWindowOffscreen(a2, 0);
    VisualCollection::Remove((struct CVisual *)((char *)a3 + 32), v15);
    CBaseObject::Release(v15);
  }
  return (unsigned int)inserted;
}
