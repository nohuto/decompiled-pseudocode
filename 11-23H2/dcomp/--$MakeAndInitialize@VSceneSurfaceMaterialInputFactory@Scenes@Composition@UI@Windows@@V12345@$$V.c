/*
 * XREFs of ??$MakeAndInitialize@VSceneSurfaceMaterialInputFactory@Scenes@Composition@UI@Windows@@V12345@$$V@Details@WRL@Microsoft@@YAJPEAPEAVSceneSurfaceMaterialInputFactory@Scenes@Composition@UI@Windows@@@Z @ 0x1801048BC
 * Callers:
 *     ??$CreateActivationFactory@VSceneSurfaceMaterialInputFactory@Scenes@Composition@UI@Windows@@@Details@WRL@Microsoft@@YAJPEAIPEBUCreatorMap@012@AEBU_GUID@@PEAPEAUIUnknown@@@Z @ 0x180103A30 (--$CreateActivationFactory@VSceneSurfaceMaterialInputFactory@Scenes@Composition@UI@Windows@@@Det.c)
 * Callees:
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x18004400C (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?AddRef@?$ActivationFactory@U?$Implements@VFtmBase@WRL@Microsoft@@UIHolographicCompositionDisplayStatics@Internal@Composition@UI@Windows@@@WRL@Microsoft@@VNil@Details@23@V4523@$0A@@WRL@Microsoft@@UEAAKXZ @ 0x18008DDB0 (-AddRef@-$ActivationFactory@U-$Implements@VFtmBase@WRL@Microsoft@@UIHolographicCompositionDispla.c)
 *     memset_0 @ 0x18009698C (memset_0.c)
 *     ??1?$MakeAllocator@VInjectionAnimation@Composition@UI@Windows@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x1800A1230 (--1-$MakeAllocator@VInjectionAnimation@Composition@UI@Windows@@@Details@WRL@Microsoft@@QEAA@XZ.c)
 *     ?Release@?$ActivationFactory@U?$Implements@VFtmBase@WRL@Microsoft@@UISceneMeshStatics@Scenes@Composition@UI@Windows@@@WRL@Microsoft@@VNil@Details@23@V4523@$0A@@WRL@Microsoft@@UEAAKXZ @ 0x180102B20 (-Release@-$ActivationFactory@U-$Implements@VFtmBase@WRL@Microsoft@@UISceneMeshStatics@Scenes@Com.c)
 *     ??0?$AgileActivationFactory@UISceneSurfaceMaterialInputStatics@Scenes@Composition@UI@Windows@@VNil@Details@WRL@Microsoft@@V6789@$0A@@WRL@Microsoft@@QEAA@XZ @ 0x180105724 (--0-$AgileActivationFactory@UISceneSurfaceMaterialInputStatics@Scenes@Composition@UI@Windows@@VN.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<Windows::UI::Composition::Scenes::SceneSurfaceMaterialInputFactory,Windows::UI::Composition::Scenes::SceneSurfaceMaterialInputFactory,>(
        _QWORD *a1)
{
  void *v2; // rax
  _QWORD *v4; // rax
  _QWORD *v5; // rbx
  volatile int *v6; // rdx
  volatile int *v7; // rdx
  void *v8; // [rsp+30h] [rbp+8h] BYREF

  *a1 = 0LL;
  v2 = DefaultHeap::Alloc(0x60uLL);
  v8 = v2;
  if ( v2 )
  {
    v4 = memset_0(v2, 0, 0x60uLL);
    v5 = v4;
    if ( v4 )
    {
      Microsoft::WRL::AgileActivationFactory<Windows::UI::Composition::Scenes::ISceneSurfaceMaterialInputStatics,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,0>::AgileActivationFactory<Windows::UI::Composition::Scenes::ISceneSurfaceMaterialInputStatics,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,0>(v4);
      *v5 = &Windows::UI::Composition::Scenes::SceneSurfaceMaterialInputFactory::`vftable';
      v5[1] = &Windows::UI::Composition::Scenes::SceneSurfaceMaterialInputFactory::`vftable'{for `Microsoft::WRL::Details::Selector<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>,Windows::UI::Composition::Scenes::ISceneSurfaceMaterialInputStatics>>'};
      v5[5] = &Windows::UI::Composition::Scenes::SceneSurfaceMaterialInputFactory::`vftable'{for `Microsoft::WRL::Details::Selector<Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Windows::UI::Composition::Scenes::ISceneSurfaceMaterialInputStatics>,Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>,Windows::UI::Composition::Scenes::ISceneSurfaceMaterialInputStatics>>'};
      Microsoft::WRL::ActivationFactory<Microsoft::WRL::Implements<Microsoft::WRL::FtmBase,Windows::UI::Composition::Internal::IHolographicCompositionDisplayStatics>,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,0>::AddRef(
        (__int64)v5,
        v6);
      *a1 = v5;
      Microsoft::WRL::ActivationFactory<Microsoft::WRL::Implements<Microsoft::WRL::FtmBase,Windows::UI::Composition::Scenes::ISceneMeshStatics>,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,0>::Release(
        (__int64)v5,
        v7);
    }
    else
    {
      *a1 = 0LL;
    }
    return 0LL;
  }
  else
  {
    Microsoft::WRL::Details::MakeAllocator<Windows::UI::Composition::InjectionAnimation>::~MakeAllocator<Windows::UI::Composition::InjectionAnimation>(&v8);
    return 2147942414LL;
  }
}
