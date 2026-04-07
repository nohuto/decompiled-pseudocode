/*
 * XREFs of ?GetWindowAttribute@CWindowList@@AEAAJPEAUMILCMD_DWM_WINDOWATTRIBUTE@@@Z @ 0x180013C5C
 * Callers:
 *     ?ProcessSyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEAXI_NKPEBU_REMOTE_PORT_VIEW@@PEAJPEAI@Z @ 0x18001DAC0 (-ProcessSyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEAXI_NKPEBU_REMOTE_PORT_VIEW@@PEAJPEAI@Z.c)
 * Callees:
 *     ?GetCaptionButtonBounds@CWindowList@@AEAAJPEAUHWND__@@_NPEAUtagRECT@@@Z @ 0x180013CF8 (-GetCaptionButtonBounds@CWindowList@@AEAAJPEAUHWND__@@_NPEAUtagRECT@@@Z.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x180025534 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?GetNcAdornmentInfoAttribute@CWindowList@@AEAAJPEAUHWND__@@PEAUNCADORNMENT_INFO@@@Z @ 0x18010A4B8 (-GetNcAdornmentInfoAttribute@CWindowList@@AEAAJPEAUHWND__@@PEAUNCADORNMENT_INFO@@@Z.c)
 *     ?IsVailContainer@@YA_NXZ @ 0x18010E138 (-IsVailContainer@@YA_NXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CWindowList::GetWindowAttribute(CWindowList *this, struct MILCMD_DWM_WINDOWATTRIBUTE *a2)
{
  int CaptionButtonBounds; // ebx
  HWND v5; // rbp
  struct _RTL_CRITICAL_SECTION *v7; // [rsp+38h] [rbp+10h] BYREF

  v7 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  CaptionButtonBounds = -2147024872;
  v5 = (HWND)*((_QWORD *)a2 + 1);
  if ( *((_DWORD *)a2 + 4) == 5 )
  {
    if ( *((_DWORD *)a2 + 5) == 16 )
    {
      if ( *((_DWORD *)CDesktopManager::s_pDesktopManagerInstance + 8) == 6 )
        IsVailContainer();
      CaptionButtonBounds = CWindowList::GetCaptionButtonBounds(this, v5, 0, (struct tagRECT *)((char *)a2 + 24));
    }
  }
  else if ( *((_DWORD *)a2 + 4) == 12 )
  {
    if ( *((_DWORD *)a2 + 5) == 20 )
    {
      CaptionButtonBounds = CWindowList::GetNcAdornmentInfoAttribute(
                              this,
                              *((HWND *)a2 + 1),
                              (struct MILCMD_DWM_WINDOWATTRIBUTE *)((char *)a2 + 24));
      if ( CaptionButtonBounds >= 0 && *((_DWORD *)CDesktopManager::s_pDesktopManagerInstance + 8) == 6 )
        IsVailContainer();
    }
  }
  else
  {
    CaptionButtonBounds = -2147024809;
  }
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v7);
  return (unsigned int)CaptionButtonBounds;
}
