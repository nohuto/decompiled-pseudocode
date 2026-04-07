/*
 * XREFs of ?SetTaggedWindowRect@CWindowList@@AEAAXPEBUMILCMD_DWM_REDIRECTION_SETTAGGEDWINDOWRECT@@@Z @ 0x18010CDB4
 * Callers:
 *     ?ProcessAsyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEBXI_N@Z @ 0x1800321C0 (-ProcessAsyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEBXI_N@Z.c)
 * Callees:
 *     ?FindWindowDataByHwnd@CWindowList@@QEAAPEAVCWindowData@@PEAUHWND__@@@Z @ 0x18000D0CC (-FindWindowDataByHwnd@CWindowList@@QEAAPEAVCWindowData@@PEAUHWND__@@@Z.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x180025534 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 */

void __fastcall CWindowList::SetTaggedWindowRect(
        CWindowList *this,
        const struct MILCMD_DWM_REDIRECTION_SETTAGGEDWINDOWRECT *a2)
{
  struct CWindowData *WindowDataByHwnd; // rax
  struct _RTL_CRITICAL_SECTION *v5; // [rsp+38h] [rbp+10h] BYREF

  v5 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  WindowDataByHwnd = CWindowList::FindWindowDataByHwnd(this, *(HWND *)((char *)a2 + 4));
  if ( WindowDataByHwnd )
  {
    *((_BYTE *)WindowDataByHwnd + 678) |= 0x20u;
    *(_OWORD *)((char *)WindowDataByHwnd + 764) = *(_OWORD *)((char *)a2 + 12);
  }
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v5);
}
