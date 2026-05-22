/*
 * XREFs of ??$MakeAndInitialize2@VDistantLight@Composition@UI@Windows@@V1234@PEAVCompositor@234@_N@Details@WRL2@Microsoft@@YAJPEAPEAVDistantLight@Composition@UI@Windows@@$$QEAPEAVCompositor@456@$$QEA_N@Z @ 0x180091B2C
 * Callers:
 *     ?CreateSharedDistantLight@Internal@Compositor@Composition@UI@Windows@@UEAAJPEAPEAUIDistantLight@345@@Z @ 0x180091AA0 (-CreateSharedDistantLight@Internal@Compositor@Composition@UI@Windows@@UEAAJPEAPEAUIDistantLight@.c)
 * Callees:
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x18004400C (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     ??0DistantLight@Composition@UI@Windows@@QEAA@XZ @ 0x180091BD8 (--0DistantLight@Composition@UI@Windows@@QEAA@XZ.c)
 *     ?RuntimeClassInitialize@DistantLight@Composition@UI@Windows@@QEAAJPEAVCompositor@234@_N@Z @ 0x180091C34 (-RuntimeClassInitialize@DistantLight@Composition@UI@Windows@@QEAAJPEAVCompositor@234@_N@Z.c)
 *     ?Attach@?$ComPtr@VDistantLight@Composition@UI@Windows@@@WRL@Microsoft@@QEAAXPEAVDistantLight@Composition@UI@Windows@@@Z @ 0x180091C9C (-Attach@-$ComPtr@VDistantLight@Composition@UI@Windows@@@WRL@Microsoft@@QEAAXPEAVDistantLight@Com.c)
 *     memset_0 @ 0x18009698C (memset_0.c)
 *     ??1?$MakeAllocator@VInjectionAnimation@Composition@UI@Windows@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x1800A1230 (--1-$MakeAllocator@VInjectionAnimation@Composition@UI@Windows@@@Details@WRL@Microsoft@@QEAA@XZ.c)
 *     ??1?$RefPtr@VInteractionTrackerInertiaNaturalMotion@Interactions@Composition@UI@Windows@@@WRL2@Microsoft@@QEAA@XZ @ 0x1800A203C (--1-$RefPtr@VInteractionTrackerInertiaNaturalMotion@Interactions@Composition@UI@Windows@@@WRL2@M.c)
 */

__int64 __fastcall Microsoft::WRL2::Details::MakeAndInitialize2<Windows::UI::Composition::DistantLight,Windows::UI::Composition::DistantLight,Windows::UI::Composition::Compositor *,bool>(
        Windows::UI::Composition::DistantLight **a1,
        struct Windows::UI::Composition::Compositor **a2,
        bool *a3)
{
  void *v6; // rax
  Windows::UI::Composition::DistantLight *v7; // rax
  Windows::UI::Composition::DistantLight *v8; // rbx
  Windows::UI::Composition::DistantLight *v9; // rcx
  int v10; // edi
  Windows::UI::Composition::DistantLight *v12; // [rsp+40h] [rbp+8h] BYREF
  void *v13; // [rsp+58h] [rbp+20h] BYREF

  *a1 = 0LL;
  v12 = 0LL;
  v6 = DefaultHeap::Alloc(0x150uLL);
  v13 = v6;
  if ( v6 )
  {
    v7 = (Windows::UI::Composition::DistantLight *)memset_0(v6, 0, 0x150uLL);
    if ( v7 )
      v7 = (Windows::UI::Composition::DistantLight *)Windows::UI::Composition::DistantLight::DistantLight(v7);
    Microsoft::WRL::ComPtr<Windows::UI::Composition::DistantLight>::Attach(&v12, v7);
    v8 = v12;
    v13 = 0LL;
    v9 = v12;
    *((_QWORD *)v12 + 1) = &Windows::UI::Composition::DistantLight::s_InterfaceType;
    v10 = Windows::UI::Composition::DistantLight::RuntimeClassInitialize(v9, *a2, *a3);
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
