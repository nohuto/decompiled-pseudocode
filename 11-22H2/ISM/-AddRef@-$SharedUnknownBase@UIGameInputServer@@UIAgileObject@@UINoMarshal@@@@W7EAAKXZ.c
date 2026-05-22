/*
 * XREFs of ?AddRef@?$SharedUnknownBase@UIGameInputServer@@UIAgileObject@@UINoMarshal@@@@W7EAAKXZ @ 0x18007AD70
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

signed __int64 __fastcall SharedUnknownBase<IGameInputServer,IAgileObject,INoMarshal>::AddRef(__int64 a1)
{
  return SharedUnknownBase<ISIPCEndpoint>::AddRef(a1 - 8);
}
