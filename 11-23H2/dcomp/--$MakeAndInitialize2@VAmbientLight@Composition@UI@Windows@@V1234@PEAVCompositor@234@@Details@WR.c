/*
 * XREFs of ??$MakeAndInitialize2@VAmbientLight@Composition@UI@Windows@@V1234@PEAVCompositor@234@@Details@WRL2@Microsoft@@YAJPEAPEAVAmbientLight@Composition@UI@Windows@@$$QEAPEAVCompositor@456@@Z @ 0x1800163C0
 * Callers:
 *     ?CreateAmbientLight@Api@CompositorCommon@Composition@UI@Windows@@UEAAJPEAPEAUIAmbientLight@345@@Z @ 0x180016330 (-CreateAmbientLight@Api@CompositorCommon@Composition@UI@Windows@@UEAAJPEAPEAUIAmbientLight@345@@.c)
 * Callees:
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x18004400C (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     ??0AmbientLight@Composition@UI@Windows@@QEAA@XZ @ 0x1800855FC (--0AmbientLight@Composition@UI@Windows@@QEAA@XZ.c)
 *     ?RuntimeClassInitialize@AmbientLight@Composition@UI@Windows@@QEAAJPEAVCompositor@234@_N@Z @ 0x18008A47C (-RuntimeClassInitialize@AmbientLight@Composition@UI@Windows@@QEAAJPEAVCompositor@234@_N@Z.c)
 *     ?Attach@?$ComPtr@VAmbientLight@Composition@UI@Windows@@@WRL@Microsoft@@QEAAXPEAVAmbientLight@Composition@UI@Windows@@@Z @ 0x18008E248 (-Attach@-$ComPtr@VAmbientLight@Composition@UI@Windows@@@WRL@Microsoft@@QEAAXPEAVAmbientLight@Com.c)
 *     memset_0 @ 0x18009698C (memset_0.c)
 *     ??1?$MakeAllocator@VInjectionAnimation@Composition@UI@Windows@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x1800A1230 (--1-$MakeAllocator@VInjectionAnimation@Composition@UI@Windows@@@Details@WRL@Microsoft@@QEAA@XZ.c)
 *     ??1?$RefPtr@VInteractionTrackerInertiaNaturalMotion@Interactions@Composition@UI@Windows@@@WRL2@Microsoft@@QEAA@XZ @ 0x1800A203C (--1-$RefPtr@VInteractionTrackerInertiaNaturalMotion@Interactions@Composition@UI@Windows@@@WRL2@M.c)
 */

__int64 __fastcall Microsoft::WRL2::Details::MakeAndInitialize2<Windows::UI::Composition::AmbientLight,Windows::UI::Composition::AmbientLight,Windows::UI::Composition::Compositor *>(
        Windows::UI::Composition::AmbientLight **a1,
        struct Windows::UI::Composition::Compositor **a2)
{
  void *v4; // rax
  Windows::UI::Composition::AmbientLight *v5; // rax
  Windows::UI::Composition::AmbientLight *v6; // rbx
  Windows::UI::Composition::AmbientLight *v7; // rcx
  int v8; // edi
  Windows::UI::Composition::AmbientLight *v10; // [rsp+30h] [rbp+8h] BYREF
  void *v11; // [rsp+40h] [rbp+18h] BYREF

  *a1 = 0LL;
  v10 = 0LL;
  v4 = DefaultHeap::Alloc(0x138uLL);
  v11 = v4;
  if ( v4 )
  {
    v5 = (Windows::UI::Composition::AmbientLight *)memset_0(v4, 0, 0x138uLL);
    if ( v5 )
      v5 = (Windows::UI::Composition::AmbientLight *)Windows::UI::Composition::AmbientLight::AmbientLight(v5);
    Microsoft::WRL::ComPtr<Windows::UI::Composition::AmbientLight>::Attach(&v10, v5);
    v6 = v10;
    v11 = 0LL;
    v7 = v10;
    *((_QWORD *)v10 + 1) = &Windows::UI::Composition::AmbientLight::s_InterfaceType;
    v8 = Windows::UI::Composition::AmbientLight::RuntimeClassInitialize(v7, *a2, 0);
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
