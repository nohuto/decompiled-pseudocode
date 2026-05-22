/*
 * XREFs of ??1DeviceAttached@RawInputProvidersTracing@@QEAA@XZ @ 0x1800E6A50
 * Callers:
 *     ?DoDeviceAttach@SpatialRimDeviceCollection@@IEAAJKPEAUDeviceInfo@@@Z @ 0x1800E7558 (-DoDeviceAttach@SpatialRimDeviceCollection@@IEAAJKPEAUDeviceInfo@@@Z.c)
 *     _SpatialRimDeviceCollection::DoDeviceAttach_::_1_::dtor$0 @ 0x1800E77CD (_SpatialRimDeviceCollection--DoDeviceAttach_--_1_--dtor$0.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VRawInputProvidersTracing@@$00$0EAAAAAAAAAAA@$03$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x1800E7404 (-Destroy@-$ActivityBase@VRawInputProvidersTracing@@$00$0EAAAAAAAAAAA@$03$0A@U_TlgReflectorTag_Pa.c)
 */

void __fastcall RawInputProvidersTracing::DeviceAttached::~DeviceAttached(
        RawInputProvidersTracing::DeviceAttached *this)
{
  *(_QWORD *)this = &RawInputProvidersTracing::DeviceAttached::`vftable';
  wil::ActivityBase<RawInputProvidersTracing,1,70368744177664,4,0,_TlgReflectorTag_Param0IsProviderType>::Destroy();
  wil::ActivityBase<RawInputProvidersTracing,1,70368744177664,4,0,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<RawInputProvidersTracing,1,70368744177664,4,0,_TlgReflectorTag_Param0IsProviderType>((__int64)this);
}
