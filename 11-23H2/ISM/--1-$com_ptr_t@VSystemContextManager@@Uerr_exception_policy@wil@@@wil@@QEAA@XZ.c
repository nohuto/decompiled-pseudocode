/*
 * XREFs of ??1?$com_ptr_t@VSystemContextManager@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18009E528
 * Callers:
 *     _InputConfigContextProvider::Broadcast_::_1_::dtor$1 @ 0x18006C32D (_InputConfigContextProvider--Broadcast_--_1_--dtor$1.c)
 *     _DeviceInputHost::DeviceInputHost_::_1_::dtor$14 @ 0x180097073 (_DeviceInputHost--DeviceInputHost_--_1_--dtor$14.c)
 *     _SystemContextEndpoint::SystemContextEndpoint_::_1_::dtor$1 @ 0x18009E43E (_SystemContextEndpoint--SystemContextEndpoint_--_1_--dtor$1.c)
 *     _DockableDeviceCollection::OnDeviceRemoval_::_1_::dtor$0 @ 0x1800E3A30 (_DockableDeviceCollection--OnDeviceRemoval_--_1_--dtor$0.c)
 *     _DockableDeviceCollection::ProcessFeatureReport_::_1_::dtor$0 @ 0x1800E4204 (_DockableDeviceCollection--ProcessFeatureReport_--_1_--dtor$0.c)
 *     _PenDeviceCollection::OnDeviceAttach_::_1_::dtor$0 @ 0x1800E4B87 (_PenDeviceCollection--OnDeviceAttach_--_1_--dtor$0.c)
 *     _PenDeviceCollection::OnDeviceRemoval_::_1_::dtor$0 @ 0x1800E4CAC (_PenDeviceCollection--OnDeviceRemoval_--_1_--dtor$0.c)
 *     _PenDeviceCollection::OnInputReport_::_1_::dtor$0 @ 0x1800E4D98 (_PenDeviceCollection--OnInputReport_--_1_--dtor$0.c)
 *     _PenInterface::UpdateTransducerProperties_::_1_::dtor$0 @ 0x1801A752F (_PenInterface--UpdateTransducerProperties_--_1_--dtor$0.c)
 *     _VirtualTouchpadContextProvider::OnTouchpadAdded_::_1_::dtor$1 @ 0x1801BC265 (_VirtualTouchpadContextProvider--OnTouchpadAdded_--_1_--dtor$1.c)
 *     _VirtualTouchpadContextProvider::OnTouchpadRemoved_::_1_::dtor$1 @ 0x1801BC3EF (_VirtualTouchpadContextProvider--OnTouchpadRemoved_--_1_--dtor$1.c)
 *     _VirtualTouchpadContextProvider::OnTouchpadUpdated_::_1_::dtor$1 @ 0x1801BC576 (_VirtualTouchpadContextProvider--OnTouchpadUpdated_--_1_--dtor$1.c)
 *     _DisplayOcclusionContextProvider::OnOcclusionRectAdded_::_1_::dtor$0 @ 0x1801BD037 (_DisplayOcclusionContextProvider--OnOcclusionRectAdded_--_1_--dtor$0.c)
 *     _DisplayOcclusionContextProvider::OnOcclusionRectRemoved_::_1_::dtor$0 @ 0x1801BD17D (_DisplayOcclusionContextProvider--OnOcclusionRectRemoved_--_1_--dtor$0.c)
 *     _DisplayOcclusionContextProvider::OnOcclusionRectUpdated_::_1_::dtor$0 @ 0x1801BD2C0 (_DisplayOcclusionContextProvider--OnOcclusionRectUpdated_--_1_--dtor$0.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180065970 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall wil::com_ptr_t<SystemContextManager,wil::err_exception_policy>::~com_ptr_t<SystemContextManager,wil::err_exception_policy>(
        __int64 *a1)
{
  __int64 v1; // rcx
  __int64 result; // rax

  v1 = *a1;
  if ( v1 )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(v1 + 16) + 8LL))(v1 + 16);
  return result;
}
