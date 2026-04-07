/*
 * XREFs of ?CreateMonitorRenderTargets@CDesktopManager@@AEAAJXZ @ 0x18003BADC
 * Callers:
 *     ?ModeChange@CDesktopManager@@QEAAJXZ @ 0x180016D44 (-ModeChange@CDesktopManager@@QEAAJXZ.c)
 *     ?EnableMonitorRenderTargets@CDesktopManager@@QEAAJ_N@Z @ 0x18005D128 (-EnableMonitorRenderTargets@CDesktopManager@@QEAAJ_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800045F8 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?CreateMonitorRenderTargetsLegacy@CDesktopManager@@AEAAJXZ @ 0x18003BB2C (-CreateMonitorRenderTargetsLegacy@CDesktopManager@@AEAAJXZ.c)
 *     ?CreateMonitorRenderTargetsDDisplay@CDesktopManager@@AEAAJXZ @ 0x1800AFCEC (-CreateMonitorRenderTargetsDDisplay@CDesktopManager@@AEAAJXZ.c)
 *     ?IsKernelDebuggerPresent@@YAHXZ @ 0x180107A88 (-IsKernelDebuggerPresent@@YAHXZ.c)
 */

__int64 __fastcall CDesktopManager::CreateMonitorRenderTargets(CDesktopManager *this)
{
  int MonitorRenderTargetsLegacy; // eax
  unsigned int v3; // ebx
  int MonitorRenderTargetsDDisplay; // eax

  if ( *((_DWORD *)this + 192) == 1 && ((unsigned int)IsKernelDebuggerPresent() || IsDebuggerPresent()) )
    __debugbreak();
  if ( *((_DWORD *)this + 192) )
  {
    MonitorRenderTargetsDDisplay = CDesktopManager::CreateMonitorRenderTargetsDDisplay(this);
    v3 = MonitorRenderTargetsDDisplay;
    if ( MonitorRenderTargetsDDisplay < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, MonitorRenderTargetsDDisplay, 0x4BAu);
      return v3;
    }
    if ( *((_DWORD *)this + 192) )
      return v3;
  }
  MonitorRenderTargetsLegacy = CDesktopManager::CreateMonitorRenderTargetsLegacy(this);
  v3 = MonitorRenderTargetsLegacy;
  if ( MonitorRenderTargetsLegacy < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, MonitorRenderTargetsLegacy, 0x4C2u);
  return v3;
}
