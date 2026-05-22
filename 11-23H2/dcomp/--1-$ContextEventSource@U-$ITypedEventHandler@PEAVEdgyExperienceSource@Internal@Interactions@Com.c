/*
 * XREFs of ??1?$ContextEventSource@U?$ITypedEventHandler@PEAVEdgyExperienceSource@Internal@Interactions@Composition@UI@Windows@@PEAVEdgyDetectedEventArgs@23456@@Foundation@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@WRL2@Microsoft@@QEAA@XZ @ 0x180122DE4
 * Callers:
 *     ??1CompositionAnimationTriggerPartner@Internal@Composition@UI@Windows@@UEAA@XZ @ 0x180122E6C (--1CompositionAnimationTriggerPartner@Internal@Composition@UI@Windows@@UEAA@XZ.c)
 *     ??1EdgyExperienceSource@Internal@Interactions@Composition@UI@Windows@@UEAA@XZ @ 0x180130E94 (--1EdgyExperienceSource@Internal@Interactions@Composition@UI@Windows@@UEAA@XZ.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18007F5A0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Detai.c)
 */

void __fastcall Microsoft::WRL2::ContextEventSource<Windows::Foundation::ITypedEventHandler<Windows::UI::Composition::Interactions::Internal::EdgyExperienceSource *,Windows::UI::Composition::Interactions::Internal::EdgyDetectedEventArgs *>,Microsoft::WRL::InvokeModeOptions<-2>>::~ContextEventSource<Windows::Foundation::ITypedEventHandler<Windows::UI::Composition::Interactions::Internal::EdgyExperienceSource *,Windows::UI::Composition::Interactions::Internal::EdgyDetectedEventArgs *>,Microsoft::WRL::InvokeModeOptions<-2>>(
        __int64 *a1,
        volatile int *a2)
{
  __int64 v3; // rcx

  if ( *a1 )
    RaiseFailFastException(0LL, 0LL, 0);
  v3 = *a1;
  if ( *a1 )
  {
    *a1 = 0LL;
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release(v3, a2);
  }
}
