/*
 * XREFs of ??$MakeAndInitialize2@VCompositionCubeMap@Private@Composition@UI@Windows@@V12345@PEAVCompositor@345@AEAIAEAIAEA_N@Details@WRL2@Microsoft@@YAJPEAPEAVCompositionCubeMap@Private@Composition@UI@Windows@@$$QEAPEAVCompositor@567@AEAI2AEA_N@Z @ 0x180120240
 * Callers:
 *     ?CreateCubeMap@XUCPrivate@CompositorCommon@Composition@UI@Windows@@UEAAJIIEPEAPEAUICompositionCubeMap@Private@345@@Z @ 0x180125760 (-CreateCubeMap@XUCPrivate@CompositorCommon@Composition@UI@Windows@@UEAAJIIEPEAPEAUICompositionCu.c)
 * Callees:
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x18004400C (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     memset_0 @ 0x18009698C (memset_0.c)
 *     ??1?$MakeAllocator@VInjectionAnimation@Composition@UI@Windows@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x1800A1230 (--1-$MakeAllocator@VInjectionAnimation@Composition@UI@Windows@@@Details@WRL@Microsoft@@QEAA@XZ.c)
 *     ??1?$RefPtr@VInteractionTrackerInertiaNaturalMotion@Interactions@Composition@UI@Windows@@@WRL2@Microsoft@@QEAA@XZ @ 0x1800A203C (--1-$RefPtr@VInteractionTrackerInertiaNaturalMotion@Interactions@Composition@UI@Windows@@@WRL2@M.c)
 *     ??0CompositionCubeMap@Private@Composition@UI@Windows@@QEAA@XZ @ 0x1801228C8 (--0CompositionCubeMap@Private@Composition@UI@Windows@@QEAA@XZ.c)
 *     ?RuntimeClassInitialize@CompositionCubeMap@Private@Composition@UI@Windows@@QEAAJPEAVCompositor@345@II_N@Z @ 0x18017EECC (-RuntimeClassInitialize@CompositionCubeMap@Private@Composition@UI@Windows@@QEAAJPEAVCompositor@3.c)
 */

__int64 __fastcall Microsoft::WRL2::Details::MakeAndInitialize2<Windows::UI::Composition::Private::CompositionCubeMap,Windows::UI::Composition::Private::CompositionCubeMap,Windows::UI::Composition::Compositor *,unsigned int &,unsigned int &,bool &>(
        Microsoft::WRL2::NestableRuntimeClass **a1,
        struct Windows::UI::Composition::Compositor **a2,
        unsigned int *a3,
        unsigned int *a4,
        char *a5)
{
  void *v9; // rax
  int v10; // edi
  Windows::UI::Composition::Private::CompositionCubeMap *v11; // rax
  Microsoft::WRL2::NestableRuntimeClass *v12; // rbx
  unsigned int v13; // r9d
  unsigned int v14; // r8d
  struct Windows::UI::Composition::Compositor *v15; // rdx
  char v17; // [rsp+20h] [rbp-38h]
  Microsoft::WRL2::NestableRuntimeClass *v18; // [rsp+30h] [rbp-28h] BYREF
  void *v19; // [rsp+60h] [rbp+8h] BYREF

  *a1 = 0LL;
  v18 = 0LL;
  v9 = DefaultHeap::Alloc(0xC8uLL);
  v19 = v9;
  if ( !v9 )
  {
    v10 = -2147024882;
LABEL_7:
    Microsoft::WRL::Details::MakeAllocator<Windows::UI::Composition::InjectionAnimation>::~MakeAllocator<Windows::UI::Composition::InjectionAnimation>(&v19);
    Microsoft::WRL2::RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>::~RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>(&v18);
    return (unsigned int)v10;
  }
  v11 = (Windows::UI::Composition::Private::CompositionCubeMap *)memset_0(v9, 0, 0xC8uLL);
  if ( v11 )
    v12 = (Microsoft::WRL2::NestableRuntimeClass *)Windows::UI::Composition::Private::CompositionCubeMap::CompositionCubeMap(v11);
  else
    v12 = 0LL;
  v19 = 0LL;
  *((_QWORD *)v12 + 1) = &Windows::UI::Composition::Private::CompositionCubeMap::s_InterfaceType;
  v13 = *a4;
  v14 = *a3;
  v15 = *a2;
  v17 = *a5;
  v18 = v12;
  v10 = Windows::UI::Composition::Private::CompositionCubeMap::RuntimeClassInitialize(v12, v15, v14, v13, v17);
  if ( v10 < 0 )
    goto LABEL_7;
  *a1 = v12;
  return 0LL;
}
