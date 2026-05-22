/*
 * XREFs of ??$MakeAndInitialize2@VComponentTransform2D@Composition@UI@Windows@@V1234@PEAVCompositionSurfaceBrush@234@@Details@WRL2@Microsoft@@YAJPEAPEAVComponentTransform2D@Composition@UI@Windows@@$$QEAPEAVCompositionSurfaceBrush@456@@Z @ 0x18006E6AC
 * Callers:
 *     ?EnsureComponentTransform@CompositionSurfaceBrush@Composition@UI@Windows@@QEAAJXZ @ 0x18006E764 (-EnsureComponentTransform@CompositionSurfaceBrush@Composition@UI@Windows@@QEAAJXZ.c)
 * Callees:
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x18004400C (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     ??0CompositionObject@Composition@UI@Windows@@QEAA@XZ @ 0x180053828 (--0CompositionObject@Composition@UI@Windows@@QEAA@XZ.c)
 *     ?RuntimeClassInitialize@ComponentTransform2D@Composition@UI@Windows@@QEAAJPEAVCompositionObject@234@@Z @ 0x180071B74 (-RuntimeClassInitialize@ComponentTransform2D@Composition@UI@Windows@@QEAAJPEAVCompositionObject@.c)
 *     ?Attach@?$ComPtr@VComponentTransform2D@Composition@UI@Windows@@@WRL@Microsoft@@QEAAXPEAVComponentTransform2D@Composition@UI@Windows@@@Z @ 0x180071BF4 (-Attach@-$ComPtr@VComponentTransform2D@Composition@UI@Windows@@@WRL@Microsoft@@QEAAXPEAVComponen.c)
 *     memset_0 @ 0x18009698C (memset_0.c)
 *     ??1?$MakeAllocator@VInjectionAnimation@Composition@UI@Windows@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x1800A1230 (--1-$MakeAllocator@VInjectionAnimation@Composition@UI@Windows@@@Details@WRL@Microsoft@@QEAA@XZ.c)
 *     ??1?$RefPtr@VInteractionTrackerInertiaNaturalMotion@Interactions@Composition@UI@Windows@@@WRL2@Microsoft@@QEAA@XZ @ 0x1800A203C (--1-$RefPtr@VInteractionTrackerInertiaNaturalMotion@Interactions@Composition@UI@Windows@@@WRL2@M.c)
 */

__int64 __fastcall Microsoft::WRL2::Details::MakeAndInitialize2<Windows::UI::Composition::ComponentTransform2D,Windows::UI::Composition::ComponentTransform2D,Windows::UI::Composition::CompositionSurfaceBrush *>(
        Windows::UI::Composition::ComponentTransform2D **a1,
        struct Windows::UI::Composition::CompositionObject **a2)
{
  void *v4; // rax
  Windows::UI::Composition::CompositionObject *v5; // rax
  Windows::UI::Composition::CompositionObject *v6; // rbx
  Windows::UI::Composition::ComponentTransform2D *v7; // rbx
  Windows::UI::Composition::ComponentTransform2D *v8; // rcx
  int v9; // edi
  Windows::UI::Composition::ComponentTransform2D *v11; // [rsp+30h] [rbp+8h] BYREF
  void *v12; // [rsp+40h] [rbp+18h] BYREF

  *a1 = 0LL;
  v11 = 0LL;
  v4 = DefaultHeap::Alloc(0xD0uLL);
  v12 = v4;
  if ( v4 )
  {
    v5 = (Windows::UI::Composition::CompositionObject *)memset_0(v4, 0, 0xD0uLL);
    v6 = v5;
    if ( v5 )
    {
      Windows::UI::Composition::CompositionObject::CompositionObject(v5);
      *(_QWORD *)v6 = &Windows::UI::Composition::ComponentTransform2D::`vftable';
    }
    else
    {
      v6 = 0LL;
    }
    Microsoft::WRL::ComPtr<Windows::UI::Composition::ComponentTransform2D>::Attach(&v11, v6);
    v7 = v11;
    v12 = 0LL;
    v8 = v11;
    *((_QWORD *)v11 + 1) = &Windows::UI::Composition::CompositionObject::s_InterfaceType;
    v9 = Windows::UI::Composition::ComponentTransform2D::RuntimeClassInitialize(v8, *a2);
    if ( v9 >= 0 )
    {
      *a1 = v7;
      return 0LL;
    }
  }
  else
  {
    v9 = -2147024882;
  }
  Microsoft::WRL::Details::MakeAllocator<Windows::UI::Composition::InjectionAnimation>::~MakeAllocator<Windows::UI::Composition::InjectionAnimation>(&v12);
  Microsoft::WRL2::RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>::~RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>(&v11);
  return (unsigned int)v9;
}
