/*
 * XREFs of ??1?$ThunkArray@I@BamoImpl@Microsoft@@QEAA@XZ @ 0x18009E4D8
 * Callers:
 *     _BamoImpl::BamoSystemContextEndpointPrincipalImpl::OnInputConfigChanged_::_1_::dtor$0 @ 0x18009F2EC (_BamoImpl--BamoSystemContextEndpointPrincipalImpl--OnInputConfigChanged_--_1_--dtor$0.c)
 *     _BamoImpl::BamoGestureServicesProxyImpl::StartAnimation_::_1_::dtor$0 @ 0x180132DF4 (_BamoImpl--BamoGestureServicesProxyImpl--StartAnimation_--_1_--dtor$0.c)
 *     _BamoImpl::BamoSystemContextEndpointProxyImpl::OnInputConfigChanged_::_1_::dtor$0 @ 0x180151FFF (_BamoImpl--BamoSystemContextEndpointProxyImpl--OnInputConfigChanged_--_1_--dtor$0.c)
 *     _BamoImpl::BamoGestureServicesPrincipalImpl::StartAnimation_::_1_::dtor$0 @ 0x180153C8F (_BamoImpl--BamoGestureServicesPrincipalImpl--StartAnimation_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

void __fastcall Microsoft::BamoImpl::ThunkArray<unsigned int>::~ThunkArray<unsigned int>(__int64 a1)
{
  Microsoft::BamoImpl::BaseBamoConnectionImpl::ReleaseBuffer(
    *(Microsoft::BamoImpl::BaseBamoConnectionImpl **)a1,
    *(void **)(a1 + 8));
}
