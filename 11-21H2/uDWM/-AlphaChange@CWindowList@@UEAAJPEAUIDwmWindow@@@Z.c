/*
 * XREFs of ?AlphaChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x180021AC0
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800045F8 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?OnSourceConstantAlphaUpdated@CSecondaryWindowRepresentation@@QEAAJXZ @ 0x180020FD8 (-OnSourceConstantAlphaUpdated@CSecondaryWindowRepresentation@@QEAAJXZ.c)
 *     ?GetSyncedWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@_NPEAPEAVCWindowData@@@Z @ 0x1800239B8 (-GetSyncedWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@_NPEAPEAVCWindowData@@@Z.c)
 *     ?UpdateRemoteAppRenderTargetOpacity@CTopLevelWindow@@QEAAJXZ @ 0x180023EE8 (-UpdateRemoteAppRenderTargetOpacity@CTopLevelWindow@@QEAAJXZ.c)
 *     ?OnAlphaChange@CLivePreview@@QEAAXPEBVCWindowData@@E@Z @ 0x180023F10 (-OnAlphaChange@CLivePreview@@QEAAXPEBVCWindowData@@E@Z.c)
 *     ?OnSourceConstantAlphaUpdated@CTopLevelWindow@@QEAAXXZ @ 0x180023F78 (-OnSourceConstantAlphaUpdated@CTopLevelWindow@@QEAAXXZ.c)
 *     ?OnColorizationUpdated@CWindowData@@QEAAXXZ @ 0x180035D2C (-OnColorizationUpdated@CWindowData@@QEAAXXZ.c)
 *     ?OnAlphaUpdated@CWindowIconic@@QEAAJ_N@Z @ 0x18004B6D0 (-OnAlphaUpdated@CWindowIconic@@QEAAJ_N@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180063740 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CWindowList::AlphaChange(CWindowList *this, struct IDwmWindow *a2)
{
  int SyncedWindowData; // eax
  unsigned int v5; // edi
  struct CWindowData *v6; // rbx
  CTopLevelWindow *v7; // rcx
  CWindowIconic *v8; // rcx
  __int64 v9; // rsi
  char v10; // al
  CTopLevelWindow *v11; // rcx
  int updated; // eax
  int v14; // eax
  struct CWindowData *v15; // [rsp+60h] [rbp+18h] BYREF
  struct _RTL_CRITICAL_SECTION *v16; // [rsp+68h] [rbp+20h]

  v16 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v15 = 0LL;
  SyncedWindowData = CWindowList::GetSyncedWindowData(this, a2, 1, &v15);
  v5 = SyncedWindowData;
  if ( SyncedWindowData < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, SyncedWindowData, 0x161Au);
  }
  else
  {
    v6 = v15;
    if ( v15 )
    {
      *((_BYTE *)v6 + 408) = (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 152LL))(a2);
      v7 = (CTopLevelWindow *)*((_QWORD *)v6 + 55);
      if ( v7 )
      {
        CTopLevelWindow::OnSourceConstantAlphaUpdated(v7);
        CLivePreview::OnAlphaChange(
          *((CLivePreview **)CDesktopManager::s_pDesktopManagerInstance + 55),
          v6,
          *((_BYTE *)v6 + 408));
      }
      v8 = (CWindowIconic *)*((_QWORD *)v6 + 61);
      if ( v8 )
        CWindowIconic::OnAlphaUpdated(v8, 1);
      v9 = 0LL;
      if ( *((_DWORD *)v6 + 130) )
      {
        while ( 1 )
        {
          v14 = CSecondaryWindowRepresentation::OnSourceConstantAlphaUpdated(*(CSecondaryWindowRepresentation **)(*((_QWORD *)v6 + 62) + 8 * v9));
          v5 = v14;
          if ( v14 < 0 )
            break;
          v9 = (unsigned int)(v9 + 1);
          if ( (unsigned int)v9 >= *((_DWORD *)v6 + 130) )
            goto LABEL_8;
        }
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v14, 0x162Eu);
      }
      else
      {
LABEL_8:
        v10 = (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 208LL))(a2);
        if ( v10 != ((*((_BYTE *)v6 + 665) & 0x40) != 0) )
        {
          *((_BYTE *)v6 + 665) ^= (*((_BYTE *)v6 + 665) ^ (v10 << 6)) & 0x40;
          CWindowData::OnColorizationUpdated(v6);
        }
        v11 = (CTopLevelWindow *)*((_QWORD *)v6 + 55);
        if ( v11 )
        {
          updated = CTopLevelWindow::UpdateRemoteAppRenderTargetOpacity(v11);
          v5 = updated;
          if ( updated < 0 )
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, updated, 0x1642u);
        }
      }
    }
  }
  LeaveCriticalSection(&CDesktopManager::s_csDwmInstance);
  return v5;
}
