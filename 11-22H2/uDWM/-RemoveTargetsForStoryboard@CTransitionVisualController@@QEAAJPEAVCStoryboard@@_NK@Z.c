/*
 * XREFs of ?RemoveTargetsForStoryboard@CTransitionVisualController@@QEAAJPEAVCStoryboard@@_NK@Z @ 0x18000E58C
 * Callers:
 *     ?_Cleanup@CStoryboard@@IEAAXXZ @ 0x18000CF48 (-_Cleanup@CStoryboard@@IEAAXXZ.c)
 *     ?OnBeginTransitionRequestFromStoryboard@CAnimationScheduler@@QEAAJHPEBU_GUID@@PEAVCStoryboard@@PEAU2@@Z @ 0x18000D750 (-OnBeginTransitionRequestFromStoryboard@CAnimationScheduler@@QEAAJHPEBU_GUID@@PEAVCStoryboard@@P.c)
 *     ?_ScheduleStoryboard@CAnimationScheduler@@AEAAJPEAVCStoryboard@@@Z @ 0x18000DF6C (-_ScheduleStoryboard@CAnimationScheduler@@AEAAJPEAVCStoryboard@@@Z.c)
 * Callees:
 *     ?IsWindowCurrentlyAnimating@CAnimationScheduler@@QEAA_NQEAUHWND__@@HK@Z @ 0x180004E2C (-IsWindowCurrentlyAnimating@CAnimationScheduler@@QEAA_NQEAUHWND__@@HK@Z.c)
 *     ?_EnsureStagingVisualRoot@CTransitionVisualController@@IEAAJXZ @ 0x18000D2F0 (-_EnsureStagingVisualRoot@CTransitionVisualController@@IEAAJXZ.c)
 *     ?_StopAnimations@CTransitionVisualController@@IEAAXPEAVCWindowData@@@Z @ 0x1800162D4 (-_StopAnimations@CTransitionVisualController@@IEAAXPEAVCWindowData@@@Z.c)
 *     ?InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z @ 0x180022C70 (-InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z.c)
 *     ?GetWindowListForDesktop@CWindowList@@QEAAPEAU_LIST_ENTRY@@_K@Z @ 0x18003EBFC (-GetWindowListForDesktop@CWindowList@@QEAAPEAU_LIST_ENTRY@@_K@Z.c)
 *     ?Remove@VisualCollection@@QEAAJPEAVCVisual@@@Z @ 0x180050730 (-Remove@VisualCollection@@QEAAJPEAVCVisual@@@Z.c)
 *     ?_GetSnapshotIndex@CTransitionVisualController@@IEAAHPEAUHWND__@@@Z @ 0x180053F60 (-_GetSnapshotIndex@CTransitionVisualController@@IEAAHPEAUHWND__@@@Z.c)
 *     ?GetStoredSnapshotNoRefByIndex@CTransitionVisualController@@QEAAJHPEAPEAVCTransitionWindowSnapshot@@@Z @ 0x180053F94 (-GetStoredSnapshotNoRefByIndex@CTransitionVisualController@@QEAAJHPEAPEAVCTransitionWindowSnapsh.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18006610C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800663A0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?RestoreWindow@CTransitionVisualController@@QEAAXPEAVCWindowData@@_N@Z @ 0x1800EC040 (-RestoreWindow@CTransitionVisualController@@QEAAXPEAVCWindowData@@_N@Z.c)
 */

