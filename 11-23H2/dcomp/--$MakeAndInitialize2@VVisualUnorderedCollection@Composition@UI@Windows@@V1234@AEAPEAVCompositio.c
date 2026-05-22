/*
 * XREFs of ??$MakeAndInitialize2@VVisualUnorderedCollection@Composition@UI@Windows@@V1234@AEAPEAVCompositionLight@234@PEAVVisualUnorderedCollectionImpl@234@PEAVCompositor@234@@Details@WRL2@Microsoft@@YAJPEAPEAVVisualUnorderedCollection@Composition@UI@Windows@@AEAPEAVCompositionLight@456@$$QEAPEAVVisualUnorderedCollectionImpl@456@$$QEAPEAVCompositor@456@@Z @ 0x1800087F4
 * Callers:
 *     ?get_Targets@Api@CompositionLight@Composition@UI@Windows@@UEAAJPEAPEAUIVisualUnorderedCollection@345@@Z @ 0x180008740 (-get_Targets@Api@CompositionLight@Composition@UI@Windows@@UEAAJPEAPEAUIVisualUnorderedCollection.c)
 *     ?get_ExclusionsFromTargets@Api@CompositionLight@Composition@UI@Windows@@UEAAJPEAPEAUIVisualUnorderedCollection@345@@Z @ 0x18018AA50 (-get_ExclusionsFromTargets@Api@CompositionLight@Composition@UI@Windows@@UEAAJPEAPEAUIVisualUnord.c)
 * Callees:
 *     ?RuntimeClassInitialize@VisualUnorderedCollection@Composition@UI@Windows@@QEAAJPEAVAccessor@VisualUnorderedCollectionImpl@234@PEAV6234@PEAVCompositor@234@@Z @ 0x1800088E4 (-RuntimeClassInitialize@VisualUnorderedCollection@Composition@UI@Windows@@QEAAJPEAVAccessor@Visu.c)
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x18004400C (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     ??0CompositionObject@Composition@UI@Windows@@QEAA@XZ @ 0x180053828 (--0CompositionObject@Composition@UI@Windows@@QEAA@XZ.c)
 *     memset_0 @ 0x18009698C (memset_0.c)
 *     ??1?$MakeAllocator@VInjectionAnimation@Composition@UI@Windows@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x1800A1230 (--1-$MakeAllocator@VInjectionAnimation@Composition@UI@Windows@@@Details@WRL@Microsoft@@QEAA@XZ.c)
 *     ??1?$RefPtr@VInteractionTrackerInertiaNaturalMotion@Interactions@Composition@UI@Windows@@@WRL2@Microsoft@@QEAA@XZ @ 0x1800A203C (--1-$RefPtr@VInteractionTrackerInertiaNaturalMotion@Interactions@Composition@UI@Windows@@@WRL2@M.c)
 */

__int64 __fastcall Microsoft::WRL2::Details::MakeAndInitialize2<Windows::UI::Composition::VisualUnorderedCollection,Windows::UI::Composition::VisualUnorderedCollection,Windows::UI::Composition::CompositionLight * &,Windows::UI::Composition::VisualUnorderedCollectionImpl *,Windows::UI::Composition::Compositor *>(
        Windows::UI::Composition::CompositionObject **a1,
        unsigned __int64 *a2,
        struct Windows::UI::Composition::VisualUnorderedCollectionImpl **a3,
        struct Windows::UI::Composition::Compositor **a4)
{
  void *v8; // rax
  Windows::UI::Composition::CompositionObject *v9; // rax
  Windows::UI::Composition::CompositionObject *v10; // rbx
  unsigned __int64 v11; // rax
  struct Windows::UI::Composition::Compositor *v12; // r9
  struct Windows::UI::Composition::VisualUnorderedCollectionImpl *v13; // r8
  int v14; // edi
  Windows::UI::Composition::CompositionObject *v16; // [rsp+20h] [rbp-28h] BYREF
  void *v17; // [rsp+50h] [rbp+8h] BYREF

  *a1 = 0LL;
  v16 = 0LL;
  v8 = DefaultHeap::Alloc(0xA8uLL);
  v17 = v8;
  if ( v8 )
  {
    v9 = (Windows::UI::Composition::CompositionObject *)memset_0(v8, 0, 0xA8uLL);
    v10 = v9;
    if ( v9 )
    {
      Windows::UI::Composition::CompositionObject::CompositionObject(v9);
      *(_QWORD *)v10 = &Windows::UI::Composition::VisualUnorderedCollection::`vftable';
      *((_QWORD *)v10 + 16) = &Windows::UI::Composition::VisualUnorderedCollection::Api::`vftable'{for `Windows::Foundation::Collections::IIterable<Windows::UI::Composition::Visual *>'};
      *((_QWORD *)v10 + 17) = &Windows::UI::Composition::VisualUnorderedCollection::Api::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Windows::UI::Composition::IVisualUnorderedCollection>'};
    }
    else
    {
      v10 = 0LL;
    }
    v17 = 0LL;
    *((_QWORD *)v10 + 1) = &Windows::UI::Composition::VisualUnorderedCollection::s_InterfaceType;
    v11 = *a2;
    v12 = *a4;
    v13 = *a3;
    v16 = v10;
    v14 = Windows::UI::Composition::VisualUnorderedCollection::RuntimeClassInitialize(
            v10,
            (struct Windows::UI::Composition::VisualUnorderedCollectionImpl::Accessor *)((v11 + 136) & ((unsigned __int128)-(__int128)v11 >> 64)),
            v13,
            v12);
    if ( v14 >= 0 )
    {
      *a1 = v10;
      return 0LL;
    }
  }
  else
  {
    v14 = -2147024882;
  }
  Microsoft::WRL::Details::MakeAllocator<Windows::UI::Composition::InjectionAnimation>::~MakeAllocator<Windows::UI::Composition::InjectionAnimation>(&v17);
  Microsoft::WRL2::RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>::~RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>(&v16);
  return (unsigned int)v14;
}
