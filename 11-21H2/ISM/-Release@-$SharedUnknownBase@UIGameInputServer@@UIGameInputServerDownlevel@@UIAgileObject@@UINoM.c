/*
 * XREFs of ?Release@?$SharedUnknownBase@UIGameInputServer@@UIGameInputServerDownlevel@@UIAgileObject@@UINoMarshal@@@@W7EAAKXZ @ 0x1800502A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall SharedUnknownBase<IGameInputServer,IGameInputServerDownlevel,IAgileObject,INoMarshal>::Release(
        __int64 a1)
{
  return SharedUnknownBase<ISIPCEndpoint>::Release(a1 - 8);
}
