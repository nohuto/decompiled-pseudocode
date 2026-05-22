/*
 * XREFs of ?QueryInterface@?$ActivationFactory@U?$Implements@VFtmBase@WRL@Microsoft@@UIInteractionTrackerStatics@Interactions@Composition@UI@Windows@@@WRL@Microsoft@@UIInteractionTrackerStatics2@Interactions@Composition@UI@Windows@@VNil@Details@23@$0A@@WRL@Microsoft@@WCI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800AABB0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __fastcall Microsoft::WRL::ActivationFactory<Microsoft::WRL::Implements<Microsoft::WRL::FtmBase,Windows::UI::Composition::Interactions::IInteractionTrackerStatics>,Windows::UI::Composition::Interactions::IInteractionTrackerStatics2,Microsoft::WRL::Details::Nil,0>::QueryInterface(
        __int64 a1,
        const struct _GUID *a2,
        void **a3)
{
  return Windows::UI::Composition::Interactions::InteractionTrackerStatics::QueryInterface(
           (Windows::UI::Composition::Interactions::InteractionTrackerStatics *)(a1 - 40),
           a2,
           a3);
}
