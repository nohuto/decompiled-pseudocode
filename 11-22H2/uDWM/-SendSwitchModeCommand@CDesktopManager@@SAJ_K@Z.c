/*
 * XREFs of ?SendSwitchModeCommand@CDesktopManager@@SAJ_K@Z @ 0x180040F8C
 * Callers:
 *     ?ProcessAsyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEBXI_N@Z @ 0x1800321C0 (-ProcessAsyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEBXI_N@Z.c)
 *     ?ModeChange@CDesktopManager@@QEAAJXZ @ 0x18003EA04 (-ModeChange@CDesktopManager@@QEAAJXZ.c)
 *     ?SwitchDesktop@CWindowList@@UEAAJK_K@Z @ 0x180040960 (-SwitchDesktop@CWindowList@@UEAAJK_K@Z.c)
 *     ?StartupBegin@CWindowList@@AEAAJXZ @ 0x180048E1C (-StartupBegin@CWindowList@@AEAAJXZ.c)
 *     ?EnableMonitorRenderTargets@CDesktopManager@@QEAAJ_N@Z @ 0x180056258 (-EnableMonitorRenderTargets@CDesktopManager@@QEAAJ_N@Z.c)
 * Callees:
 *     ?IsLogonDesktop@CDesktopManager@@SA_N_K@Z @ 0x18003918C (-IsLogonDesktop@CDesktopManager@@SA_N_K@Z.c)
 *     ?UpdateHolographicLockState@CAnalogCompositorManager@@AEAAJXZ @ 0x18003A25C (-UpdateHolographicLockState@CAnalogCompositorManager@@AEAAJXZ.c)
 *     ?GetInstance@CAnalogCompositorManager@@CAPEAV1@XZ @ 0x180041028 (-GetInstance@CAnalogCompositorManager@@CAPEAV1@XZ.c)
 *     ?UpdateRemotingMode@CDesktopManager@@AEAA_NXZ @ 0x180041098 (-UpdateRemotingMode@CDesktopManager@@AEAA_NXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18006610C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800663A0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CDesktopManager::SendSwitchModeCommand(__int64 a1)
{
  __int64 v2; // rdx
  __int64 v3; // r8
  CDesktopManager *v4; // rax
  unsigned int v5; // ebx
  unsigned int v6; // esi
  int v7; // eax
  unsigned int v8; // ebx
  struct CAnalogCompositorManager *Instance; // rax
  __int64 v10; // rdx
  __int64 v11; // r8
  int updated; // eax
  bool v14; // zf

  CDesktopManager::UpdateRemotingMode(CDesktopManager::s_pDesktopManagerInstance);
  v4 = CDesktopManager::s_pDesktopManagerInstance;
  v5 = *((_DWORD *)CDesktopManager::s_pDesktopManagerInstance + 8);
  v6 = *((_DWORD *)CDesktopManager::s_pDesktopManagerInstance + 9);
  if ( v5 == 5 )
  {
    v14 = CDesktopManager::IsLogonDesktop(a1, v2, v3) == 0;
    v4 = CDesktopManager::s_pDesktopManagerInstance;
    if ( !v14 )
      v5 = 3;
  }
  v7 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(**(_QWORD **)(*((_QWORD *)v4 + 6) + 24LL) + 184LL))(
         *(_QWORD *)(*((_QWORD *)v4 + 6) + 24LL),
         v5,
         v6);
  v8 = v7;
  if ( v7 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v7, 0x141u, 0LL);
  }
  else
  {
    Instance = CAnalogCompositorManager::GetInstance();
    *((_QWORD *)Instance + 8) = a1;
    updated = CAnalogCompositorManager::UpdateHolographicLockState(Instance, v10, v11);
    v8 = updated;
    if ( updated < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, updated, 0x144u, 0LL);
  }
  return v8;
}
