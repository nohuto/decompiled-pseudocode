/*
 * XREFs of ?GetMonitors@VirtualDesktopHelpers@@YA?AV?$vector@PEAUHMONITOR__@@V?$allocator@PEAUHMONITOR__@@@std@@@std@@XZ @ 0x18048AE5C
 * Callers:
 *     ?RuntimeClassInitialize@CVirtualDesktopCollection@@QEAAJPEAUIVirtualDesktopFactory@@PEAUIVirtualDesktopPersistence@@_N@Z @ 0x1800A0E94 (-RuntimeClassInitialize@CVirtualDesktopCollection@@QEAAJPEAUIVirtualDesktopFactory@@PEAUIVirtual.c)
 *     ?GetDesktopCollectionForDesktop@CVirtualDesktopCollection@@AEAAAEAV?$CCoSimpleArray@V?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@$0PPPPPPPO@VComPtrCompareHelper@@@@PEAUIVirtualDesktop@@@Z @ 0x180178150 (-GetDesktopCollectionForDesktop@CVirtualDesktopCollection@@AEAAAEAV-$CCoSimpleArray@V-$ComPtr@UI.c)
 *     ?GetMonitorFromVirtualDesktop@VirtualDesktopHelpers@@YAPEAUHMONITOR__@@PEAUIVirtualDesktop@@PEAUIVirtualDesktopManagerInternal@@@Z @ 0x18048AD10 (-GetMonitorFromVirtualDesktop@VirtualDesktopHelpers@@YAPEAUHMONITOR__@@PEAUIVirtualDesktop@@PEAU.c)
 *     ?GetMonitorsToNotify@CVirtualDesktopManager@@AEAAPEAUIObjectArray@@PEAUHMONITOR__@@@Z @ 0x180545B6C (-GetMonitorsToNotify@CVirtualDesktopManager@@AEAAPEAUIObjectArray@@PEAUHMONITOR__@@@Z.c)
 *     ?OnMonitorDetached@CVirtualDesktopManager@@UEAAJXZ @ 0x180546D30 (-OnMonitorDetached@CVirtualDesktopManager@@UEAAJXZ.c)
 * Callees:
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_VpmUpdates@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800A01A0 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_VpmUpdates@@@details@wil@@QEAAX_NW4Report.c)
 */

_QWORD *__fastcall VirtualDesktopHelpers::GetMonitors(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4)
{
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_VpmUpdates>::ReportUsage(
    `wil::Feature<__WilFeatureTraits_Feature_VpmUpdates>::GetImpl'::`2'::impl,
    0,
    a3,
    a4);
  *a1 = 0LL;
  a1[1] = 0LL;
  a1[2] = 0LL;
  return a1;
}
