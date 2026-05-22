/*
 * XREFs of ??$MakeAndInitialize2@VInitialValueExpressionCollectionMapView@Composition@UI@Windows@@V1234@PEAVInitialValueExpressionCollection@234@@Details@WRL2@Microsoft@@YAJPEAPEAVInitialValueExpressionCollectionMapView@Composition@UI@Windows@@$$QEAPEAVInitialValueExpressionCollection@456@@Z @ 0x1801944D4
 * Callers:
 *     ?GetView@Api@InitialValueExpressionCollection@Composition@UI@Windows@@UEAAJPEAPEAU?$IMapView@PEAUHSTRING__@@PEAU1@@Collections@Foundation@5@@Z @ 0x180194B80 (-GetView@Api@InitialValueExpressionCollection@Composition@UI@Windows@@UEAAJPEAPEAU-$IMapView@PEA.c)
 * Callees:
 *     ??0NestableRuntimeClass@WRL2@Microsoft@@QEAA@XZ @ 0x180040E8C (--0NestableRuntimeClass@WRL2@Microsoft@@QEAA@XZ.c)
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x18004400C (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     memset_0 @ 0x18009698C (memset_0.c)
 *     ??1?$MakeAllocator@VInjectionAnimation@Composition@UI@Windows@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x1800A1230 (--1-$MakeAllocator@VInjectionAnimation@Composition@UI@Windows@@@Details@WRL@Microsoft@@QEAA@XZ.c)
 *     ??1?$RefPtr@VInteractionTrackerInertiaNaturalMotion@Interactions@Composition@UI@Windows@@@WRL2@Microsoft@@QEAA@XZ @ 0x1800A203C (--1-$RefPtr@VInteractionTrackerInertiaNaturalMotion@Interactions@Composition@UI@Windows@@@WRL2@M.c)
 *     ?RuntimeClassInitialize@InitialValueExpressionCollectionMapView@Composition@UI@Windows@@QEAAJPEAVInitialValueExpressionCollection@234@@Z @ 0x1801A260C (-RuntimeClassInitialize@InitialValueExpressionCollectionMapView@Composition@UI@Windows@@QEAAJPEA.c)
 */

__int64 __fastcall Microsoft::WRL2::Details::MakeAndInitialize2<Windows::UI::Composition::InitialValueExpressionCollectionMapView,Windows::UI::Composition::InitialValueExpressionCollectionMapView,Windows::UI::Composition::InitialValueExpressionCollection *>(
        Microsoft::WRL2::NestableRuntimeClass **a1,
        struct Windows::UI::Composition::InitialValueExpressionCollection **a2)
{
  void *v4; // rax
  int v5; // edi
  Microsoft::WRL2::NestableRuntimeClass *v6; // rax
  Microsoft::WRL2::NestableRuntimeClass *v7; // rbx
  struct Windows::UI::Composition::InitialValueExpressionCollection *v8; // rdx
  void *v10; // [rsp+30h] [rbp+8h] BYREF
  Microsoft::WRL2::NestableRuntimeClass *v11; // [rsp+40h] [rbp+18h] BYREF

  *a1 = 0LL;
  v11 = 0LL;
  v4 = DefaultHeap::Alloc(0x48uLL);
  v10 = v4;
  if ( !v4 )
  {
    v5 = -2147024882;
LABEL_7:
    Microsoft::WRL::Details::MakeAllocator<Windows::UI::Composition::InjectionAnimation>::~MakeAllocator<Windows::UI::Composition::InjectionAnimation>(&v10);
    Microsoft::WRL2::RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>::~RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>(&v11);
    return (unsigned int)v5;
  }
  v6 = (Microsoft::WRL2::NestableRuntimeClass *)memset_0(v4, 0, 0x48uLL);
  v7 = v6;
  if ( v6 )
  {
    Microsoft::WRL2::NestableRuntimeClass::NestableRuntimeClass(v6);
    *(_QWORD *)v7 = &Windows::UI::Composition::InitialValueExpressionCollectionMapView::`vftable';
    *((_QWORD *)v7 + 8) = 0LL;
    *((_QWORD *)v7 + 5) = &Windows::UI::Composition::InitialValueExpressionCollectionMapView::Api::`vftable'{for `Windows::Foundation::Collections::IMapView<HSTRING__ *,HSTRING__ *>'};
    *((_QWORD *)v7 + 6) = &Windows::UI::Composition::InitialValueExpressionCollectionMapView::Api::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Windows::Foundation::Collections::IIterable<Windows::Foundation::Collections::IKeyValuePair<HSTRING__ *,HSTRING__ *> *>>'};
  }
  else
  {
    v7 = 0LL;
  }
  v10 = 0LL;
  *((_QWORD *)v7 + 1) = &Windows::UI::Composition::InitialValueExpressionCollectionMapView::s_InterfaceType;
  v8 = *a2;
  v11 = v7;
  v5 = Windows::UI::Composition::InitialValueExpressionCollectionMapView::RuntimeClassInitialize(v7, v8);
  if ( v5 < 0 )
    goto LABEL_7;
  *a1 = v7;
  return 0LL;
}
