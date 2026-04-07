/*
 * XREFs of ?AccentPolicyChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x180016E10
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800045F8 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?OnAccentPolicyUpdated@CTopLevelWindow@@QEAAXXZ @ 0x180017084 (-OnAccentPolicyUpdated@CTopLevelWindow@@QEAAXXZ.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x18001EAE0 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?GetSyncedWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@_NPEAPEAVCWindowData@@@Z @ 0x1800239B8 (-GetSyncedWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@_NPEAPEAVCWindowData@@@Z.c)
 *     __security_check_cookie @ 0x180060050 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180063740 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CWindowList::AccentPolicyChange(CWindowList *this, struct IDwmWindow *a2)
{
  int SyncedWindowData; // eax
  unsigned int v5; // edi
  struct CWindowData *v6; // rbx
  _DWORD *v7; // rax
  CTopLevelWindow *v8; // rcx
  struct _RTL_CRITICAL_SECTION *v10; // [rsp+30h] [rbp-28h] BYREF
  struct CWindowData *v11[2]; // [rsp+38h] [rbp-20h] BYREF

  v10 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v11[0] = 0LL;
  SyncedWindowData = CWindowList::GetSyncedWindowData(this, a2, 1, v11);
  v5 = SyncedWindowData;
  if ( SyncedWindowData < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, SyncedWindowData, 0x1707u);
  }
  else
  {
    v6 = v11[0];
    if ( v11[0] )
    {
      v7 = (_DWORD *)(*(__int64 (__fastcall **)(struct IDwmWindow *, struct CWindowData **))(*(_QWORD *)a2 + 224LL))(
                       a2,
                       v11);
      if ( *((_DWORD *)v6 + 42) != *v7 || *((_DWORD *)v6 + 43) != v7[1] || *((_DWORD *)v6 + 44) != v7[2] )
      {
        *(_OWORD *)((char *)v6 + 168) = *(_OWORD *)(*(__int64 (__fastcall **)(struct IDwmWindow *, struct CWindowData **))(*(_QWORD *)a2 + 224LL))(
                                                     a2,
                                                     v11);
        v8 = (CTopLevelWindow *)*((_QWORD *)v6 + 55);
        if ( v8 )
          CTopLevelWindow::OnAccentPolicyUpdated(v8);
      }
    }
  }
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v10);
  return v5;
}
