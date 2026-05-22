/*
 * XREFs of ??$MakeAndInitialize2@VCursorVisual@Composition@UI@Windows@@V1234@PEAVCompositor@234@AEA_K@Details@WRL2@Microsoft@@YAJPEAPEAVCursorVisual@Composition@UI@Windows@@$$QEAPEAVCompositor@456@AEA_K@Z @ 0x180120B5C
 * Callers:
 *     ?CreateCursorVisual@Partner@CompositorCommon@Composition@UI@Windows@@UEAAJ_KPEAPEAUICursorVisualPartner@345@@Z @ 0x1801258A0 (-CreateCursorVisual@Partner@CompositorCommon@Composition@UI@Windows@@UEAAJ_KPEAPEAUICursorVisual.c)
 * Callees:
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x18004400C (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     ??0ContainerVisual@Composition@UI@Windows@@QEAA@XZ @ 0x18006CFEC (--0ContainerVisual@Composition@UI@Windows@@QEAA@XZ.c)
 *     memset_0 @ 0x18009698C (memset_0.c)
 *     ??1?$MakeAllocator@VInjectionAnimation@Composition@UI@Windows@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x1800A1230 (--1-$MakeAllocator@VInjectionAnimation@Composition@UI@Windows@@@Details@WRL@Microsoft@@QEAA@XZ.c)
 *     ??1?$RefPtr@VInteractionTrackerInertiaNaturalMotion@Interactions@Composition@UI@Windows@@@WRL2@Microsoft@@QEAA@XZ @ 0x1800A203C (--1-$RefPtr@VInteractionTrackerInertiaNaturalMotion@Interactions@Composition@UI@Windows@@@WRL2@M.c)
 *     ?RuntimeClassInitialize@CursorVisual@Composition@UI@Windows@@QEAAJPEAVCompositor@234@_K@Z @ 0x180175A64 (-RuntimeClassInitialize@CursorVisual@Composition@UI@Windows@@QEAAJPEAVCompositor@234@_K@Z.c)
 */

__int64 __fastcall Microsoft::WRL2::Details::MakeAndInitialize2<Windows::UI::Composition::CursorVisual,Windows::UI::Composition::CursorVisual,Windows::UI::Composition::Compositor *,unsigned __int64 &>(
        Windows::UI::Composition::ContainerVisual **a1,
        struct Windows::UI::Composition::Compositor **a2,
        unsigned __int64 *a3)
{
  void *v6; // rax
  int v7; // edi
  Windows::UI::Composition::ContainerVisual *v8; // rax
  Windows::UI::Composition::ContainerVisual *v9; // rbx
  unsigned __int64 v10; // r8
  struct Windows::UI::Composition::Compositor *v11; // rdx
  void *v13; // [rsp+40h] [rbp+8h] BYREF
  Microsoft::WRL2::NestableRuntimeClass *v14; // [rsp+58h] [rbp+20h] BYREF

  *a1 = 0LL;
  v14 = 0LL;
  v6 = DefaultHeap::Alloc(0x158uLL);
  v13 = v6;
  if ( !v6 )
  {
    v7 = -2147024882;
LABEL_7:
    Microsoft::WRL::Details::MakeAllocator<Windows::UI::Composition::InjectionAnimation>::~MakeAllocator<Windows::UI::Composition::InjectionAnimation>(&v13);
    Microsoft::WRL2::RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>::~RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>(&v14);
    return (unsigned int)v7;
  }
  v8 = (Windows::UI::Composition::ContainerVisual *)memset_0(v6, 0, 0x158uLL);
  v9 = v8;
  if ( v8 )
  {
    Windows::UI::Composition::ContainerVisual::ContainerVisual(v8);
    *((_BYTE *)v9 + 336) = 1;
    *(_QWORD *)v9 = &Windows::UI::Composition::CursorVisual::`vftable';
    *((_QWORD *)v9 + 39) = &Windows::UI::Composition::CursorVisual::Partner::`vftable';
  }
  else
  {
    v9 = 0LL;
  }
  v13 = 0LL;
  *((_QWORD *)v9 + 1) = &Windows::UI::Composition::CursorVisual::s_InterfaceType;
  v10 = *a3;
  v11 = *a2;
  v14 = v9;
  v7 = Windows::UI::Composition::CursorVisual::RuntimeClassInitialize(v9, v11, v10);
  if ( v7 < 0 )
    goto LABEL_7;
  *a1 = v9;
  return 0LL;
}
