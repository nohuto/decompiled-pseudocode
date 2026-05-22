/*
 * XREFs of ?InternalRelease@?$ComPtr@VInteractionTrackerCustomAnimationStateEnteredArgs@Interactions@Composition@UI@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180139B48
 * Callers:
 *     ??$MakeAndInitialize@VInteractionTrackerCustomAnimationStateEnteredArgs@Interactions@Composition@UI@Windows@@V12345@AEAHAEA_N@Details@WRL@Microsoft@@YAJPEAPEAVInteractionTrackerCustomAnimationStateEnteredArgs@Interactions@Composition@UI@Windows@@AEAHAEA_N@Z @ 0x180134DB4 (--$MakeAndInitialize@VInteractionTrackerCustomAnimationStateEnteredArgs@Interactions@Composition.c)
 *     ??$MakeAndInitialize@VInteractionTrackerIdleStateEnteredArgs@Interactions@Composition@UI@Windows@@V12345@AEAHAEA_N@Details@WRL@Microsoft@@YAJPEAPEAVInteractionTrackerIdleStateEnteredArgs@Interactions@Composition@UI@Windows@@AEAHAEA_N@Z @ 0x180134E88 (--$MakeAndInitialize@VInteractionTrackerIdleStateEnteredArgs@Interactions@Composition@UI@Windows.c)
 *     ??$MakeAndInitialize@VInteractionTrackerIdleStateEnteredArgs@Interactions@Composition@UI@Windows@@V12345@AEAHAEA_N@Details@WRL@Microsoft@@YAJV?$ComPtrRef@V?$ComPtr@VInteractionTrackerIdleStateEnteredArgs@Interactions@Composition@UI@Windows@@@WRL@Microsoft@@@012@AEAHAEA_N@Z @ 0x180134F5C (--$MakeAndInitialize@VInteractionTrackerIdleStateEnteredArgs@Interactions@Compositi_ea_180134F5C.c)
 *     ??$MakeAndInitialize@VInteractionTrackerInteractingStateEnteredArgs@Interactions@Composition@UI@Windows@@V12345@AEAHAEA_N@Details@WRL@Microsoft@@YAJPEAPEAVInteractionTrackerInteractingStateEnteredArgs@Interactions@Composition@UI@Windows@@AEAHAEA_N@Z @ 0x180135104 (--$MakeAndInitialize@VInteractionTrackerInteractingStateEnteredArgs@Interactions@Composition@UI@.c)
 *     ?Message_CustomAnimationBegin_Callback@InteractionTracker@Interactions@Composition@UI@Windows@@QEAAJH_N@Z @ 0x180139B98 (-Message_CustomAnimationBegin_Callback@InteractionTracker@Interactions@Composition@UI@Windows@@Q.c)
 *     ?Message_IdleBegin_Callback@InteractionTracker@Interactions@Composition@UI@Windows@@QEAAJH_N@Z @ 0x180139C5C (-Message_IdleBegin_Callback@InteractionTracker@Interactions@Composition@UI@Windows@@QEAAJH_N@Z.c)
 *     ?Message_InContactBegin_Callback@InteractionTracker@Interactions@Composition@UI@Windows@@QEAAJH_N@Z @ 0x180139DF4 (-Message_InContactBegin_Callback@InteractionTracker@Interactions@Composition@UI@Windows@@QEAAJH_.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VFtmBase@23@UIInteractionTrackerIdleStateEnteredArgs@Interactions@Composition@UI@Windows@@UIInteractionTrackerIdleStateEnteredArgs2@6789@UIInspectable@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18013A630 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VFtmB_ea_18013A630.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<Windows::UI::Composition::Interactions::InteractionTrackerCustomAnimationStateEnteredArgs>::InternalRelease(
        __int64 *a1)
{
  __int64 v1; // rdx
  __int64 result; // rax

  v1 = *a1;
  result = 0LL;
  if ( *a1 )
  {
    *a1 = 0LL;
    return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Microsoft::WRL::FtmBase,Windows::UI::Composition::Interactions::IInteractionTrackerIdleStateEnteredArgs,Windows::UI::Composition::Interactions::IInteractionTrackerIdleStateEnteredArgs2,IInspectable>::Release(v1);
  }
  return result;
}
