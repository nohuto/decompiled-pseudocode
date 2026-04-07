/*
 * XREFs of ?CloakChange@CWindowList@@UEAAJPEAUIDwmWindow@@0_N@Z @ 0x18000EE60
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800045F8 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?UpdateRemoteAppRenderTargetRoot@CTopLevelWindow@@QEAAJXZ @ 0x18001103C (-UpdateRemoteAppRenderTargetRoot@CTopLevelWindow@@QEAAJXZ.c)
 *     ?OnWindowCloakChange@CAnimationScheduler@@QEAAJPEBVCWindowData@@_N1PEA_N@Z @ 0x18001D558 (-OnWindowCloakChange@CAnimationScheduler@@QEAAJPEBVCWindowData@@_N1PEA_N@Z.c)
 *     ?SnapshotWindow@CWindowData@@QEAAJXZ @ 0x1800206E8 (-SnapshotWindow@CWindowData@@QEAAJXZ.c)
 *     ?ClearSnapshot@CWindowData@@QEAAX_N00@Z @ 0x18002254C (-ClearSnapshot@CWindowData@@QEAAX_N00@Z.c)
 *     ?GetSyncedWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@_NPEAPEAVCWindowData@@@Z @ 0x1800239B8 (-GetSyncedWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@_NPEAPEAVCWindowData@@@Z.c)
 *     ?OnWindowShowHide@CLivePreview@@QEAAJPEAVCWindowData@@PEA_N_N@Z @ 0x180023C58 (-OnWindowShowHide@CLivePreview@@QEAAJPEAVCWindowData@@PEA_N_N@Z.c)
 *     ?ShowHide@CWindowList@@QEAAJPEAVCWindowData@@_N@Z @ 0x180031C90 (-ShowHide@CWindowList@@QEAAJPEAVCWindowData@@_N@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180063740 (_guard_xfg_dispatch_icall_nop.c)
 *     ?ReActivate@CLivePreview@@QEAAJXZ @ 0x1800C25E4 (-ReActivate@CLivePreview@@QEAAJXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CWindowList::CloakChange(CWindowList *this, struct IDwmWindow *a2, struct IDwmWindow *a3, bool a4)
{
  int SyncedWindowData; // eax
  unsigned int v9; // edi
  struct CWindowData *v10; // rsi
  CAnimationScheduler *v12; // rbx
  char v13; // al
  char v14; // al
  bool v15; // r8
  int v16; // eax
  char v17; // al
  int v18; // eax
  struct CWindowData *v19; // rbx
  int v20; // eax
  int v21; // eax
  int v22; // eax
  int v23; // eax
  bool v24; // [rsp+30h] [rbp-48h] BYREF
  struct CWindowData *v25[3]; // [rsp+38h] [rbp-40h] BYREF

  v25[1] = (struct CWindowData *)&CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v25[0] = 0LL;
  SyncedWindowData = CWindowList::GetSyncedWindowData(this, a2, 1, v25);
  v9 = SyncedWindowData;
  if ( SyncedWindowData < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, SyncedWindowData, 0x187Du);
    goto LABEL_3;
  }
  v10 = v25[0];
  if ( v25[0] )
  {
    v24 = 0;
    v12 = (CAnimationScheduler *)*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 22);
    v13 = (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 280LL))(a2);
    CAnimationScheduler::OnWindowCloakChange(v12, v10, v13, a4, &v24);
    if ( !v24 )
    {
      v14 = (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 280LL))(a2);
      *((_BYTE *)v10 + 668) &= ~1u;
      *((_BYTE *)v10 + 668) |= v14 & 1;
      if ( *((_QWORD *)v10 + 55) && *((_DWORD *)CDesktopManager::s_pDesktopManagerInstance + 8) == 5 )
      {
        if ( (*((_BYTE *)v10 + 668) & 1) != 0 )
          CWindowData::SnapshotWindow(v10);
        else
          CWindowData::ClearSnapshot(v10, 0, v15, 0);
        CTopLevelWindow::UpdateRemoteAppRenderTargetRoot(*((CTopLevelWindow **)v10 + 55));
      }
      if ( a4 )
      {
        if ( a3 )
        {
          v25[0] = 0LL;
          v18 = CWindowList::GetSyncedWindowData(this, a3, 1, v25);
          v9 = v18;
          if ( v18 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v18, 0x18A2u);
            goto LABEL_3;
          }
          v19 = v25[0];
          if ( v25[0] )
          {
            v20 = CLivePreview::OnWindowShowHide(
                    *((CLivePreview **)CDesktopManager::s_pDesktopManagerInstance + 55),
                    v25[0],
                    0LL,
                    1);
            v9 = v20;
            if ( v20 < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v20, 0x18A7u);
              goto LABEL_3;
            }
            v21 = CLivePreview::OnWindowShowHide(
                    *((CLivePreview **)CDesktopManager::s_pDesktopManagerInstance + 55),
                    v19,
                    0LL,
                    0);
            v9 = v21;
            if ( v21 < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v21, 0x18A8u);
              goto LABEL_3;
            }
            v22 = CLivePreview::ReActivate(*((CLivePreview **)CDesktopManager::s_pDesktopManagerInstance + 55));
            v9 = v22;
            if ( v22 < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v22, 0x18A9u);
              goto LABEL_3;
            }
            v23 = CWindowList::ShowHide(this, v19, 1);
            v9 = v23;
            if ( v23 < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v23, 0x18AAu);
              goto LABEL_3;
            }
          }
        }
      }
      else
      {
        v16 = CWindowList::ShowHide(this, v10, 1);
        v9 = v16;
        if ( v16 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v16, 0x189Du);
          goto LABEL_3;
        }
      }
    }
    v17 = *((_BYTE *)v10 + 668);
    if ( (v17 & 1) == 0 && (v17 & 8) == 0 )
      *((_BYTE *)v10 + 668) = v17 & 0xEF;
  }
LABEL_3:
  LeaveCriticalSection(&CDesktopManager::s_csDwmInstance);
  return v9;
}
