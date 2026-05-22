/*
 * XREFs of ?Destroy@ContextRuntimeClass@WRL2@Microsoft@@MEAAXXZ @ 0x1800653E0
 * Callers:
 *     ?Destroy@CompositorController@Core@Composition@UI@Windows@@UEAAXXZ @ 0x18000F1F0 (-Destroy@CompositorController@Core@Composition@UI@Windows@@UEAAXXZ.c)
 *     ?Destroy@CompositorCommon@Composition@UI@Windows@@MEAAXXZ @ 0x180064ED0 (-Destroy@CompositorCommon@Composition@UI@Windows@@MEAAXXZ.c)
 *     ?Destroy@CompositionDebugSettings@Diagnostics@Composition@UI@Windows@@UEAAXXZ @ 0x18012DAD0 (-Destroy@CompositionDebugSettings@Diagnostics@Composition@UI@Windows@@UEAAXXZ.c)
 *     ?Destroy@DebugPropertyRegistration@Composition@UI@Windows@@MEAAXXZ @ 0x18019FB70 (-Destroy@DebugPropertyRegistration@Composition@UI@Windows@@MEAAXXZ.c)
 *     ?Destroy@CompositionInteractionSourceIterator@Interactions@Composition@UI@Windows@@UEAAXXZ @ 0x1801A2030 (-Destroy@CompositionInteractionSourceIterator@Interactions@Composition@UI@Windows@@UEAAXXZ.c)
 *     ?Destroy@InitialValueExpressionCollectionMapView@Composition@UI@Windows@@UEAAXXZ @ 0x1801A2400 (-Destroy@InitialValueExpressionCollectionMapView@Composition@UI@Windows@@UEAAXXZ.c)
 *     ?Destroy@InitialValueExpressionIterator@Composition@UI@Windows@@UEAAXXZ @ 0x1801A28B0 (-Destroy@InitialValueExpressionIterator@Composition@UI@Windows@@UEAAXXZ.c)
 *     ?Destroy@VisualUnorderedCollectionIterator@Composition@UI@Windows@@UEAAXXZ @ 0x1801A3840 (-Destroy@VisualUnorderedCollectionIterator@Composition@UI@Windows@@UEAAXXZ.c)
 * Callees:
 *     ?Unexpected@FailFast@WRL2@Microsoft@@SAXPEBD@Z @ 0x180109090 (-Unexpected@FailFast@WRL2@Microsoft@@SAXPEBD@Z.c)
 */

void __fastcall Microsoft::WRL2::ContextRuntimeClass::Destroy(Microsoft::WRL2::ContextRuntimeClass *this)
{
  *((_DWORD *)this + 8) &= ~2u;
  if ( (*((_BYTE *)this + 32) & 1) != 0 )
    Microsoft::WRL2::FailFast::Unexpected("Destroy preconditions");
}
