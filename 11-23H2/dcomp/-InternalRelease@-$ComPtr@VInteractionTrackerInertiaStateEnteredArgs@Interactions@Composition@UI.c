/*
 * XREFs of ?InternalRelease@?$ComPtr@VInteractionTrackerInertiaStateEnteredArgs@Interactions@Composition@UI@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180139B70
 * Callers:
 *     ??$MakeAndInitialize@VInteractionTrackerInertiaStateEnteredArgs@Interactions@Composition@UI@Windows@@V12345@AEBUVector3@Numerics@Foundation@5@AEAMAEBU6785@AEAMPEBU6785@PEAMAEA_NAEAHAEA_N@Details@WRL@Microsoft@@YAJPEAPEAVInteractionTrackerInertiaStateEnteredArgs@Interactions@Composition@UI@Windows@@AEBUVector3@Numerics@Foundation@7@AEAM12$$QEAPEBU89Foundation@7@$$QEAPEAMAEA_NAEAH5@Z @ 0x180134F9C (--$MakeAndInitialize@VInteractionTrackerInertiaStateEnteredArgs@Interactions@Composition@UI@Wind.c)
 *     ?Message_InertiaBegin_Callback@InteractionTracker@Interactions@Composition@UI@Windows@@QEAAJPEBUVector3@Numerics@Foundation@5@M0M0_NM11H1@Z @ 0x180139EB8 (-Message_InertiaBegin_Callback@InteractionTracker@Interactions@Composition@UI@Windows@@QEAAJPEBU.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VFtmBase@23@UIInteractionTrackerInertiaStateEnteredArgs@Interactions@Composition@UI@Windows@@UIInteractionTrackerInertiaStateEnteredArgs2@6789@UIInteractionTrackerInertiaStateEnteredArgs3@6789@UIInspectable@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18013A6D0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VFtmB_ea_18013A6D0.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaStateEnteredArgs>::InternalRelease(
        __int64 *a1)
{
  __int64 v1; // rdx
  __int64 result; // rax

  v1 = *a1;
  result = 0LL;
  if ( *a1 )
  {
    *a1 = 0LL;
    return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Microsoft::WRL::FtmBase,Windows::UI::Composition::Interactions::IInteractionTrackerInertiaStateEnteredArgs,Windows::UI::Composition::Interactions::IInteractionTrackerInertiaStateEnteredArgs2,Windows::UI::Composition::Interactions::IInteractionTrackerInertiaStateEnteredArgs3,IInspectable>::Release(v1);
  }
  return result;
}
