/*
 * XREFs of ?CreateGeometricClip@CompositorCommon@Composition@UI@Windows@@QEAAJPEAVCompositionGeometry@234@PEAPEAVCompositionGeometricClip@234@@Z @ 0x180087A38
 * Callers:
 *     ?CreateGeometricClipWithGeometry@Api@CompositorCommon@Composition@UI@Windows@@UEAAJPEAUICompositionGeometry@345@PEAPEAUICompositionGeometricClip@345@@Z @ 0x180087920 (-CreateGeometricClipWithGeometry@Api@CompositorCommon@Composition@UI@Windows@@UEAAJPEAUIComposit.c)
 *     ?CreateGeometricClip@Api@CompositorCommon@Composition@UI@Windows@@UEAAJPEAPEAUICompositionGeometricClip@345@@Z @ 0x180125CE0 (-CreateGeometricClip@Api@CompositorCommon@Composition@UI@Windows@@UEAAJPEAPEAUICompositionGeomet.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$MakeAndInitialize2@VCompositionGeometricClip@Composition@UI@Windows@@V1234@PEAVCompositor@234@@Details@WRL2@Microsoft@@YAJPEAPEAVCompositionGeometricClip@Composition@UI@Windows@@$$QEAPEAVCompositor@456@@Z @ 0x180087AA4 (--$MakeAndInitialize2@VCompositionGeometricClip@Composition@UI@Windows@@V1234@PEAVCompositor@234.c)
 *     ?SetGeometry@CompositionGeometricClip@Composition@UI@Windows@@QEAAXPEAVCompositionGeometry@234@@Z @ 0x180087C14 (-SetGeometry@CompositionGeometricClip@Composition@UI@Windows@@QEAAXPEAVCompositionGeometry@234@@.c)
 *     ??1?$RefPtr@VInteractionTrackerInertiaNaturalMotion@Interactions@Composition@UI@Windows@@@WRL2@Microsoft@@QEAA@XZ @ 0x1800A203C (--1-$RefPtr@VInteractionTrackerInertiaNaturalMotion@Interactions@Composition@UI@Windows@@@WRL2@M.c)
 */

__int64 __fastcall Windows::UI::Composition::CompositorCommon::CreateGeometricClip(
        Windows::UI::Composition::CompositorCommon *this,
        struct Windows::UI::Composition::CompositionGeometry *a2,
        struct Windows::UI::Composition::CompositionGeometricClip **a3)
{
  int v5; // eax
  unsigned int v6; // ebx
  struct Windows::UI::Composition::CompositionGeometricClip *v7; // rbx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  Windows::UI::Composition::CompositionGeometricClip *v10; // [rsp+30h] [rbp+8h] BYREF
  Windows::UI::Composition::CompositorCommon *v11; // [rsp+40h] [rbp+18h] BYREF

  *a3 = 0LL;
  v10 = 0LL;
  v11 = this;
  v5 = Microsoft::WRL2::Details::MakeAndInitialize2<Windows::UI::Composition::CompositionGeometricClip,Windows::UI::Composition::CompositionGeometricClip,Windows::UI::Composition::Compositor *>(
         &v10,
         &v11);
  v6 = v5;
  if ( v5 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x14E4,
      (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtcompositor.cpp",
      (const char *)(unsigned int)v5);
    Microsoft::WRL2::RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>::~RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>(&v10);
    return v6;
  }
  else
  {
    v7 = v10;
    if ( a2 )
      Windows::UI::Composition::CompositionGeometricClip::SetGeometry(v10, a2);
    *a3 = v7;
    return 0LL;
  }
}
