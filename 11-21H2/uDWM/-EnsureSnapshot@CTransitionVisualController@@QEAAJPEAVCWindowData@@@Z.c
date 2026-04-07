/*
 * XREFs of ?EnsureSnapshot@CTransitionVisualController@@QEAAJPEAVCWindowData@@@Z @ 0x1800EC7CC
 * Callers:
 *     ?OnWindowTransitionTargetChanged@CAnimationScheduler@@QEAAJPEAVCWindowData@@W4DWMTRANSITION_TARGET@@AEBUtagRECT@@2222@Z @ 0x18004C9BC (-OnWindowTransitionTargetChanged@CAnimationScheduler@@QEAAJPEAVCWindowData@@W4DWMTRANSITION_TARG.c)
 * Callees:
 *     McTemplateU0p_EtwEventWriteTransfer @ 0x180003C20 (McTemplateU0p_EtwEventWriteTransfer.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800045F8 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?UpdateSceneImpl@CDesktopManager@@AEAAJPEAVCVisual@@@Z @ 0x180009CF0 (-UpdateSceneImpl@CDesktopManager@@AEAAJPEAVCVisual@@@Z.c)
 *     ?_GetSnapshotIndex@CTransitionVisualController@@IEAAHPEAUHWND__@@@Z @ 0x180013CE0 (-_GetSnapshotIndex@CTransitionVisualController@@IEAAHPEAUHWND__@@@Z.c)
 *     ?GetRootVisualForDesktop@CWindowList@@QEAAPEAVCRenderDataVisual@@_K@Z @ 0x18001E184 (-GetRootVisualForDesktop@CWindowList@@QEAAPEAVCRenderDataVisual@@_K@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180028A00 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z @ 0x180034D80 (-InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180035AB8 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?Create@CVisual@@SAJPEAPEAV1@@Z @ 0x180046E0C (-Create@CVisual@@SAJPEAPEAV1@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180063740 (_guard_xfg_dispatch_icall_nop.c)
 *     ?CanUseCVIFromSnapshot@CTransitionWindowSnapshot@@SA_NPEBVCWindowData@@@Z @ 0x1800EA120 (-CanUseCVIFromSnapshot@CTransitionWindowSnapshot@@SA_NPEBVCWindowData@@@Z.c)
 *     ?GetClonableOwnedWindowCount@CTransitionVisualController@@SAHPEAVCWindowData@@@Z @ 0x1800ECD98 (-GetClonableOwnedWindowCount@CTransitionVisualController@@SAHPEAVCWindowData@@@Z.c)
 *     ?_EnsureStagingVisualRoot@CTransitionVisualController@@IEAAJXZ @ 0x1800EE88C (-_EnsureStagingVisualRoot@CTransitionVisualController@@IEAAJXZ.c)
 *     ?_FindClone@CTransitionVisualController@@IEAAIPEAVCWindowData@@_N@Z @ 0x1800EEDEC (-_FindClone@CTransitionVisualController@@IEAAIPEAVCWindowData@@_N@Z.c)
 *     ?_MoveOwnedWindowTreeOffscreen@CTransitionVisualController@@KAXPEAVCWindowData@@@Z @ 0x1800EEF64 (-_MoveOwnedWindowTreeOffscreen@CTransitionVisualController@@KAXPEAVCWindowData@@@Z.c)
 *     ?_SetDesktopId@CTransitionVisualController@@IEAAJ_K@Z @ 0x1800EF1AC (-_SetDesktopId@CTransitionVisualController@@IEAAJ_K@Z.c)
 *     ?_StageCloneRelative@CTransitionVisualController@@IEAAJPEAVCTopLevelWindow@@PEAVCVisual@@_N122PEA_N@Z @ 0x1800EF85C (-_StageCloneRelative@CTransitionVisualController@@IEAAJPEAVCTopLevelWindow@@PEAVCVisual@@_N122PE.c)
 *     ?_StageCloneWithOwnedWindows@CTransitionVisualController@@IEAAJPEAVCTopLevelWindow@@PEAVCVisual@@HW4StagedBackgroundPolicy@1@@Z @ 0x1800EFAB0 (-_StageCloneWithOwnedWindows@CTransitionVisualController@@IEAAJPEAVCTopLevelWindow@@PEAVCVisual@.c)
 *     ?Create@CTransitionWindowSnapshot@@SAJPEAVCTopLevelWindow@@PEAVCVisual@@PEBUtagRECT@@PEAPEAV1@@Z @ 0x1800F0138 (-Create@CTransitionWindowSnapshot@@SAJPEAVCTopLevelWindow@@PEAVCVisual@@PEBUtagRECT@@PEAPEAV1@@Z.c)
 */

