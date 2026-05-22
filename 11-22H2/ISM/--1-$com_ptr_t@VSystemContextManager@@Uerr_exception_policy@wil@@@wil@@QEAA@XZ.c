/*
 * XREFs of ??1?$com_ptr_t@VSystemContextManager@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x1800B0A6C
 * Callers:
 *     _InputConfigContextProvider::Broadcast_::_1_::dtor$1 @ 0x18007FE9D (_InputConfigContextProvider--Broadcast_--_1_--dtor$1.c)
 *     _DeviceInputHost::DeviceInputHost_::_1_::dtor$14 @ 0x1800A9713 (_DeviceInputHost--DeviceInputHost_--_1_--dtor$14.c)
 *     _SystemContextEndpoint::SystemContextEndpoint_::_1_::dtor$1 @ 0x1800B098E (_SystemContextEndpoint--SystemContextEndpoint_--_1_--dtor$1.c)
 *     _DockableDeviceCollection::OnDeviceRemoval_::_1_::dtor$0 @ 0x1800F2990 (_DockableDeviceCollection--OnDeviceRemoval_--_1_--dtor$0.c)
 *     _DockableDeviceCollection::ProcessFeatureReport_::_1_::dtor$0 @ 0x1800F3164 (_DockableDeviceCollection--ProcessFeatureReport_--_1_--dtor$0.c)
 *     _PenDeviceCollection::OnDeviceAttach_::_1_::dtor$0 @ 0x1800F3AE7 (_PenDeviceCollection--OnDeviceAttach_--_1_--dtor$0.c)
 *     _PenDeviceCollection::OnDeviceRemoval_::_1_::dtor$0 @ 0x1800F3C0C (_PenDeviceCollection--OnDeviceRemoval_--_1_--dtor$0.c)
 *     _PenDeviceCollection::OnInputReport_::_1_::dtor$0 @ 0x1800F3CF8 (_PenDeviceCollection--OnInputReport_--_1_--dtor$0.c)
 *     _PenInterface::UpdateTransducerProperties_::_1_::dtor$0 @ 0x1801B550F (_PenInterface--UpdateTransducerProperties_--_1_--dtor$0.c)
 *     _VirtualTouchpadContextProvider::OnTouchpadAdded_::_1_::dtor$1 @ 0x1801C9AF0 (_VirtualTouchpadContextProvider--OnTouchpadAdded_--_1_--dtor$1.c)
 *     _VirtualTouchpadContextProvider::OnTouchpadRemoved_::_1_::dtor$1 @ 0x1801C9C6A (_VirtualTouchpadContextProvider--OnTouchpadRemoved_--_1_--dtor$1.c)
 *     _VirtualTouchpadContextProvider::OnTouchpadUpdated_::_1_::dtor$1 @ 0x1801C9DDD (_VirtualTouchpadContextProvider--OnTouchpadUpdated_--_1_--dtor$1.c)
 *     _DisplayOcclusionContextProvider::OnOcclusionRectAdded_::_1_::dtor$0 @ 0x1801CA8A7 (_DisplayOcclusionContextProvider--OnOcclusionRectAdded_--_1_--dtor$0.c)
 *     _DisplayOcclusionContextProvider::OnOcclusionRectRemoved_::_1_::dtor$0 @ 0x1801CA9ED (_DisplayOcclusionContextProvider--OnOcclusionRectRemoved_--_1_--dtor$0.c)
 *     _DisplayOcclusionContextProvider::OnOcclusionRectUpdated_::_1_::dtor$0 @ 0x1801CAB30 (_DisplayOcclusionContextProvider--OnOcclusionRectUpdated_--_1_--dtor$0.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800793F0 (_guard_xfg_dispatch_icall_nop.c)
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
