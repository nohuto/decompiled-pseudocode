/*
 * XREFs of ?InitPublicReferenceCount@?$SharedUnknownBase@UIGameInputServer@@UIAgileObject@@UINoMarshal@@@@IEAAXXZ @ 0x18005BE20
 * Callers:
 *     ?CreateSingleton@GameInputServerProxy@@SAJPEAUIGameInputServerInputRouter@@PEAPEAV1@@Z @ 0x18004ACB4 (-CreateSingleton@GameInputServerProxy@@SAJPEAUIGameInputServerInputRouter@@PEAPEAV1@@Z.c)
 * Callees:
 *     <none>
 */

SharedObjectBase *SharedUnknownBase<IGameInputServer,IAgileObject,INoMarshal>::InitPublicReferenceCount()
{
  SharedObjectBase *result; // rax

  result = GameInputServerProxy::s_singleton;
  if ( (unsigned int)_InterlockedExchangeAdd64((volatile signed __int64 *)GameInputServerProxy::s_singleton + 1, 2uLL) )
    __fastfail(0xEu);
  return result;
}
