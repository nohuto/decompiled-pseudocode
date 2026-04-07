/*
 * XREFs of ?EnableMonitorRenderTargets@CDesktopManager@@QEAAJ_N@Z @ 0x18005D128
 * Callers:
 *     ?StartupEnd@CWindowList@@AEAAJXZ @ 0x18005D0C4 (-StartupEnd@CWindowList@@AEAAJXZ.c)
 *     ?NotifyRedirectionShutdown@CDesktopManager@@QEAAJXZ @ 0x1800B0DE8 (-NotifyRedirectionShutdown@CDesktopManager@@QEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800045F8 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?InsertChildAt@CVisualProxy@@QEAAJPEAV1@I@Z @ 0x1800116CC (-InsertChildAt@CVisualProxy@@QEAAJPEAV1@I@Z.c)
 *     ?SendSwitchModeCommand@CDesktopManager@@SAJ_K@Z @ 0x180016BA0 (-SendSwitchModeCommand@CDesktopManager@@SAJ_K@Z.c)
 *     ?BringDesktopToFront@CWindowList@@QEAAJPEAVCVisual@@@Z @ 0x1800177C4 (-BringDesktopToFront@CWindowList@@QEAAJPEAVCVisual@@@Z.c)
 *     ?CreateMonitorRenderTargets@CDesktopManager@@AEAAJXZ @ 0x18003BADC (-CreateMonitorRenderTargets@CDesktopManager@@AEAAJXZ.c)
 *     ?GetRenderTargetRootVisualForDesktop@CWindowList@@QEAAPEAVCVisual@@_K@Z @ 0x18003FD6C (-GetRenderTargetRootVisualForDesktop@CWindowList@@QEAAPEAVCVisual@@_K@Z.c)
 *     ?CreateOrDestroyDesktopWindowReplacementForDesktops@CWindowList@@QEAAX_N@Z @ 0x18005D210 (-CreateOrDestroyDesktopWindowReplacementForDesktops@CWindowList@@QEAAX_N@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180063740 (_guard_xfg_dispatch_icall_nop.c)
 *     ?ReleaseMonitorRenderTargets@CDesktopManager@@AEAAJXZ @ 0x1800B131C (-ReleaseMonitorRenderTargets@CDesktopManager@@AEAAJXZ.c)
 */

__int64 __fastcall CDesktopManager::EnableMonitorRenderTargets(CVisualProxy **this, char a2)
{
  unsigned int v2; // ebx
  int v5; // eax
  CWindowList *v6; // rbx
  struct CVisual *RenderTargetRootVisualForDesktop; // rax
  int inserted; // eax
  int MonitorRenderTargets; // eax
  bool v10; // dl
  int v12; // eax
  unsigned __int64 v13; // [rsp+40h] [rbp+8h] BYREF

  v2 = 0;
  if ( a2 != *((_BYTE *)this + 16) )
  {
    if ( a2 )
    {
      GetDesktopID(1LL, &v13);
      v5 = CDesktopManager::SendSwitchModeCommand(v13);
      v2 = v5;
      if ( v5 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v5, 0x6BEu);
        return v2;
      }
      v6 = (CWindowList *)*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 52);
      RenderTargetRootVisualForDesktop = CWindowList::GetRenderTargetRootVisualForDesktop(v6, v13);
      CWindowList::BringDesktopToFront(v6, RenderTargetRootVisualForDesktop);
      inserted = CVisualProxy::InsertChildAt(
                   this[11],
                   *(struct CVisualProxy **)(*(_QWORD *)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 52)
                                                       + 80LL)
                                           + 16LL),
                   0);
      v2 = inserted;
      if ( inserted < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, inserted, 0x6C4u);
        return v2;
      }
      MonitorRenderTargets = CDesktopManager::CreateMonitorRenderTargets((CDesktopManager *)this);
      v2 = MonitorRenderTargets;
      if ( MonitorRenderTargets < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, MonitorRenderTargets, 0x6C6u);
        return v2;
      }
      v10 = 1;
    }
    else
    {
      (*(void (__fastcall **)(CVisualProxy *, _QWORD))(*(_QWORD *)this[9] + 24LL))(this[9], 0LL);
      v12 = CDesktopManager::ReleaseMonitorRenderTargets((CDesktopManager *)this);
      v2 = v12;
      if ( v12 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v12, 0x6D0u);
        return v2;
      }
      v10 = 0;
    }
    CWindowList::CreateOrDestroyDesktopWindowReplacementForDesktops(
      *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 52),
      v10);
    *((_BYTE *)this + 16) = a2;
  }
  return v2;
}
