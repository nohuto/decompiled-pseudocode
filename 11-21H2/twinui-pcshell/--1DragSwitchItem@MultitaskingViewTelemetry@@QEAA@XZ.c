/*
 * XREFs of ??1DragSwitchItem@MultitaskingViewTelemetry@@QEAA@XZ @ 0x1804D7360
 * Callers:
 *     ??1ElementDragData@@UEAA@XZ @ 0x1804D738C (--1ElementDragData@@UEAA@XZ.c)
 *     ??4DragSwitchItem@MultitaskingViewTelemetry@@QEAAAEAV01@$$QEAV01@@Z @ 0x1804D74C8 (--4DragSwitchItem@MultitaskingViewTelemetry@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ?StartDrag@ElementDragData@@UEAAJW4PointerButton@@AEBVMultitaskingViewPointerInputArgs@@@Z @ 0x1804D86F0 (-StartDrag@ElementDragData@@UEAAJW4PointerButton@@AEBVMultitaskingViewPointerInputArgs@@@Z.c)
 *     _ElementDragData::StartDrag_::_1_::dtor$0 @ 0x1804D899D (_ElementDragData--StartDrag_--_1_--dtor$0.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VWindowManagementLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x180052854 (-Destroy@-$ActivityBase@VWindowManagementLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Par.c)
 */

void __fastcall MultitaskingViewTelemetry::DragSwitchItem::~DragSwitchItem(volatile signed __int32 **this)
{
  *this = (volatile signed __int32 *)&MultitaskingViewTelemetry::DragSwitchItem::`vftable';
  wil::ActivityBase<WindowManagementLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::Destroy(this);
  wil::ActivityBase<WindowManagementLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<WindowManagementLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>((__int64)this);
}
