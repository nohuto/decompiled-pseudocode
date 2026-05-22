/*
 * XREFs of ??1GetInputReportResult@@QEAA@XZ @ 0x1800C845C
 * Callers:
 *     _DWMInputTarget::DeliverDeviceAttach_::_1_::dtor$0 @ 0x180058289 (_DWMInputTarget--DeliverDeviceAttach_--_1_--dtor$0.c)
 *     _DWMInputTarget::DeliverDeviceEnumerationCompleted_::_1_::dtor$0 @ 0x180058407 (_DWMInputTarget--DeliverDeviceEnumerationCompleted_--_1_--dtor$0.c)
 *     _DockDeviceCollection::OnDeviceAttach_::_1_::dtor$2 @ 0x1800C8B26 (_DockDeviceCollection--OnDeviceAttach_--_1_--dtor$2.c)
 *     _DockDeviceCollection::OnReportQueryCallback_::_1_::dtor$0 @ 0x1800C8E5E (_DockDeviceCollection--OnReportQueryCallback_--_1_--dtor$0.c)
 *     _DWMInputTarget::DeliverDeviceRemoval_::_1_::dtor$0 @ 0x1800E7007 (_DWMInputTarget--DeliverDeviceRemoval_--_1_--dtor$0.c)
 *     _InputDestTarget::DeliverInput_::_1_::dtor$0 @ 0x1800E7C15 (_InputDestTarget--DeliverInput_--_1_--dtor$0.c)
 *     _NonBamoInputDeliveryServer::OnKernelInputEvent_::_1_::dtor$0 @ 0x1801545CB (_NonBamoInputDeliveryServer--OnKernelInputEvent_--_1_--dtor$0.c)
 * Callees:
 *     ??_V@YAXPEAX@Z @ 0x18004AF4C (--_V@YAXPEAX@Z.c)
 */

void __fastcall GetInputReportResult::~GetInputReportResult(GetInputReportResult *this)
{
  void *v1; // rcx

  v1 = (void *)*((_QWORD *)this + 1);
  if ( v1 )
    operator delete[](v1);
}
