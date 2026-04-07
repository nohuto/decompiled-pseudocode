/*
 * XREFs of ?CreateSprite@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x180032710
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800045F8 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?OnWindowCloakChange@CAnimationScheduler@@QEAAJPEBVCWindowData@@_N1PEA_N@Z @ 0x18001D558 (-OnWindowCloakChange@CAnimationScheduler@@QEAAJPEBVCWindowData@@_N1PEA_N@Z.c)
 *     ?ImmediateDestroySprite@CWindowList@@AEAAXPEAVCWindowData@@@Z @ 0x18001EFD0 (-ImmediateDestroySprite@CWindowList@@AEAAXPEAVCWindowData@@@Z.c)
 *     ?ClearSnapshot@CWindowData@@QEAAX_N00@Z @ 0x18002254C (-ClearSnapshot@CWindowData@@QEAAX_N00@Z.c)
 *     ?ClipChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x180022FD0 (-ClipChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?SyncWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@PEAVCWindowData@@@Z @ 0x180023170 (-SyncWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@PEAVCWindowData@@@Z.c)
 *     ?GetSyncedWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@_NPEAPEAVCWindowData@@@Z @ 0x1800239B8 (-GetSyncedWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@_NPEAPEAVCWindowData@@@Z.c)
 *     ?ShowHide@CWindowList@@QEAAJPEAVCWindowData@@_N@Z @ 0x180031C90 (-ShowHide@CWindowList@@QEAAJPEAVCWindowData@@_N@Z.c)
 *     ?EnsureClientAreaVisualProxy@CWindowData@@QEAAJXZ @ 0x180036390 (-EnsureClientAreaVisualProxy@CWindowData@@QEAAJXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180063740 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CWindowList::CreateSprite(CWindowList *this, struct IDwmWindow *a2)
{
  int SyncedWindowData; // eax
  unsigned int v5; // esi
  CWindowData *v6; // r14
  CWindowData *v7; // rcx
  CWindowData **v8; // rax
  __int64 v9; // rax
  char *v10; // rax
  __int64 v11; // r8
  CWindowData *v12; // rax
  CWindowData **v13; // rcx
  CAnimationScheduler *v15; // rdi
  char v16; // bl
  unsigned __int8 v17; // al
  int v18; // eax
  int v19; // r9d
  unsigned int v20; // [rsp+20h] [rbp-49h]
  _QWORD Buffer[2]; // [rsp+30h] [rbp-39h] BYREF
  __int128 v22; // [rsp+40h] [rbp-29h]
  __int128 v23; // [rsp+50h] [rbp-19h]
  __int128 v24; // [rsp+60h] [rbp-9h]
  __int64 v25; // [rsp+70h] [rbp+7h]
  char v26; // [rsp+78h] [rbp+Fh]
  CWindowData *v27; // [rsp+E0h] [rbp+77h] BYREF
  struct _RTL_CRITICAL_SECTION *v28; // [rsp+E8h] [rbp+7Fh]

  v28 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v27 = 0LL;
  SyncedWindowData = CWindowList::GetSyncedWindowData(this, a2, 1, &v27);
  v5 = SyncedWindowData;
  if ( SyncedWindowData < 0 )
  {
    v20 = 1948;
LABEL_22:
    v19 = SyncedWindowData;
LABEL_32:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v19, v20);
    goto LABEL_15;
  }
  v6 = v27;
  if ( !v27 )
  {
    if ( (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 24LL))(a2) )
      goto LABEL_27;
    SyncedWindowData = CWindowList::GetSyncedWindowData(this, a2, 0, &v27);
    v5 = SyncedWindowData;
    if ( SyncedWindowData < 0 )
    {
      v20 = 1952;
      goto LABEL_22;
    }
    v6 = v27;
    if ( !v27 )
    {
LABEL_27:
      v5 = -2147024890;
      v20 = 1956;
LABEL_31:
      v19 = v5;
      goto LABEL_32;
    }
  }
  if ( (*((_BYTE *)v6 + 664) & 4) != 0 )
    CWindowList::ImmediateDestroySprite(this, v6);
  if ( !(*(unsigned __int8 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 80LL))(a2) )
  {
    SyncedWindowData = CWindowData::EnsureClientAreaVisualProxy(v6);
    v5 = SyncedWindowData;
    if ( SyncedWindowData < 0 )
    {
      v20 = 1968;
      goto LABEL_22;
    }
  }
  SyncedWindowData = CWindowList::SyncWindowData(this, a2, v6);
  v5 = SyncedWindowData;
  if ( SyncedWindowData < 0 )
  {
    v20 = 1972;
    goto LABEL_22;
  }
  v7 = *(CWindowData **)v6;
  v8 = (CWindowData **)*((_QWORD *)v6 + 1);
  if ( *(CWindowData **)(*(_QWORD *)v6 + 8LL) != v6 || *v8 != v6 )
    goto LABEL_33;
  *v8 = v7;
  *((_QWORD *)v7 + 1) = v8;
  v9 = *((_QWORD *)v6 + 17);
  Buffer[1] = 0LL;
  v22 = 0LL;
  v25 = -1LL;
  v26 = 0;
  v23 = 0LL;
  v24 = 0LL;
  Buffer[0] = v9;
  v10 = (char *)RtlLookupElementGenericTable((PRTL_GENERIC_TABLE)((char *)this + 8), Buffer);
  if ( !v10 || (v12 = (CWindowData *)(v10 + 80)) == 0LL )
  {
    v5 = -2147024882;
    v20 = 1984;
    goto LABEL_31;
  }
  v13 = (CWindowData **)*((_QWORD *)v12 + 1);
  if ( *v13 != v12 )
LABEL_33:
    __fastfail(3u);
  *(_QWORD *)v6 = v12;
  *((_QWORD *)v6 + 1) = v13;
  *v13 = v6;
  *((_QWORD *)v12 + 1) = v6;
  CWindowData::ClearSnapshot(v6, 1, v11, 1);
  SyncedWindowData = CWindowList::ClipChange(this, a2);
  v5 = SyncedWindowData;
  if ( SyncedWindowData < 0 )
  {
    v20 = 1993;
    goto LABEL_22;
  }
  if ( (*((_BYTE *)v6 + 664) & 1) != 0 )
  {
    LOBYTE(v27) = 0;
    v15 = (CAnimationScheduler *)*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 22);
    v16 = (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 80LL))(a2);
    v17 = (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 280LL))(a2);
    CAnimationScheduler::OnWindowCloakChange(v15, (const struct CTopLevelWindow **)v6, v17, v16, (bool *)&v27);
    if ( !(_BYTE)v27 )
    {
      v18 = CWindowList::ShowHide(this, v6, 1);
      v5 = v18;
      if ( v18 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v18, 0x7D2u);
    }
  }
LABEL_15:
  LeaveCriticalSection(&CDesktopManager::s_csDwmInstance);
  return v5;
}
