/*
 * XREFs of ??$MakeAndInitialize2@VInteropRemoteRenderTarget@Composition@UI@Windows@@V1234@AEAPEAVInteropCompositor@234@AEAU_LUID@@@Details@WRL2@Microsoft@@YAJPEAPEAVInteropRemoteRenderTarget@Composition@UI@Windows@@AEAPEAVInteropCompositor@456@AEAU_LUID@@@Z @ 0x180091764
 * Callers:
 *     ?CreateRemoteRenderTarget@Api@InteropCompositor@Composition@UI@Windows@@UEAAJU_LUID@@PEAPEAUIDCompositionRenderTargetPartner@@@Z @ 0x1800916D0 (-CreateRemoteRenderTarget@Api@InteropCompositor@Composition@UI@Windows@@UEAAJU_LUID@@PEAPEAUIDCo.c)
 * Callees:
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x18004400C (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?RuntimeClassInitialize@InteropRemoteRenderTarget@Composition@UI@Windows@@QEAAJPEAVCompositor@234@U_LUID@@@Z @ 0x180091814 (-RuntimeClassInitialize@InteropRemoteRenderTarget@Composition@UI@Windows@@QEAAJPEAVCompositor@23.c)
 *     ??0InteropRenderTarget@Composition@UI@Windows@@QEAA@XZ @ 0x180092678 (--0InteropRenderTarget@Composition@UI@Windows@@QEAA@XZ.c)
 *     memset_0 @ 0x18009698C (memset_0.c)
 *     ??1?$MakeAllocator@VInjectionAnimation@Composition@UI@Windows@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x1800A1230 (--1-$MakeAllocator@VInjectionAnimation@Composition@UI@Windows@@@Details@WRL@Microsoft@@QEAA@XZ.c)
 *     ??1?$RefPtr@VInteractionTrackerInertiaNaturalMotion@Interactions@Composition@UI@Windows@@@WRL2@Microsoft@@QEAA@XZ @ 0x1800A203C (--1-$RefPtr@VInteractionTrackerInertiaNaturalMotion@Interactions@Composition@UI@Windows@@@WRL2@M.c)
 */

__int64 __fastcall Microsoft::WRL2::Details::MakeAndInitialize2<Windows::UI::Composition::InteropRemoteRenderTarget,Windows::UI::Composition::InteropRemoteRenderTarget,Windows::UI::Composition::InteropCompositor * &,_LUID &>(
        Windows::UI::Composition::InteropRenderTarget **a1,
        struct Windows::UI::Composition::Compositor **a2,
        struct _LUID *a3)
{
  void *v6; // rax
  Windows::UI::Composition::InteropRenderTarget *v7; // rax
  Windows::UI::Composition::InteropRenderTarget *v8; // rbx
  struct _LUID v9; // r8
  struct Windows::UI::Composition::Compositor *v10; // rdx
  int v11; // edi
  void *v13; // [rsp+40h] [rbp+8h] BYREF
  Windows::UI::Composition::InteropRenderTarget *v14; // [rsp+58h] [rbp+20h] BYREF

  *a1 = 0LL;
  v14 = 0LL;
  v6 = DefaultHeap::Alloc(0xA0uLL);
  v13 = v6;
  if ( v6 )
  {
    v7 = (Windows::UI::Composition::InteropRenderTarget *)memset_0(v6, 0, 0xA0uLL);
    v8 = v7;
    if ( v7 )
    {
      Windows::UI::Composition::InteropRenderTarget::InteropRenderTarget(v7);
      *(_QWORD *)v8 = &Windows::UI::Composition::InteropRemoteRenderTarget::`vftable';
    }
    else
    {
      v8 = 0LL;
    }
    v13 = 0LL;
    *((_QWORD *)v8 + 1) = &Windows::UI::Composition::InteropRenderTarget::s_InterfaceType;
    v9 = *a3;
    v10 = *a2;
    v14 = v8;
    v11 = Windows::UI::Composition::InteropRemoteRenderTarget::RuntimeClassInitialize(v8, v10, v9);
    if ( v11 >= 0 )
    {
      *a1 = v8;
      return 0LL;
    }
  }
  else
  {
    v11 = -2147024882;
  }
  Microsoft::WRL::Details::MakeAllocator<Windows::UI::Composition::InjectionAnimation>::~MakeAllocator<Windows::UI::Composition::InjectionAnimation>(&v13);
  Microsoft::WRL2::RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>::~RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>(&v14);
  return (unsigned int)v11;
}
