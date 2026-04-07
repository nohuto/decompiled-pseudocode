/*
 * XREFs of ?EnableMonitorRenderTargets@CDesktopManager@@QEAAJ_N@Z @ 0x180056258
 * Callers:
 *     ?StartupEnd@CWindowList@@AEAAJXZ @ 0x1800561F4 (-StartupEnd@CWindowList@@AEAAJXZ.c)
 *     ?NotifyRedirectionShutdown@CDesktopManager@@QEAAJXZ @ 0x1800B52E0 (-NotifyRedirectionShutdown@CDesktopManager@@QEAAJXZ.c)
 * Callees:
 *     ?CreateMonitorRenderTargets@CDesktopManager@@AEAAJXZ @ 0x18003BBE8 (-CreateMonitorRenderTargets@CDesktopManager@@AEAAJXZ.c)
 *     ?SendSwitchModeCommand@CDesktopManager@@SAJ_K@Z @ 0x180040F8C (-SendSwitchModeCommand@CDesktopManager@@SAJ_K@Z.c)
 *     ?GetRenderTargetRootVisualForDesktop@CWindowList@@QEAAPEAVCVisual@@_K@Z @ 0x1800412B8 (-GetRenderTargetRootVisualForDesktop@CWindowList@@QEAAPEAVCVisual@@_K@Z.c)
 *     ?BringDesktopToFront@CWindowList@@QEAAJPEAVCVisual@@@Z @ 0x1800413E0 (-BringDesktopToFront@CWindowList@@QEAAJPEAVCVisual@@@Z.c)
 *     ?SetRoot@CVisualTargetProxy@@QEAAJPEAVCVisualProxy@@@Z @ 0x18005633C (-SetRoot@CVisualTargetProxy@@QEAAJPEAVCVisualProxy@@@Z.c)
 *     ?CreateOrDestroyDesktopWindowReplacementForDesktops@CWindowList@@QEAAX_N@Z @ 0x1800563C4 (-CreateOrDestroyDesktopWindowReplacementForDesktops@CWindowList@@QEAAX_N@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18006610C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800663A0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?ReleaseMonitorRenderTargets@CDesktopManager@@AEAAJXZ @ 0x1800B5814 (-ReleaseMonitorRenderTargets@CDesktopManager@@AEAAJXZ.c)
 */

__int64 __fastcall CDesktopManager::EnableMonitorRenderTargets(CVisualTargetProxy **this, char a2, __int64 a3)
{
  unsigned int v3; // ebx
  int v6; // eax
  CWindowList *v7; // rbx
  struct CVisual *RenderTargetRootVisualForDesktop; // rax
  int v9; // eax
  int MonitorRenderTargets; // eax
  bool v11; // dl
  int v13; // eax
  unsigned __int64 v14; // [rsp+40h] [rbp+8h] BYREF

  v3 = 0;
  if ( a2 != *((_BYTE *)this + 16) )
  {
    if ( a2 )
    {
      GetDesktopID(1LL, &v14, a3);
      v6 = CDesktopManager::SendSwitchModeCommand(v14);
      v3 = v6;
      if ( v6 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v6, 0x65Bu, 0LL);
        return v3;
      }
      v7 = (CWindowList *)*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 54);
      RenderTargetRootVisualForDesktop = CWindowList::GetRenderTargetRootVisualForDesktop(v7, v14);
      CWindowList::BringDesktopToFront(v7, RenderTargetRootVisualForDesktop);
      v9 = CVisualTargetProxy::SetRoot(
             this[12],
             *(struct CVisualProxy **)(*(_QWORD *)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 54) + 80LL)
                                     + 16LL));
      v3 = v9;
      if ( v9 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v9, 0x65Du, 0LL);
        return v3;
      }
      MonitorRenderTargets = CDesktopManager::CreateMonitorRenderTargets(this);
      v3 = MonitorRenderTargets;
      if ( MonitorRenderTargets < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, MonitorRenderTargets, 0x65Eu, 0LL);
        return v3;
      }
      v11 = 1;
    }
    else
    {
      (*(void (__fastcall **)(CVisualTargetProxy *, _QWORD))(*(_QWORD *)this[10] + 24LL))(this[10], 0LL);
      v13 = CDesktopManager::ReleaseMonitorRenderTargets((CDesktopManager *)this);
      v3 = v13;
      if ( v13 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v13, 0x668u, 0LL);
        return v3;
      }
      v11 = 0;
    }
    CWindowList::CreateOrDestroyDesktopWindowReplacementForDesktops(
      *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 54),
      v11);
    *((_BYTE *)this + 16) = a2;
  }
  return v3;
}
