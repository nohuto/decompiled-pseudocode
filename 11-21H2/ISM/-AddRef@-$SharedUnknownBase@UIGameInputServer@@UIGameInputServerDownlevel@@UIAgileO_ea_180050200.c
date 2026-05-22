/*
 * XREFs of ?AddRef@?$SharedUnknownBase@UIGameInputServer@@UIGameInputServerDownlevel@@UIAgileObject@@UINoMarshal@@@@WBA@EAAKXZ @ 0x180050200
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall SharedUnknownBase<IGameInputServer,IGameInputServerDownlevel,IAgileObject,INoMarshal>::AddRef(
        __int64 a1)
{
  return SharedUnknownBase<ISIPCEndpoint>::AddRef(a1 - 16);
}
