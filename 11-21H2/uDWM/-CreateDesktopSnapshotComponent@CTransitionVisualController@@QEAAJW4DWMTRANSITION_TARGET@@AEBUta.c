/*
 * XREFs of ?CreateDesktopSnapshotComponent@CTransitionVisualController@@QEAAJW4DWMTRANSITION_TARGET@@AEBUtagRECT@@PEAVCStoryboard@@PEAPEAVCAnimationComponent@@@Z @ 0x1800EBF40
 * Callers:
 *     ?OnBeginTransitionRequest@CTabletModeTransition@@UEAAJXZ @ 0x1800D79D0 (-OnBeginTransitionRequest@CTabletModeTransition@@UEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800045F8 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x18001DB80 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 *     ?GetRootVisualForDesktop@CWindowList@@QEAAPEAVCRenderDataVisual@@_K@Z @ 0x18001E184 (-GetRootVisualForDesktop@CWindowList@@QEAAPEAVCRenderDataVisual@@_K@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180028A00 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?SetInterpolationMode@CVisual@@QEAAXW4Enum@MilBitmapInterpolationMode@@@Z @ 0x180045570 (-SetInterpolationMode@CVisual@@QEAAXW4Enum@MilBitmapInterpolationMode@@@Z.c)
 *     ?ProcessSnapshotOnVisual@CAnimatedTransitionVisual@@QEAAJPEAVCVisual@@AEBUtagRECT@@@Z @ 0x1800455BC (-ProcessSnapshotOnVisual@CAnimatedTransitionVisual@@QEAAJPEAVCVisual@@AEBUtagRECT@@@Z.c)
 *     ?SetBeginRect@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z @ 0x180045F18 (-SetBeginRect@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z.c)
 *     ?SetVisual@CAnimatedTransitionVisual@@QEAAJPEAVCVisual@@_NPEBUtagRECT@@@Z @ 0x180045FEC (-SetVisual@CAnimatedTransitionVisual@@QEAAJPEAVCVisual@@_NPEBUtagRECT@@@Z.c)
 *     ?Create@CAnimatedTransitionVisual@@SAJPEAPEAV1@@Z @ 0x180047160 (-Create@CAnimatedTransitionVisual@@SAJPEAPEAV1@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180063740 (_guard_xfg_dispatch_icall_nop.c)
 *     ??0CAnimationComponent@@QEAA@PEAUHWND__@@W4DWMTRANSITION_TARGET@@HPEAVCStoryboard@@@Z @ 0x1800A521C (--0CAnimationComponent@@QEAA@PEAUHWND__@@W4DWMTRANSITION_TARGET@@HPEAVCStoryboard@@@Z.c)
 *     ?IsRTL@CStoryboard@@SA_NXZ @ 0x1800D7618 (-IsRTL@CStoryboard@@SA_NXZ.c)
 *     ?_SetDesktopId@CTransitionVisualController@@IEAAJ_K@Z @ 0x1800EF1AC (-_SetDesktopId@CTransitionVisualController@@IEAAJ_K@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CTransitionVisualController::CreateDesktopSnapshotComponent(
        CTransitionVisualController *a1,
        __int64 a2,
        const struct tagRECT *a3,
        _DWORD *a4,
        __int64 *a5)
{
  CAnimatedTransitionVisual *v8; // r14
  int v9; // edx
  int v10; // eax
  int v11; // eax
  int v12; // ecx
  int v13; // eax
  int v14; // eax
  __int64 v15; // rbx
  int v16; // eax
  __int64 v17; // r15
  unsigned int v18; // esi
  struct CVisual *RootVisualForDesktop; // rbx
  int v20; // r9d
  int v21; // eax
  int v22; // eax
  __int64 v23; // rbx
  int v24; // eax
  unsigned int v26; // [rsp+20h] [rbp-30h]
  CAnimatedTransitionVisual *v27; // [rsp+30h] [rbp-20h] BYREF
  unsigned __int64 v28; // [rsp+38h] [rbp-18h] BYREF
  unsigned __int64 v29; // [rsp+40h] [rbp-10h] BYREF
  __int64 v30; // [rsp+48h] [rbp-8h]
  int v31; // [rsp+98h] [rbp+48h]
  int v32; // [rsp+A0h] [rbp+50h]

  v8 = 0LL;
  v27 = 0LL;
  v9 = a3->right - a3->left;
  v10 = v9;
  if ( v9 < 0 )
    v10 = 0;
  LODWORD(v30) = v10;
  v11 = 0;
  if ( v9 >= 0 )
    v11 = v9;
  v31 = v11;
  v12 = a3->bottom - a3->top;
  v13 = v12;
  if ( v12 < 0 )
    v13 = 0;
  HIDWORD(v30) = v13;
  v14 = 0;
  if ( v12 >= 0 )
    v14 = v12;
  v32 = v14;
  v28 = 0LL;
  v15 = (*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
          WPF::g_pProcessHeap,
          144LL);
  v29 = v15;
  if ( v15 )
  {
    v16 = (*(__int64 (__fastcall **)(_DWORD *, __int64))(*(_QWORD *)a4 + 112LL))(a4, 10LL);
    v17 = CAnimationComponent::CAnimationComponent(v15, -1LL, 10, v16, (__int64)a4);
  }
  else
  {
    v17 = 0LL;
  }
  if ( !v17 )
  {
    v18 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(
      0x14u,
      &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST,
      2LL,
      -2147024882,
      0x516u);
    return v18;
  }
  *(_DWORD *)(v17 + 60) = 0x7FFFFFFF;
  GetDesktopID(1LL, &v28);
  RootVisualForDesktop = CWindowList::GetRootVisualForDesktop(
                           *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 52),
                           v28);
  if ( !RootVisualForDesktop )
  {
    v26 = 1308;
LABEL_16:
    v20 = -2147024882;
    v18 = -2147024882;
LABEL_17:
    MilInstrumentationCheckHR_MaybeFailFast(
      0x14u,
      &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST,
      2LL,
      v20,
      v26);
    goto LABEL_35;
  }
  v21 = CTransitionVisualController::_SetDesktopId(a1, v28);
  v18 = v21;
  if ( v21 < 0 )
  {
    v26 = 1311;
LABEL_20:
    v20 = v21;
    goto LABEL_17;
  }
  v22 = CAnimatedTransitionVisual::Create(&v27);
  v18 = v22;
  if ( v22 >= 0 )
  {
    v8 = v27;
    if ( !v27 )
    {
      v26 = 1315;
      goto LABEL_16;
    }
    v21 = CAnimatedTransitionVisual::SetVisual((struct CBaseImageProxy **)v27, RootVisualForDesktop, 1, a3);
    v18 = v21;
    if ( v21 < 0 )
    {
      v26 = 1318;
      goto LABEL_20;
    }
    v21 = CAnimatedTransitionVisual::ProcessSnapshotOnVisual((CCachedVisualImageProxy **)v8, RootVisualForDesktop, a3);
    v18 = v21;
    if ( v21 < 0 )
    {
      v26 = 1321;
      goto LABEL_20;
    }
    v21 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 5)
                                                          + 16LL)
                                            + 24LL))(*(_QWORD *)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance
                                                                 + 5)
                                                               + 16LL));
    v18 = v21;
    if ( v21 < 0 )
    {
      v26 = 1322;
      goto LABEL_20;
    }
    CAnimatedTransitionVisual::SetBeginRect((struct tagPOINT *)v8, a3);
    *(struct tagRECT *)((char *)v8 + 872) = *a3;
    CVisual::SetDirtyFlags((CAnimatedTransitionVisual *)((char *)v8 + 8), 4096);
    v29 = __PAIR64__(v32, v31);
    (*(void (__fastcall **)(__int64, unsigned __int64 *))(*((_QWORD *)v8 + 1) + 96LL))((__int64)v8 + 8, &v29);
    v23 = v30;
    *((_QWORD *)v8 + 119) = v30;
    CVisual::SetInterpolationMode((unsigned int *)v8 + 2, 1u);
    v24 = (*(__int64 (__fastcall **)(_DWORD *, __int64))(*(_QWORD *)a4 + 112LL))(a4, 10LL);
    *((_DWORD *)v8 + 184) = a4[18];
    *((_DWORD *)v8 + 185) = v24;
    *((_BYTE *)v8 + 972) = CStoryboard::IsRTL();
    *(_QWORD *)(v17 + 40) = v8;
    _InterlockedIncrement((volatile signed __int32 *)v8 + 4);
    *(struct tagRECT *)(v17 + 88) = *a3;
    if ( *(_DWORD *)(v17 + 68) != 2 )
      *(_DWORD *)(v17 + 68) = 1;
    *((_QWORD *)v27 + 118) = 0LL;
    *((_QWORD *)v8 + 119) = v23;
    *a5 = v17;
    _InterlockedIncrement((volatile signed __int32 *)(v17 + 8));
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast(
      0x14u,
      &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST,
      2LL,
      v22,
      0x522u);
  }
  v8 = v27;
LABEL_35:
  CBaseObject::Release((CBaseObject *)v17);
  if ( v8 )
    CBaseObject::Release((CAnimatedTransitionVisual *)((char *)v8 + 8));
  return v18;
}
