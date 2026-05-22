/*
 * XREFs of ?PushStateToPrincipal@BamoSystemContextEndpointProxyImpl@BamoImpl@@UEAAXXZ @ 0x1801379E0
 * Callers:
 *     <none>
 * Callees:
 *     ?UpdateOcclusionRectsRemoteCache@BamoSystemContextEndpointProxyImpl@BamoImpl@@AEAAXXZ @ 0x180137D40 (-UpdateOcclusionRectsRemoteCache@BamoSystemContextEndpointProxyImpl@BamoImpl@@AEAAXXZ.c)
 */

void __fastcall BamoImpl::BamoSystemContextEndpointProxyImpl::PushStateToPrincipal(
        BamoImpl::BamoSystemContextEndpointProxyImpl *this)
{
  BamoImpl::BamoSystemContextEndpointProxyImpl::UpdateOcclusionRectsRemoteCache(this);
  BamoImpl::BamoSystemContextEndpointProxyImpl::UpdateTouchpadRectsRemoteCache(this);
}
