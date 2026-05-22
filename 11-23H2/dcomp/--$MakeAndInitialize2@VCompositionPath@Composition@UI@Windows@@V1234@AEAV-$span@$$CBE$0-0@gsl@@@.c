/*
 * XREFs of ??$MakeAndInitialize2@VCompositionPath@Composition@UI@Windows@@V1234@AEAV?$span@$$CBE$0?0@gsl@@@Details@WRL2@Microsoft@@YAJPEAPEAVCompositionPath@Composition@UI@Windows@@AEAV?$span@$$CBE$0?0@gsl@@@Z @ 0x18012F9F4
 * Callers:
 *     ?CreateCompositionPathFromData@CompositionPath@Composition@UI@Windows@@SAJV?$span@$$CBE$0?0@gsl@@PEAPEAV1234@@Z @ 0x18012FAD0 (-CreateCompositionPathFromData@CompositionPath@Composition@UI@Windows@@SAJV-$span@$$CBE$0-0@gsl@.c)
 * Callees:
 *     ?Attach@?$ComPtr@VCompositionPath@Composition@UI@Windows@@@WRL@Microsoft@@QEAAXPEAVCompositionPath@Composition@UI@Windows@@@Z @ 0x180040C0C (-Attach@-$ComPtr@VCompositionPath@Composition@UI@Windows@@@WRL@Microsoft@@QEAAXPEAVCompositionPa.c)
 *     ??0CompositionPath@Composition@UI@Windows@@QEAA@XZ @ 0x180040E20 (--0CompositionPath@Composition@UI@Windows@@QEAA@XZ.c)
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x18004400C (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     memset_0 @ 0x18009698C (memset_0.c)
 *     ??1?$MakeAllocator@VInjectionAnimation@Composition@UI@Windows@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x1800A1230 (--1-$MakeAllocator@VInjectionAnimation@Composition@UI@Windows@@@Details@WRL@Microsoft@@QEAA@XZ.c)
 *     ??1?$RefPtr@VInteractionTrackerInertiaNaturalMotion@Interactions@Composition@UI@Windows@@@WRL2@Microsoft@@QEAA@XZ @ 0x1800A203C (--1-$RefPtr@VInteractionTrackerInertiaNaturalMotion@Interactions@Composition@UI@Windows@@@WRL2@M.c)
 *     ?RuntimeClassInitialize@CompositionPath@Composition@UI@Windows@@QEAAJV?$span@$$CBE$0?0@gsl@@@Z @ 0x18012FD20 (-RuntimeClassInitialize@CompositionPath@Composition@UI@Windows@@QEAAJV-$span@$$CBE$0-0@gsl@@@Z.c)
 */

__int64 __fastcall Microsoft::WRL2::Details::MakeAndInitialize2<Windows::UI::Composition::CompositionPath,Windows::UI::Composition::CompositionPath,gsl::span<unsigned char const,-1> &>(
        Microsoft::WRL2::NestableRuntimeClass **a1,
        __int128 *a2)
{
  void *v4; // rax
  int v5; // edi
  Windows::UI::Composition::CompositionPath *v6; // rax
  Microsoft::WRL2::NestableRuntimeClass *v7; // rbx
  Microsoft::WRL2::NestableRuntimeClass *v8; // rcx
  __int128 v10; // [rsp+20h] [rbp-18h] BYREF
  Microsoft::WRL2::NestableRuntimeClass *v11; // [rsp+40h] [rbp+8h] BYREF
  void *v12; // [rsp+50h] [rbp+18h] BYREF

  *a1 = 0LL;
  v11 = 0LL;
  v4 = DefaultHeap::Alloc(0x88uLL);
  v12 = v4;
  if ( !v4 )
  {
    v5 = -2147024882;
LABEL_6:
    Microsoft::WRL::Details::MakeAllocator<Windows::UI::Composition::InjectionAnimation>::~MakeAllocator<Windows::UI::Composition::InjectionAnimation>(&v12);
    Microsoft::WRL2::RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>::~RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>(&v11);
    return (unsigned int)v5;
  }
  v6 = (Windows::UI::Composition::CompositionPath *)memset_0(v4, 0, 0x88uLL);
  if ( v6 )
    v6 = Windows::UI::Composition::CompositionPath::CompositionPath(v6);
  Microsoft::WRL::ComPtr<Windows::UI::Composition::CompositionPath>::Attach(&v11, v6);
  v7 = v11;
  v12 = 0LL;
  v8 = v11;
  *((_QWORD *)v11 + 1) = &Windows::UI::Composition::CompositionPath::s_InterfaceType;
  v10 = *a2;
  v5 = Windows::UI::Composition::CompositionPath::RuntimeClassInitialize(v8, &v10);
  if ( v5 < 0 )
    goto LABEL_6;
  *a1 = v7;
  return 0LL;
}
