/*
 * XREFs of ??$MakeAndInitialize2@VCompositionProjectedShadowReceiverUnorderedCollection@Composition@UI@Windows@@V1234@AEAPEAVCompositionProjectedShadow@234@@Details@WRL2@Microsoft@@YAJPEAPEAVCompositionProjectedShadowReceiverUnorderedCollection@Composition@UI@Windows@@AEAPEAVCompositionProjectedShadow@456@@Z @ 0x1800084C4
 * Callers:
 *     ?get_Receivers@Api@CompositionProjectedShadow@Composition@UI@Windows@@UEAAJPEAPEAUICompositionProjectedShadowReceiverUnorderedCollection@345@@Z @ 0x180008420 (-get_Receivers@Api@CompositionProjectedShadow@Composition@UI@Windows@@UEAAJPEAPEAUICompositionPr.c)
 * Callees:
 *     ??4?$RefPtr@VCompositionProjectedShadow@Composition@UI@Windows@@@WRL2@Microsoft@@QEAAAEAV012@PEAVCompositionProjectedShadow@Composition@UI@Windows@@@Z @ 0x1800085AC (--4-$RefPtr@VCompositionProjectedShadow@Composition@UI@Windows@@@WRL2@Microsoft@@QEAAAEAV012@PEA.c)
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x18004400C (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     ??0CompositionObject@Composition@UI@Windows@@QEAA@XZ @ 0x180053828 (--0CompositionObject@Composition@UI@Windows@@QEAA@XZ.c)
 *     ?RuntimeClassInitialize@CompositionObject@Composition@UI@Windows@@QEAAJPEAVCompositor@234@@Z @ 0x180055F60 (-RuntimeClassInitialize@CompositionObject@Composition@UI@Windows@@QEAAJPEAVCompositor@234@@Z.c)
 *     memset_0 @ 0x18009698C (memset_0.c)
 *     ??1?$MakeAllocator@VInjectionAnimation@Composition@UI@Windows@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x1800A1230 (--1-$MakeAllocator@VInjectionAnimation@Composition@UI@Windows@@@Details@WRL@Microsoft@@QEAA@XZ.c)
 *     ??1?$RefPtr@VInteractionTrackerInertiaNaturalMotion@Interactions@Composition@UI@Windows@@@WRL2@Microsoft@@QEAA@XZ @ 0x1800A203C (--1-$RefPtr@VInteractionTrackerInertiaNaturalMotion@Interactions@Composition@UI@Windows@@@WRL2@M.c)
 */

__int64 __fastcall Microsoft::WRL2::Details::MakeAndInitialize2<Windows::UI::Composition::CompositionProjectedShadowReceiverUnorderedCollection,Windows::UI::Composition::CompositionProjectedShadowReceiverUnorderedCollection,Windows::UI::Composition::CompositionProjectedShadow * &>(
        Windows::UI::Composition::CompositionObject **a1,
        __int64 *a2)
{
  void *v4; // rax
  Windows::UI::Composition::CompositionObject *v5; // rax
  Windows::UI::Composition::CompositionObject *v6; // rdi
  __int64 v7; // rdx
  int v8; // ebx
  void *v10; // [rsp+40h] [rbp+8h] BYREF
  Windows::UI::Composition::CompositionObject *v11; // [rsp+50h] [rbp+18h] BYREF

  *a1 = 0LL;
  v11 = 0LL;
  v4 = DefaultHeap::Alloc(0xA0uLL);
  v10 = v4;
  if ( v4 )
  {
    v5 = (Windows::UI::Composition::CompositionObject *)memset_0(v4, 0, 0xA0uLL);
    v6 = v5;
    if ( v5 )
    {
      Windows::UI::Composition::CompositionObject::CompositionObject(v5);
      *(_QWORD *)v6 = &Windows::UI::Composition::CompositionProjectedShadowReceiverUnorderedCollection::`vftable';
      *((_QWORD *)v6 + 19) = 0LL;
      *((_QWORD *)v6 + 16) = &Windows::UI::Composition::CompositionProjectedShadowReceiverUnorderedCollection::Api::`vftable'{for `Windows::Foundation::Collections::IIterable<Windows::UI::Composition::CompositionProjectedShadowReceiver *>'};
      *((_QWORD *)v6 + 17) = &Windows::UI::Composition::CompositionProjectedShadowReceiverUnorderedCollection::Api::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Windows::UI::Composition::ICompositionProjectedShadowReceiverUnorderedCollection>'};
    }
    else
    {
      v6 = 0LL;
    }
    v10 = 0LL;
    *((_QWORD *)v6 + 1) = &Windows::UI::Composition::CompositionProjectedShadowReceiverUnorderedCollection::s_InterfaceType;
    v7 = *a2;
    v11 = v6;
    Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionProjectedShadow>::operator=((char *)v6 + 152, v7);
    v8 = Windows::UI::Composition::CompositionObject::RuntimeClassInitialize(
           v6,
           *(struct Windows::UI::Composition::Compositor **)(*((_QWORD *)v6 + 19) + 24LL));
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
  Microsoft::WRL::Details::MakeAllocator<Windows::UI::Composition::InjectionAnimation>::~MakeAllocator<Windows::UI::Composition::InjectionAnimation>(&v10);
  Microsoft::WRL2::RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>::~RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>(&v11);
  return (unsigned int)v8;
}
