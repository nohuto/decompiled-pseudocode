/*
 * XREFs of ??$MakeAndInitialize@VCompositionObjectFactory@Composition@UI@Windows@@V1234@$$V@Details@WRL@Microsoft@@YAJPEAPEAVCompositionObjectFactory@Composition@UI@Windows@@@Z @ 0x1800032CC
 * Callers:
 *     ??$CreateActivationFactory@VCompositionObjectFactory@Composition@UI@Windows@@@Details@WRL@Microsoft@@YAJPEAIPEBUCreatorMap@012@AEBU_GUID@@PEAPEAUIUnknown@@@Z @ 0x180003140 (--$CreateActivationFactory@VCompositionObjectFactory@Composition@UI@Windows@@@Details@WRL@Micros.c)
 * Callees:
 *     ??0?$AgileActivationFactory@UICompositionObjectStatics@Composition@UI@Windows@@VNil@Details@WRL@Microsoft@@V5678@$0A@@WRL@Microsoft@@QEAA@XZ @ 0x180003364 (--0-$AgileActivationFactory@UICompositionObjectStatics@Composition@UI@Windows@@VNil@Details@WRL@.c)
 *     ?Release@?$ActivationFactory@U?$Implements@VFtmBase@WRL@Microsoft@@UICompositionIslandEnvironmentStatics@Composition@UI@Windows@@@WRL@Microsoft@@VNil@Details@23@V4523@$0A@@WRL@Microsoft@@UEAAKXZ @ 0x1800080D0 (-Release@-$ActivationFactory@U-$Implements@VFtmBase@WRL@Microsoft@@UICompositionIslandEnvironmen.c)
 *     ?AddRef@?$ActivationFactory@U?$Implements@VFtmBase@WRL@Microsoft@@UICompositionIslandStatics@Composition@UI@Windows@@@WRL@Microsoft@@VNil@Details@23@V4523@$0A@@WRL@Microsoft@@UEAAKXZ @ 0x180009800 (-AddRef@-$ActivationFactory@U-$Implements@VFtmBase@WRL@Microsoft@@UICompositionIslandStatics@Com.c)
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x18004400C (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     memset_0 @ 0x18009698C (memset_0.c)
 *     ??1?$MakeAllocator@VInjectionAnimation@Composition@UI@Windows@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x1800A1230 (--1-$MakeAllocator@VInjectionAnimation@Composition@UI@Windows@@@Details@WRL@Microsoft@@QEAA@XZ.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<Windows::UI::Composition::CompositionObjectFactory,Windows::UI::Composition::CompositionObjectFactory,>(
        _QWORD *a1)
{
  void *v2; // rax
  _QWORD *v3; // rax
  _QWORD *v4; // rbx
  void *v6; // [rsp+30h] [rbp+8h] BYREF

  *a1 = 0LL;
  v2 = DefaultHeap::Alloc(0x60uLL);
  v6 = v2;
  if ( v2 )
  {
    v3 = memset_0(v2, 0, 0x60uLL);
    v4 = v3;
    if ( v3 )
    {
      Microsoft::WRL::AgileActivationFactory<Windows::UI::Composition::ICompositionObjectStatics,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,0>::AgileActivationFactory<Windows::UI::Composition::ICompositionObjectStatics,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,0>(v3);
      *v4 = &Windows::UI::Composition::CompositionObjectFactory::`vftable';
      v4[1] = &Windows::UI::Composition::CompositionObjectFactory::`vftable'{for `Microsoft::WRL::Details::Selector<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>,Windows::UI::Composition::ICompositionObjectStatics>>'};
      v4[5] = &Windows::UI::Composition::CompositionObjectFactory::`vftable'{for `Microsoft::WRL::Details::Selector<Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Windows::UI::Composition::ICompositionObjectStatics>,Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>,Windows::UI::Composition::ICompositionObjectStatics>>'};
      Microsoft::WRL::ActivationFactory<Microsoft::WRL::Implements<Microsoft::WRL::FtmBase,Windows::UI::Composition::ICompositionIslandStatics>,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,0>::AddRef(v4);
      *a1 = v4;
      Microsoft::WRL::ActivationFactory<Microsoft::WRL::Implements<Microsoft::WRL::FtmBase,Windows::UI::Composition::ICompositionIslandEnvironmentStatics>,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,0>::Release(v4);
    }
    else
    {
      *a1 = 0LL;
    }
    return 0LL;
  }
  else
  {
    Microsoft::WRL::Details::MakeAllocator<Windows::UI::Composition::InjectionAnimation>::~MakeAllocator<Windows::UI::Composition::InjectionAnimation>(&v6);
    return 2147942414LL;
  }
}
