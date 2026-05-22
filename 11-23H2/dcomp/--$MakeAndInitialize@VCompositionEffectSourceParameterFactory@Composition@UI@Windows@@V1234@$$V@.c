/*
 * XREFs of ??$MakeAndInitialize@VCompositionEffectSourceParameterFactory@Composition@UI@Windows@@V1234@$$V@Details@WRL@Microsoft@@YAJPEAPEAVCompositionEffectSourceParameterFactory@Composition@UI@Windows@@@Z @ 0x180017BE0
 * Callers:
 *     ??$CreateActivationFactory@VCompositionEffectSourceParameterFactory@Composition@UI@Windows@@@Details@WRL@Microsoft@@YAJPEAIPEBUCreatorMap@012@AEBU_GUID@@PEAPEAUIUnknown@@@Z @ 0x1800171E0 (--$CreateActivationFactory@VCompositionEffectSourceParameterFactory@Composition@UI@Windows@@@Det.c)
 * Callees:
 *     ?Release@?$ActivationFactory@U?$Implements@VFtmBase@WRL@Microsoft@@UICompositionEffectSourceParameterFactory@Composition@UI@Windows@@@WRL@Microsoft@@VNil@Details@23@V4523@$0A@@WRL@Microsoft@@UEAAKXZ @ 0x180010AF0 (-Release@-$ActivationFactory@U-$Implements@VFtmBase@WRL@Microsoft@@UICompositionEffectSourcePara.c)
 *     ?AddRef@?$ActivationFactory@U?$Implements@VFtmBase@WRL@Microsoft@@UICompositionPathFactory@Composition@UI@Windows@@@WRL@Microsoft@@VNil@Details@23@V4523@$0A@@WRL@Microsoft@@UEAAKXZ @ 0x180010E40 (-AddRef@-$ActivationFactory@U-$Implements@VFtmBase@WRL@Microsoft@@UICompositionPathFactory@Compo.c)
 *     ??0?$AgileActivationFactory@UICompositionEffectSourceParameterFactory@Composition@UI@Windows@@VNil@Details@WRL@Microsoft@@V5678@$0A@@WRL@Microsoft@@QEAA@XZ @ 0x180017C78 (--0-$AgileActivationFactory@UICompositionEffectSourceParameterFactory@Composition@UI@Windows@@VN.c)
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x18004400C (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     memset_0 @ 0x18009698C (memset_0.c)
 *     ??1?$MakeAllocator@VInjectionAnimation@Composition@UI@Windows@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x1800A1230 (--1-$MakeAllocator@VInjectionAnimation@Composition@UI@Windows@@@Details@WRL@Microsoft@@QEAA@XZ.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<Windows::UI::Composition::CompositionEffectSourceParameterFactory,Windows::UI::Composition::CompositionEffectSourceParameterFactory,>(
        _QWORD *a1)
{
  void *v2; // rax
  _QWORD *v3; // rax
  _QWORD *v4; // rbx
  volatile int *v5; // rdx
  volatile int *v6; // rdx
  void *v8; // [rsp+30h] [rbp+8h] BYREF

  *a1 = 0LL;
  v2 = DefaultHeap::Alloc(0x60uLL);
  v8 = v2;
  if ( v2 )
  {
    v3 = memset_0(v2, 0, 0x60uLL);
    v4 = v3;
    if ( v3 )
    {
      Microsoft::WRL::AgileActivationFactory<Windows::UI::Composition::ICompositionEffectSourceParameterFactory,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,0>::AgileActivationFactory<Windows::UI::Composition::ICompositionEffectSourceParameterFactory,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,0>(v3);
      *v4 = &Windows::UI::Composition::CompositionEffectSourceParameterFactory::`vftable';
      v4[1] = &Windows::UI::Composition::CompositionEffectSourceParameterFactory::`vftable'{for `Microsoft::WRL::Details::Selector<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>,Windows::UI::Composition::ICompositionEffectSourceParameterFactory>>'};
      v4[5] = &Windows::UI::Composition::CompositionEffectSourceParameterFactory::`vftable'{for `Microsoft::WRL::Details::Selector<Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Windows::UI::Composition::ICompositionEffectSourceParameterFactory>,Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>,Windows::UI::Composition::ICompositionEffectSourceParameterFactory>>'};
      Microsoft::WRL::ActivationFactory<Microsoft::WRL::Implements<Microsoft::WRL::FtmBase,Windows::UI::Composition::ICompositionPathFactory>,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,0>::AddRef(
        (__int64)v4,
        v5);
      *a1 = v4;
      Microsoft::WRL::ActivationFactory<Microsoft::WRL::Implements<Microsoft::WRL::FtmBase,Windows::UI::Composition::ICompositionEffectSourceParameterFactory>,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,0>::Release(
        (__int64)v4,
        v6);
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
