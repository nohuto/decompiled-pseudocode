/*
 * XREFs of ?_StageCloneWithOwnedWindows@CTransitionVisualController@@IEAAJPEAVCTopLevelWindow@@PEAVCVisual@@HW4StagedBackgroundPolicy@1@@Z @ 0x1800EFAB0
 * Callers:
 *     ?CreateAnimationComponent@CTransitionVisualController@@QEAAJPEAVCWindowData@@W4DWMTRANSITION_TARGET@@_NHPEAVCStoryboard@@PEAUtagRECT@@4H2PEAPEAVCAnimationComponent@@@Z @ 0x1800EA26C (-CreateAnimationComponent@CTransitionVisualController@@QEAAJPEAVCWindowData@@W4DWMTRANSITION_TAR.c)
 *     ?EnsureSnapshot@CTransitionVisualController@@QEAAJPEAVCWindowData@@@Z @ 0x1800EC7CC (-EnsureSnapshot@CTransitionVisualController@@QEAAJPEAVCWindowData@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800045F8 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?RemoveAll@VisualCollection@@QEAAJXZ @ 0x18000C710 (-RemoveAll@VisualCollection@@QEAAJXZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180028A00 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z @ 0x180034D80 (-InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z.c)
 *     __security_check_cookie @ 0x180060050 (__security_check_cookie.c)
 *     ?RemoveAt@?$DynArray@UCStationaryAnimation@@$0A@@@QEAAJI@Z @ 0x1800AD98C (-RemoveAt@-$DynArray@UCStationaryAnimation@@$0A@@@QEAAJI@Z.c)
 *     CTransitionVisualController::ForEachOwnedWindow__lambda_7924ac7615675ed6f4f46acaa8a90be9___ @ 0x1800E97F8 (CTransitionVisualController--ForEachOwnedWindow__lambda_7924ac7615675ed6f4f46acaa8a90be9___.c)
 *     ?CreateBackground@CTransitionVisualController@@SAJPEBUtagRECT@@PEAPEAVCAccent@@@Z @ 0x1800EB2A0 (-CreateBackground@CTransitionVisualController@@SAJPEBUtagRECT@@PEAPEAVCAccent@@@Z.c)
 *     ?_MoveWindowOffscreen@CTransitionVisualController@@KAXPEAVCTopLevelWindow@@_N@Z @ 0x1800EEFA0 (-_MoveWindowOffscreen@CTransitionVisualController@@KAXPEAVCTopLevelWindow@@_N@Z.c)
 *     ?_StageCloneRelative@CTransitionVisualController@@IEAAJPEAVCTopLevelWindow@@PEAVCVisual@@_N122PEA_N@Z @ 0x1800EF85C (-_StageCloneRelative@CTransitionVisualController@@IEAAJPEAVCTopLevelWindow@@PEAVCVisual@@_N122PE.c)
 */

