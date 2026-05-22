/*
 * XREFs of ?CreateContainerVisual@CompositorCommon@Composition@UI@Windows@@QEAAJPEAPEAVContainerVisual@234@@Z @ 0x18006C950
 * Callers:
 *     ?RuntimeClassInitialize@VisualTreeIsland@Composition@UI@Windows@@QEAAJPEAVCompositor@234@@Z @ 0x18006C848 (-RuntimeClassInitialize@VisualTreeIsland@Composition@UI@Windows@@QEAAJPEAVCompositor@234@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$MakeAndInitialize2@VContainerVisual@Composition@UI@Windows@@V1234@PEAVCompositor@234@@Details@WRL2@Microsoft@@YAJPEAPEAVContainerVisual@Composition@UI@Windows@@$$QEAPEAVCompositor@456@@Z @ 0x18006CD9C (--$MakeAndInitialize2@VContainerVisual@Composition@UI@Windows@@V1234@PEAVCompositor@234@@Details.c)
 *     ??1?$RefPtr@VInteractionTrackerInertiaNaturalMotion@Interactions@Composition@UI@Windows@@@WRL2@Microsoft@@QEAA@XZ @ 0x1800A203C (--1-$RefPtr@VInteractionTrackerInertiaNaturalMotion@Interactions@Composition@UI@Windows@@@WRL2@M.c)
 */

__int64 __fastcall Windows::UI::Composition::CompositorCommon::CreateContainerVisual(
        Windows::UI::Composition::CompositorCommon *this,
        struct Windows::UI::Composition::ContainerVisual **a2)
{
  int v3; // eax
  unsigned int v4; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  struct Windows::UI::Composition::ContainerVisual *v7; // [rsp+30h] [rbp+8h] BYREF
  Windows::UI::Composition::CompositorCommon *v8; // [rsp+38h] [rbp+10h] BYREF

  *a2 = 0LL;
  v7 = 0LL;
  v8 = this;
  v3 = Microsoft::WRL2::Details::MakeAndInitialize2<Windows::UI::Composition::ContainerVisual,Windows::UI::Composition::ContainerVisual,Windows::UI::Composition::Compositor *>(
         &v7,
         &v8);
  v4 = v3;
  if ( v3 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x5E2,
      (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtcompositor.cpp",
      (const char *)(unsigned int)v3);
    Microsoft::WRL2::RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>::~RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>(&v7);
    return v4;
  }
  else
  {
    *a2 = v7;
    return 0LL;
  }
}
