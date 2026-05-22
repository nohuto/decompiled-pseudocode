/*
 * XREFs of ??0SpatialRimDeviceCollectionCallbacks@@QEAA@PEAVSpatialRimDeviceCollection@@@Z @ 0x1800E66D0
 * Callers:
 *     ?DoDeviceAttach@SpatialRimDeviceCollection@@IEAAJKPEAUDeviceInfo@@@Z @ 0x1800E7558 (-DoDeviceAttach@SpatialRimDeviceCollection@@IEAAJKPEAUDeviceInfo@@@Z.c)
 *     ?OnCallbackOnInputThreadStatic@SpatialRimDeviceCollection@@CAJPEAXK0@Z @ 0x1800E8B90 (-OnCallbackOnInputThreadStatic@SpatialRimDeviceCollection@@CAJPEAXK0@Z.c)
 *     ?OnCompositorRunningStateChanged@SpatialRimDeviceCollection@@AEAAX_N@Z @ 0x1800E8C20 (-OnCompositorRunningStateChanged@SpatialRimDeviceCollection@@AEAAX_N@Z.c)
 *     ?OnDeviceRemoval@SpatialRimDeviceCollection@@MEAAJK@Z @ 0x1800E9430 (-OnDeviceRemoval@SpatialRimDeviceCollection@@MEAAJK@Z.c)
 *     ?OnHeadUpdateEvent@SpatialRimDeviceCollection@@QEAAJAEBUMPCMatrix4x4@@PEAUIPerceptionTimestamp@Perception@Windows@@1@Z @ 0x1800E978C (-OnHeadUpdateEvent@SpatialRimDeviceCollection@@QEAAJAEBUMPCMatrix4x4@@PEAUIPerceptionTimestamp@P.c)
 *     ?OnInputReport@SpatialRimDeviceCollection@@MEAAJKPEAXK@Z @ 0x1800E99C0 (-OnInputReport@SpatialRimDeviceCollection@@MEAAJKPEAXK@Z.c)
 *     ?OnTrackingRequestedHeartbeat@SpatialRimDeviceCollection@@QEAAJK@Z @ 0x1800E9A98 (-OnTrackingRequestedHeartbeat@SpatialRimDeviceCollection@@QEAAJK@Z.c)
 *     ?SetInputDeviceHapticsFeedback@SpatialRimDeviceCollection@@QEAAJKEEG@Z @ 0x1800EA768 (-SetInputDeviceHapticsFeedback@SpatialRimDeviceCollection@@QEAAJKEEG@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800793F0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
SpatialRimDeviceCollectionCallbacks *__fastcall SpatialRimDeviceCollectionCallbacks::SpatialRimDeviceCollectionCallbacks(
        SpatialRimDeviceCollectionCallbacks *this,
        struct SpatialRimDeviceCollection *a2)
{
  *((_DWORD *)this + 3) = 1;
  *(_QWORD *)this = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::SpatialInteractions::ISpatialInteractionSourceCollectionCallbacks>::`vftable';
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  *(_QWORD *)this = &SpatialRimDeviceCollectionCallbacks::`vftable';
  *((_QWORD *)this + 2) = a2;
  *((_DWORD *)this + 6) = 0;
  return this;
}
