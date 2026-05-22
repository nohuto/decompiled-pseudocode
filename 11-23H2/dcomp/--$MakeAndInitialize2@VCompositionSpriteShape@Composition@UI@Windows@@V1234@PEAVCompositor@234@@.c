/*
 * XREFs of ??$MakeAndInitialize2@VCompositionSpriteShape@Composition@UI@Windows@@V1234@PEAVCompositor@234@@Details@WRL2@Microsoft@@YAJPEAPEAVCompositionSpriteShape@Composition@UI@Windows@@$$QEAPEAVCompositor@456@@Z @ 0x18005B054
 * Callers:
 *     ?CreateSpriteShapeWithGeometry@Api@CompositorCommon@Composition@UI@Windows@@UEAAJPEAUICompositionGeometry@345@PEAPEAUICompositionSpriteShape@345@@Z @ 0x18005B520 (-CreateSpriteShapeWithGeometry@Api@CompositorCommon@Composition@UI@Windows@@UEAAJPEAUICompositio.c)
 *     ?CreateSpriteShape@CompositorCommon@Composition@UI@Windows@@QEAAJPEAVCompositionGeometry@234@PEAPEAVCompositionSpriteShape@234@@Z @ 0x18008BA98 (-CreateSpriteShape@CompositorCommon@Composition@UI@Windows@@QEAAJPEAVCompositionGeometry@234@PEA.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RuntimeClassInitialize@ProxyObject@Composition@UI@Windows@@QEAAJPEAVCompositor@234@I_N@Z @ 0x180058D30 (-RuntimeClassInitialize@ProxyObject@Composition@UI@Windows@@QEAAJPEAVCompositor@234@I_N@Z.c)
 *     ??0CompositionSpriteShape@Composition@UI@Windows@@QEAA@XZ @ 0x18005B138 (--0CompositionSpriteShape@Composition@UI@Windows@@QEAA@XZ.c)
 *     memset_0 @ 0x18009698C (memset_0.c)
 *     ??1?$MakeAllocator@VInjectionAnimation@Composition@UI@Windows@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x1800A1230 (--1-$MakeAllocator@VInjectionAnimation@Composition@UI@Windows@@@Details@WRL@Microsoft@@QEAA@XZ.c)
 *     ??1?$RefPtr@VInteractionTrackerInertiaNaturalMotion@Interactions@Composition@UI@Windows@@@WRL2@Microsoft@@QEAA@XZ @ 0x1800A203C (--1-$RefPtr@VInteractionTrackerInertiaNaturalMotion@Interactions@Composition@UI@Windows@@@WRL2@M.c)
 */

__int64 __fastcall Microsoft::WRL2::Details::MakeAndInitialize2<Windows::UI::Composition::CompositionSpriteShape,Windows::UI::Composition::CompositionSpriteShape,Windows::UI::Composition::Compositor *>(
        __int64 *a1,
        struct Windows::UI::Composition::Compositor **a2)
{
  HANDLE ProcessHeap; // rax
  void *v5; // rax
  Windows::UI::Composition::CompositionSpriteShape *v6; // rax
  __int64 v7; // rbx
  struct Windows::UI::Composition::Compositor *v8; // rsi
  int v9; // eax
  unsigned int v10; // edi
  __int64 result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  void *v13; // [rsp+40h] [rbp+8h] BYREF
  __int64 v14; // [rsp+50h] [rbp+18h] BYREF

  *a1 = 0LL;
  v14 = 0LL;
  ProcessHeap = GetProcessHeap();
  v5 = HeapAlloc(ProcessHeap, 0, 0x110uLL);
  v13 = v5;
  if ( v5 )
  {
    v6 = (Windows::UI::Composition::CompositionSpriteShape *)memset_0(v5, 0, 0x110uLL);
    if ( v6 )
      v7 = Windows::UI::Composition::CompositionSpriteShape::CompositionSpriteShape(v6);
    else
      v7 = 0LL;
    v13 = 0LL;
    *(_QWORD *)(v7 + 8) = &Windows::UI::Composition::CompositionSpriteShape::s_InterfaceType;
    v8 = *a2;
    v14 = v7;
    v9 = Windows::UI::Composition::ProxyObject::RuntimeClassInitialize(
           (Windows::UI::Composition::ProxyObject *)v7,
           v8,
           177,
           0);
    v10 = v9;
    if ( v9 >= 0 )
    {
      *(_QWORD *)(v7 + 184) = *((_QWORD *)v8 + 57);
      *(_DWORD *)(v7 + 244) = 1065353216;
      *(_DWORD *)(v7 + 248) = 1065353216;
      result = 0LL;
      *a1 = v7;
      return result;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x5F,
      (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtcompositionspriteshape.cpp",
      (const char *)(unsigned int)v9);
  }
  else
  {
    v10 = -2147024882;
  }
  Microsoft::WRL::Details::MakeAllocator<Windows::UI::Composition::InjectionAnimation>::~MakeAllocator<Windows::UI::Composition::InjectionAnimation>(&v13);
  Microsoft::WRL2::RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>::~RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>(&v14);
  return v10;
}
