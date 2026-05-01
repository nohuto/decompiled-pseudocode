/*
 * XREFs of ?_CleanupPendingPresentedWindow@CImmersiveWindowCollection@CImmersiveApp@@AEAAXXZ @ 0x1803C5484
 * Callers:
 *     ?DeleteWindow@CImmersiveWindowCollection@CImmersiveApp@@QEAAJAEBVCTaskWindowFinder@@PEA_NPEAPEAUITaskWindow@@@Z @ 0x18001E9B8 (-DeleteWindow@CImmersiveWindowCollection@CImmersiveApp@@QEAAJAEBVCTaskWindowFinder@@PEA_NPEAPEAU.c)
 *     ?SetApplicationWindow@CImmersiveWindowCollection@CImmersiveApp@@QEAAJPEAUHWND__@@@Z @ 0x1803C40E0 (-SetApplicationWindow@CImmersiveWindowCollection@CImmersiveApp@@QEAAJPEAUHWND__@@@Z.c)
 *     ?SetPendingApplicationWindow@CImmersiveWindowCollection@CImmersiveApp@@QEAAJPEAUHWND__@@W4APP_TRANSITION_TYPE@@@Z @ 0x1803C454C (-SetPendingApplicationWindow@CImmersiveWindowCollection@CImmersiveApp@@QEAAJPEAUHWND__@@W4APP_TR.c)
 * Callees:
 *     ?ReconcileVisibility@CImmersiveWindowCollection@CImmersiveApp@@QEAAJXZ @ 0x180020F10 (-ReconcileVisibility@CImmersiveWindowCollection@CImmersiveApp@@QEAAJXZ.c)
 *     ?_FindWindow@CImmersiveWindowCollection@CImmersiveApp@@AEBAJPEAUHWND__@@PEA_K@Z @ 0x180021218 (-_FindWindow@CImmersiveWindowCollection@CImmersiveApp@@AEBAJPEAUHWND__@@PEA_K@Z.c)
 *     ??4?$ComPtr@UITaskWindow@@@WRL@Microsoft@@QEAAAEAV012@PEAUITaskWindow@@@Z @ 0x1800258FC (--4-$ComPtr@UITaskWindow@@@WRL@Microsoft@@QEAAAEAV012@PEAUITaskWindow@@@Z.c)
 *     ?_ScheduleApplicationNotifications@CImmersiveApp@@AEAAXQEBUAPP_CHANGE_INFO@@_K@Z @ 0x180027C00 (-_ScheduleApplicationNotifications@CImmersiveApp@@AEAAXQEBUAPP_CHANGE_INFO@@_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     WPP_SF_q @ 0x1803C64DC (WPP_SF_q.c)
 */

void __fastcall CImmersiveApp::CImmersiveWindowCollection::_CleanupPendingPresentedWindow(
        CImmersiveApp::CImmersiveWindowCollection *this)
{
  CImmersiveApp *v2; // rcx
  __int64 v3; // rcx
  int v4; // [rsp+20h] [rbp-18h] BYREF
  __int64 v5; // [rsp+28h] [rbp-10h]
  unsigned __int64 v6; // [rsp+40h] [rbp+8h] BYREF

  CImmersiveApp::CImmersiveWindowCollection::_FindWindow(this, *((HWND *)this + 17), &v6);
  if ( (*(__int64 (__fastcall **)(_QWORD))(***((_QWORD ***)this + 21) + 32LL))(**((_QWORD **)this + 21)) != *((_QWORD *)this + 17) )
  {
    v5 = *((_QWORD *)this + 17);
    v2 = (CImmersiveApp *)*((_QWORD *)this + 20);
    v4 = 15;
    CImmersiveApp::_ScheduleApplicationNotifications(v2, (const struct APP_CHANGE_INFO *)&v4, 1uLL);
    v3 = *(_QWORD *)(*((_QWORD *)this + 21) + 8 * v6);
    (*(void (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v3 + 208LL))(v3, 0LL, 0LL);
    CImmersiveApp::CImmersiveWindowCollection::ReconcileVisibility(this);
  }
  if ( (*((_BYTE *)WPP_GLOBAL_Control + 28) & 1) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    WPP_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      32LL,
      &WPP_21483cb93caf3869011edf58ac3ef240_Traceguids,
      *((_QWORD *)this + 17));
  *((_QWORD *)this + 17) = 0LL;
  Microsoft::WRL::ComPtr<ITaskWindow>::operator=((__int64 *)this + 16, 0LL);
  *((_DWORD *)this + 36) = 0;
}
