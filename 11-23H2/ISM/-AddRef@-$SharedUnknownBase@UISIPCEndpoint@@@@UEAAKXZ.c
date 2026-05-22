/*
 * XREFs of ?AddRef@?$SharedUnknownBase@UISIPCEndpoint@@@@UEAAKXZ @ 0x18005BE10
 * Callers:
 *     ?OnHitTest@GameInputProcessor@@UEAAJPEAUHitTestInfo@@PEAVInputContext@@PEAUContextualProcessorInitialState@@@Z @ 0x180010D00 (-OnHitTest@GameInputProcessor@@UEAAJPEAUHitTestInfo@@PEAVInputContext@@PEAUContextualProcessorIn.c)
 *     ?LazyInitialize@GameInputProcessor@@AEAAJXZ @ 0x18004DA90 (-LazyInitialize@GameInputProcessor@@AEAAJXZ.c)
 *     ?AddRef@?$SharedUnknownBase@UIGameInputServer@@UIAgileObject@@UINoMarshal@@@@W7EAAKXZ @ 0x180067230 (-AddRef@-$SharedUnknownBase@UIGameInputServer@@UIAgileObject@@UINoMarshal@@@@W7EAAKXZ.c)
 *     ?AddRef@?$SharedUnknownBase@UIGameInputServer@@UIAgileObject@@UINoMarshal@@@@WBA@EAAKXZ @ 0x180067250 (-AddRef@-$SharedUnknownBase@UIGameInputServer@@UIAgileObject@@UINoMarshal@@@@WBA@EAAKXZ.c)
 * Callees:
 *     <none>
 */

signed __int64 __fastcall SharedUnknownBase<ISIPCEndpoint>::AddRef(__int64 a1)
{
  return SharedObjectBase::AddPublicReference((SharedObjectBase *)(a1 - 16));
}
