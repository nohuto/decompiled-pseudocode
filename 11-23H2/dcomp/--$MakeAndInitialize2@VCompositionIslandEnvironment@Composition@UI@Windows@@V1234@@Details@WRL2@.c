/*
 * XREFs of ??$MakeAndInitialize2@VCompositionIslandEnvironment@Composition@UI@Windows@@V1234@@Details@WRL2@Microsoft@@YAJPEAPEAVCompositionIslandEnvironment@Composition@UI@Windows@@@Z @ 0x18006C290
 * Callers:
 *     ?Create@CompositionIslandEnvironmentStatics@Composition@UI@Windows@@UEAAJPEAPEAUICompositionIslandEnvironment@234@@Z @ 0x18006C240 (-Create@CompositionIslandEnvironmentStatics@Composition@UI@Windows@@UEAAJPEAPEAUICompositionIsla.c)
 * Callees:
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x18004400C (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     ??0CompositionIslandEnvironment@Composition@UI@Windows@@QEAA@XZ @ 0x18006C334 (--0CompositionIslandEnvironment@Composition@UI@Windows@@QEAA@XZ.c)
 *     ?InternalRelease@?$ComPtr@VCompositor@Composition@UI@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180089E78 (-InternalRelease@-$ComPtr@VCompositor@Composition@UI@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     memset_0 @ 0x18009698C (memset_0.c)
 *     ??1?$MakeAllocator@VInjectionAnimation@Composition@UI@Windows@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x1800A1230 (--1-$MakeAllocator@VInjectionAnimation@Composition@UI@Windows@@@Details@WRL@Microsoft@@QEAA@XZ.c)
 */

__int64 __fastcall Microsoft::WRL2::Details::MakeAndInitialize2<Windows::UI::Composition::CompositionIslandEnvironment,Windows::UI::Composition::CompositionIslandEnvironment>(
        __int64 *a1)
{
  unsigned int v1; // ebx
  void *v3; // rax
  Windows::UI::Composition::CompositionIslandEnvironment *v4; // rax
  __int64 v5; // rax
  void *v7; // [rsp+40h] [rbp+8h] BYREF
  __int64 v8; // [rsp+48h] [rbp+10h] BYREF

  v1 = 0;
  *a1 = 0LL;
  v8 = 0LL;
  v3 = DefaultHeap::Alloc(0x78uLL);
  v7 = v3;
  if ( v3 )
  {
    v4 = (Windows::UI::Composition::CompositionIslandEnvironment *)memset_0(v3, 0, 0x78uLL);
    if ( v4 )
      v5 = Windows::UI::Composition::CompositionIslandEnvironment::CompositionIslandEnvironment(v4);
    else
      v5 = 0LL;
    *(_QWORD *)(v5 + 8) = &Windows::UI::Composition::CompositionIslandEnvironment::s_InterfaceType;
    *(_QWORD *)(v5 + 64) = _mm_unpacklo_ps((__m128)0LL, (__m128)LODWORD(FLOAT_N1_0)).m128_u64[0];
    *(_DWORD *)(v5 + 72) = 0;
    *(_DWORD *)(v5 + 76) = 1065353216;
    *(_DWORD *)(v5 + 80) = 1065353216;
    *a1 = v5;
  }
  else
  {
    Microsoft::WRL::Details::MakeAllocator<Windows::UI::Composition::InjectionAnimation>::~MakeAllocator<Windows::UI::Composition::InjectionAnimation>(&v7);
    v1 = -2147024882;
  }
  Microsoft::WRL::ComPtr<Windows::UI::Composition::Compositor>::InternalRelease(&v8);
  return v1;
}
