/*
 * XREFs of ?PushStateToPrincipal@BamoSystemContextEndpointProxyImpl@BamoImpl@@UEAAXXZ @ 0x1801603E0
 * Callers:
 *     <none>
 * Callees:
 *     ?UpdateOcclusionRectsRemoteCache@BamoSystemContextEndpointProxyImpl@BamoImpl@@AEAAXXZ @ 0x180160730 (-UpdateOcclusionRectsRemoteCache@BamoSystemContextEndpointProxyImpl@BamoImpl@@AEAAXXZ.c)
 */

void __fastcall BamoImpl::BamoSystemContextEndpointProxyImpl::PushStateToPrincipal(
        BamoImpl::BamoSystemContextEndpointProxyImpl *this)
{
  BamoImpl::BamoSystemContextEndpointProxyImpl::UpdateOcclusionRectsRemoteCache(this);
  BamoImpl::BamoSystemContextEndpointProxyImpl::UpdateTouchpadRectsRemoteCache(this);
}
