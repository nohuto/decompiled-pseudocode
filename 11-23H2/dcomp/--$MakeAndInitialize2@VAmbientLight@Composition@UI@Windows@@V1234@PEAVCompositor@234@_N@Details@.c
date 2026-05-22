/*
 * XREFs of ??$MakeAndInitialize2@VAmbientLight@Composition@UI@Windows@@V1234@PEAVCompositor@234@_N@Details@WRL2@Microsoft@@YAJPEAPEAVAmbientLight@Composition@UI@Windows@@$$QEAPEAVCompositor@456@$$QEA_N@Z @ 0x180092A7C
 * Callers:
 *     ?CreateSharedAmbientLight@Internal@Compositor@Composition@UI@Windows@@UEAAJPEAPEAUIAmbientLight@345@@Z @ 0x1800929F0 (-CreateSharedAmbientLight@Internal@Compositor@Composition@UI@Windows@@UEAAJPEAPEAUIAmbientLight@.c)
 * Callees:
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x18004400C (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     ??0AmbientLight@Composition@UI@Windows@@QEAA@XZ @ 0x1800855FC (--0AmbientLight@Composition@UI@Windows@@QEAA@XZ.c)
 *     ?RuntimeClassInitialize@AmbientLight@Composition@UI@Windows@@QEAAJPEAVCompositor@234@_N@Z @ 0x18008A47C (-RuntimeClassInitialize@AmbientLight@Composition@UI@Windows@@QEAAJPEAVCompositor@234@_N@Z.c)
 *     ?Attach@?$ComPtr@VAmbientLight@Composition@UI@Windows@@@WRL@Microsoft@@QEAAXPEAVAmbientLight@Composition@UI@Windows@@@Z @ 0x18008E248 (-Attach@-$ComPtr@VAmbientLight@Composition@UI@Windows@@@WRL@Microsoft@@QEAAXPEAVAmbientLight@Com.c)
 *     memset_0 @ 0x18009698C (memset_0.c)
 *     ??1?$MakeAllocator@VInjectionAnimation@Composition@UI@Windows@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x1800A1230 (--1-$MakeAllocator@VInjectionAnimation@Composition@UI@Windows@@@Details@WRL@Microsoft@@QEAA@XZ.c)
 *     ??1?$RefPtr@VInteractionTrackerInertiaNaturalMotion@Interactions@Composition@UI@Windows@@@WRL2@Microsoft@@QEAA@XZ @ 0x1800A203C (--1-$RefPtr@VInteractionTrackerInertiaNaturalMotion@Interactions@Composition@UI@Windows@@@WRL2@M.c)
 */

__int64 __fastcall Microsoft::WRL2::Details::MakeAndInitialize2<Windows::UI::Composition::AmbientLight,Windows::UI::Composition::AmbientLight,Windows::UI::Composition::Compositor *,bool>(
        Windows::UI::Composition::AmbientLight **a1,
        struct Windows::UI::Composition::Compositor **a2,
        bool *a3)
{
  void *v6; // rax
  Windows::UI::Composition::AmbientLight *v7; // rax
  Windows::UI::Composition::AmbientLight *v8; // rbx
  Windows::UI::Composition::AmbientLight *v9; // rcx
  int v10; // edi
  Windows::UI::Composition::AmbientLight *v12; // [rsp+40h] [rbp+8h] BYREF
  void *v13; // [rsp+58h] [rbp+20h] BYREF

  *a1 = 0LL;
  v12 = 0LL;
  v6 = DefaultHeap::Alloc(0x138uLL);
  v13 = v6;
  if ( v6 )
  {
    v7 = (Windows::UI::Composition::AmbientLight *)memset_0(v6, 0, 0x138uLL);
    if ( v7 )
      v7 = Windows::UI::Composition::AmbientLight::AmbientLight(v7);
    Microsoft::WRL::ComPtr<Windows::UI::Composition::AmbientLight>::Attach(&v12, v7);
    v8 = v12;
    v13 = 0LL;
    v9 = v12;
    *((_QWORD *)v12 + 1) = &Windows::UI::Composition::AmbientLight::s_InterfaceType;
    v10 = Windows::UI::Composition::AmbientLight::RuntimeClassInitialize(v9, *a2, *a3);
    if ( v10 >= 0 )
    {
      *a1 = v8;
      return 0LL;
    }
  }
  else
  {
    v10 = -2147024882;
  }
  Microsoft::WRL::Details::MakeAllocator<Windows::UI::Composition::InjectionAnimation>::~MakeAllocator<Windows::UI::Composition::InjectionAnimation>(&v13);
  Microsoft::WRL2::RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>::~RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>(&v12);
  return (unsigned int)v10;
}
