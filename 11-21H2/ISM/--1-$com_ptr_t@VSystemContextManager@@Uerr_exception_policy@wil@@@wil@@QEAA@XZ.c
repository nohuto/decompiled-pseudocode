/*
 * XREFs of ??1?$com_ptr_t@VSystemContextManager@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x1800873F4
 * Callers:
 *     _InputConfigContextProvider::Broadcast_::_1_::dtor$1 @ 0x18005525C (_InputConfigContextProvider--Broadcast_--_1_--dtor$1.c)
 *     _DeviceInputHost::DeviceInputHost_::_1_::dtor$13 @ 0x18008010F (_DeviceInputHost--DeviceInputHost_--_1_--dtor$13.c)
 *     _SystemContextEndpoint::SystemContextEndpoint_::_1_::dtor$1 @ 0x18008727A (_SystemContextEndpoint--SystemContextEndpoint_--_1_--dtor$1.c)
 *     _DockableDeviceCollection::OnDeviceRemoval_::_1_::dtor$0 @ 0x1800CA3A6 (_DockableDeviceCollection--OnDeviceRemoval_--_1_--dtor$0.c)
 *     _DockableDeviceCollection::ProcessFeatureReport_::_1_::dtor$0 @ 0x1800CAB79 (_DockableDeviceCollection--ProcessFeatureReport_--_1_--dtor$0.c)
 *     _PenDeviceCollection::OnDeviceAttach_::_1_::dtor$0 @ 0x1800CB4B7 (_PenDeviceCollection--OnDeviceAttach_--_1_--dtor$0.c)
 *     _PenDeviceCollection::OnDeviceRemoval_::_1_::dtor$0 @ 0x1800CB5DC (_PenDeviceCollection--OnDeviceRemoval_--_1_--dtor$0.c)
 *     _PenDeviceCollection::OnInputReport_::_1_::dtor$0 @ 0x1800CB6C8 (_PenDeviceCollection--OnInputReport_--_1_--dtor$0.c)
 *     _PenInterface::UpdateTransducerProperties_::_1_::dtor$0 @ 0x180189393 (_PenInterface--UpdateTransducerProperties_--_1_--dtor$0.c)
 *     _VirtualTouchpadContextProvider::OnTouchpadAdded_::_1_::dtor$1 @ 0x18019DFD0 (_VirtualTouchpadContextProvider--OnTouchpadAdded_--_1_--dtor$1.c)
 *     _VirtualTouchpadContextProvider::OnTouchpadRemoved_::_1_::dtor$1 @ 0x18019E146 (_VirtualTouchpadContextProvider--OnTouchpadRemoved_--_1_--dtor$1.c)
 *     _VirtualTouchpadContextProvider::OnTouchpadUpdated_::_1_::dtor$1 @ 0x18019E2B5 (_VirtualTouchpadContextProvider--OnTouchpadUpdated_--_1_--dtor$1.c)
 *     _DisplayOcclusionContextProvider::OnOcclusionRectAdded_::_1_::dtor$0 @ 0x18019ED17 (_DisplayOcclusionContextProvider--OnOcclusionRectAdded_--_1_--dtor$0.c)
 *     _DisplayOcclusionContextProvider::OnOcclusionRectRemoved_::_1_::dtor$0 @ 0x18019EE5D (_DisplayOcclusionContextProvider--OnOcclusionRectRemoved_--_1_--dtor$0.c)
 *     _DisplayOcclusionContextProvider::OnOcclusionRectUpdated_::_1_::dtor$0 @ 0x18019EFA0 (_DisplayOcclusionContextProvider--OnOcclusionRectUpdated_--_1_--dtor$0.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
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
