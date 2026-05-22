/*
 * XREFs of ??$MakeAndInitialize2@VInitialValueExpressionCollection@Composition@UI@Windows@@V1234@PEAVCompositionAnimation@234@@Details@WRL2@Microsoft@@YAJPEAPEAVInitialValueExpressionCollection@Composition@UI@Windows@@$$QEAPEAVCompositionAnimation@456@@Z @ 0x18014DFC8
 * Callers:
 *     ?GetInitialValueExpressions@CompositionAnimation@Composition@UI@Windows@@QEAAJPEAPEAVInitialValueExpressionCollection@234@@Z @ 0x18014F2CC (-GetInitialValueExpressions@CompositionAnimation@Composition@UI@Windows@@QEAAJPEAPEAVInitialValu.c)
 * Callees:
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x18004400C (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     memset_0 @ 0x18009698C (memset_0.c)
 *     ??1?$MakeAllocator@VInjectionAnimation@Composition@UI@Windows@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x1800A1230 (--1-$MakeAllocator@VInjectionAnimation@Composition@UI@Windows@@@Details@WRL@Microsoft@@QEAA@XZ.c)
 *     ??1?$RefPtr@VInteractionTrackerInertiaNaturalMotion@Interactions@Composition@UI@Windows@@@WRL2@Microsoft@@QEAA@XZ @ 0x1800A203C (--1-$RefPtr@VInteractionTrackerInertiaNaturalMotion@Interactions@Composition@UI@Windows@@@WRL2@M.c)
 *     ??0InitialValueExpressionCollection@Composition@UI@Windows@@QEAA@XZ @ 0x18014EDA8 (--0InitialValueExpressionCollection@Composition@UI@Windows@@QEAA@XZ.c)
 *     ?RuntimeClassInitialize@InitialValueExpressionCollection@Composition@UI@Windows@@QEAAJPEAVCompositionAnimation@234@@Z @ 0x1801952DC (-RuntimeClassInitialize@InitialValueExpressionCollection@Composition@UI@Windows@@QEAAJPEAVCompos.c)
 */

__int64 __fastcall Microsoft::WRL2::Details::MakeAndInitialize2<Windows::UI::Composition::InitialValueExpressionCollection,Windows::UI::Composition::InitialValueExpressionCollection,Windows::UI::Composition::CompositionAnimation *>(
        Microsoft::WRL2::NestableRuntimeClass **a1,
        struct Windows::UI::Composition::CompositionAnimation **a2)
{
  void *v4; // rax
  int v5; // edi
  Windows::UI::Composition::InitialValueExpressionCollection *v6; // rax
  Microsoft::WRL2::NestableRuntimeClass *v7; // rbx
  struct Windows::UI::Composition::CompositionAnimation *v8; // rdx
  void *v10; // [rsp+30h] [rbp+8h] BYREF
  Microsoft::WRL2::NestableRuntimeClass *v11; // [rsp+40h] [rbp+18h] BYREF

  *a1 = 0LL;
  v11 = 0LL;
  v4 = DefaultHeap::Alloc(0xB8uLL);
  v10 = v4;
  if ( !v4 )
  {
    v5 = -2147024882;
LABEL_7:
    Microsoft::WRL::Details::MakeAllocator<Windows::UI::Composition::InjectionAnimation>::~MakeAllocator<Windows::UI::Composition::InjectionAnimation>(&v10);
    Microsoft::WRL2::RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>::~RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>(&v11);
    return (unsigned int)v5;
  }
  v6 = (Windows::UI::Composition::InitialValueExpressionCollection *)memset_0(v4, 0, 0xB8uLL);
  if ( v6 )
    v7 = (Microsoft::WRL2::NestableRuntimeClass *)Windows::UI::Composition::InitialValueExpressionCollection::InitialValueExpressionCollection(v6);
  else
    v7 = 0LL;
  v10 = 0LL;
  *((_QWORD *)v7 + 1) = &Windows::UI::Composition::InitialValueExpressionCollection::s_InterfaceType;
  v8 = *a2;
  v11 = v7;
  v5 = Windows::UI::Composition::InitialValueExpressionCollection::RuntimeClassInitialize(v7, v8);
  if ( v5 < 0 )
    goto LABEL_7;
  *a1 = v7;
  return 0LL;
}
