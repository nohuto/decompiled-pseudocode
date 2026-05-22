/*
 * XREFs of ??$MakeAndInitialize2@VInteractionTracker@Interactions@Composition@UI@Windows@@V12345@PEAVCompositor@345@$$T@Details@WRL2@Microsoft@@YAJPEAPEAVInteractionTracker@Interactions@Composition@UI@Windows@@$$QEAPEAVCompositor@567@$$QEA$$T@Z @ 0x180134AF8
 * Callers:
 *     ?Create@InteractionTrackerStatics@Interactions@Composition@UI@Windows@@UEAAJPEAUICompositor@345@PEAPEAUIInteractionTracker@2345@@Z @ 0x180138700 (-Create@InteractionTrackerStatics@Interactions@Composition@UI@Windows@@UEAAJPEAUICompositor@345@.c)
 * Callees:
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x18004400C (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     memset_0 @ 0x18009698C (memset_0.c)
 *     ??1?$MakeAllocator@VInjectionAnimation@Composition@UI@Windows@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x1800A1230 (--1-$MakeAllocator@VInjectionAnimation@Composition@UI@Windows@@@Details@WRL@Microsoft@@QEAA@XZ.c)
 *     ??1?$RefPtr@VInteractionTrackerInertiaNaturalMotion@Interactions@Composition@UI@Windows@@@WRL2@Microsoft@@QEAA@XZ @ 0x1800A203C (--1-$RefPtr@VInteractionTrackerInertiaNaturalMotion@Interactions@Composition@UI@Windows@@@WRL2@M.c)
 *     ??0InteractionTracker@Interactions@Composition@UI@Windows@@QEAA@XZ @ 0x180135FD4 (--0InteractionTracker@Interactions@Composition@UI@Windows@@QEAA@XZ.c)
 *     ?Attach@?$ComPtr@VInteractionTracker@Interactions@Composition@UI@Windows@@@WRL@Microsoft@@QEAAXPEAVInteractionTracker@Interactions@Composition@UI@Windows@@@Z @ 0x1801370D4 (-Attach@-$ComPtr@VInteractionTracker@Interactions@Composition@UI@Windows@@@WRL@Microsoft@@QEAAXP.c)
 *     ?RuntimeClassInitialize@InteractionTracker@Interactions@Composition@UI@Windows@@QEAAJPEAVCompositor@345@PEAUIInteractionTrackerOwner@2345@@Z @ 0x18013A984 (-RuntimeClassInitialize@InteractionTracker@Interactions@Composition@UI@Windows@@QEAAJPEAVComposi.c)
 */

__int64 __fastcall Microsoft::WRL2::Details::MakeAndInitialize2<Windows::UI::Composition::Interactions::InteractionTracker,Windows::UI::Composition::Interactions::InteractionTracker,Windows::UI::Composition::Compositor *,std::nullptr_t>(
        Windows::UI::Composition::Interactions::InteractionTracker **a1,
        struct Windows::UI::Composition::Compositor **a2,
        struct Windows::UI::Composition::Interactions::IInteractionTrackerOwner **a3)
{
  void *v6; // rax
  int v7; // edi
  Windows::UI::Composition::Interactions::InteractionTracker *v8; // rax
  Windows::UI::Composition::Interactions::InteractionTracker *v9; // rbx
  Windows::UI::Composition::Interactions::InteractionTracker *v10; // rcx
  Windows::UI::Composition::Interactions::InteractionTracker *v12; // [rsp+40h] [rbp+8h] BYREF
  void *v13; // [rsp+58h] [rbp+20h] BYREF

  *a1 = 0LL;
  v12 = 0LL;
  v6 = DefaultHeap::Alloc(0x1A0uLL);
  v13 = v6;
  if ( !v6 )
  {
    v7 = -2147024882;
LABEL_6:
    Microsoft::WRL::Details::MakeAllocator<Windows::UI::Composition::InjectionAnimation>::~MakeAllocator<Windows::UI::Composition::InjectionAnimation>(&v13);
    Microsoft::WRL2::RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>::~RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>(&v12);
    return (unsigned int)v7;
  }
  v8 = (Windows::UI::Composition::Interactions::InteractionTracker *)memset_0(v6, 0, 0x1A0uLL);
  if ( v8 )
    v8 = (Windows::UI::Composition::Interactions::InteractionTracker *)Windows::UI::Composition::Interactions::InteractionTracker::InteractionTracker(v8);
  Microsoft::WRL::ComPtr<Windows::UI::Composition::Interactions::InteractionTracker>::Attach(&v12, v8);
  v9 = v12;
  v13 = 0LL;
  v10 = v12;
  *((_QWORD *)v12 + 1) = &Windows::UI::Composition::Interactions::InteractionTracker::s_InterfaceType;
  v7 = Windows::UI::Composition::Interactions::InteractionTracker::RuntimeClassInitialize(v10, *a2, *a3);
  if ( v7 < 0 )
    goto LABEL_6;
  *a1 = v9;
  return 0LL;
}
