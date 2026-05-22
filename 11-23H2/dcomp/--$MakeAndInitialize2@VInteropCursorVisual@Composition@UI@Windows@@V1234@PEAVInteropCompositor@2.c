/*
 * XREFs of ??$MakeAndInitialize2@VInteropCursorVisual@Composition@UI@Windows@@V1234@PEAVInteropCompositor@234@AEA_K@Details@WRL2@Microsoft@@YAJPEAPEAVInteropCursorVisual@Composition@UI@Windows@@$$QEAPEAVInteropCompositor@456@AEA_K@Z @ 0x18015BFA4
 * Callers:
 *     ?CreateCursorVisual@Api@InteropCompositor@Composition@UI@Windows@@UEAAJ_KPEAPEAUIDCompositionCursorVisualPartner@@@Z @ 0x18015CAC0 (-CreateCursorVisual@Api@InteropCompositor@Composition@UI@Windows@@UEAAJ_KPEAPEAUIDCompositionCur.c)
 * Callees:
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x18004400C (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     ??0Visual@Composition@UI@Windows@@QEAA@XZ @ 0x18005D570 (--0Visual@Composition@UI@Windows@@QEAA@XZ.c)
 *     memset_0 @ 0x18009698C (memset_0.c)
 *     ??1?$MakeAllocator@VInjectionAnimation@Composition@UI@Windows@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x1800A1230 (--1-$MakeAllocator@VInjectionAnimation@Composition@UI@Windows@@@Details@WRL@Microsoft@@QEAA@XZ.c)
 *     ??1?$RefPtr@VInteractionTrackerInertiaNaturalMotion@Interactions@Composition@UI@Windows@@@WRL2@Microsoft@@QEAA@XZ @ 0x1800A203C (--1-$RefPtr@VInteractionTrackerInertiaNaturalMotion@Interactions@Composition@UI@Windows@@@WRL2@M.c)
 *     ?RuntimeClassInitialize@InteropCursorVisual@Composition@UI@Windows@@QEAAJPEAVCompositor@234@_K@Z @ 0x180198E8C (-RuntimeClassInitialize@InteropCursorVisual@Composition@UI@Windows@@QEAAJPEAVCompositor@234@_K@Z.c)
 */

__int64 __fastcall Microsoft::WRL2::Details::MakeAndInitialize2<Windows::UI::Composition::InteropCursorVisual,Windows::UI::Composition::InteropCursorVisual,Windows::UI::Composition::InteropCompositor *,unsigned __int64 &>(
        Microsoft::WRL2::NestableRuntimeClass **a1,
        struct Windows::UI::Composition::Compositor **a2,
        unsigned __int64 *a3)
{
  void *v6; // rax
  int v7; // edi
  Microsoft::WRL2::NestableRuntimeClass *v8; // rax
  Microsoft::WRL2::NestableRuntimeClass *v9; // rbx
  unsigned __int64 v10; // r8
  struct Windows::UI::Composition::Compositor *v11; // rdx
  void *v13; // [rsp+40h] [rbp+8h] BYREF
  Microsoft::WRL2::NestableRuntimeClass *v14; // [rsp+58h] [rbp+20h] BYREF

  *a1 = 0LL;
  v14 = 0LL;
  v6 = DefaultHeap::Alloc(0x140uLL);
  v13 = v6;
  if ( !v6 )
  {
    v7 = -2147024882;
LABEL_7:
    Microsoft::WRL::Details::MakeAllocator<Windows::UI::Composition::InjectionAnimation>::~MakeAllocator<Windows::UI::Composition::InjectionAnimation>(&v13);
    Microsoft::WRL2::RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>::~RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>(&v14);
    return (unsigned int)v7;
  }
  v8 = (Microsoft::WRL2::NestableRuntimeClass *)memset_0(v6, 0, 0x140uLL);
  v9 = v8;
  if ( v8 )
  {
    Windows::UI::Composition::Visual::Visual((unsigned __int64)v8);
    *(_QWORD *)v9 = &Windows::UI::Composition::InteropCursorVisual::`vftable';
    *((_QWORD *)v9 + 39) = 0LL;
    *((_QWORD *)v9 + 37) = &Windows::UI::Composition::InteropCursorVisual::Api::`vftable';
  }
  else
  {
    v9 = 0LL;
  }
  v13 = 0LL;
  *((_QWORD *)v9 + 1) = &Windows::UI::Composition::InteropCursorVisual::s_InterfaceType;
  v10 = *a3;
  v11 = *a2;
  v14 = v9;
  v7 = Windows::UI::Composition::InteropCursorVisual::RuntimeClassInitialize(v9, v11, v10);
  if ( v7 < 0 )
    goto LABEL_7;
  *a1 = v9;
  return 0LL;
}
