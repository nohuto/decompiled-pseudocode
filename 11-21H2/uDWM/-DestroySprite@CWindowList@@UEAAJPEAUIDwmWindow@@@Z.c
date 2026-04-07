/*
 * XREFs of ?DestroySprite@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x18001FC80
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800045F8 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Add@?$CGenericSet@PEAVCWindowData@@@@QEAAJPEAVCWindowData@@@Z @ 0x180011F40 (-Add@-$CGenericSet@PEAVCWindowData@@@@QEAAJPEAVCWindowData@@@Z.c)
 *     ?IsImmersiveWindow@CWindowData@@QEBA_NXZ @ 0x18001DA74 (-IsImmersiveWindow@CWindowData@@QEBA_NXZ.c)
 *     ?ImmediateDestroySprite@CWindowList@@AEAAXPEAVCWindowData@@@Z @ 0x18001EFD0 (-ImmediateDestroySprite@CWindowList@@AEAAXPEAVCWindowData@@@Z.c)
 *     ?SnapshotWindow@CWindowData@@QEAAJXZ @ 0x1800206E8 (-SnapshotWindow@CWindowData@@QEAAJXZ.c)
 *     ?DestroyWindow@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x1800223E0 (-DestroyWindow@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?GetSyncedWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@_NPEAPEAVCWindowData@@@Z @ 0x1800239B8 (-GetSyncedWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@_NPEAPEAVCWindowData@@@Z.c)
 *     ?BeginDestroySprite@CTopLevelWindow3D@@QEAAJPEA_N@Z @ 0x180038038 (-BeginDestroySprite@CTopLevelWindow3D@@QEAAJPEA_N@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180063740 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CWindowList::DestroySprite(CWindowList *this, struct IDwmWindow *a2)
{
  int SyncedWindowData; // eax
  unsigned int v5; // ebx
  CWindowData *v6; // rdi
  CTopLevelWindow3D *v7; // rcx
  unsigned int v9; // [rsp+20h] [rbp-28h]
  CWindowData *v10; // [rsp+60h] [rbp+18h] BYREF
  struct _RTL_CRITICAL_SECTION *v11; // [rsp+68h] [rbp+20h]

  v11 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v10 = 0LL;
  SyncedWindowData = CWindowList::GetSyncedWindowData(this, a2, 1, &v10);
  v5 = SyncedWindowData;
  if ( SyncedWindowData < 0 )
  {
    v9 = 2170;
    goto LABEL_21;
  }
  v6 = v10;
  if ( v10 )
  {
    LOBYTE(v10) = 1;
    v7 = (CTopLevelWindow3D *)*((_QWORD *)v6 + 56);
    if ( !v7 )
      goto LABEL_6;
    SyncedWindowData = CTopLevelWindow3D::BeginDestroySprite(v7, (bool *)&v10);
    v5 = SyncedWindowData;
    if ( SyncedWindowData < 0 )
    {
      v9 = 2176;
      goto LABEL_21;
    }
    if ( !(_BYTE)v10 )
    {
      *((_BYTE *)v6 + 664) |= 4u;
      if ( !*((_QWORD *)v6 + 60) && !CWindowData::IsImmersiveWindow(v6) && (int)CWindowData::SnapshotWindow(v6) >= 0 )
      {
        SyncedWindowData = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance
                                                                             + 5)
                                                                           + 16LL)
                                                             + 24LL))(*(_QWORD *)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance
                                                                                  + 5)
                                                                                + 16LL));
        v5 = SyncedWindowData;
        if ( SyncedWindowData < 0 )
        {
          v9 = 2199;
          goto LABEL_21;
        }
      }
      SyncedWindowData = CGenericSet<CWindowData *>::Add((struct _RTL_GENERIC_TABLE *)((char *)this + 312), (__int64)v6);
      v5 = SyncedWindowData;
      if ( SyncedWindowData < 0 )
      {
        v9 = 2203;
LABEL_21:
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, SyncedWindowData, v9);
        goto LABEL_8;
      }
    }
    else
    {
LABEL_6:
      CWindowList::ImmediateDestroySprite(this, v6);
    }
    if ( !(*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 24LL))(a2) )
    {
      SyncedWindowData = CWindowList::DestroyWindow(this, a2);
      v5 = SyncedWindowData;
      if ( SyncedWindowData < 0 )
      {
        v9 = 2208;
        goto LABEL_21;
      }
    }
  }
  else
  {
    v5 = -2147024890;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024890, 0x87Bu);
  }
LABEL_8:
  LeaveCriticalSection(&CDesktopManager::s_csDwmInstance);
  return v5;
}
