/*
 * XREFs of ?_CreateMonitorSnapshot@CVirtualDesktopSwitch@@AEAAJPEAVCWindowData@@UtagRECT@@_NPEAPEAVCAnimationComponent@@@Z @ 0x1800DA3E8
 * Callers:
 *     ?OnTransitionWindow@CVirtualDesktopSwitch@@EEAAJPEAVCWindowData@@W4DWMTRANSITION_TARGET@@@Z @ 0x1800D8390 (-OnTransitionWindow@CVirtualDesktopSwitch@@EEAAJPEAVCWindowData@@W4DWMTRANSITION_TARGET@@@Z.c)
 *     ?_WindowEnumCallback@CVirtualDesktopSwitch@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x1800E08A0 (-_WindowEnumCallback@CVirtualDesktopSwitch@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800045F8 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetRootVisualForDesktop@CWindowList@@QEAAPEAVCRenderDataVisual@@_K@Z @ 0x18001E184 (-GetRootVisualForDesktop@CWindowList@@QEAAPEAVCRenderDataVisual@@_K@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180028A00 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?ProcessSnapshotOnVisual@CAnimatedTransitionVisual@@QEAAJPEAVCVisual@@AEBUtagRECT@@@Z @ 0x1800455BC (-ProcessSnapshotOnVisual@CAnimatedTransitionVisual@@QEAAJPEAVCVisual@@AEBUtagRECT@@@Z.c)
 *     ?SetVisual@CAnimatedTransitionVisual@@QEAAJPEAVCVisual@@_NPEBUtagRECT@@@Z @ 0x180045FEC (-SetVisual@CAnimatedTransitionVisual@@QEAAJPEAVCVisual@@_NPEBUtagRECT@@@Z.c)
 *     ?Create@CAnimatedTransitionVisual@@SAJPEAPEAV1@@Z @ 0x180047160 (-Create@CAnimatedTransitionVisual@@SAJPEAPEAV1@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180063740 (_guard_xfg_dispatch_icall_nop.c)
 *     ??0CAnimationComponent@@QEAA@PEAUHWND__@@W4DWMTRANSITION_TARGET@@HPEAVCStoryboard@@@Z @ 0x1800A521C (--0CAnimationComponent@@QEAA@PEAUHWND__@@W4DWMTRANSITION_TARGET@@HPEAVCStoryboard@@@Z.c)
 */

__int64 __fastcall CVirtualDesktopSwitch::_CreateMonitorSnapshot(
        CVirtualDesktopSwitch *this,
        struct CWindowData *a2,
        struct tagRECT *a3,
        char a4,
        struct CAnimationComponent **a5)
{
  int v5; // eax
  int v8; // eax
  unsigned int v11; // ebx
  struct CVisual *RootVisualForDesktop; // r14
  __int64 v13; // rax
  __int64 v14; // rsi
  int v15; // eax
  struct CAnimatedTransitionVisual *v16; // rdi
  int v17; // eax
  __int64 v18; // rax
  CCachedVisualImageProxy **v19; // rcx
  unsigned int v21; // [rsp+20h] [rbp-68h]
  struct CAnimatedTransitionVisual *v22; // [rsp+30h] [rbp-58h] BYREF
  __int64 v23; // [rsp+38h] [rbp-50h]
  unsigned __int64 v24[9]; // [rsp+40h] [rbp-48h] BYREF

  v5 = a3->right - a3->left;
  if ( v5 < 0 )
    v5 = 0;
  v22 = 0LL;
  LODWORD(v23) = v5;
  v8 = a3->bottom - a3->top;
  if ( v8 < 0 )
    v8 = 0;
  HIDWORD(v23) = v8;
  if ( !(unsigned int)GetDesktopID(1LL, v24) )
  {
    v11 = -2147467259;
    MilInstrumentationCheckHR_MaybeFailFast(
      0x14u,
      &CStoryboard::MILINSTRUMENTATIONHRESULTLIST,
      1LL,
      -2147467259,
      0x128Eu);
    return v11;
  }
  RootVisualForDesktop = CWindowList::GetRootVisualForDesktop(
                           *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 52),
                           v24[0]);
  v13 = (*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
          WPF::g_pProcessHeap,
          144LL);
  v24[1] = v13;
  if ( !v13
    || (v14 = CAnimationComponent::CAnimationComponent(v13, 0LL, *((_DWORD *)a2 + 168) & 0xFFF, 1, (__int64)this)) == 0 )
  {
    v11 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(
      0x14u,
      &CStoryboard::MILINSTRUMENTATIONHRESULTLIST,
      1LL,
      -2147024882,
      0x1296u);
    return v11;
  }
  v15 = CAnimatedTransitionVisual::Create(&v22);
  v11 = v15;
  if ( v15 >= 0 )
  {
    v16 = v22;
    v17 = CAnimatedTransitionVisual::SetVisual((struct CBaseImageProxy **)v22, RootVisualForDesktop, 1, a3);
    v11 = v17;
    if ( v17 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, &CStoryboard::MILINSTRUMENTATIONHRESULTLIST, 1LL, v17, 0x1299u);
      goto LABEL_21;
    }
    *((_DWORD *)v16 + 184) = *((_DWORD *)this + 18);
    v18 = v23;
    *((_DWORD *)v16 + 185) = 1;
    *((_QWORD *)v16 + 118) = 0LL;
    *((_QWORD *)v16 + 119) = v18;
    *(_QWORD *)(v14 + 40) = v16;
    _InterlockedAdd((volatile signed __int32 *)v16 + 4, 1u);
    *(struct tagRECT *)(v14 + 88) = *a3;
    if ( a4 )
    {
      v19 = *(CCachedVisualImageProxy ***)(v14 + 40);
      *(_BYTE *)(v14 + 67) = 1;
      v15 = CAnimatedTransitionVisual::ProcessSnapshotOnVisual(v19, RootVisualForDesktop, a3);
      v11 = v15;
      if ( v15 < 0 )
      {
        v21 = 4773;
        goto LABEL_11;
      }
      v15 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 5)
                                                            + 16LL)
                                              + 24LL))(*(_QWORD *)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance
                                                                   + 5)
                                                                 + 16LL));
      v11 = v15;
      if ( v15 < 0 )
      {
        v21 = 4774;
        goto LABEL_11;
      }
    }
    *a5 = (struct CAnimationComponent *)v14;
    _InterlockedAdd((volatile signed __int32 *)(v14 + 8), 1u);
    goto LABEL_20;
  }
  v21 = 4760;
LABEL_11:
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, &CStoryboard::MILINSTRUMENTATIONHRESULTLIST, 1LL, v15, v21);
LABEL_20:
  v16 = v22;
LABEL_21:
  CBaseObject::Release((CBaseObject *)v14);
  if ( v16 )
    CBaseObject::Release((struct CAnimatedTransitionVisual *)((char *)v16 + 8));
  return v11;
}
