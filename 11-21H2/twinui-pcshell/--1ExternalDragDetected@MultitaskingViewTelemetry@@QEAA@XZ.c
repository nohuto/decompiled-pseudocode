/*
 * XREFs of ??1ExternalDragDetected@MultitaskingViewTelemetry@@QEAA@XZ @ 0x1804D73E4
 * Callers:
 *     ?StartExternalDrag@ElementDragData@@AEAAJXZ @ 0x1804D89D4 (-StartExternalDrag@ElementDragData@@AEAAJXZ.c)
 *     _ElementDragData::StartExternalDrag_::_1_::dtor$0 @ 0x1804D8C0A (_ElementDragData--StartExternalDrag_--_1_--dtor$0.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x1800C4214 (-Destroy@-$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProvi.c)
 */

void __fastcall MultitaskingViewTelemetry::ExternalDragDetected::~ExternalDragDetected(
        MultitaskingViewTelemetry::ExternalDragDetected *this)
{
  *(_QWORD *)this = &MultitaskingViewTelemetry::ExternalDragDetected::`vftable';
  wil::ActivityBase<WindowManagementLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Destroy(this);
  wil::ActivityBase<WindowManagementLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<WindowManagementLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>((__int64)this);
}
