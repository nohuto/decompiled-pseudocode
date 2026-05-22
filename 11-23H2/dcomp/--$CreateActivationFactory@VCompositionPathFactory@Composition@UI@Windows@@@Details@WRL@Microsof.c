/*
 * XREFs of ??$CreateActivationFactory@VCompositionPathFactory@Composition@UI@Windows@@@Details@WRL@Microsoft@@YAJPEAIPEBUCreatorMap@012@AEBU_GUID@@PEAPEAUIUnknown@@@Z @ 0x180017060
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@?$ActivationFactory@U?$Implements@VFtmBase@WRL@Microsoft@@UICompositionEffectSourceParameterFactory@Composition@UI@Windows@@@WRL@Microsoft@@VNil@Details@23@V4523@$0A@@WRL@Microsoft@@UEAAKXZ @ 0x180010AF0 (-Release@-$ActivationFactory@U-$Implements@VFtmBase@WRL@Microsoft@@UICompositionEffectSourcePara.c)
 *     ?AddRef@?$ActivationFactory@U?$Implements@VFtmBase@WRL@Microsoft@@UICompositionPathFactory@Composition@UI@Windows@@@WRL@Microsoft@@VNil@Details@23@V4523@$0A@@WRL@Microsoft@@UEAAKXZ @ 0x180010E40 (-AddRef@-$ActivationFactory@U-$Implements@VFtmBase@WRL@Microsoft@@UICompositionPathFactory@Compo.c)
 *     ??0?$AgileActivationFactory@UICompositionPathFactory@Composition@UI@Windows@@VNil@Details@WRL@Microsoft@@V5678@$0A@@WRL@Microsoft@@QEAA@XZ @ 0x180017138 (--0-$AgileActivationFactory@UICompositionPathFactory@Composition@UI@Windows@@VNil@Details@WRL@Mi.c)
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$0N@@WRL@Microsoft@@$0A@UIActivationFactory@@U?$Implements@VFtmBase@WRL@Microsoft@@UICompositionPathFactory@Composition@UI@Windows@@@23@VNil@Details@23@V6723@V6723@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x180017550 (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$0N@@WRL@Microsoft@@$0A@UIActiva_ea_180017550.c)
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x18004400C (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x1800826A8 (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     ??1?$MakeAllocator@VInjectionAnimation@Composition@UI@Windows@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x1800A1230 (--1-$MakeAllocator@VInjectionAnimation@Composition@UI@Windows@@@Details@WRL@Microsoft@@QEAA@XZ.c)
 *     ??1?$ComPtr@VWhiteNoiseEffectFactory@Effects@Composition@UI@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x180105A60 (--1-$ComPtr@VWhiteNoiseEffectFactory@Effects@Composition@UI@Windows@@@WRL@Microsoft@@QEAA@XZ.c)
 */

__int64 __fastcall Microsoft::WRL::Details::CreateActivationFactory<Windows::UI::Composition::CompositionPathFactory>(
        _BYTE *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  void *v8; // rax
  __int64 v9; // rbx
  volatile int *v10; // rdx
  volatile int *v11; // rdx
  volatile int *v12; // rdx
  int CanCastTo; // edi
  __int64 result; // rax
  __int64 v15; // [rsp+20h] [rbp-18h] BYREF
  void *v16; // [rsp+28h] [rbp-10h] BYREF

  v15 = 0LL;
  v8 = DefaultHeap::Alloc(0x60uLL);
  v16 = v8;
  v9 = (__int64)v8;
  if ( !v8 )
  {
    Microsoft::WRL::Details::MakeAllocator<Windows::UI::Composition::InjectionAnimation>::~MakeAllocator<Windows::UI::Composition::InjectionAnimation>(&v16);
    CanCastTo = -2147024882;
    goto LABEL_7;
  }
  Microsoft::WRL::AgileActivationFactory<Windows::UI::Composition::ICompositionPathFactory,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,0>::AgileActivationFactory<Windows::UI::Composition::ICompositionPathFactory,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,0>(v8);
  *(_QWORD *)v9 = &Windows::UI::Composition::CompositionPathFactory::`vftable';
  *(_QWORD *)(v9 + 8) = &Windows::UI::Composition::CompositionPathFactory::`vftable'{for `Microsoft::WRL::Details::Selector<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>,Windows::UI::Composition::ICompositionPathFactory>>'};
  *(_QWORD *)(v9 + 40) = &Windows::UI::Composition::CompositionPathFactory::`vftable'{for `Microsoft::WRL::Details::Selector<Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Windows::UI::Composition::ICompositionPathFactory>,Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>,Windows::UI::Composition::ICompositionPathFactory>>'};
  Microsoft::WRL::ActivationFactory<Microsoft::WRL::Implements<Microsoft::WRL::FtmBase,Windows::UI::Composition::ICompositionPathFactory>,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,0>::AddRef(
    v9,
    v10);
  v15 = v9;
  Microsoft::WRL::ActivationFactory<Microsoft::WRL::Implements<Microsoft::WRL::FtmBase,Windows::UI::Composition::ICompositionEffectSourceParameterFactory>,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,0>::Release(
    v9,
    v11);
  CanCastTo = Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<13>,0,IActivationFactory,Microsoft::WRL::Implements<Microsoft::WRL::FtmBase,Windows::UI::Composition::ICompositionPathFactory>,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::CanCastTo(
                v9,
                a3,
                a4);
  if ( CanCastTo < 0 )
  {
LABEL_7:
    Microsoft::WRL::ComPtr<Windows::UI::Composition::Effects::WhiteNoiseEffectFactory>::~ComPtr<Windows::UI::Composition::Effects::WhiteNoiseEffectFactory>(&v15);
    return (unsigned int)CanCastTo;
  }
  if ( (*a1 & 4) == 0 )
    Microsoft::WRL::Details::SafeUnknownIncrementReference((Microsoft::WRL::Details *)(v9 + 68), v12);
  *(_DWORD *)(v9 + 88) = *(_DWORD *)a1;
  result = 0LL;
  *(_QWORD *)(v9 + 80) = a2;
  return result;
}
