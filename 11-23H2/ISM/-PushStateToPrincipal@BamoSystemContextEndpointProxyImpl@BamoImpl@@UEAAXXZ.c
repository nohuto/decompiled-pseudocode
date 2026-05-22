/*
 * XREFs of ?PushStateToPrincipal@BamoSystemContextEndpointProxyImpl@BamoImpl@@UEAAXXZ @ 0x180152100
 * Callers:
 *     <none>
 * Callees:
 *     ?UpdateOcclusionRectsRemoteCache@BamoSystemContextEndpointProxyImpl@BamoImpl@@AEAAXXZ @ 0x180152450 (-UpdateOcclusionRectsRemoteCache@BamoSystemContextEndpointProxyImpl@BamoImpl@@AEAAXXZ.c)
 */

void __fastcall BamoImpl::BamoSystemContextEndpointProxyImpl::PushStateToPrincipal(
        BamoImpl::BamoSystemContextEndpointProxyImpl *this)
{
  BamoImpl::BamoSystemContextEndpointProxyImpl::UpdateOcclusionRectsRemoteCache(this);
  BamoImpl::BamoSystemContextEndpointProxyImpl::UpdateTouchpadRectsRemoteCache(this);
}
