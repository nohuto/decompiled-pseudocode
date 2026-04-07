/*
 * XREFs of ?ModeChange@CDesktopManager@@QEAAJXZ @ 0x180016D44
 * Callers:
 *     ?UpdateSettings@CDesktopManager@@QEAAJK@Z @ 0x180016690 (-UpdateSettings@CDesktopManager@@QEAAJK@Z.c)
 *     ?ModeChange@CWindowList@@AEAAJXZ @ 0x180104B8C (-ModeChange@CWindowList@@AEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800045F8 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?SendSwitchModeCommand@CDesktopManager@@SAJ_K@Z @ 0x180016BA0 (-SendSwitchModeCommand@CDesktopManager@@SAJ_K@Z.c)
 *     ?GetInstance@CAnalogCompositorManager@@CAPEAV1@XZ @ 0x180016C2C (-GetInstance@CAnalogCompositorManager@@CAPEAV1@XZ.c)
 *     ?RecreateDesktopWindowReplacementForDesktops@CWindowList@@QEAAXXZ @ 0x180017900 (-RecreateDesktopWindowReplacementForDesktops@CWindowList@@QEAAXXZ.c)
 *     ?CreateMonitorRenderTargets@CDesktopManager@@AEAAJXZ @ 0x18003BADC (-CreateMonitorRenderTargets@CDesktopManager@@AEAAJXZ.c)
 *     ?CheckDXGIAdapter@CGraphicsDeviceManager@@IEAAJPEA_N@Z @ 0x18003C864 (-CheckDXGIAdapter@CGraphicsDeviceManager@@IEAAJPEA_N@Z.c)
 *     McTemplateU0qqq_EtwEventWriteTransfer @ 0x1800B1AD4 (McTemplateU0qqq_EtwEventWriteTransfer.c)
 */

__int64 __fastcall CDesktopManager::ModeChange(CGraphicsDeviceManager **this)
{
  int v2; // eax
  unsigned int v3; // ebx
  int MonitorRenderTargets; // eax
  int v5; // eax
  HDC DC; // rbx
  char DeviceCaps; // si
  int SystemMetrics; // ebx
  int v10; // eax
  int v11; // edx
  bool v12; // [rsp+48h] [rbp+10h] BYREF
  unsigned __int64 v13; // [rsp+50h] [rbp+18h] BYREF

  if ( (unsigned __int8)EtwEventEnabled(Microsoft_Windows_Dwm_Udwm_Provider_Context, &UdwmProcessModeChange_Info) )
  {
    DC = GetDC(0LL);
    DeviceCaps = GetDeviceCaps(DC, 12);
    ReleaseDC(0LL, DC);
    if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
    {
      SystemMetrics = GetSystemMetrics(1);
      v10 = GetSystemMetrics(0);
      McTemplateU0qqq_EtwEventWriteTransfer(
        (unsigned int)&Microsoft_Windows_Dwm_Udwm_Provider_Context,
        v11,
        v10,
        SystemMetrics,
        DeviceCaps);
    }
  }
  GetDesktopID(1LL, &v13);
  v2 = CDesktopManager::SendSwitchModeCommand(v13);
  v3 = v2;
  if ( v2 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v2, 0x41Fu);
  }
  else if ( *((_BYTE *)this + 16)
         && (MonitorRenderTargets = CDesktopManager::CreateMonitorRenderTargets((CDesktopManager *)this),
             v3 = MonitorRenderTargets,
             MonitorRenderTargets < 0) )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, MonitorRenderTargets, 0x423u);
  }
  else
  {
    CAnalogCompositorManager::GetInstance();
    v5 = CGraphicsDeviceManager::CheckDXGIAdapter(this[6], &v12);
    v3 = v5;
    if ( v5 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v5, 0x42Cu);
  }
  CWindowList::RecreateDesktopWindowReplacementForDesktops(*((CWindowList **)CDesktopManager::s_pDesktopManagerInstance
                                                           + 52));
  return v3;
}
