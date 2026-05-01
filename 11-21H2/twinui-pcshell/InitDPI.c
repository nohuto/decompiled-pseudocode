/*
 * XREFs of InitDPI @ 0x1805E95BC
 * Callers:
 *     ?GetPerMonitorDpi@ExperienceManagerUtils@@YAHPEAUHMONITOR__@@@Z @ 0x18004BD9C (-GetPerMonitorDpi@ExperienceManagerUtils@@YAHPEAUHMONITOR__@@@Z.c)
 *     ?AdjustSizeForScale@CPeopleBarFlyoutExperienceManager@@AEAAXPEAUtagSIZE@@@Z @ 0x180368228 (-AdjustSizeForScale@CPeopleBarFlyoutExperienceManager@@AEAAXPEAUtagSIZE@@@Z.c)
 *     ?PixelToHimetric@TouchGestureProcessor@@AEAA?AUPoint@Foundation@Windows@winrt@@AEBU2345@@Z @ 0x18058EBEC (-PixelToHimetric@TouchGestureProcessor@@AEAA-AUPoint@Foundation@Windows@winrt@@AEBU2345@@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

int InitDPI()
{
  __int64 (*ProcAddress)(void); // rax
  int v1; // ebx
  HMODULE ModuleHandleW; // rax
  HDC DC; // rax
  HDC v4; // rbx

  ProcAddress = (__int64 (*)(void))qword_1807B28F8;
  v1 = 1;
  if ( qword_1807B28F8 == -1 )
  {
    ModuleHandleW = GetModuleHandleW(L"USER32.DLL");
    if ( ModuleHandleW )
    {
      ProcAddress = GetProcAddress(ModuleHandleW, "IsProcessDPIAware");
      qword_1807B28F8 = (__int64)ProcAddress;
    }
    else
    {
      ProcAddress = (__int64 (*)(void))qword_1807B28F8;
    }
  }
  if ( ProcAddress )
  {
    LODWORD(ProcAddress) = ProcAddress();
    v1 = (int)ProcAddress;
  }
  if ( dword_1807B27F8 == -1 || dword_1807B6F20 != v1 )
  {
    dword_1807B6F20 = v1;
    DC = GetDC(0LL);
    v4 = DC;
    if ( DC )
    {
      dword_1807B27F8 = GetDeviceCaps(DC, 88);
      dword_1807B27F4 = GetDeviceCaps(v4, 90);
      LODWORD(ProcAddress) = ReleaseDC(0LL, v4);
    }
    else
    {
      LODWORD(ProcAddress) = 96;
      dword_1807B27F8 = 96;
      dword_1807B27F4 = 96;
    }
  }
  return (int)ProcAddress;
}
