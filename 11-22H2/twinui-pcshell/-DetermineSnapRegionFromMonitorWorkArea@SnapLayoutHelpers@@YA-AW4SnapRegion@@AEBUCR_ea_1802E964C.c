/*
 * XREFs of ?DetermineSnapRegionFromMonitorWorkArea@SnapLayoutHelpers@@YA?AW4SnapRegion@@AEBUCRect@Geometry@@PEAUIImmersiveMonitor@@@Z @ 0x1802E964C
 * Callers:
 *     ?DetermineSnapRegionForView@SnapLayoutHelpers@@YA?AW4SnapRegion@@PEAUIApplicationView@@@Z @ 0x1802E93A4 (-DetermineSnapRegionForView@SnapLayoutHelpers@@YA-AW4SnapRegion@@PEAUIApplicationView@@@Z.c)
 *     ?CreateSnapId@CShellSnapComponent@@UEAAJURect@Foundation@Windows@@PEAH@Z @ 0x18065FEC0 (-CreateSnapId@CShellSnapComponent@@UEAAJURect@Foundation@Windows@@PEAH@Z.c)
 *     ?_SendAppSnapUnsnapEvent@CShellSnapComponent@@AEAAJPEAUHWND__@@W4ARRANGEMENT_COMPLETED_RESULT@@@Z @ 0x180665B0C (-_SendAppSnapUnsnapEvent@CShellSnapComponent@@AEAAJPEAUHWND__@@W4ARRANGEMENT_COMPLETED_RESULT@@@.c)
 *     ?TryGetTabOwnerAndNotifyOfSwitch@CSnapAssistControllerBase@@IEAA?AU?$pair@PEAUHWND__@@_N@std@@PEAUHWND__@@AEBUCRect@Geometry@@W4SnapArrangementOptions@WindowSnapping@Shell@Internal@Windows@@@Z @ 0x18066D25C (-TryGetTabOwnerAndNotifyOfSwitch@CSnapAssistControllerBase@@IEAA-AU-$pair@PEAUHWND__@@_N@std@@PE.c)
 *     ?_IsValidSnapAssistLocation@CSnapAssistControllerBase@@IEAA_NPEAUIImmersiveMonitor@@AEBUCRect@Geometry@@@Z @ 0x18066DD94 (-_IsValidSnapAssistLocation@CSnapAssistControllerBase@@IEAA_NPEAUIImmersiveMonitor@@AEBUCRect@Ge.c)
 *     ?RuntimeClassInitialize@CSnappedWindow@@QEAAJPEAUIImmersiveMonitor@@PEAUIApplicationView@@@Z @ 0x180686D58 (-RuntimeClassInitialize@CSnappedWindow@@QEAAJPEAUIImmersiveMonitor@@PEAUIApplicationView@@@Z.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?DetermineSnapRegionFromMonitorWorkArea@SnapLayoutHelpers@@YA?AW4SnapRegion@@AEBUCRect@Geometry@@0H@Z @ 0x1802E949C (-DetermineSnapRegionFromMonitorWorkArea@SnapLayoutHelpers@@YA-AW4SnapRegion@@AEBUCRect@Geometry@.c)
 *     ?ComputeOcclusionErrorThresholdForMonitor@SnapRectHelpers@@YAHPEAUIImmersiveMonitor@@@Z @ 0x180677DC0 (-ComputeOcclusionErrorThresholdForMonitor@SnapRectHelpers@@YAHPEAUIImmersiveMonitor@@@Z.c)
 */

__int64 __fastcall SnapLayoutHelpers::DetermineSnapRegionFromMonitorWorkArea(_DWORD *a1, SnapRectHelpers *a2)
{
  __int64 v2; // rax
  unsigned int v5; // ebx
  int v6; // eax
  struct IImmersiveMonitor *v7; // rdx
  int v8; // eax
  int v10[4]; // [rsp+20h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v2 = *(_QWORD *)a2;
  *(_OWORD *)v10 = 0LL;
  v5 = 0;
  v6 = (*(__int64 (__fastcall **)(SnapRectHelpers *, int *))(v2 + 88))(a2, v10);
  if ( v6 >= 0 )
  {
    v8 = SnapRectHelpers::ComputeOcclusionErrorThresholdForMonitor(a2, v7);
    return (unsigned int)SnapLayoutHelpers::DetermineSnapRegionFromMonitorWorkArea(a1, v10, v8);
  }
  else
  {
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x18C,
      (int)"pcshell\\twinui\\snapcomponent\\lib\\snaplayouthelpers.cpp",
      (const char *)(unsigned int)v6);
  }
  return v5;
}
