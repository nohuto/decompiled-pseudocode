/*
 * XREFs of ?_GetWindowRootVisual@CProjectionBorderManager@@AEAAJPEAUHWND__@@PEAPEAVCVisualProxy@@@Z @ 0x1800CF898
 * Callers:
 *     ?_GetCapturedItemRootVisual@CProjectionBorderManager@@AEAAJPEAUHWND__@@PEAPEAVCVisualProxy@@PEAPEAVCapturedWindowSWRVisual@@@Z @ 0x1800CF640 (-_GetCapturedItemRootVisual@CProjectionBorderManager@@AEAAJPEAUHWND__@@PEAPEAVCVisualProxy@@PEAP.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800049E0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x18001EAE0 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?GetSyncedWindowDataByHwnd@CWindowList@@QEAAJPEAUHWND__@@PEAPEAVCWindowData@@@Z @ 0x180020CF0 (-GetSyncedWindowDataByHwnd@CWindowList@@QEAAJPEAUHWND__@@PEAPEAVCWindowData@@@Z.c)
 */

__int64 __fastcall CProjectionBorderManager::_GetWindowRootVisual(
        CProjectionBorderManager *this,
        HWND a2,
        struct CVisualProxy **a3)
{
  int SyncedWindowDataByHwnd; // eax
  unsigned int v6; // ebx
  __int64 v7; // rcx
  struct CVisualProxy *v8; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  struct CWindowData *v11; // [rsp+30h] [rbp+8h] BYREF
  struct _RTL_CRITICAL_SECTION *v12; // [rsp+40h] [rbp+18h] BYREF

  v11 = this;
  v12 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  *a3 = 0LL;
  v11 = 0LL;
  SyncedWindowDataByHwnd = CWindowList::GetSyncedWindowDataByHwnd(
                             *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 52),
                             a2,
                             &v11);
  v6 = SyncedWindowDataByHwnd;
  if ( SyncedWindowDataByHwnd >= 0 )
  {
    if ( v11 )
    {
      v7 = *((_QWORD *)v11 + 55);
      if ( v7 )
      {
        v8 = *(struct CVisualProxy **)(v7 + 264);
        if ( v8 )
          v8 = (struct CVisualProxy *)*((_QWORD *)v8 + 2);
        *a3 = v8;
      }
    }
    if ( *a3 )
      v6 = 0;
    else
      v6 = -2147467261;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x3D0,
      (int)"clientcore\\windows\\dwm\\udwm\\projectionbordermanager.cpp",
      (const char *)(unsigned int)SyncedWindowDataByHwnd);
  }
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v12);
  return v6;
}
