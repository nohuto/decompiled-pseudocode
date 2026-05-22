/*
 * XREFs of ??$MakeAndInitialize2@VInteropHolographicTexture@Composition@UI@Windows@@V1234@AEAPEAVInteropCompositor@234@_N@Details@WRL2@Microsoft@@YAJPEAPEAVInteropHolographicTexture@Composition@UI@Windows@@AEAPEAVInteropCompositor@456@$$QEA_N@Z @ 0x18015F640
 * Callers:
 *     ?CreateSharedResource@Api@InteropCompositor@Composition@UI@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180084260 (-CreateSharedResource@Api@InteropCompositor@Composition@UI@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?CreateHolographicInteropTexture@SystemOnly@InteropCompositor@Composition@UI@Windows@@UEAAJPEAPEAUIDCompositionHolographicInteropTexture@@@Z @ 0x18015FCE0 (-CreateHolographicInteropTexture@SystemOnly@InteropCompositor@Composition@UI@Windows@@UEAAJPEAPE.c)
 * Callees:
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x18004400C (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     memset_0 @ 0x18009698C (memset_0.c)
 *     ??1?$MakeAllocator@VInjectionAnimation@Composition@UI@Windows@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x1800A1230 (--1-$MakeAllocator@VInjectionAnimation@Composition@UI@Windows@@@Details@WRL@Microsoft@@QEAA@XZ.c)
 *     ??1?$RefPtr@VInteractionTrackerInertiaNaturalMotion@Interactions@Composition@UI@Windows@@@WRL2@Microsoft@@QEAA@XZ @ 0x1800A203C (--1-$RefPtr@VInteractionTrackerInertiaNaturalMotion@Interactions@Composition@UI@Windows@@@WRL2@M.c)
 *     ??0InteropHolographicTexture@Composition@UI@Windows@@QEAA@XZ @ 0x18015B4AC (--0InteropHolographicTexture@Composition@UI@Windows@@QEAA@XZ.c)
 *     ?Attach@?$ComPtr@VInteropHolographicTexture@Composition@UI@Windows@@@WRL@Microsoft@@QEAAXPEAVInteropHolographicTexture@Composition@UI@Windows@@@Z @ 0x18015B5F8 (-Attach@-$ComPtr@VInteropHolographicTexture@Composition@UI@Windows@@@WRL@Microsoft@@QEAAXPEAVInt.c)
 *     ?RuntimeClassInitialize@InteropHolographicTexture@Composition@UI@Windows@@QEAAJPEAVCompositor@234@_NPEAX1@Z @ 0x180197D74 (-RuntimeClassInitialize@InteropHolographicTexture@Composition@UI@Windows@@QEAAJPEAVCompositor@23.c)
 */

__int64 __fastcall Microsoft::WRL2::Details::MakeAndInitialize2<Windows::UI::Composition::InteropHolographicTexture,Windows::UI::Composition::InteropHolographicTexture,Windows::UI::Composition::InteropCompositor * &,bool>(
        Windows::UI::Composition::InteropHolographicTexture **a1,
        struct Windows::UI::Composition::Compositor **a2,
        bool *a3)
{
  void *v6; // rax
  int v7; // edi
  Windows::UI::Composition::InteropHolographicTexture *v8; // rax
  Windows::UI::Composition::InteropHolographicTexture *v9; // rbx
  Windows::UI::Composition::InteropHolographicTexture *v10; // rcx
  Windows::UI::Composition::InteropHolographicTexture *v12; // [rsp+50h] [rbp+8h] BYREF
  void *v13; // [rsp+68h] [rbp+20h] BYREF

  *a1 = 0LL;
  v12 = 0LL;
  v6 = DefaultHeap::Alloc(0xA0uLL);
  v13 = v6;
  if ( !v6 )
  {
    v7 = -2147024882;
LABEL_6:
    Microsoft::WRL::Details::MakeAllocator<Windows::UI::Composition::InjectionAnimation>::~MakeAllocator<Windows::UI::Composition::InjectionAnimation>(&v13);
    Microsoft::WRL2::RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>::~RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>(&v12);
    return (unsigned int)v7;
  }
  v8 = (Windows::UI::Composition::InteropHolographicTexture *)memset_0(v6, 0, 0xA0uLL);
  if ( v8 )
    v8 = Windows::UI::Composition::InteropHolographicTexture::InteropHolographicTexture(v8);
  Microsoft::WRL::ComPtr<Windows::UI::Composition::InteropHolographicTexture>::Attach(&v12, v8);
  v9 = v12;
  v13 = 0LL;
  v10 = v12;
  *((_QWORD *)v12 + 1) = &Windows::UI::Composition::InteropHolographicTexture::s_InterfaceType;
  v7 = Windows::UI::Composition::InteropHolographicTexture::RuntimeClassInitialize(v10, *a2, *a3, 0LL, 1);
  if ( v7 < 0 )
    goto LABEL_6;
  *a1 = v9;
  return 0LL;
}
