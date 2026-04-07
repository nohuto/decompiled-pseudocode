/*
 * XREFs of ?SetNotifyWindow@CImmersiveIconicBitmapRegistry@@QEAAXPEAUHWND__@@@Z @ 0x180052B3C
 * Callers:
 *     ?ProcessAsyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEBXI_N@Z @ 0x1800321C0 (-ProcessAsyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEBXI_N@Z.c)
 * Callees:
 *     ?GetShellWindowForDesktop@CWindowList@@QEAAPEAUHWND__@@_K@Z @ 0x180052D5C (-GetShellWindowForDesktop@CWindowList@@QEAAPEAUHWND__@@_K@Z.c)
 */

void __fastcall CImmersiveIconicBitmapRegistry::SetNotifyWindow(
        CImmersiveIconicBitmapRegistry *this,
        HWND a2,
        __int64 a3)
{
  HWND ShellWindowForDesktop; // rdi
  unsigned __int64 v6[3]; // [rsp+20h] [rbp-18h] BYREF
  DWORD dwProcessId; // [rsp+50h] [rbp+18h] BYREF
  DWORD v8; // [rsp+58h] [rbp+20h] BYREF

  if ( (unsigned int)GetDesktopID(2LL, v6, a3) )
  {
    ShellWindowForDesktop = CWindowList::GetShellWindowForDesktop(
                              *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 54),
                              v6[0]);
    if ( ShellWindowForDesktop )
    {
      if ( GetWindowThreadProcessId(a2, &dwProcessId)
        && GetWindowThreadProcessId(ShellWindowForDesktop, &v8)
        && v8 == dwProcessId )
      {
        *((_QWORD *)this + 10) = a2;
      }
    }
  }
}
