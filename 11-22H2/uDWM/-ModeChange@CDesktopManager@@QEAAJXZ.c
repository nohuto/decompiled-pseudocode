/*
 * XREFs of ?ModeChange@CDesktopManager@@QEAAJXZ @ 0x18003EA04
 * Callers:
 *     ?UpdateSettings@CDesktopManager@@QEAAJPEAK@Z @ 0x18003A654 (-UpdateSettings@CDesktopManager@@QEAAJPEAK@Z.c)
 *     ?ModeChange@CWindowList@@AEAAJXZ @ 0x18010B1CC (-ModeChange@CWindowList@@AEAAJXZ.c)
 * Callees:
 *     ?RecreateDesktopWindowReplacementForDesktops@CWindowList@@QEAAXXZ @ 0x1800393FC (-RecreateDesktopWindowReplacementForDesktops@CWindowList@@QEAAXXZ.c)
 *     ?CreateMonitorRenderTargets@CDesktopManager@@AEAAJXZ @ 0x18003BBE8 (-CreateMonitorRenderTargets@CDesktopManager@@AEAAJXZ.c)
 *     ?CheckDXGIAdapter@CGraphicsDeviceManager@@IEAAJPEA_N@Z @ 0x18003E734 (-CheckDXGIAdapter@CGraphicsDeviceManager@@IEAAJPEA_N@Z.c)
 *     ?SendSwitchModeCommand@CDesktopManager@@SAJ_K@Z @ 0x180040F8C (-SendSwitchModeCommand@CDesktopManager@@SAJ_K@Z.c)
 *     ?GetInstance@CAnalogCompositorManager@@CAPEAV1@XZ @ 0x180041028 (-GetInstance@CAnalogCompositorManager@@CAPEAV1@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18006610C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     McTemplateU0qqq_EtwEventWriteTransfer @ 0x1800B6024 (McTemplateU0qqq_EtwEventWriteTransfer.c)
 */

__int64 __fastcall CDesktopManager::ModeChange(CGraphicsDeviceManager **this)
{
  __int64 v2; // r8
  int v3; // eax
  unsigned int v4; // ebx
  int MonitorRenderTargets; // eax
  int v6; // eax
  HDC DC; // rbx
  char DeviceCaps; // si
  int SystemMetrics; // ebx
  int v11; // eax
  int v12; // edx
  bool v13; // [rsp+48h] [rbp+10h] BYREF
  unsigned __int64 v14; // [rsp+50h] [rbp+18h] BYREF

  if ( (unsigned __int8)EtwEventEnabled(Microsoft_Windows_Dwm_Udwm_Provider_Context[0], &UdwmProcessModeChange_Info) )
  {
    DC = GetDC(0LL);
    DeviceCaps = GetDeviceCaps(DC, 12);
    ReleaseDC(0LL, DC);
    if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
    {
      SystemMetrics = GetSystemMetrics(1);
      v11 = GetSystemMetrics(0);
      McTemplateU0qqq_EtwEventWriteTransfer(
        (unsigned int)Microsoft_Windows_Dwm_Udwm_Provider_Context,
        v12,
        v11,
        SystemMetrics,
        DeviceCaps);
    }
  }
  GetDesktopID(1LL, &v14, v2);
  v3 = CDesktopManager::SendSwitchModeCommand(v14);
  v4 = v3;
  if ( v3 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v3, 0x425u, 0LL);
  }
  else if ( *((_BYTE *)this + 16)
         && (MonitorRenderTargets = CDesktopManager::CreateMonitorRenderTargets(this),
             v4 = MonitorRenderTargets,
             MonitorRenderTargets < 0) )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, MonitorRenderTargets, 0x429u, 0LL);
  }
  else
  {
    CAnalogCompositorManager::GetInstance();
    v6 = CGraphicsDeviceManager::CheckDXGIAdapter(this[7], &v13);
    v4 = v6;
    if ( v6 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v6, 0x432u, 0LL);
  }
  CWindowList::RecreateDesktopWindowReplacementForDesktops(*((CWindowList **)CDesktopManager::s_pDesktopManagerInstance
                                                           + 54));
  return v4;
}
