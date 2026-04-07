/*
 * XREFs of ?CreateDesktopSnapshotComponent@CTransitionVisualController@@QEAAJW4DWMTRANSITION_TARGET@@AEBUtagRECT@@PEAVCStoryboard@@PEAPEAVCAnimationComponent@@@Z @ 0x1800EB190
 * Callers:
 *     ?OnBeginTransitionRequest@CTabletModeTransition@@UEAAJXZ @ 0x1800DB6B0 (-OnBeginTransitionRequest@CTabletModeTransition@@UEAAJXZ.c)
 * Callees:
 *     ??0CAnimationComponent@@QEAA@PEAUHWND__@@W4DWMTRANSITION_TARGET@@HPEAVCStoryboard@@@Z @ 0x18000C350 (--0CAnimationComponent@@QEAA@PEAUHWND__@@W4DWMTRANSITION_TARGET@@HPEAVCStoryboard@@@Z.c)
 *     ?_SetDesktopId@CTransitionVisualController@@IEAAJ_K@Z @ 0x18000C7C4 (-_SetDesktopId@CTransitionVisualController@@IEAAJ_K@Z.c)
 *     ?IsRTL@CStoryboard@@SA_NXZ @ 0x180016640 (-IsRTL@CStoryboard@@SA_NXZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180035400 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?GetRootVisualForDesktop@CWindowList@@QEAAPEAVCRenderDataVisual@@_K@Z @ 0x1800360BC (-GetRootVisualForDesktop@CWindowList@@QEAAPEAVCRenderDataVisual@@_K@Z.c)
 *     ?PropagateDirtyChildren@CVisual@@QEAAXXZ @ 0x180037860 (-PropagateDirtyChildren@CVisual@@QEAAXXZ.c)
 *     ?Create@CAnimatedTransitionVisual@@SAJPEAPEAV1@@Z @ 0x180042BB8 (-Create@CAnimatedTransitionVisual@@SAJPEAPEAV1@@Z.c)
 *     ?SetVisual@CAnimatedTransitionVisual@@QEAAJPEAVCVisual@@_NPEBUtagRECT@@@Z @ 0x1800430E4 (-SetVisual@CAnimatedTransitionVisual@@QEAAJPEAVCVisual@@_NPEBUtagRECT@@@Z.c)
 *     ?SetBeginRect@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z @ 0x180043514 (-SetBeginRect@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z.c)
 *     ?ProcessSnapshotOnVisual@CAnimatedTransitionVisual@@QEAAJPEAVCVisual@@AEBUtagRECT@@@Z @ 0x1800437C4 (-ProcessSnapshotOnVisual@CAnimatedTransitionVisual@@QEAAJPEAVCVisual@@AEBUtagRECT@@@Z.c)
 *     ?SetInterpolationMode@CVisual@@QEAAXW4Enum@MilBitmapInterpolationMode@@@Z @ 0x180054398 (-SetInterpolationMode@CVisual@@QEAAXW4Enum@MilBitmapInterpolationMode@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18006610C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800663A0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CTransitionVisualController::CreateDesktopSnapshotComponent(
        CTransitionVisualController *a1,
        __int64 a2,
        const struct tagRECT *a3,
        _DWORD *a4,
        __int64 *a5)
{
  CAnimatedTransitionVisual *v8; // rsi
  int v9; // edx
  int v10; // eax
  int v11; // eax
  int v12; // ecx
  int v13; // eax
  int v14; // eax
  __int64 v15; // rbx
  __int64 v16; // r8
  int v17; // eax
  __int64 v18; // r14
  unsigned int v19; // edi
  struct CVisual *RootVisualForDesktop; // rbx
  int v21; // r9d
  int v22; // eax
  int v23; // eax
  int v24; // eax
  __int64 v25; // rbx
  int v26; // eax
  unsigned int v28; // [rsp+20h] [rbp-30h]
  CAnimatedTransitionVisual *v29; // [rsp+30h] [rbp-20h] BYREF
  unsigned __int64 v30; // [rsp+38h] [rbp-18h] BYREF
  unsigned __int64 v31; // [rsp+40h] [rbp-10h] BYREF
  __int64 v32; // [rsp+48h] [rbp-8h]
  int v33; // [rsp+98h] [rbp+48h]
  int v34; // [rsp+A0h] [rbp+50h]

  v8 = 0LL;
  v29 = 0LL;
  v9 = a3->right - a3->left;
  v10 = v9;
  if ( v9 < 0 )
    v10 = 0;
  LODWORD(v32) = v10;
  v11 = 0;
  if ( v9 >= 0 )
    v11 = v9;
  v33 = v11;
  v12 = a3->bottom - a3->top;
  v13 = v12;
  if ( v12 < 0 )
    v13 = 0;
  HIDWORD(v32) = v13;
  v14 = 0;
  if ( v12 >= 0 )
    v14 = v12;
  v34 = v14;
  v30 = 0LL;
  v15 = (*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
          WPF::g_pProcessHeap,
          160LL);
  v31 = v15;
  if ( v15 )
  {
    v17 = (*(__int64 (__fastcall **)(_DWORD *, __int64))(*(_QWORD *)a4 + 112LL))(a4, 10LL);
    v18 = CAnimationComponent::CAnimationComponent(v15, -1LL, 10, v17, (__int64)a4);
  }
  else
  {
    v18 = 0LL;
  }
  if ( !v18 )
  {
    v19 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(
      0x14u,
      &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST,
      2LL,
      -2147024882,
      0x4E1u);
    return v19;
  }
  *(_DWORD *)(v18 + 60) = 0x7FFFFFFF;
  GetDesktopID(1LL, &v30, v16);
  RootVisualForDesktop = CWindowList::GetRootVisualForDesktop(
                           *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 54),
                           v30);
  if ( !RootVisualForDesktop )
  {
    v28 = 1255;
LABEL_16:
    v21 = -2147024882;
    v19 = -2147024882;
LABEL_17:
    MilInstrumentationCheckHR_MaybeFailFast(
      0x14u,
      &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST,
      2LL,
      v21,
      v28);
    goto LABEL_37;
  }
  v22 = CTransitionVisualController::_SetDesktopId(a1, v30);
  v19 = v22;
  if ( v22 < 0 )
  {
    v28 = 1258;
LABEL_20:
    v21 = v22;
    goto LABEL_17;
  }
  v23 = CAnimatedTransitionVisual::Create(&v29);
  v19 = v23;
  if ( v23 >= 0 )
  {
    v8 = v29;
    if ( !v29 )
    {
      v28 = 1262;
      goto LABEL_16;
    }
    v22 = CAnimatedTransitionVisual::SetVisual((struct CBaseImageProxy **)v29, RootVisualForDesktop, 1, a3);
    v19 = v22;
    if ( v22 < 0 )
    {
      v28 = 1265;
      goto LABEL_20;
    }
    v22 = CAnimatedTransitionVisual::ProcessSnapshotOnVisual((CCachedVisualImageProxy **)v8, RootVisualForDesktop, a3);
    v19 = v22;
    if ( v22 < 0 )
    {
      v28 = 1268;
      goto LABEL_20;
    }
    v22 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 6)
                                                          + 24LL)
                                            + 24LL))(*(_QWORD *)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance
                                                                 + 6)
                                                               + 24LL));
    v19 = v22;
    if ( v22 < 0 )
    {
      v28 = 1269;
      goto LABEL_20;
    }
    CAnimatedTransitionVisual::SetBeginRect((struct tagPOINT *)v8, a3);
    *(struct tagRECT *)((char *)v8 + 872) = *a3;
    v24 = *((_DWORD *)v8 + 24);
    if ( (v24 & 0x1000) == 0 )
    {
      *((_DWORD *)v8 + 24) = v24 | 0x1000;
      CVisual::PropagateDirtyChildren((CAnimatedTransitionVisual *)((char *)v8 + 8));
    }
    v31 = __PAIR64__(v34, v33);
    (*(void (__fastcall **)(__int64, unsigned __int64 *))(*((_QWORD *)v8 + 1) + 104LL))((__int64)v8 + 8, &v31);
    v25 = v32;
    *((_QWORD *)v8 + 119) = v32;
    CVisual::SetInterpolationMode((unsigned int *)v8 + 2, 1u);
    v26 = (*(__int64 (__fastcall **)(_DWORD *, __int64))(*(_QWORD *)a4 + 112LL))(a4, 10LL);
    *((_DWORD *)v8 + 184) = a4[18];
    *((_DWORD *)v8 + 185) = v26;
    *((_BYTE *)v8 + 972) = CStoryboard::IsRTL();
    *(_QWORD *)(v18 + 40) = v8;
    _InterlockedIncrement((volatile signed __int32 *)v8 + 4);
    *(struct tagRECT *)(v18 + 88) = *a3;
    if ( *(_DWORD *)(v18 + 68) != 2 )
      *(_DWORD *)(v18 + 68) = 1;
    *((_QWORD *)v29 + 118) = 0LL;
    *((_QWORD *)v8 + 119) = v25;
    *a5 = v18;
    _InterlockedIncrement((volatile signed __int32 *)(v18 + 8));
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast(
      0x14u,
      &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST,
      2LL,
      v23,
      0x4EDu);
  }
  v8 = v29;
LABEL_37:
  CBaseObject::Release((CBaseObject *)v18);
  if ( v8 )
    CBaseObject::Release((CAnimatedTransitionVisual *)((char *)v8 + 8));
  return v19;
}
