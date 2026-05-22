/*
 * XREFs of ?Release@?$SharedUnknownBase@UISIPCEndpoint@@@@UEAAKXZ @ 0x18006DA60
 * Callers:
 *     ?Release@?$SharedUnknownBase@UIGameInputServer@@UIAgileObject@@UINoMarshal@@@@W7EAAKXZ @ 0x18007ADF0 (-Release@-$SharedUnknownBase@UIGameInputServer@@UIAgileObject@@UINoMarshal@@@@W7EAAKXZ.c)
 *     ?Release@?$SharedUnknownBase@UIGameInputServer@@UIAgileObject@@UINoMarshal@@@@WBA@EAAKXZ @ 0x18007AE10 (-Release@-$SharedUnknownBase@UIGameInputServer@@UIAgileObject@@UINoMarshal@@@@WBA@EAAKXZ.c)
 * Callees:
 *     <none>
 */

unsigned int __fastcall SharedUnknownBase<ISIPCEndpoint>::Release(__int64 a1)
{
  return SharedObjectBase::ReleasePublicReference((SharedObjectBase *)(a1 - 16));
}
