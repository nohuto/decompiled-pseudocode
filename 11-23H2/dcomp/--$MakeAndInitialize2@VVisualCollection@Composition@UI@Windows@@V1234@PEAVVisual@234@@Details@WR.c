/*
 * XREFs of ??$MakeAndInitialize2@VVisualCollection@Composition@UI@Windows@@V1234@PEAVVisual@234@@Details@WRL2@Microsoft@@YAJPEAPEAVVisualCollection@Composition@UI@Windows@@$$QEAPEAVVisual@456@@Z @ 0x18008A02C
 * Callers:
 *     ?get_Children@Api@VisualTreeIsland@Composition@UI@Windows@@UEAAJPEAPEAUIVisualCollection@345@@Z @ 0x180089F70 (-get_Children@Api@VisualTreeIsland@Composition@UI@Windows@@UEAAJPEAPEAUIVisualCollection@345@@Z.c)
 * Callees:
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x18004400C (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     ??0VisualCollection@Composition@UI@Windows@@QEAA@XZ @ 0x18008A0D8 (--0VisualCollection@Composition@UI@Windows@@QEAA@XZ.c)
 *     ?RuntimeClassInitialize@VisualCollection@Composition@UI@Windows@@QEAAJPEAVVisual@234@@Z @ 0x18008A124 (-RuntimeClassInitialize@VisualCollection@Composition@UI@Windows@@QEAAJPEAVVisual@234@@Z.c)
 *     ?Attach@?$ComPtr@VVisualCollection@Composition@UI@Windows@@@WRL@Microsoft@@QEAAXPEAVVisualCollection@Composition@UI@Windows@@@Z @ 0x18008A15C (-Attach@-$ComPtr@VVisualCollection@Composition@UI@Windows@@@WRL@Microsoft@@QEAAXPEAVVisualCollec.c)
 *     memset_0 @ 0x18009698C (memset_0.c)
 *     ??1?$MakeAllocator@VInjectionAnimation@Composition@UI@Windows@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x1800A1230 (--1-$MakeAllocator@VInjectionAnimation@Composition@UI@Windows@@@Details@WRL@Microsoft@@QEAA@XZ.c)
 *     ??1?$RefPtr@VInteractionTrackerInertiaNaturalMotion@Interactions@Composition@UI@Windows@@@WRL2@Microsoft@@QEAA@XZ @ 0x1800A203C (--1-$RefPtr@VInteractionTrackerInertiaNaturalMotion@Interactions@Composition@UI@Windows@@@WRL2@M.c)
 */

__int64 __fastcall Microsoft::WRL2::Details::MakeAndInitialize2<Windows::UI::Composition::VisualCollection,Windows::UI::Composition::VisualCollection,Windows::UI::Composition::Visual *>(
        Windows::UI::Composition::VisualCollection **a1,
        struct Windows::UI::Composition::Visual **a2)
{
  void *v4; // rax
  Windows::UI::Composition::VisualCollection *v5; // rax
  Windows::UI::Composition::VisualCollection *v6; // rbx
  Windows::UI::Composition::VisualCollection *v7; // rcx
  int v8; // edi
  Windows::UI::Composition::VisualCollection *v10; // [rsp+30h] [rbp+8h] BYREF
  void *v11; // [rsp+40h] [rbp+18h] BYREF

  *a1 = 0LL;
  v10 = 0LL;
  v4 = DefaultHeap::Alloc(0xA0uLL);
  v11 = v4;
  if ( v4 )
  {
    v5 = (Windows::UI::Composition::VisualCollection *)memset_0(v4, 0, 0xA0uLL);
    if ( v5 )
      v5 = (Windows::UI::Composition::VisualCollection *)Windows::UI::Composition::VisualCollection::VisualCollection(v5);
    Microsoft::WRL::ComPtr<Windows::UI::Composition::VisualCollection>::Attach(&v10, v5);
    v6 = v10;
    v11 = 0LL;
    v7 = v10;
    *((_QWORD *)v10 + 1) = &Windows::UI::Composition::VisualCollection::s_InterfaceType;
    v8 = Windows::UI::Composition::VisualCollection::RuntimeClassInitialize(v7, *a2);
    if ( v8 >= 0 )
    {
      *a1 = v6;
      return 0LL;
    }
  }
  else
  {
    v8 = -2147024882;
  }
  Microsoft::WRL::Details::MakeAllocator<Windows::UI::Composition::InjectionAnimation>::~MakeAllocator<Windows::UI::Composition::InjectionAnimation>(&v11);
  Microsoft::WRL2::RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>::~RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>(&v10);
  return (unsigned int)v8;
}
