/*
 * XREFs of ?StartupBegin@CWindowList@@AEAAJXZ @ 0x18005DB0C
 * Callers:
 *     ?ProcessAsyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEBXI_N@Z @ 0x180021CF0 (-ProcessAsyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEBXI_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800045F8 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?SendSwitchModeCommand@CDesktopManager@@SAJ_K@Z @ 0x180016BA0 (-SendSwitchModeCommand@CDesktopManager@@SAJ_K@Z.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x18001EAE0 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?CheckAnyPreference@CDesktopManager@@SA_NK@Z @ 0x180037E58 (-CheckAnyPreference@CDesktopManager@@SA_NK@Z.c)
 *     ?SetPreferences@CDesktopManager@@SAXK@Z @ 0x18005DBAC (-SetPreferences@CDesktopManager@@SAXK@Z.c)
 *     ?EnsureDCompResources@CDesktopManager@@QEAAJXZ @ 0x18005DBDC (-EnsureDCompResources@CDesktopManager@@QEAAJXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CWindowList::StartupBegin(CWindowList *this)
{
  int v2; // eax
  unsigned int v3; // ebx
  int v4; // eax
  unsigned int v5; // ecx
  unsigned __int64 v7; // [rsp+48h] [rbp+10h] BYREF
  struct _RTL_CRITICAL_SECTION *v8; // [rsp+50h] [rbp+18h] BYREF

  v8 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  GetDesktopID(1LL, &v7);
  v2 = CDesktopManager::SendSwitchModeCommand(v7);
  v3 = v2;
  if ( v2 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v2, 0x1AC3u);
  }
  else
  {
    v4 = CDesktopManager::EnsureDCompResources(CDesktopManager::s_pDesktopManagerInstance);
    v3 = v4;
    if ( v4 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v4, 0x1AC6u);
    }
    else
    {
      *((_BYTE *)this + 656) = (unsigned __int8)CDesktopManager::CheckAnyPreference(0x10u) == 0;
      CDesktopManager::SetPreferences(v5);
    }
  }
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v8);
  return v3;
}
