/*
 * XREFs of ?OnDisableMoveSizeFeedbackChanged@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x180104C10
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800049E0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x18001EAE0 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?GetSyncedWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@_NPEAPEAVCWindowData@@@Z @ 0x1800239B8 (-GetSyncedWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@_NPEAPEAVCWindowData@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180063740 (_guard_xfg_dispatch_icall_nop.c)
 *     ?IsInWindowMoveChange@CWindowList@@UEAAJPEAUIDwmWindow@@_NW4tagINPUT_MESSAGE_DEVICE_TYPE@@@Z @ 0x1801045C0 (-IsInWindowMoveChange@CWindowList@@UEAAJPEAUIDwmWindow@@_NW4tagINPUT_MESSAGE_DEVICE_TYPE@@@Z.c)
 *     ?IsInWindowResizeChange@CWindowList@@UEAAJPEAUIDwmWindow@@_NIW4tagINPUT_MESSAGE_DEVICE_TYPE@@@Z @ 0x180104870 (-IsInWindowResizeChange@CWindowList@@UEAAJPEAUIDwmWindow@@_NIW4tagINPUT_MESSAGE_DEVICE_TYPE@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CWindowList::OnDisableMoveSizeFeedbackChanged(CWindowList *this, struct IDwmWindow *a2)
{
  int SyncedWindowData; // eax
  unsigned int v5; // ebx
  __int64 v6; // rdx
  char v7; // al
  struct CWindowData *v8; // rdi
  char v9; // al
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  struct CWindowData *v12; // [rsp+50h] [rbp+18h] BYREF
  struct _RTL_CRITICAL_SECTION *v13; // [rsp+58h] [rbp+20h] BYREF

  v13 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v12 = 0LL;
  SyncedWindowData = CWindowList::GetSyncedWindowData(this, a2, 1, &v12);
  v5 = SyncedWindowData;
  if ( SyncedWindowData >= 0 )
  {
    v7 = (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 416LL))(a2);
    v8 = v12;
    if ( v12 )
    {
      if ( ((*((_BYTE *)v12 + 670) & 2) != 0) != v7 )
      {
        *((_BYTE *)v12 + 670) ^= (*((_BYTE *)v12 + 670) ^ (2 * v7)) & 2;
        if ( v7 )
        {
          v9 = *((_BYTE *)v8 + 669);
          if ( (v9 & 0x10) != 0 )
          {
            SyncedWindowData = CWindowList::IsInWindowMoveChange(this, *((struct IDwmWindow **)v8 + 3), 0, IMDT_TOUCH);
            v5 = SyncedWindowData;
            if ( SyncedWindowData < 0 )
            {
              v6 = 2832LL;
              goto LABEL_13;
            }
            v9 = *((_BYTE *)v8 + 669);
          }
          if ( (v9 & 0x20) != 0 )
          {
            SyncedWindowData = CWindowList::IsInWindowResizeChange(
                                 (struct CWindowData **)this,
                                 *((struct IDwmWindow **)v8 + 3),
                                 0,
                                 0,
                                 IMDT_TOUCH);
            v5 = SyncedWindowData;
            if ( SyncedWindowData < 0 )
            {
              v6 = 2837LL;
              goto LABEL_13;
            }
          }
        }
      }
    }
    v5 = 0;
    goto LABEL_15;
  }
  v6 = 2817LL;
LABEL_13:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v6,
    (int)"clientcore\\windows\\dwm\\udwm\\windowlist.cpp",
    (const char *)(unsigned int)SyncedWindowData);
LABEL_15:
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v13);
  return v5;
}
