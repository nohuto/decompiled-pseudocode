/*
 * XREFs of ?RemoveTargetsForStoryboard@CTransitionVisualController@@QEAAJPEAVCStoryboard@@_NK@Z @ 0x1800EDD10
 * Callers:
 *     ?OnBeginTransitionRequestFromStoryboard@CAnimationScheduler@@QEAAJHPEBU_GUID@@PEAVCStoryboard@@PEAU2@@Z @ 0x1800A6F48 (-OnBeginTransitionRequestFromStoryboard@CAnimationScheduler@@QEAAJHPEBU_GUID@@PEAVCStoryboard@@P.c)
 *     ?_ScheduleStoryboard@CAnimationScheduler@@AEAAJPEAVCStoryboard@@@Z @ 0x1800A7968 (-_ScheduleStoryboard@CAnimationScheduler@@AEAAJPEAVCStoryboard@@@Z.c)
 *     ?_Cleanup@CStoryboard@@IEAAXXZ @ 0x1800D93F8 (-_Cleanup@CStoryboard@@IEAAXXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800045F8 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Remove@VisualCollection@@QEAAJPEAVCVisual@@@Z @ 0x18000CD38 (-Remove@VisualCollection@@QEAAJPEAVCVisual@@@Z.c)
 *     ?GetWindowListForDesktop@CWindowList@@QEAAPEAU_LIST_ENTRY@@_K@Z @ 0x180012D9C (-GetWindowListForDesktop@CWindowList@@QEAAPEAU_LIST_ENTRY@@_K@Z.c)
 *     ?_GetSnapshotIndex@CTransitionVisualController@@IEAAHPEAUHWND__@@@Z @ 0x180013CE0 (-_GetSnapshotIndex@CTransitionVisualController@@IEAAHPEAUHWND__@@@Z.c)
 *     ?InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z @ 0x180034D80 (-InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z.c)
 *     ?IsWindowCurrentlyAnimating@CAnimationScheduler@@QEAA_NQEAUHWND__@@HK@Z @ 0x18003AEFC (-IsWindowCurrentlyAnimating@CAnimationScheduler@@QEAA_NQEAUHWND__@@HK@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180063740 (_guard_xfg_dispatch_icall_nop.c)
 *     ?RestoreWindow@CTransitionVisualController@@QEAAXPEAVCWindowData@@_N@Z @ 0x1800EDF64 (-RestoreWindow@CTransitionVisualController@@QEAAXPEAVCWindowData@@_N@Z.c)
 *     ?_EnsureStagingVisualRoot@CTransitionVisualController@@IEAAJXZ @ 0x1800EE88C (-_EnsureStagingVisualRoot@CTransitionVisualController@@IEAAJXZ.c)
 *     ?_StopAnimations@CTransitionVisualController@@IEAAXPEAVCWindowData@@@Z @ 0x1800EFD98 (-_StopAnimations@CTransitionVisualController@@IEAAXPEAVCWindowData@@@Z.c)
 */

