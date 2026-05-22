/*
 * XREFs of ??$MakeAndInitialize2@VInteropDDisplayRenderTarget@Composition@UI@Windows@@V1234@AEAPEAVInteropCompositor@234@AEAPEAXAEAIAEAU_LUID@@AEAIAEAW4DXGI_FORMAT@@AEAW4DXGI_COLOR_SPACE_TYPE@@AEBUD2D_SIZE_U@@AEAI@Details@WRL2@Microsoft@@YAJPEAPEAVInteropDDisplayRenderTarget@Composition@UI@Windows@@AEAPEAVInteropCompositor@456@AEAPEAXAEAIAEAU_LUID@@3AEAW4DXGI_FORMAT@@AEAW4DXGI_COLOR_SPACE_TYPE@@AEBUD2D_SIZE_U@@3@Z @ 0x18015F500
 * Callers:
 *     ?CreateDDisplayRenderTarget@Api@InteropCompositor@Composition@UI@Windows@@UEAAJPEAXIU_LUID@@IW4DXGI_FORMAT@@W4DXGI_COLOR_SPACE_TYPE@@AEBUD2D_SIZE_U@@IPEAPEAUIDCompositionRenderTargetPartner@@@Z @ 0x18015F8C0 (-CreateDDisplayRenderTarget@Api@InteropCompositor@Composition@UI@Windows@@UEAAJPEAXIU_LUID@@IW4D.c)
 * Callees:
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x18004400C (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     ??0InteropRenderTarget@Composition@UI@Windows@@QEAA@XZ @ 0x180092678 (--0InteropRenderTarget@Composition@UI@Windows@@QEAA@XZ.c)
 *     memset_0 @ 0x18009698C (memset_0.c)
 *     ??1?$MakeAllocator@VInjectionAnimation@Composition@UI@Windows@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x1800A1230 (--1-$MakeAllocator@VInjectionAnimation@Composition@UI@Windows@@@Details@WRL@Microsoft@@QEAA@XZ.c)
 *     ??1?$RefPtr@VInteractionTrackerInertiaNaturalMotion@Interactions@Composition@UI@Windows@@@WRL2@Microsoft@@QEAA@XZ @ 0x1800A203C (--1-$RefPtr@VInteractionTrackerInertiaNaturalMotion@Interactions@Composition@UI@Windows@@@WRL2@M.c)
 *     ?RuntimeClassInitialize@InteropDDisplayRenderTarget@Composition@UI@Windows@@QEAAJPEAVCompositor@234@PEAXIU_LUID@@IW4DXGI_FORMAT@@W4DXGI_COLOR_SPACE_TYPE@@AEBUD2D_SIZE_U@@I@Z @ 0x18019ACBC (-RuntimeClassInitialize@InteropDDisplayRenderTarget@Composition@UI@Windows@@QEAAJPEAVCompositor@.c)
 */

__int64 __fastcall Microsoft::WRL2::Details::MakeAndInitialize2<Windows::UI::Composition::InteropDDisplayRenderTarget,Windows::UI::Composition::InteropDDisplayRenderTarget,Windows::UI::Composition::InteropCompositor * &,void * &,unsigned int &,_LUID &,unsigned int &,enum DXGI_FORMAT &,enum DXGI_COLOR_SPACE_TYPE &,D2D_SIZE_U const &,unsigned int &>(
        Microsoft::WRL2::NestableRuntimeClass **a1,
        struct Windows::UI::Composition::Compositor **a2,
        void **a3,
        unsigned int *a4,
        struct _LUID *a5,
        unsigned int *a6,
        enum DXGI_FORMAT *a7,
        enum DXGI_COLOR_SPACE_TYPE *a8,
        struct D2D_SIZE_U *a9,
        unsigned int *a10)
{
  void *v14; // rax
  int v15; // edi
  Windows::UI::Composition::InteropRenderTarget *v16; // rax
  Microsoft::WRL2::NestableRuntimeClass *v17; // rbx
  Microsoft::WRL2::NestableRuntimeClass *v19; // [rsp+50h] [rbp-28h] BYREF
  void *v20; // [rsp+80h] [rbp+8h] BYREF

  *a1 = 0LL;
  v19 = 0LL;
  v14 = DefaultHeap::Alloc(0xA0uLL);
  v20 = v14;
  if ( !v14 )
  {
    v15 = -2147024882;
LABEL_7:
    Microsoft::WRL::Details::MakeAllocator<Windows::UI::Composition::InjectionAnimation>::~MakeAllocator<Windows::UI::Composition::InjectionAnimation>(&v20);
    Microsoft::WRL2::RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>::~RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>(&v19);
    return (unsigned int)v15;
  }
  v16 = (Windows::UI::Composition::InteropRenderTarget *)memset_0(v14, 0, 0xA0uLL);
  v17 = v16;
  if ( v16 )
  {
    Windows::UI::Composition::InteropRenderTarget::InteropRenderTarget(v16);
    *(_QWORD *)v17 = &Windows::UI::Composition::InteropRemoteRenderTarget::`vftable';
  }
  else
  {
    v17 = 0LL;
  }
  v20 = 0LL;
  *((_QWORD *)v17 + 1) = &Windows::UI::Composition::InteropRenderTarget::s_InterfaceType;
  v19 = v17;
  v15 = Windows::UI::Composition::InteropDDisplayRenderTarget::RuntimeClassInitialize(
          v17,
          *a2,
          *a3,
          *a4,
          *a5,
          *a6,
          *a7,
          *a8,
          a9,
          *a10);
  if ( v15 < 0 )
    goto LABEL_7;
  *a1 = v17;
  return 0LL;
}
