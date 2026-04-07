/*
 * XREFs of ?_SetupHighZOrderStaticWindows@CTransitionVisualController@@IEAAJXZ @ 0x1800EF294
 * Callers:
 *     ?OnVisibilityUpdated@CWindowData@@QEAAJXZ @ 0x18001F7F8 (-OnVisibilityUpdated@CWindowData@@QEAAJXZ.c)
 *     ?SetupZOrder@CTransitionVisualController@@QEAAJXZ @ 0x1800EE154 (-SetupZOrder@CTransitionVisualController@@QEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800045F8 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetWindowListForDesktop@CWindowList@@QEAAPEAU_LIST_ENTRY@@_K@Z @ 0x180012D9C (-GetWindowListForDesktop@CWindowList@@QEAAPEAU_LIST_ENTRY@@_K@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180028A00 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z @ 0x180034D80 (-InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z.c)
 *     McTemplateU0pp_EtwEventWriteTransfer @ 0x180048B68 (McTemplateU0pp_EtwEventWriteTransfer.c)
 *     ?IsWindowVisibleAndUncloaked@CWindowData@@QEBA_NXZ @ 0x18005F568 (-IsWindowVisibleAndUncloaked@CWindowData@@QEBA_NXZ.c)
 *     memset_0 @ 0x180060F40 (memset_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180063740 (_guard_xfg_dispatch_icall_nop.c)
 *     ?RemoveAt@?$DynArray@UCStationaryAnimation@@$0A@@@QEAAJI@Z @ 0x1800AD98C (-RemoveAt@-$DynArray@UCStationaryAnimation@@$0A@@@QEAAJI@Z.c)
 *     ?Create@CImmersiveState@@SAJPEAPEAV1@_K@Z @ 0x1800BFC10 (-Create@CImmersiveState@@SAJPEAPEAV1@_K@Z.c)
 *     ?IsLauncherShownAboveWindow@CImmersiveState@@QEAA_NPEBVCWindowData@@@Z @ 0x1800BFE70 (-IsLauncherShownAboveWindow@CImmersiveState@@QEAA_NPEBVCWindowData@@@Z.c)
 *     ?HasVisibleStyle@CTransitionVisualController@@SA_NPEAUHWND__@@@Z @ 0x1800D7484 (-HasVisibleStyle@CTransitionVisualController@@SA_NPEAUHWND__@@@Z.c)
 *     ?ShouldCloneWindow@CTransitionVisualController@@SA_NPEAUHWND__@@@Z @ 0x1800EE360 (-ShouldCloneWindow@CTransitionVisualController@@SA_NPEAUHWND__@@@Z.c)
 *     ?_CleanupHighZOrderClone@CTransitionVisualController@@IEAAXAEAUTlwPair@1@@Z @ 0x1800EE4F0 (-_CleanupHighZOrderClone@CTransitionVisualController@@IEAAXAEAUTlwPair@1@@Z.c)
 *     ?_FindClone@CTransitionVisualController@@IEAAIPEAVCWindowData@@_N@Z @ 0x1800EEDEC (-_FindClone@CTransitionVisualController@@IEAAIPEAVCWindowData@@_N@Z.c)
 *     ?_IsAnimationComponentVisible@CTransitionVisualController@@IEAA_NPEAVCAnimationComponent@@@Z @ 0x1800EEE50 (-_IsAnimationComponentVisible@CTransitionVisualController@@IEAA_NPEAVCAnimationComponent@@@Z.c)
 *     ?_IsOwnedByVisibleAC@CTransitionVisualController@@IEAA_NPEBVCWindowData@@@Z @ 0x1800EEE90 (-_IsOwnedByVisibleAC@CTransitionVisualController@@IEAA_NPEBVCWindowData@@@Z.c)
 *     ?_ShouldMoveOriginalWindowOffscreenForClone@CTransitionVisualController@@IEAA_NPEAVCWindowData@@@Z @ 0x1800EF74C (-_ShouldMoveOriginalWindowOffscreenForClone@CTransitionVisualController@@IEAA_NPEAVCWindowData@@.c)
 *     ?_StageCloneRelative@CTransitionVisualController@@IEAAJPEAVCTopLevelWindow@@PEAVCVisual@@_N122PEA_N@Z @ 0x1800EF85C (-_StageCloneRelative@CTransitionVisualController@@IEAAJPEAVCTopLevelWindow@@PEAVCVisual@@_N122PE.c)
 */

