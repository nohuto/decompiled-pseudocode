/*
 * XREFs of ??1GetInputReportResult@@QEAA@XZ @ 0x1800F0D68
 * Callers:
 *     ?DeliverDeviceAttach@DWMInputTarget@@UEAAJPEAUDeviceInfo@@@Z @ 0x180013010 (-DeliverDeviceAttach@DWMInputTarget@@UEAAJPEAUDeviceInfo@@@Z.c)
 *     ?DeliverDeviceEnumerationCompleted@DWMInputTarget@@UEAAJXZ @ 0x180016280 (-DeliverDeviceEnumerationCompleted@DWMInputTarget@@UEAAJXZ.c)
 *     _DWMInputTarget::DeliverDeviceAttach_::_1_::dtor$0 @ 0x18007F9B2 (_DWMInputTarget--DeliverDeviceAttach_--_1_--dtor$0.c)
 *     _DWMInputTarget::DeliverDeviceEnumerationCompleted_::_1_::dtor$0 @ 0x18007FBF6 (_DWMInputTarget--DeliverDeviceEnumerationCompleted_--_1_--dtor$0.c)
 *     _DockDeviceCollection::OnDeviceAttach_::_1_::dtor$2 @ 0x1800F144F (_DockDeviceCollection--OnDeviceAttach_--_1_--dtor$2.c)
 *     _DockDeviceCollection::OnReportQueryCallback_::_1_::dtor$0 @ 0x1800F177E (_DockDeviceCollection--OnReportQueryCallback_--_1_--dtor$0.c)
 *     ?DeliverDeviceRemoval@DWMInputTarget@@UEAAJPEAUDeviceInfo@@@Z @ 0x18010E9E0 (-DeliverDeviceRemoval@DWMInputTarget@@UEAAJPEAUDeviceInfo@@@Z.c)
 *     _DWMInputTarget::DeliverDeviceRemoval_::_1_::dtor$0 @ 0x18010EAE0 (_DWMInputTarget--DeliverDeviceRemoval_--_1_--dtor$0.c)
 *     ?DeliverDeviceUpdate@DWMInputTarget@@UEAAJPEAUDeviceInfo@@@Z @ 0x18010EB00 (-DeliverDeviceUpdate@DWMInputTarget@@UEAAJPEAUDeviceInfo@@@Z.c)
 *     _InputDestTarget::DeliverInput_::_1_::dtor$0 @ 0x18010F595 (_InputDestTarget--DeliverInput_--_1_--dtor$0.c)
 *     _NonBamoInputDeliveryServer::OnKernelInputEvent_::_1_::dtor$0 @ 0x180181957 (_NonBamoInputDeliveryServer--OnKernelInputEvent_--_1_--dtor$0.c)
 * Callees:
 *     ??_V@YAXPEAX@Z @ 0x180057AD8 (--_V@YAXPEAX@Z.c)
 */

void __fastcall GetInputReportResult::~GetInputReportResult(GetInputReportResult *this)
{
  void *v1; // rcx

  v1 = (void *)*((_QWORD *)this + 1);
  if ( v1 )
    operator delete[](v1);
}
