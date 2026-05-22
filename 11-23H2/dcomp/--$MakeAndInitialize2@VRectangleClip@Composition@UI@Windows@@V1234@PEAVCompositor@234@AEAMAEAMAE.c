/*
 * XREFs of ??$MakeAndInitialize2@VRectangleClip@Composition@UI@Windows@@V1234@PEAVCompositor@234@AEAMAEAMAEAMAEAMAEAUVector2@Numerics@Foundation@4@AEAU6784@AEAU6784@AEAU6784@@Details@WRL2@Microsoft@@YAJPEAPEAVRectangleClip@Composition@UI@Windows@@$$QEAPEAVCompositor@456@AEAM222AEAUVector2@Numerics@Foundation@6@333@Z @ 0x18006EAA0
 * Callers:
 *     ?CreateRectangleClip@CompositorCommon@Composition@UI@Windows@@QEAAJMMMMUVector2@Numerics@Foundation@4@000PEAPEAVRectangleClip@234@@Z @ 0x18006EA08 (-CreateRectangleClip@CompositorCommon@Composition@UI@Windows@@QEAAJMMMMUVector2@Numerics@Foundat.c)
 * Callees:
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x18004400C (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     ??0RectangleClip@Composition@UI@Windows@@QEAA@XZ @ 0x18006EBCC (--0RectangleClip@Composition@UI@Windows@@QEAA@XZ.c)
 *     ?RuntimeClassInitialize@RectangleClip@Composition@UI@Windows@@QEAAJPEAVCompositor@234@MMMMUVector2@Numerics@Foundation@4@111@Z @ 0x180071708 (-RuntimeClassInitialize@RectangleClip@Composition@UI@Windows@@QEAAJPEAVCompositor@234@MMMMUVecto.c)
 *     memset_0 @ 0x18009698C (memset_0.c)
 *     ??1?$MakeAllocator@VInjectionAnimation@Composition@UI@Windows@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x1800A1230 (--1-$MakeAllocator@VInjectionAnimation@Composition@UI@Windows@@@Details@WRL@Microsoft@@QEAA@XZ.c)
 *     ??1?$RefPtr@VInteractionTrackerInertiaNaturalMotion@Interactions@Composition@UI@Windows@@@WRL2@Microsoft@@QEAA@XZ @ 0x1800A203C (--1-$RefPtr@VInteractionTrackerInertiaNaturalMotion@Interactions@Composition@UI@Windows@@@WRL2@M.c)
 */

__int64 __fastcall Microsoft::WRL2::Details::MakeAndInitialize2<Windows::UI::Composition::RectangleClip,Windows::UI::Composition::RectangleClip,Windows::UI::Composition::Compositor *,float &,float &,float &,float &,Windows::Foundation::Numerics::Vector2 &,Windows::Foundation::Numerics::Vector2 &,Windows::Foundation::Numerics::Vector2 &,Windows::Foundation::Numerics::Vector2 &>(
        __int64 *a1,
        __int64 *a2)
{
  void *v4; // rax
  Windows::UI::Composition::RectangleClip *v5; // rax
  __int64 v6; // rbx
  __int64 v7; // rdx
  int v8; // edi
  __int64 v10; // [rsp+50h] [rbp-28h] BYREF
  void *v11; // [rsp+80h] [rbp+8h] BYREF

  *a1 = 0LL;
  v10 = 0LL;
  v4 = DefaultHeap::Alloc(0x110uLL);
  v11 = v4;
  if ( v4 )
  {
    v5 = (Windows::UI::Composition::RectangleClip *)memset_0(v4, 0, 0x110uLL);
    if ( v5 )
      v6 = Windows::UI::Composition::RectangleClip::RectangleClip(v5);
    else
      v6 = 0LL;
    v11 = 0LL;
    *(_QWORD *)(v6 + 8) = &Windows::UI::Composition::RectangleClip::s_InterfaceType;
    v7 = *a2;
    v10 = v6;
    v8 = Windows::UI::Composition::RectangleClip::RuntimeClassInitialize(v6, v7);
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
