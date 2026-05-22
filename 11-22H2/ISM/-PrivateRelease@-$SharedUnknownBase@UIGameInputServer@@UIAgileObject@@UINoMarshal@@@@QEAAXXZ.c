/*
 * XREFs of ?PrivateRelease@?$SharedUnknownBase@UIGameInputServer@@UIAgileObject@@UINoMarshal@@@@QEAAXXZ @ 0x18006D9CC
 * Callers:
 *     ?CreateSingleton@GameInputServerProxy@@SAJPEAUIGameInputServerInputRouter@@PEAPEAV1@@Z @ 0x18004B640 (-CreateSingleton@GameInputServerProxy@@SAJPEAUIGameInputServerInputRouter@@PEAPEAV1@@Z.c)
 * Callees:
 *     <none>
 */

unsigned int SharedUnknownBase<IGameInputServer,IAgileObject,INoMarshal>::PrivateRelease()
{
  return SharedObjectBase::ReleasePrivateReference(GameInputServerProxy::s_singleton);
}
