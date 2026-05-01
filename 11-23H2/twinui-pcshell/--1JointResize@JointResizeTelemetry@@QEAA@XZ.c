/*
 * XREFs of ??1JointResize@JointResizeTelemetry@@QEAA@XZ @ 0x180145330
 * Callers:
 *     ??1JointResize@@UEAA@XZ @ 0x1801428C0 (--1JointResize@@UEAA@XZ.c)
 *     ??4JointResize@JointResizeTelemetry@@QEAAAEAV01@$$QEAV01@@Z @ 0x1805E16A8 (--4JointResize@JointResizeTelemetry@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ?OnArrangedWindowJointResizeCompleted@JointResize@@AEAAJPEBUIWindowManagementEvents2@WindowManagementEvents@Shell@Internal@Windows@@UArrangedWindowJointResizeCompletedEventArgs@3456@@Z @ 0x1805E3920 (-OnArrangedWindowJointResizeCompleted@JointResize@@AEAAJPEBUIWindowManagementEvents2@WindowManag.c)
 *     _JointResize::OnArrangedWindowJointResizeCompleted_::_1_::dtor$0 @ 0x1805E3A07 (_JointResize--OnArrangedWindowJointResizeCompleted_--_1_--dtor$0.c)
 *     ?OnArrangedWindowResizeStarted@JointResize@@AEAAJPEAUIWindowManagementEvents2@WindowManagementEvents@Shell@Internal@Windows@@PEAUIArrangedWindowResizeStartedEventArgs@3456@@Z @ 0x1805E3A20 (-OnArrangedWindowResizeStarted@JointResize@@AEAAJPEAUIWindowManagementEvents2@WindowManagementEv.c)
 *     _JointResize::OnArrangedWindowResizeStarted_::_1_::dtor$0 @ 0x1805E3F17 (_JointResize--OnArrangedWindowResizeStarted_--_1_--dtor$0.c)
 *     ?TagWindowsForResize@JointResize@@AEAAXXZ @ 0x1805E4C2C (-TagWindowsForResize@JointResize@@AEAAXXZ.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x180148208 (-Destroy@-$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorT.c)
 */

void __fastcall JointResizeTelemetry::JointResize::~JointResize(JointResizeTelemetry::JointResize *this)
{
  *(_QWORD *)this = &JointResizeTelemetry::JointResize::`vftable';
  wil::ActivityBase<WindowManagementLogging,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>::Destroy();
  wil::ActivityBase<WindowManagementLogging,1,70368744177664,5,50331648,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<WindowManagementLogging,1,70368744177664,5,50331648,_TlgReflectorTag_Param0IsProviderType>((__int64)this);
}
