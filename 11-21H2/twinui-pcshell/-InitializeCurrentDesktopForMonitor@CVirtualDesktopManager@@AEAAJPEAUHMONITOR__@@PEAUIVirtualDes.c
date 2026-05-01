/*
 * XREFs of ?InitializeCurrentDesktopForMonitor@CVirtualDesktopManager@@AEAAJPEAUHMONITOR__@@PEAUIVirtualDesktop@@@Z @ 0x180173688
 * Callers:
 *     ?SwitchDesktopForRecoveryInternal@CVirtualDesktopManager@@UEAAJPEAUIVirtualDesktop@@@Z @ 0x180173650 (-SwitchDesktopForRecoveryInternal@CVirtualDesktopManager@@UEAAJPEAUIVirtualDesktop@@@Z.c)
 * Callees:
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_VpmUpdates@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800A01A0 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_VpmUpdates@@@details@wil@@QEAAX_NW4Report.c)
 *     ??4?$com_ptr_t@UIVirtualDesktop@@Uerr_exception_policy@wil@@@wil@@QEAAAEAV01@PEAUIVirtualDesktop@@@Z @ 0x1801736CC (--4-$com_ptr_t@UIVirtualDesktop@@Uerr_exception_policy@wil@@@wil@@QEAAAEAV01@PEAUIVirtualDesktop.c)
 */

__int64 __fastcall CVirtualDesktopManager::InitializeCurrentDesktopForMonitor(
        CVirtualDesktopManager *this,
        HMONITOR a2,
        struct IVirtualDesktop *a3,
        __int64 a4)
{
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_VpmUpdates>::ReportUsage(
    `wil::Feature<__WilFeatureTraits_Feature_VpmUpdates>::GetImpl'::`2'::impl,
    0,
    (__int64)a3,
    a4);
  wil::com_ptr_t<IVirtualDesktop,wil::err_exception_policy>::operator=((char *)this + 248, a3);
  return 0LL;
}