__int64 __fastcall CTransitionVisualController::EnsureSnapshot(
        CTransitionVisualController *this,
        struct CWindowData *a2)
{
  int v2; // eax
  volatile signed __int32 *v5; // rsi
  int v6; // r13d
  char v7; // r12
  int v8; // eax
  int v9; // ebx
  struct tagRECT *v10; // r15
  int v11; // eax
  unsigned int Clone; // r15d
  int inserted; // eax
  struct CTopLevelWindow *v14; // rdx
  int v15; // eax
  unsigned int v16; // eax
  unsigned int v17; // edx
  unsigned int v18; // eax
  struct CRenderDataVisual *RootVisualForDesktop; // rax
  struct CVisual *v20; // r14
  struct CVisual *v21; // r8
  CDesktopManager *v22; // rcx
  __int64 v23; // rcx
  struct CVisual *v24; // rdx
  unsigned int v26; // [rsp+20h] [rbp-30h]
  unsigned int v27; // [rsp+20h] [rbp-30h]
  __int128 v28; // [rsp+40h] [rbp-10h] BYREF
  CBaseObject *v29; // [rsp+98h] [rbp+48h] BYREF
  CBaseObject *v30; // [rsp+A0h] [rbp+50h] BYREF
  struct tagRECT *v31; // [rsp+A8h] [rbp+58h]

  v2 = *((_DWORD *)a2 + 168);
  v29 = 0LL;
  v5 = 0LL;
  if ( (v2 & 0x40000) != 0 )
  {
    v6 = 1;
LABEL_5:
    v7 = 1;
    goto LABEL_7;
  }
  v6 = 0;
  if ( (v2 & 0x10000000) != 0 && (int)CTransitionVisualController::GetClonableOwnedWindowCount(a2) > 0 )
    goto LABEL_5;
  v7 = 0;
LABEL_7:
  v30 = 0LL;
  v8 = CTransitionVisualController::_EnsureStagingVisualRoot(this);
  v9 = v8;
  if ( v8 < 0 )
  {
    v26 = 2717;
LABEL_9:
    MilInstrumentationCheckHR_MaybeFailFast(
      0x14u,
      &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST,
      2LL,
      v8,
      v26);
    return (unsigned int)v9;
  }
  if ( !*((_QWORD *)a2 + 5) )
  {
    v9 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(
      0x14u,
      &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST,
      2LL,
      -2147024809,
      0xAA1u);
    return (unsigned int)v9;
  }
  v8 = CTransitionVisualController::_SetDesktopId(this, *((_QWORD *)a2 + 17));
  v9 = v8;
  if ( v8 < 0 )
  {
    v26 = 2725;
    goto LABEL_9;
  }
  if ( (int)CTransitionVisualController::_GetSnapshotIndex(this, *((HWND *)a2 + 5)) < 0 )
  {
    v10 = (struct tagRECT *)(((unsigned __int64)a2 + 676) & -(__int64)((*((_DWORD *)a2 + 168) & 0x1000000) != 0));
    v31 = v10;
    v28 = 0LL;
    if ( CTransitionWindowSnapshot::CanUseCVIFromSnapshot(a2) )
    {
      v11 = CTransitionWindowSnapshot::Create(*((struct CTopLevelWindow **)a2 + 55), 0LL, v10, &v29);
      v5 = (volatile signed __int32 *)v29;
      if ( v11 >= 0 )
      {
LABEL_18:
        *(_QWORD *)&v28 = *((_QWORD *)a2 + 5);
        *((_QWORD *)&v28 + 1) = v5;
        goto LABEL_39;
      }
    }
    if ( (*((_BYTE *)a2 + 668) & 0x10) != 0 )
    {
      v9 = -2147483638;
    }
    else
    {
      Clone = CTransitionVisualController::_FindClone(this, a2, 0);
      if ( Clone >= *((_DWORD *)this + 12) )
      {
        inserted = CVisual::Create(&v30);
        v9 = inserted;
        if ( inserted < 0 )
        {
          v27 = 2746;
LABEL_61:
          MilInstrumentationCheckHR_MaybeFailFast(
            0x14u,
            &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST,
            2LL,
            inserted,
            v27);
          goto LABEL_62;
        }
        inserted = VisualCollection::InsertRelative((VisualCollection *)(*((_QWORD *)this + 18) + 32LL), v30, 0LL, 0, 1);
        v9 = inserted;
        if ( inserted < 0 )
        {
          v27 = 2747;
          goto LABEL_61;
        }
        v14 = (struct CTopLevelWindow *)*((_QWORD *)a2 + 55);
        if ( v7 )
        {
          inserted = CTransitionVisualController::_StageCloneWithOwnedWindows(this, v14, v30, 0xFFFFFFFFLL, v6);
          v9 = inserted;
          if ( inserted < 0 )
          {
            v27 = 2752;
            goto LABEL_61;
          }
          Clone = CTransitionVisualController::_FindClone(this, a2, 0);
        }
        else
        {
          inserted = CTransitionVisualController::_StageCloneRelative(this, v14, v30, 0, 0LL, 1, 1, 0LL);
          v9 = inserted;
          if ( inserted < 0 )
          {
            v27 = 2759;
            goto LABEL_61;
          }
        }
      }
      if ( Clone < *((_DWORD *)this + 12) )
      {
        _mm_lfence();
        if ( *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 3) + 24LL * Clone) + 752LL) + 40LL) == *((_QWORD *)a2 + 5) )
        {
          _mm_lfence();
          v15 = CTransitionWindowSnapshot::Create(
                  *((struct CTopLevelWindow **)a2 + 55),
                  *(struct CVisual **)(*(_QWORD *)(*((_QWORD *)this + 3) + 24LL * Clone + 8) + 24LL),
                  v31,
                  &v29);
          v9 = v15;
          if ( v15 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(
              0x14u,
              &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST,
              2LL,
              v15,
              0xAD3u);
            v5 = (volatile signed __int32 *)v29;
            goto LABEL_62;
          }
          v5 = (volatile signed __int32 *)v29;
          *((_BYTE *)v29 + 364) = *(_BYTE *)(*((_QWORD *)this + 3) + 24LL * Clone + 18);
          goto LABEL_18;
        }
        v5 = (volatile signed __int32 *)v29;
      }
      v9 = -2147467259;
    }
