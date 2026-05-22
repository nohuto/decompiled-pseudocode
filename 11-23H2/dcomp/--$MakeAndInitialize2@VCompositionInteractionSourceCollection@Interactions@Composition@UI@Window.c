/*
 * XREFs of ??$MakeAndInitialize2@VCompositionInteractionSourceCollection@Interactions@Composition@UI@Windows@@V12345@PEAVCompositor@345@PEAVInteractionTracker@2345@@Details@WRL2@Microsoft@@YAJPEAPEAVCompositionInteractionSourceCollection@Interactions@Composition@UI@Windows@@$$QEAPEAVCompositor@567@$$QEAPEAVInteractionTracker@4567@@Z @ 0x180134A34
 * Callers:
 *     ?GetInteractionSourceCollection@InteractionTracker@Interactions@Composition@UI@Windows@@QEAAPEAVCompositionInteractionSourceCollection@2345@XZ @ 0x1801396F8 (-GetInteractionSourceCollection@InteractionTracker@Interactions@Composition@UI@Windows@@QEAAPEAV.c)
 * Callees:
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x18004400C (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?RuntimeClassInitialize@CompositionObject@Composition@UI@Windows@@QEAAJPEAVCompositor@234@@Z @ 0x180055F60 (-RuntimeClassInitialize@CompositionObject@Composition@UI@Windows@@QEAAJPEAVCompositor@234@@Z.c)
 *     memset_0 @ 0x18009698C (memset_0.c)
 *     ??1?$MakeAllocator@VInjectionAnimation@Composition@UI@Windows@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x1800A1230 (--1-$MakeAllocator@VInjectionAnimation@Composition@UI@Windows@@@Details@WRL@Microsoft@@QEAA@XZ.c)
 *     ??1?$RefPtr@VInteractionTrackerInertiaNaturalMotion@Interactions@Composition@UI@Windows@@@WRL2@Microsoft@@QEAA@XZ @ 0x1800A203C (--1-$RefPtr@VInteractionTrackerInertiaNaturalMotion@Interactions@Composition@UI@Windows@@@WRL2@M.c)
 *     ??0CompositionInteractionSourceCollection@Interactions@Composition@UI@Windows@@QEAA@XZ @ 0x180135F70 (--0CompositionInteractionSourceCollection@Interactions@Composition@UI@Windows@@QEAA@XZ.c)
 */

__int64 __fastcall Microsoft::WRL2::Details::MakeAndInitialize2<Windows::UI::Composition::Interactions::CompositionInteractionSourceCollection,Windows::UI::Composition::Interactions::CompositionInteractionSourceCollection,Windows::UI::Composition::Compositor *,Windows::UI::Composition::Interactions::InteractionTracker *>(
        Microsoft::WRL2::NestableRuntimeClass **a1,
        struct Windows::UI::Composition::Compositor **a2,
        _QWORD *a3)
{
  void *v6; // rax
  int v7; // edi
  Windows::UI::Composition::Interactions::CompositionInteractionSourceCollection *v8; // rax
  Microsoft::WRL2::NestableRuntimeClass *v9; // rbx
  struct Windows::UI::Composition::Compositor *v10; // rdx
  void *v12; // [rsp+40h] [rbp+8h] BYREF
  Microsoft::WRL2::NestableRuntimeClass *v13; // [rsp+58h] [rbp+20h] BYREF

  *a1 = 0LL;
  v13 = 0LL;
  v6 = DefaultHeap::Alloc(0xC0uLL);
  v12 = v6;
  if ( !v6 )
  {
    v7 = -2147024882;
LABEL_7:
    Microsoft::WRL::Details::MakeAllocator<Windows::UI::Composition::InjectionAnimation>::~MakeAllocator<Windows::UI::Composition::InjectionAnimation>(&v12);
    Microsoft::WRL2::RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>::~RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>(&v13);
    return (unsigned int)v7;
  }
  v8 = (Windows::UI::Composition::Interactions::CompositionInteractionSourceCollection *)memset_0(v6, 0, 0xC0uLL);
  if ( v8 )
    v9 = (Microsoft::WRL2::NestableRuntimeClass *)Windows::UI::Composition::Interactions::CompositionInteractionSourceCollection::CompositionInteractionSourceCollection(v8);
  else
    v9 = 0LL;
  v12 = 0LL;
  *((_QWORD *)v9 + 1) = &Windows::UI::Composition::Interactions::CompositionInteractionSourceCollection::s_InterfaceType;
  v10 = *a2;
  *((_QWORD *)v9 + 19) = *a3;
  v13 = v9;
  v7 = Windows::UI::Composition::CompositionObject::RuntimeClassInitialize(v9, v10);
  if ( v7 < 0 )
    goto LABEL_7;
  *a1 = v9;
  return 0LL;
}
