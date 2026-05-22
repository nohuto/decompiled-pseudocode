/*
 * XREFs of ??$MakeAndInitialize2@VInteropVisualReferenceController@Composition@UI@Windows@@V1234@PEAVInteropCompositor@234@@Details@WRL2@Microsoft@@YAJPEAPEAVInteropVisualReferenceController@Composition@UI@Windows@@$$QEAPEAVInteropCompositor@456@@Z @ 0x18015C164
 * Callers:
 *     ?CreateInteropVisualReferenceController@InteropCompositor@Composition@UI@Windows@@QEAAJPEAVInteropVisual@234@PEAPEAVInteropVisualReferenceController@234@@Z @ 0x18015D0F0 (-CreateInteropVisualReferenceController@InteropCompositor@Composition@UI@Windows@@QEAAJPEAVInter.c)
 * Callees:
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x18004400C (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     memset_0 @ 0x18009698C (memset_0.c)
 *     ??1?$MakeAllocator@VInjectionAnimation@Composition@UI@Windows@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x1800A1230 (--1-$MakeAllocator@VInjectionAnimation@Composition@UI@Windows@@@Details@WRL@Microsoft@@QEAA@XZ.c)
 *     ??1?$RefPtr@VInteractionTrackerInertiaNaturalMotion@Interactions@Composition@UI@Windows@@@WRL2@Microsoft@@QEAA@XZ @ 0x1800A203C (--1-$RefPtr@VInteractionTrackerInertiaNaturalMotion@Interactions@Composition@UI@Windows@@@WRL2@M.c)
 *     ??0InteropVisualReferenceController@Composition@UI@Windows@@QEAA@XZ @ 0x18015C2E8 (--0InteropVisualReferenceController@Composition@UI@Windows@@QEAA@XZ.c)
 *     ?Attach@?$ComPtr@VInteropVisualReferenceController@Composition@UI@Windows@@@WRL@Microsoft@@QEAAXPEAVInteropVisualReferenceController@Composition@UI@Windows@@@Z @ 0x18015C3EC (-Attach@-$ComPtr@VInteropVisualReferenceController@Composition@UI@Windows@@@WRL@Microsoft@@QEAAX.c)
 *     ?RuntimeClassInitialize@InteropVisualReferenceController@Composition@UI@Windows@@QEAAJPEAVCompositor@234@_N@Z @ 0x18019A7F0 (-RuntimeClassInitialize@InteropVisualReferenceController@Composition@UI@Windows@@QEAAJPEAVCompos.c)
 */

__int64 __fastcall Microsoft::WRL2::Details::MakeAndInitialize2<Windows::UI::Composition::InteropVisualReferenceController,Windows::UI::Composition::InteropVisualReferenceController,Windows::UI::Composition::InteropCompositor *>(
        Windows::UI::Composition::InteropVisualReferenceController **a1,
        struct Windows::UI::Composition::Compositor **a2)
{
  void *v4; // rax
  int v5; // edi
  Windows::UI::Composition::InteropVisualReferenceController *v6; // rax
  Windows::UI::Composition::InteropVisualReferenceController *v7; // rbx
  Windows::UI::Composition::InteropVisualReferenceController *v8; // rcx
  Windows::UI::Composition::InteropVisualReferenceController *v10; // [rsp+30h] [rbp+8h] BYREF
  void *v11; // [rsp+40h] [rbp+18h] BYREF

  *a1 = 0LL;
  v10 = 0LL;
  v4 = DefaultHeap::Alloc(0xD0uLL);
  v11 = v4;
  if ( !v4 )
  {
    v5 = -2147024882;
LABEL_6:
    Microsoft::WRL::Details::MakeAllocator<Windows::UI::Composition::InjectionAnimation>::~MakeAllocator<Windows::UI::Composition::InjectionAnimation>(&v11);
    Microsoft::WRL2::RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>::~RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>(&v10);
    return (unsigned int)v5;
  }
  v6 = (Windows::UI::Composition::InteropVisualReferenceController *)memset_0(v4, 0, 0xD0uLL);
  if ( v6 )
    v6 = (Windows::UI::Composition::InteropVisualReferenceController *)Windows::UI::Composition::InteropVisualReferenceController::InteropVisualReferenceController(v6);
  Microsoft::WRL::ComPtr<Windows::UI::Composition::InteropVisualReferenceController>::Attach(&v10, v6);
  v7 = v10;
  v11 = 0LL;
  v8 = v10;
  *((_QWORD *)v10 + 1) = &Windows::UI::Composition::InteropVisualReferenceController::s_InterfaceType;
  v5 = Windows::UI::Composition::InteropVisualReferenceController::RuntimeClassInitialize(v8, *a2, 0);
  if ( v5 < 0 )
    goto LABEL_6;
  *a1 = v7;
  return 0LL;
}
