/*
 * XREFs of ??$MakeAndInitialize@VCompositorControllerFactory@Core@Composition@UI@Windows@@V12345@$$V@Details@WRL@Microsoft@@YAJPEAPEAVCompositorControllerFactory@Core@Composition@UI@Windows@@@Z @ 0x180016B88
 * Callers:
 *     ??$CreateActivationFactory@VCompositorControllerFactory@Core@Composition@UI@Windows@@@Details@WRL@Microsoft@@YAJPEAIPEBUCreatorMap@012@AEBU_GUID@@PEAPEAUIUnknown@@@Z @ 0x180016CD0 (--$CreateActivationFactory@VCompositorControllerFactory@Core@Composition@UI@Windows@@@Details@WR.c)
 * Callees:
 *     ?Release@?$ActivationFactory@U?$Implements@VFtmBase@WRL@Microsoft@@UICompositionIslandEnvironmentStatics@Composition@UI@Windows@@@WRL@Microsoft@@VNil@Details@23@V4523@$0A@@WRL@Microsoft@@UEAAKXZ @ 0x1800080D0 (-Release@-$ActivationFactory@U-$Implements@VFtmBase@WRL@Microsoft@@UICompositionIslandEnvironmen.c)
 *     ??0?$AgileActivationFactory@UIInspectable@@UICompositorControllerStaticsPrivate@Private@Core@Composition@UI@Windows@@VNil@Details@WRL@Microsoft@@$0A@@WRL@Microsoft@@QEAA@XZ @ 0x180016C10 (--0-$AgileActivationFactory@UIInspectable@@UICompositorControllerStaticsPrivate@Private@Core@Com.c)
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x18004400C (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?AddRef@?$ActivationFactory@U?$Implements@VFtmBase@WRL@Microsoft@@UIHolographicCompositionDisplayStatics@Internal@Composition@UI@Windows@@@WRL@Microsoft@@VNil@Details@23@V4523@$0A@@WRL@Microsoft@@UEAAKXZ @ 0x18008DDB0 (-AddRef@-$ActivationFactory@U-$Implements@VFtmBase@WRL@Microsoft@@UIHolographicCompositionDispla.c)
 *     ??1?$MakeAllocator@VInjectionAnimation@Composition@UI@Windows@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x1800A1230 (--1-$MakeAllocator@VInjectionAnimation@Composition@UI@Windows@@@Details@WRL@Microsoft@@QEAA@XZ.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<Windows::UI::Composition::Core::CompositorControllerFactory,Windows::UI::Composition::Core::CompositorControllerFactory,>(
        Windows::UI::Composition::Interactions::Internal::EdgyExperienceSourceFactory **a1)
{
  _QWORD *v2; // rax
  Windows::UI::Composition::Interactions::Internal::EdgyExperienceSourceFactory *v3; // rbx
  volatile int *v4; // rdx
  _QWORD *v6; // [rsp+30h] [rbp+8h] BYREF

  *a1 = 0LL;
  v2 = DefaultHeap::Alloc(0x60uLL);
  v6 = v2;
  v3 = (Windows::UI::Composition::Interactions::Internal::EdgyExperienceSourceFactory *)v2;
  if ( v2 )
  {
    Microsoft::WRL::AgileActivationFactory<IInspectable,Windows::UI::Composition::Core::Private::ICompositorControllerStaticsPrivate,Microsoft::WRL::Details::Nil,0>::AgileActivationFactory<IInspectable,Windows::UI::Composition::Core::Private::ICompositorControllerStaticsPrivate,Microsoft::WRL::Details::Nil,0>(v2);
    *(_QWORD *)v3 = &Windows::UI::Composition::Core::CompositorControllerFactory::`vftable'{for `IActivationFactory'};
    *((_QWORD *)v3 + 1) = &Windows::UI::Composition::Core::CompositorControllerFactory::`vftable'{for `Microsoft::WRL::Details::Selector<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>,IInspectable>>'};
    *((_QWORD *)v3 + 5) = &Windows::UI::Composition::Core::CompositorControllerFactory::`vftable'{for `Microsoft::WRL::Details::Selector<Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,IInspectable>,Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>,IInspectable>>'};
    *((_QWORD *)v3 + 7) = &Windows::UI::Composition::Core::CompositorControllerFactory::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<13>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::Implements<Microsoft::WRL::FtmBase,IInspectable>>,Windows::UI::Composition::Core::Private::ICompositorControllerStaticsPrivate,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>'};
    Microsoft::WRL::ActivationFactory<Microsoft::WRL::Implements<Microsoft::WRL::FtmBase,Windows::UI::Composition::Internal::IHolographicCompositionDisplayStatics>,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,0>::AddRef(v3);
    *a1 = v3;
    Microsoft::WRL::ActivationFactory<Microsoft::WRL::Implements<Microsoft::WRL::FtmBase,Windows::UI::Composition::ICompositionIslandEnvironmentStatics>,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,0>::Release(
      (__int64)v3,
      v4);
    return 0LL;
  }
  else
  {
    Microsoft::WRL::Details::MakeAllocator<Windows::UI::Composition::InjectionAnimation>::~MakeAllocator<Windows::UI::Composition::InjectionAnimation>(&v6);
    return 2147942414LL;
  }
}