__int64 __fastcall CTransitionVisualController::_SetupHighZOrderStaticWindows(CTransitionVisualController *this)
{
  unsigned int v1; // ebp
  _BYTE *v2; // r13
  __int64 v4; // rdx
  __int64 v5; // rcx
  size_t v6; // rdi
  _BYTE *v7; // rax
  __int64 v8; // r12
  int v9; // r15d
  struct _LIST_ENTRY *v10; // rsi
  int v11; // eax
  struct _LIST_ENTRY *Blink; // rdi
  __int64 v13; // rdi
  char v14; // bp
  __int64 v15; // r14
  HWND v16; // rcx
  char v17; // r14
  __int64 v18; // rsi
  __int64 v19; // rbp
  unsigned int v20; // eax
  int v21; // ecx
  unsigned int Clone; // eax
  CTransitionVisualController *v23; // rcx
  char v24; // r8
  __int64 v25; // r14
  __int64 v26; // rsi
  struct CVisual *v27; // rsi
  __int64 v28; // rcx
  bool ShouldMoveOriginalWindowOffscreenForClone; // al
  int v30; // eax
  __int64 v31; // r9
  __int64 v32; // rdi
  __int64 v33; // rsi
  __int64 v34; // rdx
  __int64 v36; // [rsp+40h] [rbp-68h]
  CWindowData *v37; // [rsp+48h] [rbp-60h]
  size_t v38; // [rsp+50h] [rbp-58h]
  struct _LIST_ENTRY *WindowListForDesktop; // [rsp+58h] [rbp-50h]
  char i; // [rsp+B0h] [rbp+8h]
  unsigned int v41; // [rsp+B8h] [rbp+10h]
  __int64 v42; // [rsp+C0h] [rbp+18h]
  CImmersiveState *v43; // [rsp+C8h] [rbp+20h] BYREF

  v1 = 0;
  v2 = 0LL;
  v43 = 0LL;
  if ( *((_QWORD *)this + 12) == -1LL )
    goto LABEL_68;
  v4 = 0LL;
  for ( i = 1; (unsigned int)v4 < *((_DWORD *)this + 12); *(_BYTE *)(*((_QWORD *)this + 3) + 8 * v5 + 17) = 0 )
  {
    v5 = 3 * v4;
    v4 = (unsigned int)(v4 + 1);
  }
  v6 = *((int *)this + 34);
  v38 = v6;
  v7 = (_BYTE *)(*(__int64 (__fastcall **)(WPF::HeapBase *, size_t))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
                  WPF::g_pProcessHeap,
                  v6);
  v2 = v7;
  if ( !v7 )
  {
    v1 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(
      0x14u,
      &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST,
      2LL,
      -2147024882,
      0x7BAu);
    goto LABEL_68;
  }
  memset_0(v7, 0, v6);
  v8 = (unsigned int)(v6 - 1);
  v9 = v6 - 1;
  WindowListForDesktop = CWindowList::GetWindowListForDesktop(*((CWindowList **)CDesktopManager::s_pDesktopManagerInstance
                                                              + 52));
  v10 = WindowListForDesktop;
  if ( !WindowListForDesktop )
    goto LABEL_60;
  v11 = CImmersiveState::Create(&v43, *((_QWORD *)this + 12));
  v41 = v11;
  v1 = v11;
  if ( v11 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(
      0x14u,
      &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST,
      2LL,
      v11,
      0x7C3u);
    goto LABEL_66;
  }
  Blink = WindowListForDesktop->Blink;
  v37 = (CWindowData *)Blink;
  if ( (int)v8 < 0 )
  {
LABEL_60:
    v32 = (unsigned int)(*((_DWORD *)this + 12) - 1);
    if ( (int)v32 >= 0 )
    {
      v33 = 24LL * (int)v32;
      do
      {
        v34 = *((_QWORD *)this + 3);
        if ( *(_BYTE *)(v34 + v33 + 16) && !*(_BYTE *)(v34 + v33 + 17) )
        {
          CTransitionVisualController::_CleanupHighZOrderClone(this, (struct CTopLevelWindow **)(v34 + 24 * v32));
          DynArray<CStationaryAnimation,0>::RemoveAt((__int64 *)this + 3, v32);
        }
        v33 -= 24LL;
        v32 = (unsigned int)(v32 - 1);
      }
      while ( (int)v32 >= 0 );
    }
    goto LABEL_66;
  }
  v42 = (int)v8;
  v36 = (int)v8;
  while ( 2 )
  {
    if ( Blink == v10 || v9 < 0 )
    {
LABEL_59:
      if ( !i )
        goto LABEL_66;
      goto LABEL_60;
    }
    v13 = v42;
    v14 = i;
    while ( 1 )
    {
      v15 = v13;
      v16 = *(HWND *)(*(_QWORD *)(*((_QWORD *)this + 14) + 8LL * (unsigned int)v9) + 16LL);
      if ( v16 != HWND_MESSAGE|0x2LL )
        break;
LABEL_19:
      --v13;
      v2[v15] = 1;
      if ( --v9 < 0 )
        goto LABEL_20;
    }
    if ( !CTransitionVisualController::HasVisibleStyle(v16)
      && !CTransitionVisualController::_IsAnimationComponentVisible(
            (CTransitionVisualController *)v16,
            *(struct CAnimationComponent **)(*((_QWORD *)this + 14) + 8LL * (unsigned int)v9)) )
    {
      LOBYTE(v16) = -CTransitionVisualController::HasVisibleStyle(*(HWND *)(*(_QWORD *)(*((_QWORD *)this + 14)
                                                                                      + 8LL * (unsigned int)v9)
                                                                          + 16LL));
      v14 &= (unsigned __int8)v16;
      goto LABEL_19;
    }
LABEL_20:
    i = v14;
    v1 = v41;
    v42 = v13;
    if ( v9 < 0 )
      goto LABEL_59;
    v17 = 0;
    v18 = v38 - 1;
    if ( (__int64)(v38 - 1) >= 0 )
    {
      v19 = v13;
      do
      {
        if ( CTransitionVisualController::_IsAnimationComponentVisible(
               (CTransitionVisualController *)v16,
               *(struct CAnimationComponent **)(*((_QWORD *)this + 14) + 8 * v18)) )
        {
          v16 = *(HWND *)(*((_QWORD *)this + 14) + 8 * v18);
          if ( *((_QWORD *)v16 + 2) == *((_QWORD *)v37 + 5) )
          {
            v17 = 1;
            --v9;
            v2[v18] = 1;
            --v19;
          }
        }
        --v18;
      }
      while ( v18 >= 0 );
      v42 = v19;
      v1 = v41;
      if ( v17 )
        goto LABEL_56;
    }
    if ( !*((_QWORD *)v37 + 3) )
      goto LABEL_56;
    if ( !*((_QWORD *)v37 + 55) )
      goto LABEL_56;
    if ( !CWindowData::IsWindowVisibleAndUncloaked(v37) )
      goto LABEL_56;
    if ( (*((_DWORD *)v37 + 29) & 0x20000000) != 0 )
      goto LABEL_56;
    v20 = *((_DWORD *)v37 + 33);
    if ( v20 <= 0xC )
    {
      v21 = 4162;
      if ( _bittest(&v21, v20) )
        goto LABEL_56;
    }
    if ( !CTransitionVisualController::ShouldCloneWindow(*((HWND *)v37 + 5))
      || CImmersiveState::IsLauncherShownAboveWindow(v43, (const struct tagRECT *)v37)
      || CTransitionVisualController::_IsOwnedByVisibleAC(this, v37) )
    {
      goto LABEL_56;
    }
    Clone = CTransitionVisualController::_FindClone(this, v37, 1);
    if ( Clone >= *((_DWORD *)this + 12) )
    {
      v24 = 0;
    }
    else
    {
      v23 = (CTransitionVisualController *)*((_QWORD *)this + 3);
      *((_BYTE *)v23 + 24 * Clone + 17) = v24;
    }
    v25 = v36;
    if ( v36 >= 0 )
    {
      do
      {
        if ( !v2[v25] )
          break;
        v8 = (unsigned int)(v8 - 1);
        --v25;
      }
      while ( v25 >= 0 );
      v36 = v25;
    }
    if ( (int)v8 >= 0
      && (_mm_lfence(),
          v23 = *(CTransitionVisualController **)(*((_QWORD *)this + 14) + 8 * v8),
          (v26 = *((_QWORD *)v23 + 5)) != 0) )
    {
      v27 = (struct CVisual *)(v26 + 8);
    }
    else
    {
      v27 = 0LL;
    }
    if ( v24 )
    {
      VisualCollection::InsertRelative(
        (VisualCollection *)(*((_QWORD *)this + 2) + 32LL),
        *(struct CVisual **)(*((_QWORD *)this + 3) + 24LL * Clone + 8),
        v27,
        1u,
        1);
LABEL_51:
      if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
      {
        if ( (int)v8 < 0 )
        {
          v31 = 0LL;
        }
        else
        {
          _mm_lfence();
          v28 = *(_QWORD *)(*((_QWORD *)this + 14) + 8 * v8);
          v31 = *(_QWORD *)(v28 + 16);
        }
        McTemplateU0pp_EtwEventWriteTransfer(v28, (__int64)&UdwmSystemAnimation_ZOrderClone, *((_QWORD *)v37 + 5), v31);
      }
LABEL_56:
      Blink = (struct _LIST_ENTRY *)*((_QWORD *)v37 + 1);
      v37 = (CWindowData *)Blink;
      if ( v9 >= 0 )
      {
        v10 = WindowListForDesktop;
        continue;
      }
      goto LABEL_59;
    }
    break;
  }
  ShouldMoveOriginalWindowOffscreenForClone = CTransitionVisualController::_ShouldMoveOriginalWindowOffscreenForClone(
                                                v23,
                                                v37);
  v30 = CTransitionVisualController::_StageCloneRelative(
          this,
          *((struct CTopLevelWindow **)v37 + 55),
          *((struct CVisual **)this + 2),
          1,
          v27,
          1,
          ShouldMoveOriginalWindowOffscreenForClone,
          0LL);
  v41 = v30;
  v1 = v30;
  if ( v30 >= 0 )
    goto LABEL_51;
  MilInstrumentationCheckHR_MaybeFailFast(
    0x14u,
    &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST,
    2LL,
    v30,
    0x841u);
LABEL_66:
  if ( v43 )
    CBaseObject::Release(v43);
LABEL_68:
  (*(void (__fastcall **)(WPF::HeapBase *, _BYTE *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(WPF::g_pProcessHeap, v2);
  return v1;
}
