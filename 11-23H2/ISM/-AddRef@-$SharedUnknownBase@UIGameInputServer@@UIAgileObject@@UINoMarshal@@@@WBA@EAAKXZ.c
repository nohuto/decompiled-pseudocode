/*
 * XREFs of ?AddRef@?$SharedUnknownBase@UIGameInputServer@@UIAgileObject@@UINoMarshal@@@@WBA@EAAKXZ @ 0x180067250
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

signed __int64 __fastcall SharedUnknownBase<IGameInputServer,IAgileObject,INoMarshal>::AddRef(__int64 a1)
{
  return SharedUnknownBase<ISIPCEndpoint>::AddRef(a1 - 16);
}
