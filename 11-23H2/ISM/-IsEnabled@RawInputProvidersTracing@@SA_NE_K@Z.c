/*
 * XREFs of ?IsEnabled@RawInputProvidersTracing@@SA_NE_K@Z @ 0x1800D4240
 * Callers:
 *     ?OnDeviceAttach@AugmentedInputDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z @ 0x1800D4270 (-OnDeviceAttach@AugmentedInputDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z.c)
 *     ?OnDeviceRemoval@AugmentedInputDeviceCollection@@MEAAJK@Z @ 0x1800D43F0 (-OnDeviceRemoval@AugmentedInputDeviceCollection@@MEAAJK@Z.c)
 *     ?DisableHeadEventHandler@SpatialRimDeviceCollection@@AEAAXXZ @ 0x1800D8584 (-DisableHeadEventHandler@SpatialRimDeviceCollection@@AEAAXXZ.c)
 *     ?EnableHeadEventHandler@SpatialRimDeviceCollection@@AEAAJXZ @ 0x1800D88C8 (-EnableHeadEventHandler@SpatialRimDeviceCollection@@AEAAJXZ.c)
 *     ?EnsureSpatialInteractionInitialized@SpatialRimDeviceCollection@@AEAAJXZ @ 0x1800D8A00 (-EnsureSpatialInteractionInitialized@SpatialRimDeviceCollection@@AEAAJXZ.c)
 *     ?OnDdiDeviceAdded@SpatialRimDeviceCollection@@UEAAJW4InputType@@KAEBUMPCSourceDeviceInfo@@@Z @ 0x1800D9DB0 (-OnDdiDeviceAdded@SpatialRimDeviceCollection@@UEAAJW4InputType@@KAEBUMPCSourceDeviceInfo@@@Z.c)
 *     ?OnDdiDeviceRemoved@SpatialRimDeviceCollection@@UEAAJK@Z @ 0x1800DA080 (-OnDdiDeviceRemoved@SpatialRimDeviceCollection@@UEAAJK@Z.c)
 *     ?OnDeviceAttach@SpatialRimDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z @ 0x1800DA3C0 (-OnDeviceAttach@SpatialRimDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z.c)
 *     ?OnFinalRelease@SpatialRimDeviceCollection@@MEAAXXZ @ 0x1800DA590 (-OnFinalRelease@SpatialRimDeviceCollection@@MEAAXXZ.c)
 *     ?SendDeviceUpdate@SpatialRimDeviceCollection@@UEAAJKAEBUMPCSourceDeviceInfo@@@Z @ 0x1800DAEC0 (-SendDeviceUpdate@SpatialRimDeviceCollection@@UEAAJKAEBUMPCSourceDeviceInfo@@@Z.c)
 *     ?ReadFeatureReport@SpatialRimDevice@SpatialInteractions@Internal@Windows@@UEAAJEPEAEK@Z @ 0x1800E5B30 (-ReadFeatureReport@SpatialRimDevice@SpatialInteractions@Internal@Windows@@UEAAJEPEAEK@Z.c)
 * Callees:
 *     ?get@?$static_lazy@VRawInputProvidersTracing@@@details@wil@@QEAAPEAVRawInputProvidersTracing@@P6AXXZ@Z @ 0x1800D4994 (-get@-$static_lazy@VRawInputProvidersTracing@@@details@wil@@QEAAPEAVRawInputProvidersTracing@@P6.c)
 */

char __fastcall RawInputProvidersTracing::IsEnabled(__int64 a1)
{
  wil::TraceLoggingProvider *v1; // rax

  v1 = (wil::TraceLoggingProvider *)wil::details::static_lazy<RawInputProvidersTracing>::get(
                                      a1,
                                      _lambda_260b9137d63ddd75627644ad4182c2ea_::_lambda_invoker_cdecl_);
  return wil::TraceLoggingProvider::IsEnabled_(v1, 0);
}
