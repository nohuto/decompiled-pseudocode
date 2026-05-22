/*
 * XREFs of ??$MakeAndInitialize2@VCompositionBackdropBrush@Composition@UI@Windows@@V1234@PEAVCompositor@234@W4CompositionBackdropType@234@@Details@WRL2@Microsoft@@YAJPEAPEAVCompositionBackdropBrush@Composition@UI@Windows@@$$QEAPEAVCompositor@456@$$QEAW4CompositionBackdropType@456@@Z @ 0x180069CEC
 * Callers:
 *     ?TryCreateBlurredWallpaperBackdropBrush@Api@Compositor@Composition@UI@Windows@@UEAAJPEAPEAUICompositionBackdropBrush@345@@Z @ 0x180069AD0 (-TryCreateBlurredWallpaperBackdropBrush@Api@Compositor@Composition@UI@Windows@@UEAAJPEAPEAUIComp.c)
 *     ?CreateHostBackdropBrush@Api@Compositor@Composition@UI@Windows@@UEAAJPEAPEAUICompositionBackdropBrush@345@@Z @ 0x180069BD0 (-CreateHostBackdropBrush@Api@Compositor@Composition@UI@Windows@@UEAAJPEAPEAUICompositionBackdrop.c)
 *     ?CreateBackdropBrush@Api@CompositorCommon@Composition@UI@Windows@@UEAAJPEAPEAUICompositionBackdropBrush@345@@Z @ 0x180069C60 (-CreateBackdropBrush@Api@CompositorCommon@Composition@UI@Windows@@UEAAJPEAPEAUICompositionBackdr.c)
 * Callees:
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x18004400C (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     ??0CompositionObject@Composition@UI@Windows@@QEAA@XZ @ 0x180053828 (--0CompositionObject@Composition@UI@Windows@@QEAA@XZ.c)
 *     ?RuntimeClassInitialize@CompositionBackdropBrush@Composition@UI@Windows@@QEAAJPEAVCompositor@234@W4CompositionBackdropType@234@@Z @ 0x180069DB8 (-RuntimeClassInitialize@CompositionBackdropBrush@Composition@UI@Windows@@QEAAJPEAVCompositor@234.c)
 *     memset_0 @ 0x18009698C (memset_0.c)
 *     ??1?$MakeAllocator@VInjectionAnimation@Composition@UI@Windows@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x1800A1230 (--1-$MakeAllocator@VInjectionAnimation@Composition@UI@Windows@@@Details@WRL@Microsoft@@QEAA@XZ.c)
 *     ??1?$RefPtr@VInteractionTrackerInertiaNaturalMotion@Interactions@Composition@UI@Windows@@@WRL2@Microsoft@@QEAA@XZ @ 0x1800A203C (--1-$RefPtr@VInteractionTrackerInertiaNaturalMotion@Interactions@Composition@UI@Windows@@@WRL2@M.c)
 */

__int64 __fastcall Microsoft::WRL2::Details::MakeAndInitialize2<Windows::UI::Composition::CompositionBackdropBrush,Windows::UI::Composition::CompositionBackdropBrush,Windows::UI::Composition::Compositor *,enum Windows::UI::Composition::CompositionBackdropType>(
        Windows::UI::Composition::CompositionObject **a1,
        __int64 *a2,
        unsigned int *a3)
{
  void *v6; // rax
  Windows::UI::Composition::CompositionObject *v7; // rax
  Windows::UI::Composition::CompositionObject *v8; // rbx
  __int64 v9; // r8
  __int64 v10; // rdx
  int v11; // edi
  void *v13; // [rsp+40h] [rbp+8h] BYREF
  Windows::UI::Composition::CompositionObject *v14; // [rsp+58h] [rbp+20h] BYREF

  *a1 = 0LL;
  v14 = 0LL;
  v6 = DefaultHeap::Alloc(0xA8uLL);
  v13 = v6;
  if ( v6 )
  {
    v7 = (Windows::UI::Composition::CompositionObject *)memset_0(v6, 0, 0xA8uLL);
    v8 = v7;
    if ( v7 )
    {
      Windows::UI::Composition::CompositionObject::CompositionObject(v7);
      *((_QWORD *)v8 + 17) = &Windows::UI::Composition::CompositionBrushT<Windows::UI::Composition::CompositionBrush,Windows::UI::Composition::ProxyObject>::Api::`vftable';
      *((_QWORD *)v8 + 19) = &Windows::UI::Composition::Scenes::SceneMaterialInput::Api::`vftable';
      *(_QWORD *)v8 = &Windows::UI::Composition::CompositionBackdropBrush::`vftable';
    }
    else
    {
      v8 = 0LL;
    }
    v13 = 0LL;
    *((_QWORD *)v8 + 1) = &Windows::UI::Composition::CompositionBackdropBrushT<Windows::UI::Composition::CompositionBackdropBrush,Windows::UI::Composition::CompositionBrush>::s_InterfaceType;
    v9 = *a3;
    v10 = *a2;
    v14 = v8;
    v11 = Windows::UI::Composition::CompositionBackdropBrush::RuntimeClassInitialize(v8, v10, v9);
    if ( v11 >= 0 )
    {
      *a1 = v8;
      return 0LL;
    }
  }
  else
  {
    v11 = -2147024882;
  }
  Microsoft::WRL::Details::MakeAllocator<Windows::UI::Composition::InjectionAnimation>::~MakeAllocator<Windows::UI::Composition::InjectionAnimation>(&v13);
  Microsoft::WRL2::RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>::~RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>(&v14);
  return (unsigned int)v11;
}
