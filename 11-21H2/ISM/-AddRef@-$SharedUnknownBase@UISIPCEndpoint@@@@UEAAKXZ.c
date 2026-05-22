/*
 * XREFs of ?AddRef@?$SharedUnknownBase@UISIPCEndpoint@@@@UEAAKXZ @ 0x1800FC260
 * Callers:
 *     ?AddRef@?$SharedUnknownBase@UIGameInputServer@@UIGameInputServerDownlevel@@UIAgileObject@@UINoMarshal@@@@W7EAAKXZ @ 0x1800501E0 (-AddRef@-$SharedUnknownBase@UIGameInputServer@@UIGameInputServerDownlevel@@UIAgileObject@@UINoMa.c)
 *     ?AddRef@?$SharedUnknownBase@UIGameInputServer@@UIGameInputServerDownlevel@@UIAgileObject@@UINoMarshal@@@@WBA@EAAKXZ @ 0x180050200 (-AddRef@-$SharedUnknownBase@UIGameInputServer@@UIGameInputServerDownlevel@@UIAgileO_ea_180050200.c)
 *     ?AddRef@?$SharedUnknownBase@UIGameInputServer@@UIGameInputServerDownlevel@@UIAgileObject@@UINoMarshal@@@@WBI@EAAKXZ @ 0x180050220 (-AddRef@-$SharedUnknownBase@UIGameInputServer@@UIGameInputServerDownlevel@@UIAgileO_ea_180050220.c)
 * Callees:
 *     <none>
 */

signed __int64 __fastcall SharedUnknownBase<ISIPCEndpoint>::AddRef(__int64 a1)
{
  return SharedObjectBase::AddPublicReference((SharedObjectBase *)(a1 - 16));
}
