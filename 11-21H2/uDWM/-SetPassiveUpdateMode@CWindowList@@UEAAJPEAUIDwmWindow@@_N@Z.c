/*
 * XREFs of ?SetPassiveUpdateMode@CWindowList@@UEAAJPEAUIDwmWindow@@_N@Z @ 0x18001FF60
 * Callers:
 *     ?ShowHide@CWindowList@@QEAAJPEAVCWindowData@@_N@Z @ 0x180031C90 (-ShowHide@CWindowList@@QEAAJPEAVCWindowData@@_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800045F8 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetSyncedWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@_NPEAPEAVCWindowData@@@Z @ 0x1800239B8 (-GetSyncedWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@_NPEAPEAVCWindowData@@@Z.c)
 *     ?SetPassiveUpdateMode@CVisualProxy@@QEAAJ_N@Z @ 0x1801009B8 (-SetPassiveUpdateMode@CVisualProxy@@QEAAJ_N@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CWindowList::SetPassiveUpdateMode(CWindowList *this, struct IDwmWindow *a2, bool a3)
{
  int SyncedWindowData; // eax
  unsigned int v7; // ebx
  __int64 v8; // rcx
  int updated; // eax
  struct CWindowData *v11; // [rsp+68h] [rbp+20h] BYREF

  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v11 = 0LL;
  SyncedWindowData = CWindowList::GetSyncedWindowData(this, a2, 1, &v11);
  v7 = SyncedWindowData;
  if ( SyncedWindowData < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, SyncedWindowData, 0xA9Bu);
  }
  else if ( v11 )
  {
    v8 = *((_QWORD *)v11 + 55);
    if ( v8 )
    {
      v7 = 0;
      if ( a3 != ((*(_BYTE *)(v8 + 249) & 8) != 0) )
      {
        *(_BYTE *)(v8 + 249) = (8 * a3) | *(_BYTE *)(v8 + 249) & 0xF7;
        updated = CVisualProxy::SetPassiveUpdateMode(*(CVisualProxy **)(v8 + 16), a3);
        v7 = updated;
        if ( updated < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, updated, 0x138u);
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v7, 0xA9Fu);
        }
      }
    }
  }
  LeaveCriticalSection(&CDesktopManager::s_csDwmInstance);
  return v7;
}