__int64 __fastcall CTransitionVisualController::RemoveTargetsForStoryboard(
        CTransitionVisualController *this,
        struct CStoryboard *a2,
        __int64 a3,
        int a4)
{
  struct CStoryboard *v4; // r14
  unsigned int v5; // ebx
  unsigned __int64 v6; // rdx
  char v7; // bp
  struct _LIST_ENTRY *WindowListForDesktop; // r15
  struct _LIST_ENTRY *Blink; // rdi
  __int64 v11; // rax
  int v12; // r13d
  __int64 v13; // r14
  CTransitionVisualController *Blink_low; // rcx
  HWND v16; // rdx
  int SnapshotIndex; // eax
  CTransitionVisualController *v18; // rcx
  struct CVisual *v19; // rbp
  int v20; // eax
  __int64 v21; // rdx
  __int64 v22; // r8
  int v23; // eax
  int inserted; // eax
  bool v25; // [rsp+20h] [rbp-68h]
  struct CTransitionWindowSnapshot *v26; // [rsp+30h] [rbp-58h] BYREF
  __int64 i; // [rsp+38h] [rbp-50h]
  unsigned __int64 v28; // [rsp+90h] [rbp+8h] BYREF
  struct CStoryboard *v29; // [rsp+98h] [rbp+10h]
  char v30; // [rsp+A0h] [rbp+18h]
  int v31; // [rsp+A8h] [rbp+20h]

  v31 = a4;
  v30 = a3;
  v29 = a2;
  v4 = a2;
  v5 = 0;
  v6 = *((_QWORD *)this + 12);
  v7 = a3;
  v28 = v6;
  if ( v6 == -1LL )
  {
    if ( !(unsigned int)GetDesktopID(1LL, &v28, a3) )
      return (unsigned int)-2147467259;
    v6 = v28;
  }
  WindowListForDesktop = CWindowList::GetWindowListForDesktop(
                           *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 54),
                           v6);
  Blink = WindowListForDesktop->Blink;
  if ( Blink != WindowListForDesktop )
  {
    while ( 1 )
    {
      v11 = (*(__int64 (__fastcall **)(struct CStoryboard *))(*(_QWORD *)v4 + 16LL))(v4);
      v12 = (int)Blink[42].Blink;
      v13 = 0LL;
      for ( i = v11; (unsigned int)v13 < *(_DWORD *)(i + 4); v13 = (unsigned int)(v13 + 1) )
      {
        if ( (*(_DWORD *)(*(_QWORD *)(v11 + 8) + 4 * v13) & 0xFFF) == (v12 & 0xFFF) )
        {
          Blink_low = (CTransitionVisualController *)LODWORD(Blink[42].Blink);
          if ( ((unsigned int)Blink_low & 0x40000000) == 0 )
            LODWORD(Blink[42].Blink) = (unsigned int)Blink_low & (v31 | 0x2000000) | 0xFFF;
          if ( v7 )
          {
            CTransitionVisualController::_StopAnimations(Blink_low, (struct CWindowData *)Blink);
            if ( (v12 & 0x20100000) == 0x20100000 )
            {
              v16 = (HWND)Blink[2].Blink;
              v26 = 0LL;
              SnapshotIndex = CTransitionVisualController::_GetSnapshotIndex(this, v16);
              if ( (int)CTransitionVisualController::GetStoredSnapshotNoRefByIndex(v18, SnapshotIndex, &v26) >= 0 )
              {
                if ( !CAnimationScheduler::IsWindowCurrentlyAnimating(
                        *((CAnimationScheduler **)CDesktopManager::s_pDesktopManagerInstance + 23),
                        (HWND)Blink[2].Blink,
                        -1,
                        0) )
                  CTransitionVisualController::RestoreWindow(this, (struct CWindowData *)Blink, (v12 & 0x10000000) != 0);
                v19 = v26;
                v20 = VisualCollection::Remove((VisualCollection *)(*((_QWORD *)v26 + 3) + 32LL), v26);
                v5 = v20;
                if ( v20 < 0 )
                {
                  MilInstrumentationCheckHR_MaybeFailFast(
                    0x14u,
                    &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST,
                    2u,
                    v20,
                    0x23Eu,
                    0LL);
                  return v5;
                }
                v23 = CTransitionVisualController::_EnsureStagingVisualRoot(this, v21, v22);
                v5 = v23;
                if ( v23 < 0 )
                {
                  MilInstrumentationCheckHR_MaybeFailFast(
                    0x14u,
                    &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST,
                    2u,
                    v23,
                    0x23Fu,
                    0LL);
                  return v5;
                }
                inserted = VisualCollection::InsertRelative(
                             (VisualCollection *)(*((_QWORD *)this + 18) + 32LL),
                             v19,
                             0LL,
                             0,
                             v25);
                v5 = inserted;
                if ( inserted < 0 )
                {
                  MilInstrumentationCheckHR_MaybeFailFast(
                    0x14u,
                    &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST,
                    2u,
                    inserted,
                    0x240u,
                    0LL);
                  return v5;
                }
                v7 = v30;
              }
            }
          }
        }
        v11 = i;
      }
      Blink = Blink->Blink;
      if ( Blink == WindowListForDesktop )
        break;
      v4 = v29;
    }
  }
  return v5;
}
