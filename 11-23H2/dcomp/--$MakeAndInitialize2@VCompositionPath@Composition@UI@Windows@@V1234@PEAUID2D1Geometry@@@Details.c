/*
 * XREFs of ??$MakeAndInitialize2@VCompositionPath@Composition@UI@Windows@@V1234@PEAUID2D1Geometry@@@Details@WRL2@Microsoft@@YAJPEAPEAVCompositionPath@Composition@UI@Windows@@$$QEAPEAUID2D1Geometry@@@Z @ 0x180040D74
 * Callers:
 *     ?Create@CompositionPathFactory@Composition@UI@Windows@@UEAAJPEAUIGeometrySource2D@Graphics@4@PEAPEAUICompositionPath@234@@Z @ 0x180040C50 (-Create@CompositionPathFactory@Composition@UI@Windows@@UEAAJPEAUIGeometrySource2D@Graphics@4@PEA.c)
 * Callees:
 *     ?Attach@?$ComPtr@VCompositionPath@Composition@UI@Windows@@@WRL@Microsoft@@QEAAXPEAVCompositionPath@Composition@UI@Windows@@@Z @ 0x180040C0C (-Attach@-$ComPtr@VCompositionPath@Composition@UI@Windows@@@WRL@Microsoft@@QEAAXPEAVCompositionPa.c)
 *     ??0CompositionPath@Composition@UI@Windows@@QEAA@XZ @ 0x180040E20 (--0CompositionPath@Composition@UI@Windows@@QEAA@XZ.c)
 *     ?RuntimeClassInitialize@CompositionPath@Composition@UI@Windows@@QEAAJPEAUID2D1Geometry@@@Z @ 0x180040FF8 (-RuntimeClassInitialize@CompositionPath@Composition@UI@Windows@@QEAAJPEAUID2D1Geometry@@@Z.c)
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x18004400C (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     memset_0 @ 0x18009698C (memset_0.c)
 *     ??1?$MakeAllocator@VInjectionAnimation@Composition@UI@Windows@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x1800A1230 (--1-$MakeAllocator@VInjectionAnimation@Composition@UI@Windows@@@Details@WRL@Microsoft@@QEAA@XZ.c)
 *     ??1?$RefPtr@VInteractionTrackerInertiaNaturalMotion@Interactions@Composition@UI@Windows@@@WRL2@Microsoft@@QEAA@XZ @ 0x1800A203C (--1-$RefPtr@VInteractionTrackerInertiaNaturalMotion@Interactions@Composition@UI@Windows@@@WRL2@M.c)
 */

__int64 __fastcall Microsoft::WRL2::Details::MakeAndInitialize2<Windows::UI::Composition::CompositionPath,Windows::UI::Composition::CompositionPath,ID2D1Geometry *>(
        Windows::UI::Composition::CompositionPath **a1,
        struct ID2D1Geometry **a2)
{
  void *v4; // rax
  Windows::UI::Composition::CompositionPath *v5; // rax
  Windows::UI::Composition::CompositionPath *v6; // rbx
  Windows::UI::Composition::CompositionPath *v7; // rcx
  int v8; // edi
  Windows::UI::Composition::CompositionPath *v10; // [rsp+30h] [rbp+8h] BYREF
  void *v11; // [rsp+40h] [rbp+18h] BYREF

  *a1 = 0LL;
  v10 = 0LL;
  v4 = DefaultHeap::Alloc(0x88uLL);
  v11 = v4;
  if ( v4 )
  {
    v5 = (Windows::UI::Composition::CompositionPath *)memset_0(v4, 0, 0x88uLL);
    if ( v5 )
      v5 = (Windows::UI::Composition::CompositionPath *)Windows::UI::Composition::CompositionPath::CompositionPath(v5);
    Microsoft::WRL::ComPtr<Windows::UI::Composition::CompositionPath>::Attach(&v10, v5);
    v6 = v10;
    v11 = 0LL;
    v7 = v10;
    *((_QWORD *)v10 + 1) = &Windows::UI::Composition::CompositionPath::s_InterfaceType;
    v8 = Windows::UI::Composition::CompositionPath::RuntimeClassInitialize(v7, *a2);
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
