/*
 * XREFs of ?Release@?$SharedUnknownBase@UISIPCEndpoint@@@@UEAAKXZ @ 0x1800FC480
 * Callers:
 *     ?Release@?$SharedUnknownBase@UIGameInputServer@@UIGameInputServerDownlevel@@UIAgileObject@@UINoMarshal@@@@W7EAAKXZ @ 0x1800502A0 (-Release@-$SharedUnknownBase@UIGameInputServer@@UIGameInputServerDownlevel@@UIAgileObject@@UINoM.c)
 *     ?Release@?$SharedUnknownBase@UIGameInputServer@@UIGameInputServerDownlevel@@UIAgileObject@@UINoMarshal@@@@WBA@EAAKXZ @ 0x1800502C0 (-Release@-$SharedUnknownBase@UIGameInputServer@@UIGameInputServerDownlevel@@UIAgile_ea_1800502C0.c)
 *     ?Release@?$SharedUnknownBase@UIGameInputServer@@UIGameInputServerDownlevel@@UIAgileObject@@UINoMarshal@@@@WBI@EAAKXZ @ 0x1800502E0 (-Release@-$SharedUnknownBase@UIGameInputServer@@UIGameInputServerDownlevel@@UIAgile_ea_1800502E0.c)
 * Callees:
 *     <none>
 */

unsigned int __fastcall SharedUnknownBase<ISIPCEndpoint>::Release(__int64 a1)
{
  return SharedObjectBase::ReleasePublicReference((SharedObjectBase *)(a1 - 16));
}
