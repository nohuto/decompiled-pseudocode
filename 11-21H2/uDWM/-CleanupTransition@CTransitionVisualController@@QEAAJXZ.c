/*
 * XREFs of ?CleanupTransition@CTransitionVisualController@@QEAAJXZ @ 0x18003FB48
 * Callers:
 *     ?_CleanupTransition@CAnimationScheduler@@AEAAXXZ @ 0x18003FAC4 (-_CleanupTransition@CAnimationScheduler@@AEAAXXZ.c)
 *     ??1CTransitionVisualController@@QEAA@XZ @ 0x1800E9B9C (--1CTransitionVisualController@@QEAA@XZ.c)
 *     ?OnAnimationComplete@CTransitionVisualController@@UEAAJI@Z @ 0x1800ED880 (-OnAnimationComplete@CTransitionVisualController@@UEAAJI@Z.c)
 *     ?SetupZOrder@CTransitionVisualController@@QEAAJXZ @ 0x1800EE154 (-SetupZOrder@CTransitionVisualController@@QEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800045F8 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?RemoveAll@VisualCollection@@QEAAJXZ @ 0x18000C710 (-RemoveAll@VisualCollection@@QEAAJXZ.c)
 *     ?Remove@VisualCollection@@QEAAJPEAVCVisual@@@Z @ 0x18000CD38 (-Remove@VisualCollection@@QEAAJPEAVCVisual@@@Z.c)
 *     ?ScheduleStopAnimation@CAnimationEngine@@QEAAJI@Z @ 0x180014600 (-ScheduleStopAnimation@CAnimationEngine@@QEAAJI@Z.c)
 *     ?Release@CAnimationEngine@@UEAAKXZ @ 0x180015140 (-Release@CAnimationEngine@@UEAAKXZ.c)
 *     ?AcquireAnimationEngine@CDesktopManager@@SAPEAVCAnimationEngine@@XZ @ 0x180015930 (-AcquireAnimationEngine@CDesktopManager@@SAPEAVCAnimationEngine@@XZ.c)
 *     ?GetSyncedWindowDataByHwnd@CWindowList@@QEAAJPEAUHWND__@@PEAPEAVCWindowData@@@Z @ 0x180020CF0 (-GetSyncedWindowDataByHwnd@CWindowList@@QEAAJPEAUHWND__@@PEAPEAVCWindowData@@@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180028A00 (-Release@CBaseObject@@QEAAKXZ.c)
 *     McTemplateU0d_EtwEventWriteTransfer @ 0x1800A8024 (McTemplateU0d_EtwEventWriteTransfer.c)
 *     ?RemoveAt@?$DynArray@UCStationaryAnimation@@$0A@@@QEAAJI@Z @ 0x1800AD98C (-RemoveAt@-$DynArray@UCStationaryAnimation@@$0A@@@QEAAJI@Z.c)
 *     ?RemoveAt@?$DynArray@UTransitionBitmap@CTransitionVisualController@@$0A@@@QEAAJI@Z @ 0x1800CC2E0 (-RemoveAt@-$DynArray@UTransitionBitmap@CTransitionVisualController@@$0A@@@QEAAJI@Z.c)
 *     ?DiscardStoredSnapshot@CTransitionVisualController@@QEAAJPEAUHWND__@@@Z @ 0x1800EC7A8 (-DiscardStoredSnapshot@CTransitionVisualController@@QEAAJPEAUHWND__@@@Z.c)
 *     ?RestoreWindow@CTransitionVisualController@@QEAAXPEAVCWindowData@@_N@Z @ 0x1800EDF64 (-RestoreWindow@CTransitionVisualController@@QEAAXPEAVCWindowData@@_N@Z.c)
 *     ?_CleanupHighZOrderStaticWindowClones@CTransitionVisualController@@IEAAXXZ @ 0x1800EE5B8 (-_CleanupHighZOrderStaticWindowClones@CTransitionVisualController@@IEAAXXZ.c)
 *     ?_MoveWindowOffscreen@CTransitionVisualController@@KAXPEAVCTopLevelWindow@@_N@Z @ 0x1800EEFA0 (-_MoveWindowOffscreen@CTransitionVisualController@@KAXPEAVCTopLevelWindow@@_N@Z.c)
 */

