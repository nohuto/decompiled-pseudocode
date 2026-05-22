/*
 * XREFs of ??$MakeAndInitialize@VInteractionTrackerIdleStateEnteredArgs@Interactions@Composition@UI@Windows@@V12345@AEAHAEA_N@Details@WRL@Microsoft@@YAJV?$ComPtrRef@V?$ComPtr@VInteractionTrackerIdleStateEnteredArgs@Interactions@Composition@UI@Windows@@@WRL@Microsoft@@@012@AEAHAEA_N@Z @ 0x180134F5C
 * Callers:
 *     ?Message_IdleBegin_Callback@InteractionTracker@Interactions@Composition@UI@Windows@@QEAAJH_N@Z @ 0x180139C5C (-Message_IdleBegin_Callback@InteractionTracker@Interactions@Composition@UI@Windows@@QEAAJH_N@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VInteractionTrackerCustomAnimationStateEnteredArgs@Interactions@Composition@UI@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180139B48 (-InternalRelease@-$ComPtr@VInteractionTrackerCustomAnimationStateEnteredArgs@Interactions@Compos.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<Windows::UI::Composition::Interactions::InteractionTrackerIdleStateEnteredArgs,Windows::UI::Composition::Interactions::InteractionTrackerIdleStateEnteredArgs,int &,bool &>(
        __int64 *a1,
        int *a2,
        _BYTE *a3)
{
  Microsoft::WRL::ComPtr<Windows::UI::Composition::Interactions::InteractionTrackerCustomAnimationStateEnteredArgs>::InternalRelease(a1);
  return Microsoft::WRL::Details::MakeAndInitialize<Windows::UI::Composition::Interactions::InteractionTrackerIdleStateEnteredArgs,Windows::UI::Composition::Interactions::InteractionTrackerIdleStateEnteredArgs,int &,bool &>(
           a1,
           a2,
           a3);
}
