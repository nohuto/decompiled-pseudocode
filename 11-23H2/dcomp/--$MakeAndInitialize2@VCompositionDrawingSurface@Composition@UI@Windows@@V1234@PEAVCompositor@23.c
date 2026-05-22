/*
 * XREFs of ??$MakeAndInitialize2@VCompositionDrawingSurface@Composition@UI@Windows@@V1234@PEAVCompositor@234@PEAVCompositionGraphicsDevice@234@AEBUSizeInt32@Graphics@4@AEAW4DirectXPixelFormat@DirectX@84@AEAW4DirectXAlphaMode@DirectX@84@AEA_NAEA_N@Details@WRL2@Microsoft@@YAJPEAPEAVCompositionDrawingSurface@Composition@UI@Windows@@$$QEAPEAVCompositor@456@$$QEAPEAVCompositionGraphicsDevice@456@AEBUSizeInt32@Graphics@6@AEAW4DirectXPixelFormat@DirectX@Graphics@6@AEAW4DirectXAlphaMode@DirectX@Graphics@6@AEA_N6@Z @ 0x1800613E8
 * Callers:
 *     ?CreateSurface@CompositionGraphicsDevice@Composition@UI@Windows@@AEAAJAEBUSizeInt32@Graphics@4@W4DirectXPixelFormat@DirectX@64@W4DirectXAlphaMode@864@_N3PEAPEAVCompositionDrawingSurface@234@@Z @ 0x18006157C (-CreateSurface@CompositionGraphicsDevice@Composition@UI@Windows@@AEAAJAEBUSizeInt32@Graphics@4@W.c)
 * Callees:
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x18004400C (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     ??0CompositionDrawingSurface@Composition@UI@Windows@@QEAA@XZ @ 0x180061378 (--0CompositionDrawingSurface@Composition@UI@Windows@@QEAA@XZ.c)
 *     ?RuntimeClassInitialize@CompositionDrawingSurface@Composition@UI@Windows@@QEAAJPEAVCompositor@234@PEAVCompositionGraphicsDevice@234@USizeInt32@Graphics@4@W4DirectXPixelFormat@DirectX@84@W4DirectXAlphaMode@DirectX@84@_N5@Z @ 0x1800614E4 (-RuntimeClassInitialize@CompositionDrawingSurface@Composition@UI@Windows@@QEAAJPEAVCompositor@23.c)
 *     ?Attach@?$ComPtr@VCompositionDrawingSurface@Composition@UI@Windows@@@WRL@Microsoft@@QEAAXPEAVCompositionDrawingSurface@Composition@UI@Windows@@@Z @ 0x180061BCC (-Attach@-$ComPtr@VCompositionDrawingSurface@Composition@UI@Windows@@@WRL@Microsoft@@QEAAXPEAVCom.c)
 *     memset_0 @ 0x18009698C (memset_0.c)
 *     ??1?$MakeAllocator@VInjectionAnimation@Composition@UI@Windows@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x1800A1230 (--1-$MakeAllocator@VInjectionAnimation@Composition@UI@Windows@@@Details@WRL@Microsoft@@QEAA@XZ.c)
 *     ??1?$RefPtr@VInteractionTrackerInertiaNaturalMotion@Interactions@Composition@UI@Windows@@@WRL2@Microsoft@@QEAA@XZ @ 0x1800A203C (--1-$RefPtr@VInteractionTrackerInertiaNaturalMotion@Interactions@Composition@UI@Windows@@@WRL2@M.c)
 */

__int64 __fastcall Microsoft::WRL2::Details::MakeAndInitialize2<Windows::UI::Composition::CompositionDrawingSurface,Windows::UI::Composition::CompositionDrawingSurface,Windows::UI::Composition::Compositor *,Windows::UI::Composition::CompositionGraphicsDevice *,Windows::Graphics::SizeInt32 const &,enum Windows::Graphics::DirectX::DirectXPixelFormat &,enum Windows::Graphics::DirectX::DirectXAlphaMode &,bool &,bool &>(
        _QWORD *a1,
        _QWORD *a2,
        _QWORD *a3,
        _QWORD *a4,
        _DWORD *a5,
        _DWORD *a6,
        _BYTE *a7,
        _BYTE *a8)
{
  void *v12; // rax
  Windows::UI::Composition::CompositionDrawingSurface *v13; // rax
  __int64 v14; // rbx
  int v15; // edi
  void *v17; // [rsp+40h] [rbp-28h] BYREF
  __int64 v18; // [rsp+70h] [rbp+8h] BYREF

  *a1 = 0LL;
  v18 = 0LL;
  v12 = DefaultHeap::Alloc(0xF8uLL);
  v17 = v12;
  if ( v12 )
  {
    v13 = (Windows::UI::Composition::CompositionDrawingSurface *)memset_0(v12, 0, 0xF8uLL);
    if ( v13 )
      v13 = Windows::UI::Composition::CompositionDrawingSurface::CompositionDrawingSurface(v13);
    Microsoft::WRL::ComPtr<Windows::UI::Composition::CompositionDrawingSurface>::Attach(&v18, v13);
    v14 = v18;
    v17 = 0LL;
    *(_QWORD *)(v18 + 8) = &Windows::UI::Composition::CompositionDrawingSurface::s_InterfaceType;
    v15 = Windows::UI::Composition::CompositionDrawingSurface::RuntimeClassInitialize(
            v14,
            *a2,
            *a3,
            *a4,
            *a5,
            *a6,
            *a7,
            *a8,
            v17);
    if ( v15 >= 0 )
    {
      *a1 = v14;
      return 0LL;
    }
  }
  else
  {
    v15 = -2147024882;
  }
  Microsoft::WRL::Details::MakeAllocator<Windows::UI::Composition::InjectionAnimation>::~MakeAllocator<Windows::UI::Composition::InjectionAnimation>(&v17);
  Microsoft::WRL2::RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>::~RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>(&v18);
  return (unsigned int)v15;
}
