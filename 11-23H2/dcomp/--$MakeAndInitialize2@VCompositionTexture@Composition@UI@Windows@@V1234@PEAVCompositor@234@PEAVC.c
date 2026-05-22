/*
 * XREFs of ??$MakeAndInitialize2@VCompositionTexture@Composition@UI@Windows@@V1234@PEAVCompositor@234@PEAVCCompositionTexture@DirectComposition@@@Details@WRL2@Microsoft@@YAJPEAPEAVCompositionTexture@Composition@UI@Windows@@$$QEAPEAVCompositor@456@$$QEAPEAVCCompositionTexture@DirectComposition@@@Z @ 0x1800A1D00
 * Callers:
 *     ?CreateCompositionTexture@Compositor@Composition@UI@Windows@@QEAAJPEAUIUnknown@@PEAPEAUICompositionTexture@234@@Z @ 0x1800A24A8 (-CreateCompositionTexture@Compositor@Composition@UI@Windows@@QEAAJPEAUIUnknown@@PEAPEAUIComposit.c)
 * Callees:
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x18004400C (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ @ 0x18007BB44 (-InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ.c)
 *     memset_0 @ 0x18009698C (memset_0.c)
 *     ??1?$MakeAllocator@VInjectionAnimation@Composition@UI@Windows@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x1800A1230 (--1-$MakeAllocator@VInjectionAnimation@Composition@UI@Windows@@@Details@WRL@Microsoft@@QEAA@XZ.c)
 *     ??0CompositionTexture@Composition@UI@Windows@@QEAA@XZ @ 0x1800A1F84 (--0CompositionTexture@Composition@UI@Windows@@QEAA@XZ.c)
 *     ?RuntimeClassInitialize@CompositionTexture@Composition@UI@Windows@@QEAAJPEAVCompositor@234@PEAVCCompositionTexture@DirectComposition@@@Z @ 0x1800A3858 (-RuntimeClassInitialize@CompositionTexture@Composition@UI@Windows@@QEAAJPEAVCompositor@234@PEAVC.c)
 */

__int64 __fastcall Microsoft::WRL2::Details::MakeAndInitialize2<Windows::UI::Composition::CompositionTexture,Windows::UI::Composition::CompositionTexture,Windows::UI::Composition::Compositor *,DirectComposition::CCompositionTexture *>(
        Windows::UI::Composition::CompositionTexture **a1,
        struct Windows::UI::Composition::Compositor **a2,
        struct DirectComposition::CCompositionTexture **a3)
{
  unsigned int v4; // ebx
  void *v7; // rax
  Windows::UI::Composition::CompositionTexture *v8; // rax
  Windows::UI::Composition::CompositionTexture *v9; // rdi
  int v10; // esi
  void *v12; // [rsp+40h] [rbp+8h] BYREF

  v4 = 0;
  *a1 = 0LL;
  v7 = DefaultHeap::Alloc(0xB0uLL);
  v12 = v7;
  if ( v7 )
  {
    v8 = (Windows::UI::Composition::CompositionTexture *)memset_0(v7, 0, 0xB0uLL);
    if ( v8 )
      v9 = (Windows::UI::Composition::CompositionTexture *)Windows::UI::Composition::CompositionTexture::CompositionTexture(v8);
    else
      v9 = 0LL;
    v12 = 0LL;
    *((_QWORD *)v9 + 1) = &Windows::UI::Composition::CompositionTexture::s_InterfaceType;
    v10 = Windows::UI::Composition::CompositionTexture::RuntimeClassInitialize(v9, *a2, *a3);
    if ( v10 < 0 )
    {
      Microsoft::WRL::Details::MakeAllocator<Windows::UI::Composition::InjectionAnimation>::~MakeAllocator<Windows::UI::Composition::InjectionAnimation>(&v12);
      Microsoft::WRL2::NestableRuntimeClass::InternalRelease(v9);
      return (unsigned int)v10;
    }
    *a1 = v9;
  }
  else
  {
    v4 = -2147024882;
  }
  Microsoft::WRL::Details::MakeAllocator<Windows::UI::Composition::InjectionAnimation>::~MakeAllocator<Windows::UI::Composition::InjectionAnimation>(&v12);
  return v4;
}
