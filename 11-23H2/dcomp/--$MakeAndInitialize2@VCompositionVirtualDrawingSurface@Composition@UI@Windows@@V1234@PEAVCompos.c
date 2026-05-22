/*
 * XREFs of ??$MakeAndInitialize2@VCompositionVirtualDrawingSurface@Composition@UI@Windows@@V1234@PEAVCompositor@234@PEAVCompositionGraphicsDevice@234@AEAUSizeInt32@Graphics@4@AEAW4DirectXPixelFormat@DirectX@84@AEAW4DirectXAlphaMode@DirectX@84@@Details@WRL2@Microsoft@@YAJPEAPEAVCompositionVirtualDrawingSurface@Composition@UI@Windows@@$$QEAPEAVCompositor@456@$$QEAPEAVCompositionGraphicsDevice@456@AEAUSizeInt32@Graphics@6@AEAW4DirectXPixelFormat@DirectX@Graphics@6@AEAW4DirectXAlphaMode@DirectX@Graphics@6@@Z @ 0x18003A5E8
 * Callers:
 *     ?CreateVirtualDrawingSurface@CompositionGraphicsDevice@Composition@UI@Windows@@QEAAJUSizeInt32@Graphics@4@W4DirectXPixelFormat@DirectX@64@W4DirectXAlphaMode@864@PEAPEAVCompositionVirtualDrawingSurface@234@@Z @ 0x18003A518 (-CreateVirtualDrawingSurface@CompositionGraphicsDevice@Composition@UI@Windows@@QEAAJUSizeInt32@G.c)
 * Callees:
 *     ??0CompositionVirtualDrawingSurface@Composition@UI@Windows@@QEAA@XZ @ 0x18003A6BC (--0CompositionVirtualDrawingSurface@Composition@UI@Windows@@QEAA@XZ.c)
 *     ?RuntimeClassInitialize@CompositionVirtualDrawingSurface@Composition@UI@Windows@@QEAAJPEAVCompositor@234@PEAVCompositionGraphicsDevice@234@USizeInt32@Graphics@4@W4DirectXPixelFormat@DirectX@84@W4DirectXAlphaMode@DirectX@84@@Z @ 0x18003A738 (-RuntimeClassInitialize@CompositionVirtualDrawingSurface@Composition@UI@Windows@@QEAAJPEAVCompos.c)
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x18004400C (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     memset_0 @ 0x18009698C (memset_0.c)
 *     ??1?$MakeAllocator@VInjectionAnimation@Composition@UI@Windows@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x1800A1230 (--1-$MakeAllocator@VInjectionAnimation@Composition@UI@Windows@@@Details@WRL@Microsoft@@QEAA@XZ.c)
 *     ??1?$RefPtr@VInteractionTrackerInertiaNaturalMotion@Interactions@Composition@UI@Windows@@@WRL2@Microsoft@@QEAA@XZ @ 0x1800A203C (--1-$RefPtr@VInteractionTrackerInertiaNaturalMotion@Interactions@Composition@UI@Windows@@@WRL2@M.c)
 */

__int64 __fastcall Microsoft::WRL2::Details::MakeAndInitialize2<Windows::UI::Composition::CompositionVirtualDrawingSurface,Windows::UI::Composition::CompositionVirtualDrawingSurface,Windows::UI::Composition::Compositor *,Windows::UI::Composition::CompositionGraphicsDevice *,Windows::Graphics::SizeInt32 &,enum Windows::Graphics::DirectX::DirectXPixelFormat &,enum Windows::Graphics::DirectX::DirectXAlphaMode &>(
        __int64 *a1,
        _QWORD *a2,
        _QWORD *a3,
        _QWORD *a4,
        _DWORD *a5,
        _DWORD *a6)
{
  void *v10; // rax
  Windows::UI::Composition::CompositionVirtualDrawingSurface *v11; // rax
  __int64 v12; // rbx
  int v13; // edi
  _QWORD v15[5]; // [rsp+30h] [rbp-28h] BYREF
  void *v16; // [rsp+60h] [rbp+8h] BYREF

  *a1 = 0LL;
  v15[0] = 0LL;
  v10 = DefaultHeap::Alloc(0xF8uLL);
  v16 = v10;
  if ( v10 )
  {
    v11 = (Windows::UI::Composition::CompositionVirtualDrawingSurface *)memset_0(v10, 0, 0xF8uLL);
    if ( v11 )
      v12 = Windows::UI::Composition::CompositionVirtualDrawingSurface::CompositionVirtualDrawingSurface(v11);
    else
      v12 = 0LL;
    v16 = 0LL;
    *(_QWORD *)(v12 + 8) = &Windows::UI::Composition::CompositionVirtualDrawingSurface::s_InterfaceType;
    v13 = Windows::UI::Composition::CompositionVirtualDrawingSurface::RuntimeClassInitialize(
            v12,
            *a2,
            *a3,
            *a4,
            *a5,
            *a6,
            v12);
    if ( v13 >= 0 )
    {
      *a1 = v12;
      return 0LL;
    }
  }
  else
  {
    v13 = -2147024882;
  }
  Microsoft::WRL::Details::MakeAllocator<Windows::UI::Composition::InjectionAnimation>::~MakeAllocator<Windows::UI::Composition::InjectionAnimation>(&v16);
  Microsoft::WRL2::RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>::~RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>(v15);
  return (unsigned int)v13;
}
