/*
 * XREFs of ?AddPublicReference@SharedObjectBase@@IEAAIXZ @ 0x180048B70
 * Callers:
 *     ?OnHitTest@GameInputProcessor@@UEAAJPEAUHitTestInfo@@PEAVInputContext@@PEAUContextualProcessorInitialState@@@Z @ 0x1800074F0 (-OnHitTest@GameInputProcessor@@UEAAJPEAUHitTestInfo@@PEAVInputContext@@PEAUContextualProcessorIn.c)
 *     ?LazyInitialize@GameInputProcessor@@AEAAJXZ @ 0x180043840 (-LazyInitialize@GameInputProcessor@@AEAAJXZ.c)
 *     ?AddRef@?$SharedUnknownBase@UISIPCEndpoint@@@@UEAAKXZ @ 0x1800FC260 (-AddRef@-$SharedUnknownBase@UISIPCEndpoint@@@@UEAAKXZ.c)
 *     ?QueryInterface@?$SharedUnknownBase@UIGameInputServer@@UIGameInputServerDownlevel@@UIAgileObject@@UINoMarshal@@@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800FC3E0 (-QueryInterface@-$SharedUnknownBase@UIGameInputServer@@UIGameInputServerDownlevel@@_ea_1800FC3E0.c)
 *     ?QueryInterface@?$SharedUnknownBase@UISIPCEndpoint@@@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800FF300 (-QueryInterface@-$SharedUnknownBase@UISIPCEndpoint@@@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@?$SharedUnknownBase@UISIPCServer@@@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800FF390 (-QueryInterface@-$SharedUnknownBase@UISIPCServer@@@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     <none>
 */

signed __int64 __fastcall SharedObjectBase::AddPublicReference(SharedObjectBase *this)
{
  signed __int64 result; // rax

  result = _InterlockedExchangeAdd64((volatile signed __int64 *)this + 1, 1uLL);
  if ( (unsigned int)(result + 1) <= 2 )
    __fastfail(0xEu);
  return result;
}
