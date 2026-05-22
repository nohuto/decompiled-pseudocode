/*
 * XREFs of ?CreateSpriteShape@CompositorCommon@Composition@UI@Windows@@QEAAJPEAVCompositionGeometry@234@PEAPEAVCompositionSpriteShape@234@@Z @ 0x18008BA98
 * Callers:
 *     ?CreateSpriteShape@Api@CompositorCommon@Composition@UI@Windows@@UEAAJPEAPEAUICompositionSpriteShape@345@@Z @ 0x18008B9D0 (-CreateSpriteShape@Api@CompositorCommon@Composition@UI@Windows@@UEAAJPEAPEAUICompositionSpriteSh.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$MakeAndInitialize2@VCompositionSpriteShape@Composition@UI@Windows@@V1234@PEAVCompositor@234@@Details@WRL2@Microsoft@@YAJPEAPEAVCompositionSpriteShape@Composition@UI@Windows@@$$QEAPEAVCompositor@456@@Z @ 0x18005B054 (--$MakeAndInitialize2@VCompositionSpriteShape@Composition@UI@Windows@@V1234@PEAVCompositor@234@@.c)
 *     ?SetGeometry@CompositionSpriteShape@Composition@UI@Windows@@QEAAXPEAVCompositionGeometry@234@@Z @ 0x180087C70 (-SetGeometry@CompositionSpriteShape@Composition@UI@Windows@@QEAAXPEAVCompositionGeometry@234@@Z.c)
 *     ??1?$RefPtr@VInteractionTrackerInertiaNaturalMotion@Interactions@Composition@UI@Windows@@@WRL2@Microsoft@@QEAA@XZ @ 0x1800A203C (--1-$RefPtr@VInteractionTrackerInertiaNaturalMotion@Interactions@Composition@UI@Windows@@@WRL2@M.c)
 */

__int64 __fastcall Windows::UI::Composition::CompositorCommon::CreateSpriteShape(
        Windows::UI::Composition::CompositorCommon *this,
        struct Windows::UI::Composition::CompositionGeometry *a2,
        struct Windows::UI::Composition::CompositionSpriteShape **a3)
{
  int v5; // eax
  unsigned int v6; // ebx
  struct Windows::UI::Composition::CompositionSpriteShape *v7; // rbx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  Windows::UI::Composition::CompositionSpriteShape *v10; // [rsp+30h] [rbp+8h] BYREF
  struct Windows::UI::Composition::Compositor *v11; // [rsp+40h] [rbp+18h] BYREF

  *a3 = 0LL;
  v10 = 0LL;
  v11 = this;
  v5 = Microsoft::WRL2::Details::MakeAndInitialize2<Windows::UI::Composition::CompositionSpriteShape,Windows::UI::Composition::CompositionSpriteShape,Windows::UI::Composition::Compositor *>(
         (__int64 *)&v10,
         &v11);
  v6 = v5;
  if ( v5 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x7FB,
      (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtcompositor.cpp",
      (const char *)(unsigned int)v5);
    Microsoft::WRL2::RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>::~RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>(&v10);
    return v6;
  }
  else
  {
    v7 = v10;
    if ( a2 )
      Windows::UI::Composition::CompositionSpriteShape::SetGeometry(v10, a2);
    *a3 = v7;
    return 0LL;
  }
}
