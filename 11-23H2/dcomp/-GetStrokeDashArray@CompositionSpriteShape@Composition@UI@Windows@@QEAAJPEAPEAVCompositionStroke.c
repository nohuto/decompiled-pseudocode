/*
 * XREFs of ?GetStrokeDashArray@CompositionSpriteShape@Composition@UI@Windows@@QEAAJPEAPEAVCompositionStrokeDashArray@234@@Z @ 0x180170D88
 * Callers:
 *     ?get_StrokeDashArray@Api@CompositionSpriteShape@Composition@UI@Windows@@UEAAJPEAPEAU?$IVector@M@Collections@Foundation@5@@Z @ 0x180171D10 (-get_StrokeDashArray@Api@CompositionSpriteShape@Composition@UI@Windows@@UEAAJPEAPEAU-$IVector@M@.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$RefPtr@VInteractionTrackerInertiaNaturalMotion@Interactions@Composition@UI@Windows@@@WRL2@Microsoft@@QEAA@XZ @ 0x1800A203C (--1-$RefPtr@VInteractionTrackerInertiaNaturalMotion@Interactions@Composition@UI@Windows@@@WRL2@M.c)
 *     ??4?$RefPtr@VSharedSectionWrapper@Composition@UI@Windows@@@WRL2@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x1801321A8 (--4-$RefPtr@VSharedSectionWrapper@Composition@UI@Windows@@@WRL2@Microsoft@@QEAAAEAV012@AEBV012@@.c)
 *     ??$MakeAndInitialize2@VCompositionStrokeDashArray@Composition@UI@Windows@@V1234@PEAVCompositor@234@PEAVCompositionSpriteShape@234@@Details@WRL2@Microsoft@@YAJPEAPEAVCompositionStrokeDashArray@Composition@UI@Windows@@$$QEAPEAVCompositor@456@$$QEAPEAVCompositionSpriteShape@456@@Z @ 0x18016FBC4 (--$MakeAndInitialize2@VCompositionStrokeDashArray@Composition@UI@Windows@@V1234@PEAVCompositor@2.c)
 */

__int64 __fastcall Windows::UI::Composition::CompositionSpriteShape::GetStrokeDashArray(
        Windows::UI::Composition::CompositionSpriteShape *this,
        struct Windows::UI::Composition::CompositionStrokeDashArray **a2)
{
  Microsoft::WRL2::NestableRuntimeClass **v2; // rbx
  Microsoft::WRL2::NestableRuntimeClass **v4; // rdx
  Microsoft::WRL2::NestableRuntimeClass **v5; // rcx
  struct Windows::UI::Composition::Compositor *v6; // rax
  int v7; // eax
  unsigned int v8; // edi
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  Microsoft::WRL2::NestableRuntimeClass *v11; // [rsp+40h] [rbp+8h] BYREF
  struct Windows::UI::Composition::CompositionSpriteShape *v12; // [rsp+50h] [rbp+18h] BYREF
  struct Windows::UI::Composition::Compositor *v13; // [rsp+58h] [rbp+20h] BYREF

  v11 = 0LL;
  v2 = (Microsoft::WRL2::NestableRuntimeClass **)((char *)this + 232);
  if ( *((_QWORD *)this + 29) )
  {
    v4 = (Microsoft::WRL2::NestableRuntimeClass **)((char *)this + 232);
    v5 = &v11;
  }
  else
  {
    v6 = (struct Windows::UI::Composition::Compositor *)*((_QWORD *)this + 3);
    v12 = this;
    v13 = v6;
    v7 = Microsoft::WRL2::Details::MakeAndInitialize2<Windows::UI::Composition::CompositionStrokeDashArray,Windows::UI::Composition::CompositionStrokeDashArray,Windows::UI::Composition::Compositor *,Windows::UI::Composition::CompositionSpriteShape *>(
           &v11,
           &v13,
           &v12);
    v8 = v7;
    if ( v7 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x10C,
        (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtcompositionspriteshape.cpp",
        (const char *)(unsigned int)v7);
      Microsoft::WRL2::RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>::~RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>(&v11);
      return v8;
    }
    v4 = &v11;
    v5 = v2;
  }
  Microsoft::WRL2::RefPtr<Windows::UI::Composition::SharedSectionWrapper>::operator=(v5, v4);
  *a2 = v11;
  return 0LL;
}
