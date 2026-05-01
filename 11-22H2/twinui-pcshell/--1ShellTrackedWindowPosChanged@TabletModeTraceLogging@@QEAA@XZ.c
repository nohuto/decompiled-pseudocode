/*
 * XREFs of ??1ShellTrackedWindowPosChanged@TabletModeTraceLogging@@QEAA@XZ @ 0x1805B8774
 * Callers:
 *     ?ShellTrackedWindowPosChanged@TabletModePositioner@@UEAAXPEAUIApplicationView@@HUtagRECT@@K@Z @ 0x1805BE830 (-ShellTrackedWindowPosChanged@TabletModePositioner@@UEAAXPEAUIApplicationView@@HUtagRECT@@K@Z.c)
 *     _TabletModePositioner::ShellTrackedWindowPosChanged_::_1_::dtor$0 @ 0x1805BEA39 (_TabletModePositioner--ShellTrackedWindowPosChanged_--_1_--dtor$0.c)
 *     ?ViewMaximized@TabletModePositioner@@AEAAXPEAUIApplicationView@@VShellTrackedWindowPosChanged@TabletModeTraceLogging@@@Z @ 0x1805C2330 (-ViewMaximized@TabletModePositioner@@AEAAXPEAUIApplicationView@@VShellTrackedWindowPosChanged@Ta.c)
 *     _TabletModePositioner::ViewMaximized_::_1_::dtor$0 @ 0x1805C24A8 (_TabletModePositioner--ViewMaximized_--_1_--dtor$0.c)
 *     ?ViewMinimized@TabletModePositioner@@AEAAXPEAUIApplicationView@@VShellTrackedWindowPosChanged@TabletModeTraceLogging@@@Z @ 0x1805C24D4 (-ViewMinimized@TabletModePositioner@@AEAAXPEAUIApplicationView@@VShellTrackedWindowPosChanged@Ta.c)
 *     _TabletModePositioner::ViewMinimized_::_1_::dtor$0 @ 0x1805C25A6 (_TabletModePositioner--ViewMinimized_--_1_--dtor$0.c)
 *     ?ViewRestored@TabletModePositioner@@AEAAXPEAUIApplicationView@@VShellTrackedWindowPosChanged@TabletModeTraceLogging@@@Z @ 0x1805C29C8 (-ViewRestored@TabletModePositioner@@AEAAXPEAUIApplicationView@@VShellTrackedWindowPosChanged@Tab.c)
 *     _TabletModePositioner::ViewRestored_::_1_::dtor$0 @ 0x1805C2D60 (_TabletModePositioner--ViewRestored_--_1_--dtor$0.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VWindowManagementLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x1805BB3CC (-Destroy@-$ActivityBase@VWindowManagementLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProvid.c)
 */

void __fastcall TabletModeTraceLogging::ShellTrackedWindowPosChanged::~ShellTrackedWindowPosChanged(
        TabletModeTraceLogging::ShellTrackedWindowPosChanged *this)
{
  *(_QWORD *)this = &TabletModeTraceLogging::ShellTrackedWindowPosChanged::`vftable';
  wil::ActivityBase<WindowManagementLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Destroy();
  wil::ActivityBase<WindowManagementLogging,0,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<WindowManagementLogging,0,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>((__int64)this);
}
