/*
 * XREFs of ?_ShouldShowViewInSnapAssist@CSnapAssistControllerBase@@IEAA_NPEAUIImmersiveMonitor@@PEAUIApplicationView@@AEBV?$vector@V?$ComPtr@UISnappedWindow@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UISnappedWindow@@@WRL@Microsoft@@@std@@@std@@PEAUIAppLayout@@@Z @ 0x18066DF90
 * Callers:
 *     ?_CollectItemsForSnapAssist@CSnapAssistControllerBase@@IEAAJPEAUIImmersiveMonitor@@AEBV?$vector@V?$ComPtr@UISnappedWindow@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UISnappedWindow@@@WRL@Microsoft@@@std@@@std@@PEAUIAppLayout@@PEAPEAUIObjectCollection@@@Z @ 0x18066D6A0 (-_CollectItemsForSnapAssist@CSnapAssistControllerBase@@IEAAJPEAUIImmersiveMonitor@@AEBV-$vector@.c)
 * Callees:
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_ETUpdate@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180126974 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_ETUpdate@@@details@wil@@QEAAX_NW4Reportin.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_GuidedSnapAssistContinuity@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180192FD4 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_GuidedSnapAssistContinuity@@@details@wil@.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     std::find_if_std::_Vector_const_iterator_std::_Vector_val_std::_Simple_types_Microsoft::WRL::ComPtr_ISnappedWindow_________lambda_bb885f2e06808031bc3cd483122bbe8b___ @ 0x1806699EC (std--find_if_std--_Vector_const_iterator_std--_Vector_val_std--_Simple_types_Microsoft--WRL--Com.c)
 *     ?_IsTabletMode@CSnapAssistControllerBase@@IEAA_NXZ @ 0x18066DD30 (-_IsTabletMode@CSnapAssistControllerBase@@IEAA_NXZ.c)
 *     ?IsSnappableWindow@SnapLayoutHelpers@@YA_NPEAUIApplicationView@@PEAUIImmersiveMonitor@@_NPEAUIVirtualDesktopManagerInternal@@@Z @ 0x180673DF8 (-IsSnappableWindow@SnapLayoutHelpers@@YA_NPEAUIApplicationView@@PEAUIImmersiveMonitor@@_NPEAUIVi.c)
 */

bool __fastcall CSnapAssistControllerBase::_ShouldShowViewInSnapAssist(
        CSnapAssistControllerBase *this,
        _QWORD *a2,
        SnapLayoutHelpers *a3,
        _QWORD **a4,
        __int64 a5)
{
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rbx
  struct IImmersiveMonitor *v11; // r8
  struct IApplicationView *v12; // rdx
  struct IVirtualDesktopManagerInternal *v14; // [rsp+20h] [rbp-8h]
  _QWORD *v15; // [rsp+38h] [rbp+10h] BYREF

  v15 = a2;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_ETUpdate>::ReportUsage(
    `wil::Feature<__WilFeatureTraits_Feature_ETUpdate>::GetImpl'::`2'::impl,
    1u,
    (__int64)a3,
    (__int64)a4);
  std::find_if_std::_Vector_const_iterator_std::_Vector_val_std::_Simple_types_Microsoft::WRL::ComPtr_ISnappedWindow_________lambda_bb885f2e06808031bc3cd483122bbe8b___(
    &v15,
    *a4,
    a4[1],
    (__int64)a3);
  if ( v15 != a4[1] )
    return 0;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_GuidedSnapAssistContinuity>::ReportUsage(
    `wil::Feature<__WilFeatureTraits_Feature_GuidedSnapAssistContinuity>::GetImpl'::`2'::impl,
    1u,
    v8,
    v9);
  if ( a5 )
  {
    if ( (*(unsigned int (__fastcall **)(__int64, SnapLayoutHelpers *))(*(_QWORD *)a5 + 184LL))(a5, a3) )
      return 0;
  }
  v10 = *((_QWORD *)this + 13);
  LOBYTE(v11) = CSnapAssistControllerBase::_IsTabletMode(this);
  return SnapLayoutHelpers::IsSnappableWindow(a3, v12, v11, v10, v14);
}
