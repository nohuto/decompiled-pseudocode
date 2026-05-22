/*
 * XREFs of ?Release@InteractionTrackerRequestIgnoredArgs@Interactions@Composition@UI@Windows@@UEAAKXZ @ 0x1800A19F0
 * Callers:
 *     ?Release@InteractionTrackerValuesChangedArgs@Interactions@Composition@UI@Windows@@W7EAAKXZ @ 0x1800AB470 (-Release@InteractionTrackerValuesChangedArgs@Interactions@Composition@UI@Windows@@W7EAAKXZ.c)
 *     ?Release@SharedD3DDevice@Internal@Composition@UI@Windows@@WCI@EAAKXZ @ 0x1800AB490 (-Release@SharedD3DDevice@Internal@Composition@UI@Windows@@WCI@EAAKXZ.c)
 *     ?Release@InteractionTrackerRequestIgnoredArgs@Interactions@Composition@UI@Windows@@WDA@EAAKXZ @ 0x1800AB4B0 (-Release@InteractionTrackerRequestIgnoredArgs@Interactions@Composition@UI@Windows@@WDA@EAAKXZ.c)
 *     ?Release@SharedD3DDevice@Internal@Composition@UI@Windows@@WDI@EAAKXZ @ 0x1800AB4D0 (-Release@SharedD3DDevice@Internal@Composition@UI@Windows@@WDI@EAAKXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall Windows::UI::Composition::Interactions::InteractionTrackerRequestIgnoredArgs::Release(__int64 this)
{
  return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Microsoft::WRL::FtmBase,Windows::UI::Composition::Interactions::IInteractionTrackerValuesChangedArgs,IInspectable>::Release(this);
}
