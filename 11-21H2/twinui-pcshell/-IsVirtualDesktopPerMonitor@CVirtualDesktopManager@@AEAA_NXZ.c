/*
 * XREFs of ?IsVirtualDesktopPerMonitor@CVirtualDesktopManager@@AEAA_NXZ @ 0x1800A0180
 * Callers:
 *     ?GetDesktopCollectionForMonitor@CVirtualDesktopCollection@@AEAAAEAV?$CCoSimpleArray@V?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@$0PPPPPPPO@VComPtrCompareHelper@@@@PEAUHMONITOR__@@@Z @ 0x18009EDB0 (-GetDesktopCollectionForMonitor@CVirtualDesktopCollection@@AEAAAEAV-$CCoSimpleArray@V-$ComPtr@UI.c)
 *     ?RuntimeClassInitialize@CVirtualDesktopCollection@@QEAAJPEAUIVirtualDesktopFactory@@PEAUIVirtualDesktopPersistence@@_N@Z @ 0x1800A0E94 (-RuntimeClassInitialize@CVirtualDesktopCollection@@QEAAJPEAUIVirtualDesktopFactory@@PEAUIVirtual.c)
 *     ?AddDesktopHelper@CVirtualDesktopCollection@@AEAAJPEAUHMONITOR__@@PEAUIVirtualDesktop@@@Z @ 0x18010FFB0 (-AddDesktopHelper@CVirtualDesktopCollection@@AEAAJPEAUHMONITOR__@@PEAUIVirtualDesktop@@@Z.c)
 *     ?GetDesktopCollectionForDesktop@CVirtualDesktopCollection@@AEAAAEAV?$CCoSimpleArray@V?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@$0PPPPPPPO@VComPtrCompareHelper@@@@PEAUIVirtualDesktop@@@Z @ 0x180178150 (-GetDesktopCollectionForDesktop@CVirtualDesktopCollection@@AEAAAEAV-$CCoSimpleArray@V-$ComPtr@UI.c)
 *     ?GetMonitorsToNotify@CVirtualDesktopManager@@AEAAPEAUIObjectArray@@PEAUHMONITOR__@@@Z @ 0x180545B6C (-GetMonitorsToNotify@CVirtualDesktopManager@@AEAAPEAUIObjectArray@@PEAUHMONITOR__@@@Z.c)
 *     ?OnViewMonitorChangedInternal@CVirtualDesktopManager@@UEAAJPEAUIApplicationView@@@Z @ 0x180547020 (-OnViewMonitorChangedInternal@CVirtualDesktopManager@@UEAAJPEAUIApplicationView@@@Z.c)
 *     ?SetDesktopIsPerMonitor@CVirtualDesktopManager@@UEAAJH@Z @ 0x180547F80 (-SetDesktopIsPerMonitor@CVirtualDesktopManager@@UEAAJH@Z.c)
 * Callees:
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_VpmUpdates@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800A01A0 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_VpmUpdates@@@details@wil@@QEAAX_NW4Report.c)
 */

bool __fastcall CVirtualDesktopManager::IsVirtualDesktopPerMonitor(CVirtualDesktopManager *this)
{
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_VpmUpdates>::ReportUsage(
    &`wil::Feature<__WilFeatureTraits_Feature_VpmUpdates>::GetImpl'::`2'::impl,
    0LL);
  return 0;
}
