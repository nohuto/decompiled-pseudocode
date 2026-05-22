/*
 * XREFs of ??$MakeAndInitialize@VTransformInformationFactory@Private@Composition@UI@Windows@@V12345@$$V@Details@WRL@Microsoft@@YAJPEAPEAVTransformInformationFactory@Private@Composition@UI@Windows@@@Z @ 0x180104AE0
 * Callers:
 *     ??$CreateActivationFactory@VTransformInformationFactory@Private@Composition@UI@Windows@@@Details@WRL@Microsoft@@YAJPEAIPEBUCreatorMap@012@AEBU_GUID@@PEAPEAUIUnknown@@@Z @ 0x180103B90 (--$CreateActivationFactory@VTransformInformationFactory@Private@Composition@UI@Windows@@@Details.c)
 * Callees:
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x18004400C (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?AddRef@?$ActivationFactory@U?$Implements@VFtmBase@WRL@Microsoft@@UIHolographicCompositionDisplayStatics@Internal@Composition@UI@Windows@@@WRL@Microsoft@@VNil@Details@23@V4523@$0A@@WRL@Microsoft@@UEAAKXZ @ 0x18008DDB0 (-AddRef@-$ActivationFactory@U-$Implements@VFtmBase@WRL@Microsoft@@UIHolographicCompositionDispla.c)
 *     ??1?$MakeAllocator@VInjectionAnimation@Composition@UI@Windows@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x1800A1230 (--1-$MakeAllocator@VInjectionAnimation@Composition@UI@Windows@@@Details@WRL@Microsoft@@QEAA@XZ.c)
 *     ?Release@?$ActivationFactory@U?$Implements@VFtmBase@WRL@Microsoft@@UISceneMeshStatics@Scenes@Composition@UI@Windows@@@WRL@Microsoft@@VNil@Details@23@V4523@$0A@@WRL@Microsoft@@UEAAKXZ @ 0x180102B20 (-Release@-$ActivationFactory@U-$Implements@VFtmBase@WRL@Microsoft@@UISceneMeshStatics@Scenes@Com.c)
 *     ??0?$AgileActivationFactory@UITransformInformationFactory@Private@Composition@UI@Windows@@VNil@Details@WRL@Microsoft@@V6789@$0A@@WRL@Microsoft@@QEAA@XZ @ 0x18010586C (--0-$AgileActivationFactory@UITransformInformationFactory@Private@Composition@UI@Windows@@VNil@D.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<Windows::UI::Composition::Private::TransformInformationFactory,Windows::UI::Composition::Private::TransformInformationFactory,>(
        _QWORD *a1)
{
  void *v2; // rax
  _QWORD *v3; // rbx
  volatile int *v5; // rdx
  volatile int *v6; // rdx
  void *v7; // [rsp+30h] [rbp+8h] BYREF

  *a1 = 0LL;
  v2 = DefaultHeap::Alloc(0x60uLL);
  v7 = v2;
  v3 = v2;
  if ( v2 )
  {
    Microsoft::WRL::AgileActivationFactory<Windows::UI::Composition::Private::ITransformInformationFactory,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,0>::AgileActivationFactory<Windows::UI::Composition::Private::ITransformInformationFactory,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,0>(v2);
    *v3 = &Microsoft::WRL::ActivationFactory<Microsoft::WRL::Implements<Microsoft::WRL::FtmBase,Windows::UI::Composition::Private::ITransformInformationFactory>,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,0>::`vftable';
    v3[1] = &Windows::UI::Composition::Private::TransformInformationFactory::`vftable'{for `Microsoft::WRL::Details::Selector<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>,Windows::UI::Composition::Private::ITransformInformationFactory>>'};
    v3[5] = &Windows::UI::Composition::Private::TransformInformationFactory::`vftable'{for `Microsoft::WRL::Details::Selector<Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Windows::UI::Composition::Private::ITransformInformationFactory>,Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>,Windows::UI::Composition::Private::ITransformInformationFactory>>'};
    Microsoft::WRL::ActivationFactory<Microsoft::WRL::Implements<Microsoft::WRL::FtmBase,Windows::UI::Composition::Internal::IHolographicCompositionDisplayStatics>,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,0>::AddRef(
      (__int64)v3,
      v5);
    *a1 = v3;
    Microsoft::WRL::ActivationFactory<Microsoft::WRL::Implements<Microsoft::WRL::FtmBase,Windows::UI::Composition::Scenes::ISceneMeshStatics>,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,0>::Release(
      (__int64)v3,
      v6);
    return 0LL;
  }
  else
  {
    Microsoft::WRL::Details::MakeAllocator<Windows::UI::Composition::InjectionAnimation>::~MakeAllocator<Windows::UI::Composition::InjectionAnimation>(&v7);
    return 2147942414LL;
  }
}
