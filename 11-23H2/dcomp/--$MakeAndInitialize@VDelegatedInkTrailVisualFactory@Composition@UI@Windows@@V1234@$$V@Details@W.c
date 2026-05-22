/*
 * XREFs of ??$MakeAndInitialize@VDelegatedInkTrailVisualFactory@Composition@UI@Windows@@V1234@$$V@Details@WRL@Microsoft@@YAJPEAPEAVDelegatedInkTrailVisualFactory@Composition@UI@Windows@@@Z @ 0x18010199C
 * Callers:
 *     ??$CreateActivationFactory@VDelegatedInkTrailVisualFactory@Composition@UI@Windows@@@Details@WRL@Microsoft@@YAJPEAIPEBUCreatorMap@012@AEBU_GUID@@PEAPEAUIUnknown@@@Z @ 0x180101790 (--$CreateActivationFactory@VDelegatedInkTrailVisualFactory@Composition@UI@Windows@@@Details@WRL@.c)
 * Callees:
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x18004400C (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?AddRef@?$ActivationFactory@U?$Implements@VFtmBase@WRL@Microsoft@@UIHolographicCompositionDisplayStatics@Internal@Composition@UI@Windows@@@WRL@Microsoft@@VNil@Details@23@V4523@$0A@@WRL@Microsoft@@UEAAKXZ @ 0x18008DDB0 (-AddRef@-$ActivationFactory@U-$Implements@VFtmBase@WRL@Microsoft@@UIHolographicCompositionDispla.c)
 *     memset_0 @ 0x18009698C (memset_0.c)
 *     ??1?$MakeAllocator@VInjectionAnimation@Composition@UI@Windows@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x1800A1230 (--1-$MakeAllocator@VInjectionAnimation@Composition@UI@Windows@@@Details@WRL@Microsoft@@QEAA@XZ.c)
 *     ??0?$AgileActivationFactory@UIDelegatedInkTrailVisualStatics@Composition@UI@Windows@@VNil@Details@WRL@Microsoft@@V5678@$0A@@WRL@Microsoft@@QEAA@XZ @ 0x180101BD0 (--0-$AgileActivationFactory@UIDelegatedInkTrailVisualStatics@Composition@UI@Windows@@VNil@Detail.c)
 *     ?Release@?$ActivationFactory@U?$Implements@VFtmBase@WRL@Microsoft@@UISceneMeshStatics@Scenes@Composition@UI@Windows@@@WRL@Microsoft@@VNil@Details@23@V4523@$0A@@WRL@Microsoft@@UEAAKXZ @ 0x180102B20 (-Release@-$ActivationFactory@U-$Implements@VFtmBase@WRL@Microsoft@@UISceneMeshStatics@Scenes@Com.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<Windows::UI::Composition::DelegatedInkTrailVisualFactory,Windows::UI::Composition::DelegatedInkTrailVisualFactory,>(
        _QWORD *a1)
{
  void *v2; // rax
  _QWORD *v4; // rax
  _QWORD *v5; // rbx
  volatile int *v6; // rdx
  void *v7; // [rsp+30h] [rbp+8h] BYREF

  *a1 = 0LL;
  v2 = DefaultHeap::Alloc(0x60uLL);
  v7 = v2;
  if ( v2 )
  {
    v4 = memset_0(v2, 0, 0x60uLL);
    v5 = v4;
    if ( v4 )
    {
      Microsoft::WRL::AgileActivationFactory<Windows::UI::Composition::IDelegatedInkTrailVisualStatics,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,0>::AgileActivationFactory<Windows::UI::Composition::IDelegatedInkTrailVisualStatics,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,0>(v4);
      *v5 = &Windows::UI::Composition::DelegatedInkTrailVisualFactory::`vftable';
      v5[1] = &Windows::UI::Composition::DelegatedInkTrailVisualFactory::`vftable'{for `Microsoft::WRL::Details::Selector<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>,Windows::UI::Composition::IDelegatedInkTrailVisualStatics>>'};
      v5[5] = &Windows::UI::Composition::DelegatedInkTrailVisualFactory::`vftable'{for `Microsoft::WRL::Details::Selector<Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Windows::UI::Composition::IDelegatedInkTrailVisualStatics>,Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>,Windows::UI::Composition::IDelegatedInkTrailVisualStatics>>'};
      Microsoft::WRL::ActivationFactory<Microsoft::WRL::Implements<Microsoft::WRL::FtmBase,Windows::UI::Composition::Internal::IHolographicCompositionDisplayStatics>,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,0>::AddRef(
        (__int64)v5,
        v6);
      *a1 = v5;
      Microsoft::WRL::ActivationFactory<Microsoft::WRL::Implements<Microsoft::WRL::FtmBase,Windows::UI::Composition::Scenes::ISceneMeshStatics>,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,0>::Release(v5);
    }
    else
    {
      *a1 = 0LL;
    }
    return 0LL;
  }
  else
  {
    Microsoft::WRL::Details::MakeAllocator<Windows::UI::Composition::InjectionAnimation>::~MakeAllocator<Windows::UI::Composition::InjectionAnimation>(&v7);
    return 2147942414LL;
  }
}