__int64 __fastcall CTransitionVisualController::CleanupTransition(CTransitionVisualController *this)
{
  int v2; // eax
  __int64 v3; // rcx
  CBaseObject *v4; // rcx
  CBaseObject *v5; // rcx
  CBaseObject *v6; // rcx
  CBaseObject *v7; // rcx
  CBaseObject ***v9; // rdi
  CAnimationEngine *v10; // rax
  __int64 v11; // rcx
  CAnimationEngine *v12; // rdi
  _QWORD *v13; // rdi
  unsigned int v14; // ebp
  __int64 v15; // rsi
  CBaseObject *v16; // rcx
  CBaseObject **v17; // rax
  struct CTopLevelWindow *v18; // rcx
  CBaseObject *v19; // rcx
  CBaseObject *v20; // rcx
  struct CVisual *v21; // rdx
  __int64 v22; // rax
  unsigned int v23; // ecx
  __int64 v24; // rdi
  struct CVisual *v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // rdx
  unsigned int v28; // edx
  __int64 v29; // rcx
  __int64 v30; // r8
  CBaseObject *v31; // rcx
  struct CWindowData *v32; // [rsp+50h] [rbp+8h] BYREF

  if ( *((_DWORD *)this + 22) != -1 )
  {
    v10 = CDesktopManager::AcquireAnimationEngine();
    v12 = v10;
    if ( v10 )
    {
      CAnimationEngine::ScheduleStopAnimation(v10, *((_DWORD *)this + 22));
      CAnimationEngine::Release(v12);
    }
    *((_DWORD *)this + 22) = -1;
    if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
      McTemplateU0d_EtwEventWriteTransfer(v11, &UdwmTransitionVisualController_Stop, *((unsigned int *)this + 26));
  }
  v2 = *((_DWORD *)this + 44);
  if ( v2 )
  {
    v13 = (_QWORD *)((char *)this + 152);
    do
    {
      v14 = v2 - 1;
      v15 = 56LL * (unsigned int)(v2 - 1);
      v16 = *(CBaseObject **)(v15 + *v13 + 48);
      if ( v16 )
      {
        CBaseObject::Release(v16);
        *(_QWORD *)(v15 + *v13 + 48) = 0LL;
      }
      DynArray<CTransitionVisualController::TransitionBitmap,0>::RemoveAt((char *)this + 152, v14);
      v2 = *((_DWORD *)this + 44);
    }
    while ( v2 );
  }
  while ( *((_DWORD *)this + 20) )
    CTransitionVisualController::DiscardStoredSnapshot(this, **((HWND **)this + 7));
  if ( *((_DWORD *)this + 12) )
  {
    v9 = (CBaseObject ***)((char *)this + 24);
    do
    {
      v17 = *v9;
      v18 = **v9;
      if ( v18 )
      {
        CTransitionVisualController::_MoveWindowOffscreen(v18, 0);
        v17 = *v9;
        v19 = **v9;
        if ( v19 )
        {
          CBaseObject::Release(v19);
          v17 = *v9;
        }
      }
      v20 = v17[1];
      if ( v20 )
        CBaseObject::Release(v20);
      DynArray<CStationaryAnimation,0>::RemoveAt((char *)this + 24, 0LL);
    }
    while ( *((_DWORD *)this + 12) );
  }
  v3 = *((_QWORD *)this + 1);
  if ( v3 )
  {
    v21 = (struct CVisual *)*((_QWORD *)this + 2);
    if ( v21 )
    {
      if ( *((_DWORD *)this + 34) )
      {
        do
        {
          v22 = *((_QWORD *)this + 14);
          v23 = *((_DWORD *)this + 34) - 1;
          v32 = 0LL;
          v24 = *(_QWORD *)(v22 + 8LL * v23);
          if ( (int)CWindowList::GetSyncedWindowDataByHwnd(
                      *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 52),
                      *(HWND *)(v24 + 16),
                      &v32) >= 0
            && v32 )
          {
            CTransitionVisualController::RestoreWindow(this, v32, 1);
          }
          v25 = *(struct CVisual **)(v24 + 32);
          if ( v25 )
          {
            v26 = *((_QWORD *)v25 + 3);
            if ( v26 )
              VisualCollection::Remove((VisualCollection *)(v26 + 32), v25);
          }
          v27 = *(_QWORD *)(v24 + 40);
          if ( v27 )
            VisualCollection::Remove((VisualCollection *)(*((_QWORD *)this + 2) + 32LL), (struct CVisual *)(v27 + 8));
          CBaseObject::Release((CBaseObject *)v24);
          v28 = *((_DWORD *)this + 34);
          v29 = v28 - 1;
          if ( (unsigned int)v29 < v28 )
          {
            v30 = *((_QWORD *)this + 14);
            while ( (unsigned int)v29 < v28 - 1 )
            {
              *(_QWORD *)(v30 + 8 * v29) = *(_QWORD *)(v30 + 8LL * (unsigned int)(v29 + 1));
              v29 = (unsigned int)(v29 + 1);
              v28 = *((_DWORD *)this + 34);
            }
            *((_DWORD *)this + 34) = v28 - 1;
          }
          else
          {
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024809, 0x194u);
          }
        }
        while ( *((_DWORD *)this + 34) );
        v21 = (struct CVisual *)*((_QWORD *)this + 2);
        v3 = *((_QWORD *)this + 1);
      }
      VisualCollection::Remove((VisualCollection *)(v3 + 32), v21);
      v31 = (CBaseObject *)*((_QWORD *)this + 2);
      if ( v31 )
      {
        CBaseObject::Release(v31);
        *((_QWORD *)this + 2) = 0LL;
      }
    }
    CTransitionVisualController::_CleanupHighZOrderStaticWindowClones(this);
    VisualCollection::RemoveAll((VisualCollection *)(*((_QWORD *)this + 1) + 32LL));
    VisualCollection::Remove(
      (VisualCollection *)(*(_QWORD *)(*((_QWORD *)this + 1) + 24LL) + 32LL),
      *((struct CVisual **)this + 1));
  }
  v4 = (CBaseObject *)*((_QWORD *)this + 2);
  if ( v4 )
  {
    CBaseObject::Release(v4);
    *((_QWORD *)this + 2) = 0LL;
  }
  v5 = (CBaseObject *)*((_QWORD *)this + 18);
  if ( v5 )
  {
    CBaseObject::Release(v5);
    *((_QWORD *)this + 18) = 0LL;
  }
  v6 = (CBaseObject *)*((_QWORD *)this + 1);
  if ( v6 )
  {
    CBaseObject::Release(v6);
    *((_QWORD *)this + 1) = 0LL;
  }
  v7 = (CBaseObject *)*((_QWORD *)this + 23);
  if ( v7 )
  {
    CBaseObject::Release(v7);
    *((_QWORD *)this + 23) = 0LL;
  }
  *((_QWORD *)this + 12) = -1LL;
  *((_DWORD *)this + 26) = -1;
  return 0LL;
}
