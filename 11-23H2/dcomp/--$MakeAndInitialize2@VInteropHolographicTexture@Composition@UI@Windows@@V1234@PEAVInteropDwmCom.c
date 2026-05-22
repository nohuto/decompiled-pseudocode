/*
 * XREFs of ??$MakeAndInitialize2@VInteropHolographicTexture@Composition@UI@Windows@@V1234@PEAVInteropDwmCompositor@234@AEA_NAEAPEAXAEA_N@Details@WRL2@Microsoft@@YAJPEAPEAVInteropHolographicTexture@Composition@UI@Windows@@$$QEAPEAVInteropDwmCompositor@456@AEA_NAEAPEAX2@Z @ 0x18015B094
 * Callers:
 *     ?CreateOrDuplicateMilResourceInternal@InteropDwmCompositor@Composition@UI@Windows@@AEAAJW4MIL_RESOURCE_TYPE@@_NPEAXPEAIPEAPEAUIUnknown@@1@Z @ 0x18015B730 (-CreateOrDuplicateMilResourceInternal@InteropDwmCompositor@Composition@UI@Windows@@AEAAJW4MIL_RE.c)
 * Callees:
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x18004400C (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     memset_0 @ 0x18009698C (memset_0.c)
 *     ??1?$MakeAllocator@VInjectionAnimation@Composition@UI@Windows@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x1800A1230 (--1-$MakeAllocator@VInjectionAnimation@Composition@UI@Windows@@@Details@WRL@Microsoft@@QEAA@XZ.c)
 *     ??1?$RefPtr@VInteractionTrackerInertiaNaturalMotion@Interactions@Composition@UI@Windows@@@WRL2@Microsoft@@QEAA@XZ @ 0x1800A203C (--1-$RefPtr@VInteractionTrackerInertiaNaturalMotion@Interactions@Composition@UI@Windows@@@WRL2@M.c)
 *     ??0InteropHolographicTexture@Composition@UI@Windows@@QEAA@XZ @ 0x18015B4AC (--0InteropHolographicTexture@Composition@UI@Windows@@QEAA@XZ.c)
 *     ?Attach@?$ComPtr@VInteropHolographicTexture@Composition@UI@Windows@@@WRL@Microsoft@@QEAAXPEAVInteropHolographicTexture@Composition@UI@Windows@@@Z @ 0x18015B5F8 (-Attach@-$ComPtr@VInteropHolographicTexture@Composition@UI@Windows@@@WRL@Microsoft@@QEAAXPEAVInt.c)
 *     ?RuntimeClassInitialize@InteropHolographicTexture@Composition@UI@Windows@@QEAAJPEAVCompositor@234@_NPEAX1@Z @ 0x180197D74 (-RuntimeClassInitialize@InteropHolographicTexture@Composition@UI@Windows@@QEAAJPEAVCompositor@23.c)
 */

__int64 __fastcall Microsoft::WRL2::Details::MakeAndInitialize2<Windows::UI::Composition::InteropHolographicTexture,Windows::UI::Composition::InteropHolographicTexture,Windows::UI::Composition::InteropDwmCompositor *,bool &,void * &,bool &>(
        Windows::UI::Composition::InteropHolographicTexture **a1,
        struct Windows::UI::Composition::Compositor **a2,
        bool *a3,
        void **a4,
        bool *a5)
{
  void *v9; // rax
  int v10; // edi
  Windows::UI::Composition::InteropHolographicTexture *v11; // rax
  Windows::UI::Composition::InteropHolographicTexture *v12; // rbx
  void *v14; // [rsp+30h] [rbp-28h] BYREF
  Windows::UI::Composition::InteropHolographicTexture *v15; // [rsp+60h] [rbp+8h] BYREF

  *a1 = 0LL;
  v15 = 0LL;
  v9 = DefaultHeap::Alloc(0xA0uLL);
  v14 = v9;
  if ( !v9 )
  {
    v10 = -2147024882;
LABEL_6:
    Microsoft::WRL::Details::MakeAllocator<Windows::UI::Composition::InjectionAnimation>::~MakeAllocator<Windows::UI::Composition::InjectionAnimation>(&v14);
    Microsoft::WRL2::RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>::~RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>(&v15);
    return (unsigned int)v10;
  }
  v11 = (Windows::UI::Composition::InteropHolographicTexture *)memset_0(v9, 0, 0xA0uLL);
  if ( v11 )
    v11 = (Windows::UI::Composition::InteropHolographicTexture *)Windows::UI::Composition::InteropHolographicTexture::InteropHolographicTexture(v11);
  Microsoft::WRL::ComPtr<Windows::UI::Composition::InteropHolographicTexture>::Attach(&v15, v11);
  v12 = v15;
  v14 = 0LL;
  *((_QWORD *)v15 + 1) = &Windows::UI::Composition::InteropHolographicTexture::s_InterfaceType;
  v10 = Windows::UI::Composition::InteropHolographicTexture::RuntimeClassInitialize(v12, *a2, *a3, *a4, *a5);
  if ( v10 < 0 )
    goto LABEL_6;
  *a1 = v12;
  return 0LL;
}
