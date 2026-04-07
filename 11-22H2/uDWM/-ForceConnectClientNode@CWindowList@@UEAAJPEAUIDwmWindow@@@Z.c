/*
 * XREFs of ?ForceConnectClientNode@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x180051620
 * Callers:
 *     <none>
 * Callees:
 *     ?EnsureClientAreaNode@CTopLevelWindow@@QEAAJXZ @ 0x180023DD4 (-EnsureClientAreaNode@CTopLevelWindow@@QEAAJXZ.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x180025534 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?GetSyncedWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@_NPEAPEAVCWindowData@@@Z @ 0x1800341D8 (-GetSyncedWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@_NPEAPEAVCWindowData@@@Z.c)
 *     ?EnsureClientAreaVisualProxy@CWindowData@@QEAAJXZ @ 0x1800516F8 (-EnsureClientAreaVisualProxy@CWindowData@@QEAAJXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18006610C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800663A0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CWindowList::ForceConnectClientNode(CWindowList *this, struct IDwmWindow *a2)
{
  int SyncedWindowData; // eax
  unsigned int v5; // ebx
  CWindowData *v6; // rdi
  int v7; // eax
  CTopLevelWindow *v8; // rcx
  int v10; // eax
  CWindowData *v11; // [rsp+50h] [rbp+18h] BYREF
  struct _RTL_CRITICAL_SECTION *v12; // [rsp+58h] [rbp+20h] BYREF

  v12 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v11 = 0LL;
  SyncedWindowData = CWindowList::GetSyncedWindowData(this, a2, 1, &v11);
  v5 = SyncedWindowData;
  if ( SyncedWindowData < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, SyncedWindowData, 0x1972u, 0LL);
  }
  else
  {
    v6 = v11;
    if ( v11 )
    {
      *((_BYTE *)v6 + 676) ^= (*((_BYTE *)v6 + 676) ^ (32
                                                     * (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 80LL))(a2))) & 0x20;
      v7 = CWindowData::EnsureClientAreaVisualProxy(v6);
      v5 = v7;
      if ( v7 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v7, 0x1977u, 0LL);
      }
      else
      {
        v8 = (CTopLevelWindow *)*((_QWORD *)v6 + 55);
        if ( v8 )
        {
          v10 = CTopLevelWindow::EnsureClientAreaNode(v8);
          v5 = v10;
          if ( v10 < 0 )
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v10, 0x197Bu, 0LL);
        }
      }
    }
  }
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v12);
  return v5;
}