LABEL_39:
    if ( !v5 )
    {
LABEL_64:
      if ( v30 )
        CBaseObject::Release(v30);
      return (unsigned int)v9;
    }
    if ( v9 < 0 )
    {
LABEL_62:
      if ( v5 )
        CBaseObject::Release((CBaseObject *)v5);
      goto LABEL_64;
    }
    v16 = *((_DWORD *)this + 20);
    v17 = v16 + 1;
    if ( v16 + 1 < v16 )
    {
      v9 = -2147024362;
      v18 = 181;
LABEL_52:
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v9, v18);
      MilInstrumentationCheckHR_MaybeFailFast(
        0x14u,
        &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST,
        2LL,
        v9,
        0xAE6u);
      goto LABEL_62;
    }
    if ( v17 > *((_DWORD *)this + 19) )
    {
      v9 = DynArrayImpl<0>::AddMultipleAndSet((__int64)this + 56, 0x10u, 1, &v28);
      if ( v9 < 0 )
      {
        v18 = 192;
        goto LABEL_52;
      }
    }
    else
    {
      *(_OWORD *)(*((_QWORD *)this + 7) + 16LL * *((unsigned int *)this + 20)) = v28;
      *((_DWORD *)this + 20) = v17;
    }
    _InterlockedIncrement(v5 + 2);
    if ( (*((_DWORD *)a2 + 168) & 0x100000) != 0 )
    {
      RootVisualForDesktop = CWindowList::GetRootVisualForDesktop(
                               *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 52),
                               *((_QWORD *)a2 + 17));
      v20 = RootVisualForDesktop;
      v21 = (struct CVisual *)*((_QWORD *)a2 + 55);
      if ( (*((_BYTE *)a2 + 670) & 8) != 0 )
        v21 = *(struct CVisual **)(*((_QWORD *)a2 + 75) + 440LL);
      v5 = (volatile signed __int32 *)v29;
      inserted = VisualCollection::InsertRelative(
                   (struct CRenderDataVisual *)((char *)RootVisualForDesktop + 32),
                   v29,
                   v21,
                   1u,
                   1);
      v9 = inserted;
      if ( inserted < 0 )
      {
        v27 = 2808;
        goto LABEL_61;
      }
      CTransitionVisualController::_MoveOwnedWindowTreeOffscreen(a2);
      CDesktopManager::UpdateSceneImpl(v22, v20);
    }
    else
    {
      v5 = (volatile signed __int32 *)v29;
      v24 = v29;
      *(__m128i *)((char *)v29 + 344) = _mm_load_si128((const __m128i *)&_xmm);
      inserted = VisualCollection::InsertRelative((VisualCollection *)(*((_QWORD *)this + 18) + 32LL), v24, 0LL, 0, 1);
      v9 = inserted;
      if ( inserted < 0 )
      {
        v27 = 2823;
        goto LABEL_61;
      }
      (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 18) + 64LL))(*((_QWORD *)this + 18));
    }
    if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
      McTemplateU0p_EtwEventWriteTransfer(v23, (int)&CommitChannel_Transition_Snapshot, (__int64)v5);
    inserted = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance
                                                                 + 5)
                                                               + 16LL)
                                                 + 24LL))(*(_QWORD *)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance
                                                                      + 5)
                                                                    + 16LL));
    v9 = inserted;
    if ( inserted >= 0 )
      goto LABEL_62;
    v27 = 2829;
    goto LABEL_61;
  }
  return (unsigned int)v9;
}
