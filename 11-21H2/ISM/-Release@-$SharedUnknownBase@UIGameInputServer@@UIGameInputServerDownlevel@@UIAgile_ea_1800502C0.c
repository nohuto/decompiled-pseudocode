/*
 * XREFs of ?Release@?$SharedUnknownBase@UIGameInputServer@@UIGameInputServerDownlevel@@UIAgileObject@@UINoMarshal@@@@WBA@EAAKXZ @ 0x1800502C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall SharedUnknownBase<IGameInputServer,IGameInputServerDownlevel,IAgileObject,INoMarshal>::Release(
        __int64 a1)
{
  return SharedUnknownBase<ISIPCEndpoint>::Release(a1 - 16);
}
