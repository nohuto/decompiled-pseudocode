/*
 * XREFs of ?StartupBegin@CWindowList@@AEAAJXZ @ 0x180048E1C
 * Callers:
 *     ?ProcessAsyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEBXI_N@Z @ 0x1800321C0 (-ProcessAsyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEBXI_N@Z.c)
 * Callees:
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x180025534 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?SendSwitchModeCommand@CDesktopManager@@SAJ_K@Z @ 0x180040F8C (-SendSwitchModeCommand@CDesktopManager@@SAJ_K@Z.c)
 *     ?EnsureDCompResources@CDesktopManager@@QEAAJXZ @ 0x180048EBC (-EnsureDCompResources@CDesktopManager@@QEAAJXZ.c)
 *     ?SetPreferences@CDesktopManager@@SAXK@Z @ 0x180049090 (-SetPreferences@CDesktopManager@@SAXK@Z.c)
 *     ?CheckAnyPreference@CDesktopManager@@SA_NK@Z @ 0x18004911C (-CheckAnyPreference@CDesktopManager@@SA_NK@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18006610C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CWindowList::StartupBegin(CWindowList *this)
{
  __int64 v2; // r8
  int v3; // eax
  unsigned int v4; // ebx
  int v5; // eax
  unsigned int v6; // ecx
  unsigned __int64 v8; // [rsp+48h] [rbp+10h] BYREF
  struct _RTL_CRITICAL_SECTION *v9; // [rsp+50h] [rbp+18h] BYREF

  v9 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  GetDesktopID(1LL, &v8, v2);
  v3 = CDesktopManager::SendSwitchModeCommand(v8);
  v4 = v3;
  if ( v3 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v3, 0x1B1Eu, 0LL);
  }
  else
  {
    v5 = CDesktopManager::EnsureDCompResources(CDesktopManager::s_pDesktopManagerInstance);
    v4 = v5;
    if ( v5 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v5, 0x1B21u, 0LL);
    }
    else
    {
      *((_BYTE *)this + 640) = !CDesktopManager::CheckAnyPreference(0x10u);
      CDesktopManager::SetPreferences(v6);
    }
  }
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v9);
  return v4;
}
