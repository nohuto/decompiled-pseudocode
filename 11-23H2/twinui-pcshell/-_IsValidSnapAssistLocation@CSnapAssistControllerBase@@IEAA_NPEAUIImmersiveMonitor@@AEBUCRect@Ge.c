/*
 * XREFs of ?_IsValidSnapAssistLocation@CSnapAssistControllerBase@@IEAA_NPEAUIImmersiveMonitor@@AEBUCRect@Geometry@@@Z @ 0x18066DD94
 * Callers:
 *     ?_SnapAssistTriggered@CSnapAssistControllerBase@@IEAAJAEBUCRect@Geometry@@PEAUIImmersiveMonitor@@AEBV?$vector@V?$ComPtr@UISnappedWindow@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UISnappedWindow@@@WRL@Microsoft@@@std@@@std@@PEAUIAppLayout@@W4SNAP_ASSIST_VIEW_FLAGS@@HPEA_N@Z @ 0x18066E048 (-_SnapAssistTriggered@CSnapAssistControllerBase@@IEAAJAEBUCRect@Geometry@@PEAUIImmersiveMonitor@.c)
 * Callees:
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?DetermineSnapRegionFromMonitorWorkArea@SnapLayoutHelpers@@YA?AW4SnapRegion@@AEBUCRect@Geometry@@PEAUIImmersiveMonitor@@@Z @ 0x1802E964C (-DetermineSnapRegionFromMonitorWorkArea@SnapLayoutHelpers@@YA-AW4SnapRegion@@AEBUCR_ea_1802E964C.c)
 *     ?IsValidSnapRegion@SnapLayoutHelpers@@YA_NW4SnapRegion@@@Z @ 0x1802E96F8 (-IsValidSnapRegion@SnapLayoutHelpers@@YA_NW4SnapRegion@@@Z.c)
 */

char __fastcall CSnapAssistControllerBase::_IsValidSnapAssistLocation(
        CSnapAssistControllerBase *this,
        struct IImmersiveMonitor *a2,
        const struct Geometry::CRect *a3)
{
  __int64 v3; // rax
  unsigned int v6; // eax
  __int128 v8; // [rsp+20h] [rbp-28h] BYREF

  v3 = *(_QWORD *)a2;
  v8 = 0LL;
  if ( (*(int (__fastcall **)(struct IImmersiveMonitor *, __int128 *))(v3 + 88))(a2, &v8) < 0 )
    return 0;
  v6 = SnapLayoutHelpers::DetermineSnapRegionFromMonitorWorkArea(a3, a2);
  return SnapLayoutHelpers::IsValidSnapRegion((SnapLayoutHelpers *)v6);
}
