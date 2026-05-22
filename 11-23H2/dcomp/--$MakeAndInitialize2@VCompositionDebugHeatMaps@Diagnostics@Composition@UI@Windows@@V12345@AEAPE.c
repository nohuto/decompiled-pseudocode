/*
 * XREFs of ??$MakeAndInitialize2@VCompositionDebugHeatMaps@Diagnostics@Composition@UI@Windows@@V12345@AEAPEAVCompositor@345@@Details@WRL2@Microsoft@@YAJPEAPEAVCompositionDebugHeatMaps@Diagnostics@Composition@UI@Windows@@AEAPEAVCompositor@567@@Z @ 0x18012D63C
 * Callers:
 *     ?RuntimeClassInitialize@CompositionDebugSettings@Diagnostics@Composition@UI@Windows@@QEAAJPEAVCompositor@345@@Z @ 0x18012DB08 (-RuntimeClassInitialize@CompositionDebugSettings@Diagnostics@Composition@UI@Windows@@QEAAJPEAVCo.c)
 * Callees:
 *     ??0NestableRuntimeClass@WRL2@Microsoft@@QEAA@XZ @ 0x180040E8C (--0NestableRuntimeClass@WRL2@Microsoft@@QEAA@XZ.c)
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x18004400C (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?InternalRelease@?$ComPtr@VInteropDwmCompositor@Composition@UI@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18008D740 (-InternalRelease@-$ComPtr@VInteropDwmCompositor@Composition@UI@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     memset_0 @ 0x18009698C (memset_0.c)
 *     ??1?$MakeAllocator@VInjectionAnimation@Composition@UI@Windows@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x1800A1230 (--1-$MakeAllocator@VInjectionAnimation@Composition@UI@Windows@@@Details@WRL@Microsoft@@QEAA@XZ.c)
 *     ?RuntimeClassInitialize@CompositionDebugHeatMaps@Diagnostics@Composition@UI@Windows@@QEAAJPEAVCompositor@345@@Z @ 0x18018AEA4 (-RuntimeClassInitialize@CompositionDebugHeatMaps@Diagnostics@Composition@UI@Windows@@QEAAJPEAVCo.c)
 */

__int64 __fastcall Microsoft::WRL2::Details::MakeAndInitialize2<Windows::UI::Composition::Diagnostics::CompositionDebugHeatMaps,Windows::UI::Composition::Diagnostics::CompositionDebugHeatMaps,Windows::UI::Composition::Compositor * &>(
        Microsoft::WRL2::NestableRuntimeClass **a1,
        struct Windows::UI::Composition::Compositor **a2)
{
  void *v4; // rax
  int v5; // edi
  Microsoft::WRL2::NestableRuntimeClass *v6; // rax
  Microsoft::WRL2::NestableRuntimeClass *v7; // rbx
  struct Windows::UI::Composition::Compositor *v8; // rdx
  Microsoft::WRL2::NestableRuntimeClass *v10; // [rsp+30h] [rbp+8h] BYREF
  void *v11; // [rsp+40h] [rbp+18h] BYREF

  *a1 = 0LL;
  v10 = 0LL;
  v4 = DefaultHeap::Alloc(0x48uLL);
  v11 = v4;
  if ( v4 )
  {
    v6 = (Microsoft::WRL2::NestableRuntimeClass *)memset_0(v4, 0, 0x48uLL);
    v7 = v6;
    if ( v6 )
    {
      Microsoft::WRL2::NestableRuntimeClass::NestableRuntimeClass(v6);
      *(_QWORD *)v7 = &Windows::UI::Composition::Diagnostics::CompositionDebugHeatMaps::`vftable';
      *((_QWORD *)v7 + 5) = &Windows::UI::Composition::Diagnostics::CompositionDebugHeatMaps::Api::`vftable';
    }
    else
    {
      v7 = 0LL;
    }
    v11 = 0LL;
    *((_QWORD *)v7 + 1) = &Windows::UI::Composition::Diagnostics::CompositionDebugHeatMaps::s_InterfaceType;
    v8 = *a2;
    v10 = v7;
    v5 = Windows::UI::Composition::Diagnostics::CompositionDebugHeatMaps::RuntimeClassInitialize(v7, v8);
    if ( v5 >= 0 )
    {
      v10 = 0LL;
      v5 = 0;
      *a1 = v7;
      goto LABEL_9;
    }
  }
  else
  {
    v5 = -2147024882;
  }
  Microsoft::WRL::Details::MakeAllocator<Windows::UI::Composition::InjectionAnimation>::~MakeAllocator<Windows::UI::Composition::InjectionAnimation>(&v11);
LABEL_9:
  Microsoft::WRL::ComPtr<Windows::UI::Composition::InteropDwmCompositor>::InternalRelease(&v10);
  return (unsigned int)v5;
}
