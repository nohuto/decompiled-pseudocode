/*
 * XREFs of ?_IsViewContextHolographic@HolographicPositioner@@AEAA_NPEAUIApplicationView@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x1800765C0
 * Callers:
 *     ?EvaluateHolographicContext@HolographicPositioner@@UEAAJPEAUIApplicationView@@PEAUIUnknown@@PEAH@Z @ 0x1800757B0 (-EvaluateHolographicContext@HolographicPositioner@@UEAAJPEAUIApplicationView@@PEAUIUnknown@@PEAH.c)
 *     ?ShouldHandleActivation@HolographicPositioner@@UEAAHPEAUIApplicationView@@PEAUIUnknown@@@Z @ 0x180076440 (-ShouldHandleActivation@HolographicPositioner@@UEAAHPEAUIApplicationView@@PEAUIUnknown@@@Z.c)
 * Callees:
 *     ?_IsPropertySetContextHolographic@HolographicPositioner@@AEAA?AW4HolographicDetermination@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x180076690 (-_IsPropertySetContextHolographic@HolographicPositioner@@AEAA-AW4HolographicDetermination@@PEAUI.c)
 *     ?_IsViewPropertySetHeuristicHolographic@HolographicPositioner@@AEAA_NPEAUIApplicationView@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x180076818 (-_IsViewPropertySetHeuristicHolographic@HolographicPositioner@@AEAA_NPEAUIApplicationView@@PEAUI.c)
 *     ?_IsViewWin32Slate@HolographicPositioner@@CA_NPEAUIApplicationView@@W4FRAMEWORK_VIEW_TYPE@@@Z @ 0x180076980 (-_IsViewWin32Slate@HolographicPositioner@@CA_NPEAUIApplicationView@@W4FRAMEWORK_VIEW_TYPE@@@Z.c)
 *     ?_IsViewTypeHolographicCompatible@HolographicPositioner@@AEAA_NPEAUIApplicationView@@@Z @ 0x180076A78 (-_IsViewTypeHolographicCompatible@HolographicPositioner@@AEAA_NPEAUIApplicationView@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$LaunchInHolographic@W4HolographicLaunchReason@@I@HolographicPositionerTelemetry@@SAX$$QEAW4HolographicLaunchReason@@$$QEAI@Z @ 0x1804A8074 (--$LaunchInHolographic@W4HolographicLaunchReason@@I@HolographicPositionerTelemetry@@SAX$$QEAW4Ho.c)
 *     ?_GetApplicationViewUniqueIdForTracing@HolographicPositioner@@CAIPEAUIApplicationView@@@Z @ 0x1804AEBF4 (-_GetApplicationViewUniqueIdForTracing@HolographicPositioner@@CAIPEAUIApplicationView@@@Z.c)
 */

char __fastcall HolographicPositioner::_IsViewContextHolographic(
        HolographicPositioner *this,
        struct IApplicationView *a2,
        struct Windows::Foundation::Collections::IPropertySet *a3)
{
  __int64 v6; // rax
  int IsPropertySetContextHolographic; // eax
  unsigned int *p_ApplicationViewUniqueIdForTracing; // rdx
  unsigned int *v10; // rcx
  unsigned int ApplicationViewUniqueIdForTracing; // [rsp+20h] [rbp-10h] BYREF
  _DWORD v12[3]; // [rsp+24h] [rbp-Ch] BYREF
  unsigned int v13; // [rsp+58h] [rbp+28h] BYREF

  if ( !HolographicPositioner::_IsViewTypeHolographicCompatible(this, a2) )
    return 0;
  v6 = *(_QWORD *)a2;
  v13 = 6;
  if ( (*(int (__fastcall **)(struct IApplicationView *, unsigned int *))(v6 + 400))(a2, &v13) >= 0
    && (v13 == 1 || v13 == 2 || v13 - 3 < 2) )
  {
    ApplicationViewUniqueIdForTracing = HolographicPositioner::_GetApplicationViewUniqueIdForTracing(a2);
    p_ApplicationViewUniqueIdForTracing = &ApplicationViewUniqueIdForTracing;
    v10 = v12;
    v12[0] = 1;
  }
  else
  {
    IsPropertySetContextHolographic = HolographicPositioner::_IsPropertySetContextHolographic(this, a3);
    if ( IsPropertySetContextHolographic == 2 )
    {
      ApplicationViewUniqueIdForTracing = 0;
      v12[0] = HolographicPositioner::_GetApplicationViewUniqueIdForTracing(a2);
      HolographicPositionerTelemetry::LaunchInHolographic<enum HolographicLaunchReason,unsigned int>(
        &ApplicationViewUniqueIdForTracing,
        v12);
      if ( (unsigned __int8)HolographicPositioner::_IsViewWin32Slate(a2, v13) )
        *((_BYTE *)this + 296) = 1;
      return 1;
    }
    if ( IsPropertySetContextHolographic == 1
      || !HolographicPositioner::_IsViewPropertySetHeuristicHolographic(this, a2, a3) )
    {
      return 0;
    }
    v12[0] = HolographicPositioner::_GetApplicationViewUniqueIdForTracing(a2);
    p_ApplicationViewUniqueIdForTracing = v12;
    v10 = &ApplicationViewUniqueIdForTracing;
    ApplicationViewUniqueIdForTracing = 2;
  }
  HolographicPositionerTelemetry::LaunchInHolographic<enum HolographicLaunchReason,unsigned int>(
    v10,
    p_ApplicationViewUniqueIdForTracing);
  return 1;
}
