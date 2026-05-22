/*
 * XREFs of ??$MakeAndInitialize@VCompositorFactory@Composition@UI@Windows@@V1234@$$V@Details@WRL@Microsoft@@YAJPEAPEAVCompositorFactory@Composition@UI@Windows@@@Z @ 0x180017AB4
 * Callers:
 *     ??$CreateActivationFactory@VCompositorFactory@Composition@UI@Windows@@@Details@WRL@Microsoft@@YAJPEAIPEBUCreatorMap@012@AEBU_GUID@@PEAPEAUIUnknown@@@Z @ 0x180017390 (--$CreateActivationFactory@VCompositorFactory@Composition@UI@Windows@@@Details@WRL@Microsoft@@YA.c)
 * Callees:
 *     ??0?$ActivationFactory@U?$Implements@VFtmBase@WRL@Microsoft@@UIInteropCompositorFactoryPartner@Composition@UI@Windows@@@WRL@Microsoft@@UICompositorStatics@Composition@UI@Windows@@UIInteropCompositorFactoryRestricted@567@$0A@@WRL@Microsoft@@QEAA@XZ @ 0x180017B48 (--0-$ActivationFactory@U-$Implements@VFtmBase@WRL@Microsoft@@UIInteropCompositorFactoryPartner@C.c)
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x18004400C (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?Release@?$ActivationFactory@U?$Implements@VFtmBase@WRL@Microsoft@@UIInteropCompositorFactoryPartner@Composition@UI@Windows@@@WRL@Microsoft@@UICompositorStatics@Composition@UI@Windows@@UIInteropCompositorFactoryRestricted@567@$0A@@WRL@Microsoft@@UEAAKXZ @ 0x18007F470 (-Release@-$ActivationFactory@U-$Implements@VFtmBase@WRL@Microsoft@@UIInteropCompositorFactoryPar.c)
 *     ?AddRef@?$ActivationFactory@U?$Implements@VFtmBase@WRL@Microsoft@@UIInteropCompositorFactoryPartner@Composition@UI@Windows@@@WRL@Microsoft@@UICompositorStatics@Composition@UI@Windows@@UIInteropCompositorFactoryRestricted@567@$0A@@WRL@Microsoft@@UEAAKXZ @ 0x180089B70 (-AddRef@-$ActivationFactory@U-$Implements@VFtmBase@WRL@Microsoft@@UIInteropCompositorFactoryPart.c)
 *     ??1?$MakeAllocator@VInjectionAnimation@Composition@UI@Windows@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x1800A1230 (--1-$MakeAllocator@VInjectionAnimation@Composition@UI@Windows@@@Details@WRL@Microsoft@@QEAA@XZ.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<Windows::UI::Composition::CompositorFactory,Windows::UI::Composition::CompositorFactory,>(
        _QWORD *a1)
{
  _QWORD *v2; // rax
  _QWORD *v3; // rbx
  _QWORD *v5; // [rsp+30h] [rbp+8h] BYREF

  *a1 = 0LL;
  v2 = DefaultHeap::Alloc(0x68uLL);
  v5 = v2;
  v3 = v2;
  if ( v2 )
  {
    Microsoft::WRL::ActivationFactory<Microsoft::WRL::Implements<Microsoft::WRL::FtmBase,Windows::UI::Composition::IInteropCompositorFactoryPartner>,Windows::UI::Composition::ICompositorStatics,Windows::UI::Composition::IInteropCompositorFactoryRestricted,0>::ActivationFactory<Microsoft::WRL::Implements<Microsoft::WRL::FtmBase,Windows::UI::Composition::IInteropCompositorFactoryPartner>,Windows::UI::Composition::ICompositorStatics,Windows::UI::Composition::IInteropCompositorFactoryRestricted,0>(v2);
    *v3 = &Windows::UI::Composition::CompositorFactory::`vftable';
    v3[1] = &Windows::UI::Composition::CompositorFactory::`vftable'{for `Microsoft::WRL::Details::Selector<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>,Windows::UI::Composition::IInteropCompositorFactoryPartner>>'};
    v3[5] = &Windows::UI::Composition::CompositorFactory::`vftable'{for `Microsoft::WRL::Details::Selector<Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Windows::UI::Composition::IInteropCompositorFactoryPartner>,Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>,Windows::UI::Composition::IInteropCompositorFactoryPartner>>'};
    v3[7] = &Windows::UI::Composition::CompositorFactory::`vftable'{for `Windows::UI::Composition::ICompositorStatics'};
    v3[8] = &Windows::UI::Composition::CompositorFactory::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<13>,1,Windows::UI::Composition::IInteropCompositorFactoryRestricted,Microsoft::WRL::Details::Nil>'};
    Microsoft::WRL::ActivationFactory<Microsoft::WRL::Implements<Microsoft::WRL::FtmBase,Windows::UI::Composition::IInteropCompositorFactoryPartner>,Windows::UI::Composition::ICompositorStatics,Windows::UI::Composition::IInteropCompositorFactoryRestricted,0>::AddRef(v3);
    *a1 = v3;
    Microsoft::WRL::ActivationFactory<Microsoft::WRL::Implements<Microsoft::WRL::FtmBase,Windows::UI::Composition::IInteropCompositorFactoryPartner>,Windows::UI::Composition::ICompositorStatics,Windows::UI::Composition::IInteropCompositorFactoryRestricted,0>::Release(v3);
    return 0LL;
  }
  else
  {
    Microsoft::WRL::Details::MakeAllocator<Windows::UI::Composition::InjectionAnimation>::~MakeAllocator<Windows::UI::Composition::InjectionAnimation>(&v5);
    return 2147942414LL;
  }
}
