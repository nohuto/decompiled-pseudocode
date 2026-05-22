/*
 * XREFs of ?AddRef@?$SharedUnknownBase@UIGameInputServer@@UIGameInputServerDownlevel@@UIAgileObject@@UINoMarshal@@@@WBI@EAAKXZ @ 0x180050220
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall SharedUnknownBase<IGameInputServer,IGameInputServerDownlevel,IAgileObject,INoMarshal>::AddRef(
        __int64 a1)
{
  return SharedUnknownBase<ISIPCEndpoint>::AddRef(a1 - 24);
}
