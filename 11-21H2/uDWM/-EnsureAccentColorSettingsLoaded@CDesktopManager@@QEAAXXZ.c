/*
 * XREFs of ?EnsureAccentColorSettingsLoaded@CDesktopManager@@QEAAXXZ @ 0x180035610
 * Callers:
 *     ?AdjustWindowColorization@CGlassColorizationParameters@@QEAAXPEBTGpCC@@MU?$TMILFlagsEnum@W4FlagsEnum@ColorizationFlags@@@@@Z @ 0x18002D380 (-AdjustWindowColorization@CGlassColorizationParameters@@QEAAXPEBTGpCC@@MU-$TMILFlagsEnum@W4Flags.c)
 *     ?GetRoundedBorderColor@CTopLevelWindow@@AEAA?AU_D3DCOLORVALUE@@XZ @ 0x18003551C (-GetRoundedBorderColor@CTopLevelWindow@@AEAA-AU_D3DCOLORVALUE@@XZ.c)
 *     ?GetAccentColor@CDesktopManager@@QEAA_N_NPEAK@Z @ 0x1800B087C (-GetAccentColor@CDesktopManager@@QEAA_N_NPEAK@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180063740 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall CDesktopManager::EnsureAccentColorSettingsLoaded(CDesktopManager *this)
{
  char v2; // bp
  bool v3; // si
  int v4; // ecx
  int v5; // eax
  int v6; // eax
  int v7; // [rsp+40h] [rbp+8h] BYREF
  int v8; // [rsp+48h] [rbp+10h] BYREF

  if ( !*((_BYTE *)this + 616) )
  {
    v8 = 0;
    v2 = 0;
    v7 = 0;
    v3 = 0;
    (*(void (__fastcall **)(_QWORD, const wchar_t *, char *))(**((_QWORD **)CDesktopManager::s_pDesktopManagerInstance
                                                               + 8)
                                                            + 8LL))(
      *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 8),
      L"ColorPrevalence",
      (char *)this + 620);
    if ( *((_DWORD *)this + 155) )
    {
      if ( (*(int (__fastcall **)(_QWORD, const wchar_t *, int *))(**((_QWORD **)CDesktopManager::s_pDesktopManagerInstance
                                                                    + 8)
                                                                 + 8LL))(
             *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 8),
             L"AccentColor",
             &v8) >= 0 )
        v3 = v8 != 0;
      v6 = (*(__int64 (__fastcall **)(_QWORD, const wchar_t *, int *))(**((_QWORD **)CDesktopManager::s_pDesktopManagerInstance
                                                                        + 8)
                                                                     + 8LL))(
             *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 8),
             L"AccentColorInactive",
             &v7);
      v4 = v7;
      if ( v6 >= 0 )
      {
        if ( v7 )
          v2 = 1;
      }
    }
    else
    {
      v4 = v7;
    }
    v5 = v8;
    *((_BYTE *)this + 617) = v3;
    *((_BYTE *)this + 618) = v2;
    *((_DWORD *)this + 156) = v5;
    *((_DWORD *)this + 157) = v4;
    *((_BYTE *)this + 616) = 1;
  }
}