__int64 __fastcall CTransitionVisualController::_StageCloneWithOwnedWindows(
        __int64 a1,
        struct CTopLevelWindow *a2,
        struct CVisual *a3,
        int a4,
        int a5)
{
  unsigned int v5; // r15d
  struct CVisual *v6; // rsi
  bool v7; // zf
  struct tagRECT *v9; // rdi
  unsigned int v11; // ebx
  int v12; // r9d
  int inserted; // eax
  LONG left; // eax
  int v15; // edx
  int top; // r11d
  int v17; // eax
  int v18; // r10d
  int right; // r8d
  int v20; // eax
  int v21; // edx
  int v22; // eax
  int v23; // edx
  int v24; // eax
  int v25; // eax
  unsigned int v27; // [rsp+20h] [rbp-41h]
  bool v28; // [rsp+40h] [rbp-21h] BYREF
  struct CVisual *v29; // [rsp+48h] [rbp-19h] BYREF
  struct CVisual *v30; // [rsp+50h] [rbp-11h] BYREF
  struct tagRECT rc; // [rsp+58h] [rbp-9h] BYREF
  struct CVisual **v32; // [rsp+68h] [rbp+7h]
  bool *v33; // [rsp+70h] [rbp+Fh]
  int v34; // [rsp+D8h] [rbp+77h] BYREF

  v34 = a4;
  v5 = *(_DWORD *)(a1 + 48);
  v6 = 0LL;
  v7 = *(_QWORD *)(a1 + 96) == -1LL;
  v9 = (struct tagRECT *)*((_QWORD *)a2 + 94);
  v29 = a3;
  v30 = 0LL;
  v28 = 1;
  if ( !v7 )
  {
    *(_QWORD *)&rc.right = a1;
    *(_QWORD *)&rc.left = &v34;
    v32 = &v29;
    v33 = &v28;
    CTransitionVisualController::ForEachOwnedWindow__lambda_7924ac7615675ed6f4f46acaa8a90be9___(
      (__int64)v9,
      (__int64)&rc,
      1);
    inserted = CTransitionVisualController::_StageCloneRelative(
                 (CTransitionVisualController *)a1,
                 a2,
                 v29,
                 0LL,
                 0LL,
                 1,
                 1,
                 &v28);
    v11 = inserted;
    if ( inserted >= 0 )
    {
      if ( !*((_DWORD *)v29 + 18) )
      {
        v11 = -2003304447;
        v27 = 248;
        goto LABEL_3;
      }
      if ( a5 != 1 )
        goto LABEL_45;
      left = v9[42].left;
      rc = v9[3];
      if ( (left & 0x1000000) != 0 )
      {
        v15 = 0;
        top = v9[42].top;
        if ( v9[42].bottom - top >= 0 )
          v15 = v9[42].bottom - top;
        v17 = 0;
        if ( rc.right - rc.left >= 0 )
          v17 = rc.right - rc.left;
        if ( v15 > v17 )
          rc.right = v15 + rc.left;
        v18 = 0;
        right = v9[42].right;
        if ( v9[43].left - right >= 0 )
          v18 = v9[43].left - right;
        v20 = 0;
        if ( rc.bottom - rc.top >= 0 )
          v20 = rc.bottom - rc.top;
        if ( v18 > v20 )
          rc.bottom = v18 + rc.top;
        OffsetRect(&rc, top, right);
        left = v9[42].left;
      }
      if ( (left & 0x800000) != 0 )
      {
        v21 = 0;
        if ( v9[44].bottom - v9[44].top >= 0 )
          v21 = v9[44].bottom - v9[44].top;
        v22 = 0;
        if ( rc.right - rc.left >= 0 )
          v22 = rc.right - rc.left;
        if ( v21 > v22 )
          rc.right = v21 + rc.left;
        v23 = 0;
        if ( v9[45].left - v9[44].right >= 0 )
          v23 = v9[45].left - v9[44].right;
        v24 = 0;
        if ( rc.bottom - rc.top >= 0 )
          v24 = rc.bottom - rc.top;
        if ( v23 > v24 )
          rc.bottom = v23 + rc.top;
      }
      v25 = CTransitionVisualController::CreateBackground(&rc, &v30);
      v11 = v25;
      if ( v25 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(
          0x14u,
          &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST,
          2LL,
          v25,
          0x119u);
        v6 = v30;
        goto LABEL_42;
      }
      v6 = v30;
      inserted = VisualCollection::InsertRelative((struct CVisual *)((char *)v29 + 32), v30, 0LL, 1u, 1);
      v11 = inserted;
      if ( inserted >= 0 )
        goto LABEL_45;
      v27 = 282;
    }
    else
    {
      v27 = 243;
    }
    v12 = inserted;
    goto LABEL_41;
  }
  v11 = -2147467259;
  v27 = 222;
LABEL_3:
  v12 = v11;
LABEL_41:
  MilInstrumentationCheckHR_MaybeFailFast(
    0x14u,
    &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST,
    2LL,
    v12,
    v27);
LABEL_42:
  VisualCollection::RemoveAll((struct CVisual *)((char *)v29 + 32));
  while ( *(_DWORD *)(a1 + 48) > v5 )
  {
    CTransitionVisualController::_MoveWindowOffscreen(
      *(struct CTopLevelWindow **)(*(_QWORD *)(a1 + 24) + 24LL * (unsigned int)(*(_DWORD *)(a1 + 48) - 1)),
      0);
    DynArray<CStationaryAnimation,0>::RemoveAt((__int64 *)(a1 + 24), *(_DWORD *)(a1 + 48) - 1);
  }
LABEL_45:
  if ( v6 )
    CBaseObject::Release(v6);
  return v11;
}
