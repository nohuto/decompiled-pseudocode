/*
 * XREFs of ??$MakeAndInitialize2@VInteropLegacyRenderTarget@Composition@UI@Windows@@V1234@AEAPEAVInteropCompositor@234@AEAU_LUID@@AEAIAEAW4DXGI_FORMAT@@AEAW4DXGI_COLOR_SPACE_TYPE@@AEAIAEA_N@Details@WRL2@Microsoft@@YAJPEAPEAVInteropLegacyRenderTarget@Composition@UI@Windows@@AEAPEAVInteropCompositor@456@AEAU_LUID@@AEAIAEAW4DXGI_FORMAT@@AEAW4DXGI_COLOR_SPACE_TYPE@@3AEA_N@Z @ 0x180092574
 * Callers:
 *     ?CreateRenderTarget@Api@InteropCompositor@Composition@UI@Windows@@UEAAJU_LUID@@IW4DXGI_FORMAT@@W4DXGI_COLOR_SPACE_TYPE@@I_NPEAPEAUIDCompositionRenderTargetPartner@@@Z @ 0x1800924B0 (-CreateRenderTarget@Api@InteropCompositor@Composition@UI@Windows@@UEAAJU_LUID@@IW4DXGI_FORMAT@@W.c)
 * Callees:
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x18004400C (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     ??0InteropRenderTarget@Composition@UI@Windows@@QEAA@XZ @ 0x180092678 (--0InteropRenderTarget@Composition@UI@Windows@@QEAA@XZ.c)
 *     ?RuntimeClassInitialize@InteropLegacyRenderTarget@Composition@UI@Windows@@QEAAJPEAVCompositor@234@U_LUID@@IW4DXGI_FORMAT@@W4DXGI_COLOR_SPACE_TYPE@@I_N@Z @ 0x1800926B8 (-RuntimeClassInitialize@InteropLegacyRenderTarget@Composition@UI@Windows@@QEAAJPEAVCompositor@23.c)
 *     memset_0 @ 0x18009698C (memset_0.c)
 *     ??1?$MakeAllocator@VInjectionAnimation@Composition@UI@Windows@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x1800A1230 (--1-$MakeAllocator@VInjectionAnimation@Composition@UI@Windows@@@Details@WRL@Microsoft@@QEAA@XZ.c)
 *     ??1?$RefPtr@VInteractionTrackerInertiaNaturalMotion@Interactions@Composition@UI@Windows@@@WRL2@Microsoft@@QEAA@XZ @ 0x1800A203C (--1-$RefPtr@VInteractionTrackerInertiaNaturalMotion@Interactions@Composition@UI@Windows@@@WRL2@M.c)
 */

__int64 __fastcall Microsoft::WRL2::Details::MakeAndInitialize2<Windows::UI::Composition::InteropLegacyRenderTarget,Windows::UI::Composition::InteropLegacyRenderTarget,Windows::UI::Composition::InteropCompositor * &,_LUID &,unsigned int &,enum DXGI_FORMAT &,enum DXGI_COLOR_SPACE_TYPE &,unsigned int &,bool &>(
        Windows::UI::Composition::InteropRenderTarget **a1,
        struct Windows::UI::Composition::Compositor **a2,
        struct _LUID *a3,
        unsigned int *a4,
        enum DXGI_FORMAT *a5,
        enum DXGI_COLOR_SPACE_TYPE *a6,
        unsigned int *a7,
        bool *a8)
{
  void *v12; // rax
  Windows::UI::Composition::InteropRenderTarget *v13; // rax
  Windows::UI::Composition::InteropRenderTarget *v14; // rbx
  int v15; // edi
  Windows::UI::Composition::InteropRenderTarget *v17; // [rsp+40h] [rbp-28h] BYREF
  void *v18; // [rsp+70h] [rbp+8h] BYREF

  *a1 = 0LL;
  v17 = 0LL;
  v12 = DefaultHeap::Alloc(0xA0uLL);
  v18 = v12;
  if ( v12 )
  {
    v13 = (Windows::UI::Composition::InteropRenderTarget *)memset_0(v12, 0, 0xA0uLL);
    v14 = v13;
    if ( v13 )
    {
      Windows::UI::Composition::InteropRenderTarget::InteropRenderTarget(v13);
      *(_QWORD *)v14 = &Windows::UI::Composition::InteropRemoteRenderTarget::`vftable';
    }
    else
    {
      v14 = 0LL;
    }
    v18 = 0LL;
    *((_QWORD *)v14 + 1) = &Windows::UI::Composition::InteropRenderTarget::s_InterfaceType;
    v17 = v14;
    v15 = Windows::UI::Composition::InteropLegacyRenderTarget::RuntimeClassInitialize(
            v14,
            *a2,
            *a3,
            *a4,
            *a5,
            *a6,
            *a7,
            *a8);
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
  Microsoft::WRL::Details::MakeAllocator<Windows::UI::Composition::InjectionAnimation>::~MakeAllocator<Windows::UI::Composition::InjectionAnimation>(&v18);
  Microsoft::WRL2::RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>::~RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>(&v17);
  return (unsigned int)v15;
}
