/*
 * XREFs of ??$MakeAndInitialize2@VInteropRemoteAppRenderTarget@Composition@UI@Windows@@V1234@AEAPEAVInteropCompositor@234@_N@Details@WRL2@Microsoft@@YAJPEAPEAVInteropRemoteAppRenderTarget@Composition@UI@Windows@@AEAPEAVInteropCompositor@456@$$QEA_N@Z @ 0x18015F7E8
 * Callers:
 *     ?CreateSharedResource@Api@InteropCompositor@Composition@UI@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180084260 (-CreateSharedResource@Api@InteropCompositor@Composition@UI@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x18004400C (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     memset_0 @ 0x18009698C (memset_0.c)
 *     ??1?$MakeAllocator@VInjectionAnimation@Composition@UI@Windows@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x1800A1230 (--1-$MakeAllocator@VInjectionAnimation@Composition@UI@Windows@@@Details@WRL@Microsoft@@QEAA@XZ.c)
 *     ??1?$RefPtr@VInteractionTrackerInertiaNaturalMotion@Interactions@Composition@UI@Windows@@@WRL2@Microsoft@@QEAA@XZ @ 0x1800A203C (--1-$RefPtr@VInteractionTrackerInertiaNaturalMotion@Interactions@Composition@UI@Windows@@@WRL2@M.c)
 *     ??0InteropRemoteAppRenderTarget@Composition@UI@Windows@@QEAA@XZ @ 0x18015B4EC (--0InteropRemoteAppRenderTarget@Composition@UI@Windows@@QEAA@XZ.c)
 *     ?Attach@?$ComPtr@VInteropRemoteAppRenderTarget@Composition@UI@Windows@@@WRL@Microsoft@@QEAAXPEAVInteropRemoteAppRenderTarget@Composition@UI@Windows@@@Z @ 0x18015B62C (-Attach@-$ComPtr@VInteropRemoteAppRenderTarget@Composition@UI@Windows@@@WRL@Microsoft@@QEAAXPEAV.c)
 *     ?RuntimeClassInitialize@InteropRemoteAppRenderTarget@Composition@UI@Windows@@QEAAJPEAVCompositor@234@_NPEAX1@Z @ 0x1801983E4 (-RuntimeClassInitialize@InteropRemoteAppRenderTarget@Composition@UI@Windows@@QEAAJP_ea_1801983E4.c)
 */

__int64 __fastcall Microsoft::WRL2::Details::MakeAndInitialize2<Windows::UI::Composition::InteropRemoteAppRenderTarget,Windows::UI::Composition::InteropRemoteAppRenderTarget,Windows::UI::Composition::InteropCompositor * &,bool>(
        Windows::UI::Composition::InteropRemoteAppRenderTarget **a1,
        struct Windows::UI::Composition::Compositor **a2,
        bool *a3)
{
  void *v6; // rax
  int v7; // edi
  Windows::UI::Composition::InteropRemoteAppRenderTarget *v8; // rax
  Windows::UI::Composition::InteropRemoteAppRenderTarget *v9; // rbx
  Windows::UI::Composition::InteropRemoteAppRenderTarget *v10; // rcx
  Windows::UI::Composition::InteropRemoteAppRenderTarget *v12; // [rsp+50h] [rbp+8h] BYREF
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
  v8 = (Windows::UI::Composition::InteropRemoteAppRenderTarget *)memset_0(v6, 0, 0xA0uLL);
  if ( v8 )
    v8 = Windows::UI::Composition::InteropRemoteAppRenderTarget::InteropRemoteAppRenderTarget(v8);
  Microsoft::WRL::ComPtr<Windows::UI::Composition::InteropRemoteAppRenderTarget>::Attach(&v12, v8);
  v9 = v12;
  v13 = 0LL;
  v10 = v12;
  *((_QWORD *)v12 + 1) = &Windows::UI::Composition::InteropRemoteAppRenderTarget::s_InterfaceType;
  v7 = Windows::UI::Composition::InteropRemoteAppRenderTarget::RuntimeClassInitialize(v10, *a2, *a3, 0LL, 1);
  if ( v7 < 0 )
    goto LABEL_6;
  *a1 = v9;
  return 0LL;
}
