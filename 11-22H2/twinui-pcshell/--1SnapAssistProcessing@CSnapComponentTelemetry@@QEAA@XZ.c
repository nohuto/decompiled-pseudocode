/*
 * XREFs of ??1SnapAssistProcessing@CSnapComponentTelemetry@@QEAA@XZ @ 0x18066A07C
 * Callers:
 *     ?TriggerSnapAssistFromApplicationArrangedNotification@CSnapAssistControllerBase@@UEAAJPEAUIApplicationView@@W4WINDOW_SNAPPING_MODE@@W4SNAP_ASSIST_VIEW_FLAGS@@@Z @ 0x18066CA10 (-TriggerSnapAssistFromApplicationArrangedNotification@CSnapAssistControllerBase@@UEAAJPEAUIAppli.c)
 *     _CSnapAssistControllerBase::TriggerSnapAssistFromApplicationArrangedNotification_::_1_::dtor$0 @ 0x18066CE69 (_CSnapAssistControllerBase--TriggerSnapAssistFromApplicationArrangedNotification_--_1_--dtor$0.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VWindowManagementLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x18004C1E8 (-Destroy@-$ActivityBase@VWindowManagementLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Par.c)
 */

void __fastcall CSnapComponentTelemetry::SnapAssistProcessing::~SnapAssistProcessing(
        CSnapComponentTelemetry::SnapAssistProcessing *this)
{
  *(_QWORD *)this = &CSnapComponentTelemetry::SnapAssistProcessing::`vftable';
  wil::ActivityBase<WindowManagementLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::Destroy(this);
  wil::ActivityBase<WindowManagementLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<WindowManagementLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>((__int64)this);
}
