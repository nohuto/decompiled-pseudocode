/*
 * XREFs of ?PushStateToPrincipal@BamoDataProviderProxyImpl@BamoImpl@@UEAAXXZ @ 0x1801F78C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall BamoImpl::BamoDataProviderProxyImpl::PushStateToPrincipal(Microsoft::BamoImpl::BaseBamoPeerImpl **this)
{
  BamoImpl::BamoDataProviderProxyImpl::UpdateNumberOfReadersRemoteCache(this);
}
