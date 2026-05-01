/*
 * XREFs of ?ReportVisibilityOverride@CImmersiveApp@@UEAA_NW4WINDOW_PRESENTED_OVERRIDE@@W4SESSION_IDLE_STATE@@W4OVERRIDE_IMMUNITY_CHANGE@@W4ReportVisibilityOverrideOptions@@@Z @ 0x1802D0FD0
 * Callers:
 *     <none>
 * Callees:
 *     ?SetVisibilityOverride@CImmersiveWindowCollection@CImmersiveApp@@QEAAJW4ViewVisibilityState@@W4VisibilityOverrideSource@@@Z @ 0x18001E910 (-SetVisibilityOverride@CImmersiveWindowCollection@CImmersiveApp@@QEAAJW4ViewVisibilityState@@W4V.c)
 *     ?IsReportingEnabled@CReportWindowVisibilityChange@@QEBA_NPEAUIImmersiveMonitor@@PEAUIImmersiveApplicationInternal@@@Z @ 0x180020560 (-IsReportingEnabled@CReportWindowVisibilityChange@@QEBA_NPEAUIImmersiveMonitor@@PEAUIImmersiveAp.c)
 *     ?IsApplicationWindowVisible@CImmersiveWindowCollection@CImmersiveApp@@QEBA_NXZ @ 0x180023778 (-IsApplicationWindowVisible@CImmersiveWindowCollection@CImmersiveApp@@QEBA_NXZ.c)
 *     ?_ScheduleApplicationNotifications@CImmersiveApp@@AEAAXQEBUAPP_CHANGE_INFO@@_K@Z @ 0x180027C00 (-_ScheduleApplicationNotifications@CImmersiveApp@@AEAAXQEBUAPP_CHANGE_INFO@@_K@Z.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?ReleaseAndGetAddressOf@?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@QEAAPEAPEAUIImmersiveMonitor@@XZ @ 0x18004C4FC (-ReleaseAndGetAddressOf@-$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@QEAAPEAPEAUIImmersiveMonito.c)
 *     ?ClearVisibilityOverride@CImmersiveWindowCollection@CImmersiveApp@@QEAAJW4VisibilityOverrideSource@@@Z @ 0x180071298 (-ClearVisibilityOverride@CImmersiveWindowCollection@CImmersiveApp@@QEAAJW4VisibilityOverrideSour.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?IsOverrideImmuneApplication@CReportWindowVisibilityChange@@QEBA_NPEAUIImmersiveApplicationInternal@@@Z @ 0x1802CF282 (-IsOverrideImmuneApplication@CReportWindowVisibilityChange@@QEBA_NPEAUIImmersiveApplicationInter.c)
 */

// Hidden C++ exception states: #wind=1
char __fastcall CImmersiveApp::ReportVisibilityOverride(unsigned __int64 a1, int a2, __int64 a3, __int64 a4, char a5)
{
  int v7; // edi
  char IsReportingEnabled; // bl
  CImmersiveApp::CImmersiveWindowCollection *v9; // r14
  int v10; // edx
  int v11; // r9d
  void (__fastcall *v12)(unsigned __int64, __int64 *); // rbx
  __int64 *AddressOf; // rax
  int v15; // [rsp+20h] [rbp-28h] BYREF
  __int64 v16; // [rsp+28h] [rbp-20h]
  struct IImmersiveMonitor *v17; // [rsp+50h] [rbp+8h] BYREF

  v7 = 0;
  IsReportingEnabled = 0;
  v9 = (CImmersiveApp::CImmersiveWindowCollection *)(a1 + 176);
  if ( (CImmersiveApp::CImmersiveWindowCollection::IsApplicationWindowVisible((CImmersiveApp::CImmersiveWindowCollection *)(a1 + 176))
     || v10 == 2)
    && a2 != *(_DWORD *)(a1 + 552) )
  {
    if ( a2 == 2 )
    {
      v17 = 0LL;
      v12 = *(void (__fastcall **)(unsigned __int64, __int64 *))(*(_QWORD *)a1 + 464LL);
      AddressOf = Microsoft::WRL::ComPtr<IImmersiveMonitor>::ReleaseAndGetAddressOf((__int64 *)&v17);
      v12(a1, AddressOf);
      IsReportingEnabled = CReportWindowVisibilityChange::IsReportingEnabled(
                             (CReportWindowVisibilityChange *)&CApplicationManagerUtility::g_pIAMGlobals[1],
                             (struct IUnknown *)v17,
                             (struct IUnknown *)(a1 & -(__int64)(a1 != 112)));
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v17);
      if ( !IsReportingEnabled )
        return IsReportingEnabled;
    }
    else
    {
      if ( v11 != 2
        && CReportWindowVisibilityChange::IsOverrideImmuneApplication(
             (CReportWindowVisibilityChange *)&CApplicationManagerUtility::g_pIAMGlobals[1],
             (struct IUnknown *)(a1 & ((unsigned __int128)-(__int128)(a1 - 112) >> 64))) )
      {
        return IsReportingEnabled;
      }
      IsReportingEnabled = 1;
    }
    *(_DWORD *)(a1 + 552) = a2;
    if ( a2 == 1 )
      CImmersiveApp::CImmersiveWindowCollection::SetVisibilityOverride(v9, 1, 1u);
    else
      CImmersiveApp::CImmersiveWindowCollection::ClearVisibilityOverride(v9, 1u);
    if ( (a5 & 1) != 0 && CImmersiveApp::CImmersiveWindowCollection::IsApplicationWindowVisible(v9) )
    {
      LOBYTE(v7) = a2 != 2;
      v15 = v7 + 13;
      v16 = (*(__int64 (__fastcall **)(unsigned __int64))(*(_QWORD *)a1 + 384LL))(a1);
      CImmersiveApp::_ScheduleApplicationNotifications(
        (CImmersiveApp *)(a1 - 112),
        (const struct APP_CHANGE_INFO *)&v15,
        1uLL);
    }
  }
  return IsReportingEnabled;
}
