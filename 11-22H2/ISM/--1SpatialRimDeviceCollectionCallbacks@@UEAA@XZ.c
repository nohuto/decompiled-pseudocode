/*
 * XREFs of ??1SpatialRimDeviceCollectionCallbacks@@UEAA@XZ @ 0x1800E6CEC
 * Callers:
 *     ??_GSpatialRimDeviceCollectionCallbacks@@UEAAPEAXI@Z @ 0x1800E6FA0 (--_GSpatialRimDeviceCollectionCallbacks@@UEAAPEAXI@Z.c)
 *     ?DoDeviceAttach@SpatialRimDeviceCollection@@IEAAJKPEAUDeviceInfo@@@Z @ 0x1800E7558 (-DoDeviceAttach@SpatialRimDeviceCollection@@IEAAJKPEAUDeviceInfo@@@Z.c)
 *     _SpatialRimDeviceCollection::DoDeviceAttach_::_1_::dtor$3 @ 0x1800E77F1 (_SpatialRimDeviceCollection--DoDeviceAttach_--_1_--dtor$3.c)
 *     ?OnCallbackOnInputThreadStatic@SpatialRimDeviceCollection@@CAJPEAXK0@Z @ 0x1800E8B90 (-OnCallbackOnInputThreadStatic@SpatialRimDeviceCollection@@CAJPEAXK0@Z.c)
 *     _SpatialRimDeviceCollection::OnCallbackOnInputThreadStatic_::_1_::dtor$0 @ 0x1800E8C05 (_SpatialRimDeviceCollection--OnCallbackOnInputThreadStatic_--_1_--dtor$0.c)
 *     ?OnCompositorRunningStateChanged@SpatialRimDeviceCollection@@AEAAX_N@Z @ 0x1800E8C20 (-OnCompositorRunningStateChanged@SpatialRimDeviceCollection@@AEAAX_N@Z.c)
 *     _SpatialRimDeviceCollection::OnCompositorRunningStateChanged_::_1_::dtor$0 @ 0x1800E8CED (_SpatialRimDeviceCollection--OnCompositorRunningStateChanged_--_1_--dtor$0.c)
 *     ?OnDeviceRemoval@SpatialRimDeviceCollection@@MEAAJK@Z @ 0x1800E9430 (-OnDeviceRemoval@SpatialRimDeviceCollection@@MEAAJK@Z.c)
 *     _SpatialRimDeviceCollection::OnDeviceRemoval_::_1_::dtor$0 @ 0x1800E94D9 (_SpatialRimDeviceCollection--OnDeviceRemoval_--_1_--dtor$0.c)
 *     ?OnHeadUpdateEvent@SpatialRimDeviceCollection@@QEAAJAEBUMPCMatrix4x4@@PEAUIPerceptionTimestamp@Perception@Windows@@1@Z @ 0x1800E978C (-OnHeadUpdateEvent@SpatialRimDeviceCollection@@QEAAJAEBUMPCMatrix4x4@@PEAUIPerceptionTimestamp@P.c)
 *     _SpatialRimDeviceCollection::OnHeadUpdateEvent_::_1_::dtor$0 @ 0x1800E9844 (_SpatialRimDeviceCollection--OnHeadUpdateEvent_--_1_--dtor$0.c)
 *     ?OnInputReport@SpatialRimDeviceCollection@@MEAAJKPEAXK@Z @ 0x1800E99C0 (-OnInputReport@SpatialRimDeviceCollection@@MEAAJKPEAXK@Z.c)
 *     _SpatialRimDeviceCollection::OnInputReport_::_1_::dtor$0 @ 0x1800E9A86 (_SpatialRimDeviceCollection--OnInputReport_--_1_--dtor$0.c)
 *     ?OnTrackingRequestedHeartbeat@SpatialRimDeviceCollection@@QEAAJK@Z @ 0x1800E9A98 (-OnTrackingRequestedHeartbeat@SpatialRimDeviceCollection@@QEAAJK@Z.c)
 *     _SpatialRimDeviceCollection::OnTrackingRequestedHeartbeat_::_1_::dtor$0 @ 0x1800E9B1A (_SpatialRimDeviceCollection--OnTrackingRequestedHeartbeat_--_1_--dtor$0.c)
 *     ?SetInputDeviceHapticsFeedback@SpatialRimDeviceCollection@@QEAAJKEEG@Z @ 0x1800EA768 (-SetInputDeviceHapticsFeedback@SpatialRimDeviceCollection@@QEAAJKEEG@Z.c)
 *     _SpatialRimDeviceCollection::SetInputDeviceHapticsFeedback_::_1_::dtor$0 @ 0x1800EA81C (_SpatialRimDeviceCollection--SetInputDeviceHapticsFeedback_--_1_--dtor$0.c)
 * Callees:
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18005907C (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

void __fastcall SpatialRimDeviceCollectionCallbacks::~SpatialRimDeviceCollectionCallbacks(
        SpatialRimDeviceCollectionCallbacks *this,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  bool v4; // zf
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v4 = *((_DWORD *)this + 6) == 0;
  *(_QWORD *)this = &SpatialRimDeviceCollectionCallbacks::`vftable';
  if ( !v4 )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x48,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\spatialrimdevicecollection.cpp",
      a4);
  *((_DWORD *)this + 3) = -1073741823;
}
