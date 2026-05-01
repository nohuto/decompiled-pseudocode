/*
 * XREFs of InitDPI @ 0x18073DC68
 * Callers:
 *     ?GetPerMonitorDpi@ExperienceManagerUtils@@YAHPEAUHMONITOR__@@@Z @ 0x1800D5CD4 (-GetPerMonitorDpi@ExperienceManagerUtils@@YAHPEAUHMONITOR__@@@Z.c)
 *     ?AdjustSizeForScale@CPeopleBarFlyoutExperienceManager@@AEAAXPEAUtagSIZE@@@Z @ 0x18043E1A8 (-AdjustSizeForScale@CPeopleBarFlyoutExperienceManager@@AEAAXPEAUtagSIZE@@@Z.c)
 *     ?PixelToHimetric@TouchGestureProcessor@@AEAA?AUPoint@Foundation@Windows@winrt@@AEBU2345@@Z @ 0x180650CE0 (-PixelToHimetric@TouchGestureProcessor@@AEAA-AUPoint@Foundation@Windows@winrt@@AEBU2345@@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

int InitDPI()
{
  __int64 (*ProcAddress)(void); // rax
  int v1; // ebx
  HMODULE ModuleHandleW; // rax
  HDC DC; // rax
  HDC v4; // rbx

  ProcAddress = (__int64 (*)(void))qword_18098C490;
  v1 = 1;
  if ( qword_18098C490 == -1 )
  {
    ModuleHandleW = GetModuleHandleW(L"USER32.DLL");
    if ( ModuleHandleW )
    {
      ProcAddress = GetProcAddress(ModuleHandleW, "IsProcessDPIAware");
      qword_18098C490 = (__int64)ProcAddress;
    }
    else
    {
      ProcAddress = (__int64 (*)(void))qword_18098C490;
    }
  }
  if ( ProcAddress )
  {
    LODWORD(ProcAddress) = ProcAddress();
    v1 = (int)ProcAddress;
  }
  if ( dword_18098C404 == -1 || dword_180992324 != v1 )
  {
    dword_180992324 = v1;
    DC = GetDC(0LL);
    v4 = DC;
    if ( DC )
    {
      dword_18098C404 = GetDeviceCaps(DC, 88);
      dword_18098C400 = GetDeviceCaps(v4, 90);
      LODWORD(ProcAddress) = ReleaseDC(0LL, v4);
    }
    else
    {
      LODWORD(ProcAddress) = 96;
      dword_18098C404 = 96;
      dword_18098C400 = 96;
    }
  }
  return (int)ProcAddress;
}
