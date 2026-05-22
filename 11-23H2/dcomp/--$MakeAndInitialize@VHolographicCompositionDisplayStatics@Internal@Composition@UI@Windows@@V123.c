/*
 * XREFs of ??$MakeAndInitialize@VHolographicCompositionDisplayStatics@Internal@Composition@UI@Windows@@V12345@$$V@Details@WRL@Microsoft@@YAJPEAPEAVHolographicCompositionDisplayStatics@Internal@Composition@UI@Windows@@@Z @ 0x180101A40
 * Callers:
 *     ??$CreateActivationFactory@VHolographicCompositionDisplayStatics@Internal@Composition@UI@Windows@@@Details@WRL@Microsoft@@YAJPEAIPEBUCreatorMap@012@AEBU_GUID@@PEAPEAUIUnknown@@@Z @ 0x180101840 (--$CreateActivationFactory@VHolographicCompositionDisplayStatics@Internal@Composition@UI@Windows.c)
 * Callees:
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x18004400C (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     memset_0 @ 0x18009698C (memset_0.c)
 *     ??1?$MakeAllocator@VInjectionAnimation@Composition@UI@Windows@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x1800A1230 (--1-$MakeAllocator@VInjectionAnimation@Composition@UI@Windows@@@Details@WRL@Microsoft@@QEAA@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 *     ??0?$AgileActivationFactory@UIHolographicCompositionDisplayStatics@Internal@Composition@UI@Windows@@VNil@Details@WRL@Microsoft@@V6789@$0A@@WRL@Microsoft@@QEAA@XZ @ 0x180101C74 (--0-$AgileActivationFactory@UIHolographicCompositionDisplayStatics@Internal@Composition@UI@Windo.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<Windows::UI::Composition::Internal::HolographicCompositionDisplayStatics,Windows::UI::Composition::Internal::HolographicCompositionDisplayStatics,>(
        _QWORD *a1)
{
  void *v2; // rax
  _QWORD *v4; // rax
  _QWORD *v5; // rbx
  void *v6; // [rsp+30h] [rbp+8h] BYREF

  *a1 = 0LL;
  v2 = DefaultHeap::Alloc(0x60uLL);
  v6 = v2;
  if ( v2 )
  {
    v4 = memset_0(v2, 0, 0x60uLL);
    v5 = v4;
    if ( v4 )
    {
      Microsoft::WRL::AgileActivationFactory<Windows::UI::Composition::Internal::IHolographicCompositionDisplayStatics,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,0>::AgileActivationFactory<Windows::UI::Composition::Internal::IHolographicCompositionDisplayStatics,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,0>(v4);
      *v5 = &Windows::UI::Composition::Internal::HolographicCompositionDisplayStatics::`vftable';
      v5[1] = &Windows::UI::Composition::Internal::HolographicCompositionDisplayStatics::`vftable'{for `Microsoft::WRL::Details::Selector<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>,Windows::UI::Composition::Internal::IHolographicCompositionDisplayStatics>>'};
      v5[5] = &Windows::UI::Composition::Internal::HolographicCompositionDisplayStatics::`vftable'{for `Microsoft::WRL::Details::Selector<Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Windows::UI::Composition::Internal::IHolographicCompositionDisplayStatics>,Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>,Windows::UI::Composition::Internal::IHolographicCompositionDisplayStatics>>'};
      (*(void (__fastcall **)(_QWORD *))(*v5 + 8LL))(v5);
      *a1 = v5;
      (*(void (__fastcall **)(_QWORD *))(*v5 + 16LL))(v5);
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
