/*
 * XREFs of ??$MakeAndInitialize@VInteractionTrackerValuesChangedArgs@Interactions@Composition@UI@Windows@@V12345@AEBUVector3@Numerics@Foundation@5@AEAMAEAH@Details@WRL@Microsoft@@YAJV?$ComPtrRef@V?$ComPtr@VInteractionTrackerValuesChangedArgs@Interactions@Composition@UI@Windows@@@WRL@Microsoft@@@012@AEBUVector3@Numerics@Foundation@Windows@@AEAMAEAH@Z @ 0x1800B6B02
 * Callers:
 *     ?Message_ScrollValuesChanged_Callback@InteractionTracker@Interactions@Composition@UI@Windows@@QEAAJPEBUVector3@Numerics@Foundation@5@MH@Z @ 0x1800B6CC6 (-Message_ScrollValuesChanged_Callback@InteractionTracker@Interactions@Composition@UI@Windows@@QE.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VInteractionTrackerRequestIgnoredArgs@Interactions@Composition@UI@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x1800B6CA0 (-InternalRelease@-$ComPtr@VInteractionTrackerRequestIgnoredArgs@Interactions@Composition@UI@Wind.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<Windows::UI::Composition::Interactions::InteractionTrackerValuesChangedArgs,Windows::UI::Composition::Interactions::InteractionTrackerValuesChangedArgs,Windows::Foundation::Numerics::Vector3 const &,float &,int &>(
        __int64 *a1,
        __int64 a2,
        int *a3,
        int *a4)
{
  Microsoft::WRL::ComPtr<Windows::UI::Composition::Interactions::InteractionTrackerRequestIgnoredArgs>::InternalRelease(a1);
  return Microsoft::WRL::Details::MakeAndInitialize<Windows::UI::Composition::Interactions::InteractionTrackerValuesChangedArgs,Windows::UI::Composition::Interactions::InteractionTrackerValuesChangedArgs,Windows::Foundation::Numerics::Vector3 const &,float &,int &>(
           a1,
           a2,
           a3,
           a4);
}
