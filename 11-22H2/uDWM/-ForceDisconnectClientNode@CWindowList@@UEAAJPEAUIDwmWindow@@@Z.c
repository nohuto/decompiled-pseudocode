/*
 * XREFs of ?ForceDisconnectClientNode@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x180036310
 * Callers:
 *     <none>
 * Callees:
 *     McGenEventWrite_EtwEventWriteTransfer @ 0x180025580 (McGenEventWrite_EtwEventWriteTransfer.c)
 *     ?GetSyncedWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@_NPEAPEAVCWindowData@@@Z @ 0x1800341D8 (-GetSyncedWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@_NPEAPEAVCWindowData@@@Z.c)
 *     ?ForceDisconnectClientArea@CTopLevelWindow@@QEAAXXZ @ 0x1800378A4 (-ForceDisconnectClientArea@CTopLevelWindow@@QEAAXXZ.c)
 *     ?UpdateSceneImpl@CDesktopManager@@AEAAJPEAVCVisual@@@Z @ 0x1800476D0 (-UpdateSceneImpl@CDesktopManager@@AEAAJPEAVCVisual@@@Z.c)
 *     __security_check_cookie @ 0x18005C460 (__security_check_cookie.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18006610C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800663A0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CWindowList::ForceDisconnectClientNode(CWindowList *this, struct IDwmWindow *a2)
{
  int SyncedWindowData; // eax
  unsigned int v5; // edi
  struct CWindowData *v6; // rbx
  CTopLevelWindow *v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // rax
  PVOID v10; // rax
  CDesktopManager *v11; // rcx
  struct CVisual *v12; // rdx
  int updated; // eax
  __int64 v14; // r8
  _QWORD Buffer[2]; // [rsp+40h] [rbp-39h] BYREF
  __int128 v17; // [rsp+50h] [rbp-29h]
  __int128 v18; // [rsp+60h] [rbp-19h]
  __int128 v19; // [rsp+70h] [rbp-9h]
  __int64 v20; // [rsp+80h] [rbp+7h]
  char v21; // [rsp+88h] [rbp+Fh]
  struct CWindowData *v22[2]; // [rsp+A0h] [rbp+27h] BYREF

  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v22[0] = 0LL;
  SyncedWindowData = CWindowList::GetSyncedWindowData(this, a2, 1, v22);
  v5 = SyncedWindowData;
  if ( SyncedWindowData < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, SyncedWindowData, 0x1989u, 0LL);
  }
  else
  {
    v6 = v22[0];
    if ( v22[0] )
    {
      v7 = (CTopLevelWindow *)*((_QWORD *)v22[0] + 55);
      if ( v7 )
        CTopLevelWindow::ForceDisconnectClientArea(v7);
      v8 = *((_QWORD *)v6 + 18);
      if ( v8 )
      {
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v8 + 8), 0xFFFFFFFF) == 1 )
          (**(void (__fastcall ***)(__int64, __int64))v8)(v8, 1LL);
        *((_QWORD *)v6 + 18) = 0LL;
        v6 = v22[0];
      }
      v9 = *((_QWORD *)v6 + 17);
      Buffer[1] = 0LL;
      v17 = 0LL;
      v20 = -1LL;
      v21 = 0;
      v18 = 0LL;
      v19 = 0LL;
      Buffer[0] = v9;
      v10 = RtlLookupElementGenericTable((PRTL_GENERIC_TABLE)((char *)this + 8), Buffer);
      if ( v10 )
        v12 = (struct CVisual *)*((_QWORD *)v10 + 3);
      else
        v12 = 0LL;
      updated = CDesktopManager::UpdateSceneImpl(v11, v12);
      v5 = updated;
      if ( updated < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, updated, 0x1991u, 0LL);
      }
      else
      {
        if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
          McGenEventWrite_EtwEventWriteTransfer(
            Microsoft_Windows_Dwm_Udwm_Provider_Context,
            (__int64)&CommitChannel_Disconnect,
            v14,
            1LL,
            (__int64)v22);
        (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 6) + 24LL)
                                       + 24LL))(*(_QWORD *)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 6)
                                                          + 24LL));
      }
    }
  }
  LeaveCriticalSection(&CDesktopManager::s_csDwmInstance);
  return v5;
}
