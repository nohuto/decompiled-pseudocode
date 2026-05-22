/*
 * XREFs of ?CreateSharedTarget@CompositorCommon@Composition@UI@Windows@@QEAAJPEAPEAVVisualTarget@234@@Z @ 0x180126CEC
 * Callers:
 *     ?CreateSharedTarget@Partner@CompositorCommon@Composition@UI@Windows@@UEAAJPEAPEAUIVisualTargetPartner@345@@Z @ 0x180126D60 (-CreateSharedTarget@Partner@CompositorCommon@Composition@UI@Windows@@UEAAJPEAPEAUIVisualTargetPa.c)
 *     ?CreateSharedTarget@XUCPrivate@CompositorCommon@Composition@UI@Windows@@UEAAJPEAPEAUICompositionTargetPartner@Private@345@@Z @ 0x180126E20 (-CreateSharedTarget@XUCPrivate@CompositorCommon@Composition@UI@Windows@@UEAAJPEAPEAUIComposition.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$RefPtr@VInteractionTrackerInertiaNaturalMotion@Interactions@Composition@UI@Windows@@@WRL2@Microsoft@@QEAA@XZ @ 0x1800A203C (--1-$RefPtr@VInteractionTrackerInertiaNaturalMotion@Interactions@Composition@UI@Windows@@@WRL2@M.c)
 *     ??$MakeAndInitialize2@VVisualTarget@Composition@UI@Windows@@V1234@PEAVCompositor@234@@Details@WRL2@Microsoft@@YAJPEAPEAVVisualTarget@Composition@UI@Windows@@$$QEAPEAVCompositor@456@@Z @ 0x180122228 (--$MakeAndInitialize2@VVisualTarget@Composition@UI@Windows@@V1234@PEAVCompositor@234@@Details@WR.c)
 */

__int64 __fastcall Windows::UI::Composition::CompositorCommon::CreateSharedTarget(
        DirectComposition::CDevice **this,
        struct Windows::UI::Composition::VisualTarget **a2)
{
  int v3; // eax
  unsigned int v4; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  Microsoft::WRL2::NestableRuntimeClass *v7; // [rsp+30h] [rbp+8h] BYREF
  DirectComposition::CDevice **v8; // [rsp+38h] [rbp+10h] BYREF

  *a2 = 0LL;
  v7 = 0LL;
  v8 = this;
  v3 = Microsoft::WRL2::Details::MakeAndInitialize2<Windows::UI::Composition::VisualTarget,Windows::UI::Composition::VisualTarget,Windows::UI::Composition::Compositor *>(
         &v7,
         &v8);
  v4 = v3;
  if ( v3 >= 0 )
  {
    *a2 = v7;
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1235,
      (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtcompositor.cpp",
      (const char *)(unsigned int)v3);
    Microsoft::WRL2::RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>::~RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>(&v7);
    return v4;
  }
}
