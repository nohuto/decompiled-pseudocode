/*
 * XREFs of ?SetPartColor@CWindowList@@UEAAJPEAUIDwmWindow@@PEBUNCPART_COLOR@@@Z @ 0x180016590
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x180025534 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?GetSyncedWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@_NPEAPEAVCWindowData@@@Z @ 0x1800341D8 (-GetSyncedWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@_NPEAPEAVCWindowData@@@Z.c)
 *     ?OnColorizationUpdated@CWindowData@@QEAAXXZ @ 0x1800395E0 (-OnColorizationUpdated@CWindowData@@QEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009D824 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CWindowList::SetPartColor(CWindowList *this, struct IDwmWindow *a2, const struct NCPART_COLOR *a3)
{
  int SyncedWindowData; // eax
  unsigned int v7; // ebx
  int v8; // edx
  int v9; // r8d
  CWindowData *v10; // rcx
  int v11; // edx
  int v13[6]; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  CWindowData *v15; // [rsp+58h] [rbp+20h] BYREF

  *(_QWORD *)v13 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v15 = 0LL;
  SyncedWindowData = CWindowList::GetSyncedWindowData(this, a2, 1, &v15);
  v7 = SyncedWindowData;
  if ( SyncedWindowData < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xB2C,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\windowlist.cpp",
      (const char *)(unsigned int)SyncedWindowData,
      v13[0]);
    goto LABEL_9;
  }
  v8 = *(_DWORD *)a3;
  v9 = *((_DWORD *)a3 + 1);
  v10 = v15;
  if ( v15 )
  {
    if ( !v8 )
    {
      if ( *((_DWORD *)v15 + 47) == v9 )
        goto LABEL_8;
      *((_DWORD *)v15 + 47) = v9;
      goto LABEL_7;
    }
    v11 = v8 - 1;
    if ( v11 )
    {
      if ( v11 != 1 || *((_DWORD *)v15 + 49) == v9 )
        goto LABEL_8;
      *((_DWORD *)v15 + 49) = v9;
      goto LABEL_7;
    }
    if ( *((_DWORD *)v15 + 48) != v9 )
    {
      *((_DWORD *)v15 + 48) = v9;
LABEL_7:
      CWindowData::OnColorizationUpdated(v10);
    }
  }
LABEL_8:
  v7 = 0;
LABEL_9:
  CGuard<CDwmCS>::~CGuard<CDwmCS>(v13);
  return v7;
}
