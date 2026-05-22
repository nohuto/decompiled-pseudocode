/*
 * XREFs of ?Destroy@EdgyExperienceSource@Internal@Interactions@Composition@UI@Windows@@UEAAXXZ @ 0x180131240
 * Callers:
 *     <none>
 * Callees:
 *     ?Destroy@?$ContextEventSource@U?$ITypedEventHandler@PEAVCompositionAnimationTriggerPartner@Internal@Composition@UI@Windows@@PEAVCompositionAnimationTriggerPartnerFiredEventArgs@2345@@Foundation@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@WRL2@Microsoft@@QEAAXPEAVContextSession@23@@Z @ 0x18013117C (-Destroy@-$ContextEventSource@U-$ITypedEventHandler@PEAVCompositionAnimationTriggerPartner@Inter.c)
 */

void __fastcall Windows::UI::Composition::Interactions::Internal::EdgyExperienceSource::Destroy(
        Windows::UI::Composition::Interactions::Internal::EdgyExperienceSource *this)
{
  __int64 v1; // rax

  v1 = *((_QWORD *)this + 31);
  if ( v1 )
    *(_QWORD *)(v1 + 160) = 0LL;
  Microsoft::WRL2::ContextEventSource<Windows::Foundation::ITypedEventHandler<Windows::UI::Composition::Internal::CompositionAnimationTriggerPartner *,Windows::UI::Composition::Internal::CompositionAnimationTriggerPartnerFiredEventArgs *>,Microsoft::WRL::InvokeModeOptions<-2>>::Destroy(
    (RTL_SRWLOCK *)this + 40,
    *((_QWORD *)this + 3));
  Windows::UI::Composition::Interactions::VisualInteractionSource::Destroy(this);
}
