/*
 * XREFs of ??1GetInputReportResult@@QEAA@XZ @ 0x1800E1E08
 * Callers:
 *     ?DeliverDeviceAttach@DWMInputTarget@@UEAAJPEAUDeviceInfo@@@Z @ 0x180012660 (-DeliverDeviceAttach@DWMInputTarget@@UEAAJPEAUDeviceInfo@@@Z.c)
 *     ?DeliverDeviceEnumerationCompleted@DWMInputTarget@@UEAAJXZ @ 0x180015A50 (-DeliverDeviceEnumerationCompleted@DWMInputTarget@@UEAAJXZ.c)
 *     _DWMInputTarget::DeliverDeviceAttach_::_1_::dtor$0 @ 0x18006BE62 (_DWMInputTarget--DeliverDeviceAttach_--_1_--dtor$0.c)
 *     _DWMInputTarget::DeliverDeviceEnumerationCompleted_::_1_::dtor$0 @ 0x18006C066 (_DWMInputTarget--DeliverDeviceEnumerationCompleted_--_1_--dtor$0.c)
 *     _DockDeviceCollection::OnDeviceAttach_::_1_::dtor$2 @ 0x1800E24EF (_DockDeviceCollection--OnDeviceAttach_--_1_--dtor$2.c)
 *     _DockDeviceCollection::OnReportQueryCallback_::_1_::dtor$0 @ 0x1800E281E (_DockDeviceCollection--OnReportQueryCallback_--_1_--dtor$0.c)
 *     ?DeliverDeviceRemoval@DWMInputTarget@@UEAAJPEAUDeviceInfo@@@Z @ 0x1800FFEC0 (-DeliverDeviceRemoval@DWMInputTarget@@UEAAJPEAUDeviceInfo@@@Z.c)
 *     _DWMInputTarget::DeliverDeviceRemoval_::_1_::dtor$0 @ 0x1800FFFC0 (_DWMInputTarget--DeliverDeviceRemoval_--_1_--dtor$0.c)
 *     ?DeliverDeviceUpdate@DWMInputTarget@@UEAAJPEAUDeviceInfo@@@Z @ 0x1800FFFE0 (-DeliverDeviceUpdate@DWMInputTarget@@UEAAJPEAUDeviceInfo@@@Z.c)
 *     _InputDestTarget::DeliverInput_::_1_::dtor$0 @ 0x180100A75 (_InputDestTarget--DeliverInput_--_1_--dtor$0.c)
 *     _NonBamoInputDeliveryServer::OnKernelInputEvent_::_1_::dtor$0 @ 0x180173B47 (_NonBamoInputDeliveryServer--OnKernelInputEvent_--_1_--dtor$0.c)
 * Callees:
 *     ??_V@YAXPEAX@Z @ 0x180056D48 (--_V@YAXPEAX@Z.c)
 */

void __fastcall GetInputReportResult::~GetInputReportResult(GetInputReportResult *this)
{
  void *v1; // rcx

  v1 = (void *)*((_QWORD *)this + 1);
  if ( v1 )
    operator delete[](v1);
}
