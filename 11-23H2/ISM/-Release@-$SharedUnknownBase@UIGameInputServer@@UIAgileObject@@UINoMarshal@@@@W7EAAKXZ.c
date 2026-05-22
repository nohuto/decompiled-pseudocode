/*
 * XREFs of ?Release@?$SharedUnknownBase@UIGameInputServer@@UIAgileObject@@UINoMarshal@@@@W7EAAKXZ @ 0x1800672B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int __fastcall SharedUnknownBase<IGameInputServer,IAgileObject,INoMarshal>::Release(__int64 a1)
{
  return SharedUnknownBase<ISIPCEndpoint>::Release(a1 - 8);
}
