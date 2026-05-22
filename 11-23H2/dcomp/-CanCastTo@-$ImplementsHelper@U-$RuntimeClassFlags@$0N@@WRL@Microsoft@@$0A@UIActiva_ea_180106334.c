/*
 * XREFs of ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$0N@@WRL@Microsoft@@$0A@UIActivationFactory@@U?$Implements@VFtmBase@WRL@Microsoft@@UIInteractionTrackerStatics@Interactions@Composition@UI@Windows@@@23@UIInteractionTrackerStatics2@Interactions@Composition@UI@Windows@@VNil@Details@23@VNil@Details@23@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x180106334
 * Callers:
 *     ??$CreateActivationFactory@VInteractionTrackerStatics@Interactions@Composition@UI@Windows@@@Details@WRL@Microsoft@@YAJPEAIPEBUCreatorMap@012@AEBU_GUID@@PEAPEAUIUnknown@@@Z @ 0x180103610 (--$CreateActivationFactory@VInteractionTrackerStatics@Interactions@Composition@UI@Windows@@@Deta.c)
 *     ?QueryInterface@InteractionTrackerStatics@Interactions@Composition@UI@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180107FF0 (-QueryInterface@InteractionTrackerStatics@Interactions@Composition@UI@Windows@@UEAAJAEBU_GUID@@P.c)
 * Callees:
 *     ?InlineIsEqualGUID@@YAHAEBU_GUID@@0@Z @ 0x18002BF8C (-InlineIsEqualGUID@@YAHAEBU_GUID@@0@Z.c)
 */

__int64 __fastcall Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<13>,0,IActivationFactory,Microsoft::WRL::Implements<Microsoft::WRL::FtmBase,Windows::UI::Composition::Interactions::IInteractionTrackerStatics>,Windows::UI::Composition::Interactions::IInteractionTrackerStatics2,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::CanCastTo(
        __int64 a1,
        const struct _GUID *a2)
{
  void **v2; // r8
  __int64 v3; // r9
  const struct _GUID *v4; // r10

  if ( !InlineIsEqualGUID(a2, &GUID_00000035_0000_0000_c000_000000000046) )
    return Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<13>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::Implements<Microsoft::WRL::FtmBase,Windows::UI::Composition::Interactions::IInteractionTrackerStatics>>,Windows::UI::Composition::Interactions::IInteractionTrackerStatics2,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::CanCastTo(
             (Microsoft::WRL::FtmBase *)(v3 + 8),
             v4,
             v2);
  *v2 = (void *)v3;
  return 0LL;
}