__int64 __fastcall CTransitionVisualController::RemoveTargetsForStoryboard(
        CTransitionVisualController *this,
        struct CStoryboard *a2,
        char a3,
        int a4)
{
  struct CStoryboard *v4; // r15
  unsigned int v5; // ebx
  struct _LIST_ENTRY *WindowListForDesktop; // r14
  struct _LIST_ENTRY *Blink; // rdi
  __int64 v9; // rax
  int Flink; // r13d
  __int64 v11; // rbp
  CTransitionVisualController *Flink_low; // rcx
  int SnapshotIndex; // eax
  struct CVisual *v14; // r15
  int v15; // eax
  int v16; // eax
  int inserted; // eax
  __int64 v19; // [rsp+30h] [rbp-58h]
  unsigned __int64 v20; // [rsp+90h] [rbp+8h] BYREF
  struct CStoryboard *v21; // [rsp+98h] [rbp+10h]
  char v22; // [rsp+A0h] [rbp+18h]
  int v23; // [rsp+A8h] [rbp+20h]

  v23 = a4;
  v22 = a3;
  v21 = a2;
  v4 = a2;
  v5 = 0;
  v20 = *((_QWORD *)this + 12);
  if ( v20 != -1LL || (unsigned int)GetDesktopID(1LL, &v20) )
  {
    WindowListForDesktop = CWindowList::GetWindowListForDesktop(*((CWindowList **)CDesktopManager::s_pDesktopManagerInstance
                                                                + 52));
    Blink = WindowListForDesktop->Blink;
    if ( Blink != WindowListForDesktop )
    {
      while ( 1 )
      {
        v9 = (*(__int64 (__fastcall **)(struct CStoryboard *))(*(_QWORD *)v4 + 16LL))(v4);
        Flink = (int)Blink[42].Flink;
        v11 = 0LL;
        v19 = v9;
        if ( *(_DWORD *)(v9 + 4) )
          break;
LABEL_20:
        Blink = Blink->Blink;
        if ( Blink == WindowListForDesktop )
          return v5;
      }
      while ( 1 )
      {
        if ( (*(_DWORD *)(*(_QWORD *)(v9 + 8) + 4 * v11) & 0xFFF) == (Flink & 0xFFF) )
        {
          Flink_low = (CTransitionVisualController *)LODWORD(Blink[42].Flink);
          if ( ((unsigned int)Flink_low & 0x40000000) == 0 )
            LODWORD(Blink[42].Flink) = (unsigned int)Flink_low & (v23 | 0x2000000) | 0xFFF;
          if ( v22 )
          {
            CTransitionVisualController::_StopAnimations(Flink_low, (struct CWindowData *)Blink);
            if ( (Flink & 0x20100000) == 0x20100000 )
            {
              SnapshotIndex = CTransitionVisualController::_GetSnapshotIndex(this, (HWND)Blink[2].Blink);
              if ( SnapshotIndex >= 0 && SnapshotIndex < *((_DWORD *)this + 20) )
              {
                _mm_lfence();
                v14 = *(struct CVisual **)(*((_QWORD *)this + 7) + 16LL * (unsigned int)SnapshotIndex + 8);
                if ( !CAnimationScheduler::IsWindowCurrentlyAnimating(
                        *((CAnimationScheduler **)CDesktopManager::s_pDesktopManagerInstance + 22),
                        (HWND)Blink[2].Blink,
                        -1,
                        0) )
                  CTransitionVisualController::RestoreWindow(
                    this,
                    (struct CWindowData *)Blink,
                    (Flink & 0x10000000) != 0);
                v15 = VisualCollection::Remove((VisualCollection *)(*((_QWORD *)v14 + 3) + 32LL), v14);
                v5 = v15;
                if ( v15 < 0 )
                {
                  MilInstrumentationCheckHR_MaybeFailFast(
                    0x14u,
                    &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST,
                    2LL,
                    v15,
                    0x23Eu);
                  return v5;
                }
                v16 = CTransitionVisualController::_EnsureStagingVisualRoot(this);
                v5 = v16;
                if ( v16 < 0 )
                {
                  MilInstrumentationCheckHR_MaybeFailFast(
                    0x14u,
                    &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST,
                    2LL,
                    v16,
                    0x23Fu);
                  return v5;
                }
                inserted = VisualCollection::InsertRelative(
                             (VisualCollection *)(*((_QWORD *)this + 18) + 32LL),
                             v14,
                             0LL,
                             0,
                             1);
                v5 = inserted;
                if ( inserted < 0 )
                {
                  MilInstrumentationCheckHR_MaybeFailFast(
                    0x14u,
                    &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST,
                    2LL,
                    inserted,
                    0x240u);
                  return v5;
                }
              }
            }
          }
        }
        v9 = v19;
        v11 = (unsigned int)(v11 + 1);
        if ( (unsigned int)v11 >= *(_DWORD *)(v19 + 4) )
        {
          v4 = v21;
          goto LABEL_20;
        }
      }
    }
  }
  else
  {
    return (unsigned int)-2147467259;
  }
  return v5;
}
