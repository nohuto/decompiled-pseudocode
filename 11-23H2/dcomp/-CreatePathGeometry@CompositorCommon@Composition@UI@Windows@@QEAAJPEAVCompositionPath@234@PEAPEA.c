/*
 * XREFs of ?CreatePathGeometry@CompositorCommon@Composition@UI@Windows@@QEAAJPEAVCompositionPath@234@PEAPEAVCompositionPathGeometry@234@@Z @ 0x1800407B8
 * Callers:
 *     ?CreatePathGeometryWithPath@Api@CompositorCommon@Composition@UI@Windows@@UEAAJPEAUICompositionPath@345@PEAPEAUICompositionPathGeometry@345@@Z @ 0x180040940 (-CreatePathGeometryWithPath@Api@CompositorCommon@Composition@UI@Windows@@UEAAJPEAUICompositionPa.c)
 *     ?CreatePathGeometry@Api@CompositorCommon@Composition@UI@Windows@@UEAAJPEAPEAUICompositionPathGeometry@345@@Z @ 0x18008B730 (-CreatePathGeometry@Api@CompositorCommon@Composition@UI@Windows@@UEAAJPEAPEAUICompositionPathGeo.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SetPath@CompositionPathGeometry@Composition@UI@Windows@@QEAAJPEAVCompositionPath@234@@Z @ 0x1800403B8 (-SetPath@CompositionPathGeometry@Composition@UI@Windows@@QEAAJPEAVCompositionPath@234@@Z.c)
 *     ??$MakeAndInitialize2@VCompositionPathGeometry@Composition@UI@Windows@@V1234@PEAVCompositor@234@@Details@WRL2@Microsoft@@YAJPEAPEAVCompositionPathGeometry@Composition@UI@Windows@@$$QEAPEAVCompositor@456@@Z @ 0x180040830 (--$MakeAndInitialize2@VCompositionPathGeometry@Composition@UI@Windows@@V1234@PEAVCompositor@234@.c)
 *     ??1?$RefPtr@VInteractionTrackerInertiaNaturalMotion@Interactions@Composition@UI@Windows@@@WRL2@Microsoft@@QEAA@XZ @ 0x1800A203C (--1-$RefPtr@VInteractionTrackerInertiaNaturalMotion@Interactions@Composition@UI@Windows@@@WRL2@M.c)
 */

__int64 __fastcall Windows::UI::Composition::CompositorCommon::CreatePathGeometry(
        Windows::UI::Composition::CompositorCommon *this,
        struct Windows::UI::Composition::CompositionPath *a2,
        struct Windows::UI::Composition::CompositionPathGeometry **a3)
{
  int v5; // eax
  unsigned int v6; // ebx
  struct Windows::UI::Composition::CompositionPathGeometry *v7; // rbx
  int v8; // eax
  int v9; // edi
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  Windows::UI::Composition::CompositionPathGeometry *v12; // [rsp+30h] [rbp+8h] BYREF
  Windows::UI::Composition::CompositorCommon *v13; // [rsp+40h] [rbp+18h] BYREF

  *a3 = 0LL;
  v12 = 0LL;
  v13 = this;
  v5 = Microsoft::WRL2::Details::MakeAndInitialize2<Windows::UI::Composition::CompositionPathGeometry,Windows::UI::Composition::CompositionPathGeometry,Windows::UI::Composition::Compositor *>(
         &v12,
         &v13);
  v6 = v5;
  if ( v5 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x78E,
      (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtcompositor.cpp",
      (const char *)(unsigned int)v5);
  }
  else
  {
    v7 = v12;
    if ( !a2
      || (v8 = Windows::UI::Composition::CompositionPathGeometry::SetPath(
                 (struct Windows::UI::Composition::CompositionPath **)v12,
                 a2),
          v9 = v8,
          v8 >= 0) )
    {
      *a3 = v7;
      return 0LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x792,
      (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtcompositor.cpp",
      (const char *)(unsigned int)v8);
    v6 = v9;
  }
  Microsoft::WRL2::RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>::~RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>(&v12);
  return v6;
}
