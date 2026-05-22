/*
 * XREFs of ?Destroy@CompositionAnimationTriggerPartner@Internal@Composition@UI@Windows@@UEAAXXZ @ 0x180186C30
 * Callers:
 *     <none>
 * Callees:
 *     ?Destroy@?$ContextEventSource@U?$ITypedEventHandler@PEAVCompositionAnimationTriggerPartner@Internal@Composition@UI@Windows@@PEAVCompositionAnimationTriggerPartnerFiredEventArgs@2345@@Foundation@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@WRL2@Microsoft@@QEAAXPEAVContextSession@23@@Z @ 0x18013117C (-Destroy@-$ContextEventSource@U-$ITypedEventHandler@PEAVCompositionAnimationTriggerPartner@Inter.c)
 */

void __fastcall Windows::UI::Composition::Internal::CompositionAnimationTriggerPartner::Destroy(
        Windows::UI::Composition::Internal::CompositionAnimationTriggerPartner *this)
{
  Microsoft::WRL2::ContextEventSource<Windows::Foundation::ITypedEventHandler<Windows::UI::Composition::Internal::CompositionAnimationTriggerPartner *,Windows::UI::Composition::Internal::CompositionAnimationTriggerPartnerFiredEventArgs *>,Microsoft::WRL::InvokeModeOptions<-2>>::Destroy(
    (RTL_SRWLOCK *)this + 28,
    *((_QWORD *)this + 3));
  Windows::UI::Composition::ProxyObject::Destroy(this);
}
