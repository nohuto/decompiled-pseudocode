/*
 * XREFs of ?ComputeSnapErrorThresholdForMonitor@SnapLayoutHelpers@@YAHPEAUIImmersiveMonitor@@@Z @ 0x1805A20A0
 * Callers:
 *     ?GetAdjacentSnappedViews@CShellSnapComponent@@UEAAJPEAUIApplicationView@@HPEAPEAUIObjectArray@@1@Z @ 0x180592CE0 (-GetAdjacentSnappedViews@CShellSnapComponent@@UEAAJPEAUIApplicationView@@HPEAPEAUIObjectArray@@1.c)
 *     ?AdvanceGuidedSnapAssist@CSnapAssistControllerBase@@UEAAJ_K@Z @ 0x18059B9C0 (-AdvanceGuidedSnapAssist@CSnapAssistControllerBase@@UEAAJ_K@Z.c)
 *     ?TriggerSnapAssistFromApplicationArrangedNotification@CSnapAssistControllerBase@@UEAAJPEAUIApplicationView@@W4WINDOW_SNAPPING_MODE@@W4SNAP_ASSIST_VIEW_FLAGS@@@Z @ 0x18059DAE0 (-TriggerSnapAssistFromApplicationArrangedNotification@CSnapAssistControllerBase@@UEAAJPEAUIAppli.c)
 *     ?DetermineSnapRegionFromMonitorWorkArea@SnapLayoutHelpers@@YA?AW4SnapRegion@@AEBUCRect@Geometry@@PEAUIImmersiveMonitor@@@Z @ 0x1805A33B4 (-DetermineSnapRegionFromMonitorWorkArea@SnapLayoutHelpers@@YA-AW4SnapRegion@@AEBUCR_ea_1805A33B4.c)
 *     ?GetOtherQuadrants@AdvancedSmartFill@SnapLayoutHelpers@@YAJPEAUIApplicationView@@PEAUIImmersiveMonitor@@AEAV?$vector@UCRect@Geometry@@V?$allocator@UCRect@Geometry@@@std@@@std@@@Z @ 0x1805A4388 (-GetOtherQuadrants@AdvancedSmartFill@SnapLayoutHelpers@@YAJPEAUIApplicationView@@PEAUIImmersiveM.c)
 *     ?GetOtherRects@SpanningSmartFillSolverBase@AdvancedSmartFill@SnapLayoutHelpers@@QEAAXPEAUIApplicationView@@PEAUIImmersiveMonitor@@KAEAV?$vector@UCRect@Geometry@@V?$allocator@UCRect@Geometry@@@std@@@std@@@Z @ 0x1805A49E4 (-GetOtherRects@SpanningSmartFillSolverBase@AdvancedSmartFill@SnapLayoutHelpers@@QEAAXPEAUIApplic.c)
 *     ?GetRectForRegion@AdvancedSmartFill@SnapLayoutHelpers@@YAJAEBUCRect@Geometry@@W4SnapLayoutFlags@2@PEAUIImmersiveMonitor@@AEBV?$CCoSimpleArray@V?$ComPtr@UISnappedWindow@@@WRL@Microsoft@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UISnappedWindow@@@WRL@Microsoft@@@@@@PEAUtagRECT@@PEAUSMART_FILL_OUTPUT@2@@Z @ 0x1805A4E64 (-GetRectForRegion@AdvancedSmartFill@SnapLayoutHelpers@@YAJAEBUCRect@Geometry@@W4SnapLayoutFlags@.c)
 *     ?GetSmartFillRect@SpanningSmartFillSolverBase@AdvancedSmartFill@SnapLayoutHelpers@@QEAAJJ_NPEAUIImmersiveMonitor@@KKAEBV?$CCoSimpleArray@V?$ComPtr@UISnappedWindow@@@WRL@Microsoft@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UISnappedWindow@@@WRL@Microsoft@@@@@@PEAUtagRECT@@3@Z @ 0x1805A5C18 (-GetSmartFillRect@SpanningSmartFillSolverBase@AdvancedSmartFill@SnapLayoutHelpers@@QEAAJJ_NPEAUI.c)
 *     ?DetermineCurrentSnapState@HotkeyHandler@@AEBA?AW4SnapAction@1@PEAUISnappedWindow@@@Z @ 0x1805A91CC (-DetermineCurrentSnapState@HotkeyHandler@@AEBA-AW4SnapAction@1@PEAUISnappedWindow@@@Z.c)
 *     ?DetermineRectForSnapAction@HotkeyHandler@@AEBA?AUCRect@Geometry@@PEAUISnappedWindow@@PEAUIImmersiveMonitor@@W4SnapAction@1@AEBU23@I@Z @ 0x1805A9578 (-DetermineRectForSnapAction@HotkeyHandler@@AEBA-AUCRect@Geometry@@PEAUISnappedWindow@@PEAUIImmer.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall SnapLayoutHelpers::ComputeSnapErrorThresholdForMonitor(
        SnapLayoutHelpers *this,
        struct IImmersiveMonitor *a2)
{
  unsigned int v2; // ebx
  int nNumerator; // [rsp+30h] [rbp+8h] BYREF
  char v5; // [rsp+38h] [rbp+10h] BYREF

  v2 = 5;
  if ( (*(int (__fastcall **)(SnapLayoutHelpers *, int *, char *))(*(_QWORD *)this + 112LL))(this, &nNumerator, &v5) >= 0 )
    return (unsigned int)MulDiv(5, nNumerator, 96);
  return v2;
}
