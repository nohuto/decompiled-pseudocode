/*
 * XREFs of ??$MakeAndInitialize2@VCompositionMipmapSurface@Composition@UI@Windows@@V1234@PEAVCompositor@234@PEAVCompositionGraphicsDevice@234@AEAUSizeInt32@Graphics@4@AEAW4DirectXPixelFormat@DirectX@84@AEAW4DirectXAlphaMode@DirectX@84@@Details@WRL2@Microsoft@@YAJPEAPEAVCompositionMipmapSurface@Composition@UI@Windows@@$$QEAPEAVCompositor@456@$$QEAPEAVCompositionGraphicsDevice@456@AEAUSizeInt32@Graphics@6@AEAW4DirectXPixelFormat@DirectX@Graphics@6@AEAW4DirectXAlphaMode@DirectX@Graphics@6@@Z @ 0x18015673C
 * Callers:
 *     ?CreateMipmapSurface@CompositionGraphicsDevice@Composition@UI@Windows@@QEAAJUSizeInt32@Graphics@4@W4DirectXPixelFormat@DirectX@64@W4DirectXAlphaMode@864@PEAPEAVCompositionMipmapSurface@234@@Z @ 0x180156F8C (-CreateMipmapSurface@CompositionGraphicsDevice@Composition@UI@Windows@@QEAAJUSizeInt32@Graphics@.c)
 * Callees:
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x18004400C (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     memset_0 @ 0x18009698C (memset_0.c)
 *     ??1?$MakeAllocator@VInjectionAnimation@Composition@UI@Windows@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x1800A1230 (--1-$MakeAllocator@VInjectionAnimation@Composition@UI@Windows@@@Details@WRL@Microsoft@@QEAA@XZ.c)
 *     ??1?$RefPtr@VInteractionTrackerInertiaNaturalMotion@Interactions@Composition@UI@Windows@@@WRL2@Microsoft@@QEAA@XZ @ 0x1800A203C (--1-$RefPtr@VInteractionTrackerInertiaNaturalMotion@Interactions@Composition@UI@Windows@@@WRL2@M.c)
 *     ??0CompositionMipmapSurface@Composition@UI@Windows@@QEAA@XZ @ 0x180156900 (--0CompositionMipmapSurface@Composition@UI@Windows@@QEAA@XZ.c)
 *     ?RuntimeClassInitialize@CompositionMipmapSurface@Composition@UI@Windows@@QEAAJPEAVCompositor@234@PEAVCompositionGraphicsDevice@234@USizeInt32@Graphics@4@W4DirectXPixelFormat@DirectX@84@W4DirectXAlphaMode@DirectX@84@@Z @ 0x180193FEC (-RuntimeClassInitialize@CompositionMipmapSurface@Composition@UI@Windows@@QEAAJPEAVCompositor@234.c)
 */

__int64 __fastcall Microsoft::WRL2::Details::MakeAndInitialize2<Windows::UI::Composition::CompositionMipmapSurface,Windows::UI::Composition::CompositionMipmapSurface,Windows::UI::Composition::Compositor *,Windows::UI::Composition::CompositionGraphicsDevice *,Windows::Graphics::SizeInt32 &,enum Windows::Graphics::DirectX::DirectXPixelFormat &,enum Windows::Graphics::DirectX::DirectXAlphaMode &>(
        __int64 *a1,
        _QWORD *a2,
        _QWORD *a3,
        _QWORD *a4,
        _DWORD *a5,
        _DWORD *a6)
{
  void *v10; // rax
  int v11; // edi
  Windows::UI::Composition::CompositionMipmapSurface *v12; // rax
  __int64 v13; // rbx
  Microsoft::WRL2::NestableRuntimeClass *v15; // [rsp+30h] [rbp-28h] BYREF
  void *v16; // [rsp+60h] [rbp+8h] BYREF

  *a1 = 0LL;
  v15 = 0LL;
  v10 = DefaultHeap::Alloc(0xE8uLL);
  v16 = v10;
  if ( !v10 )
  {
    v11 = -2147024882;
LABEL_7:
    Microsoft::WRL::Details::MakeAllocator<Windows::UI::Composition::InjectionAnimation>::~MakeAllocator<Windows::UI::Composition::InjectionAnimation>(&v16);
    Microsoft::WRL2::RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>::~RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>(&v15);
    return (unsigned int)v11;
  }
  v12 = (Windows::UI::Composition::CompositionMipmapSurface *)memset_0(v10, 0, 0xE8uLL);
  if ( v12 )
    v13 = Windows::UI::Composition::CompositionMipmapSurface::CompositionMipmapSurface(v12);
  else
    v13 = 0LL;
  v16 = 0LL;
  *(_QWORD *)(v13 + 8) = &Windows::UI::Composition::CompositionMipmapSurface::s_InterfaceType;
  v11 = Windows::UI::Composition::CompositionMipmapSurface::RuntimeClassInitialize(v13, *a2, *a3, *a4, *a5, *a6, v13);
  if ( v11 < 0 )
    goto LABEL_7;
  *a1 = v13;
  return 0LL;
}
