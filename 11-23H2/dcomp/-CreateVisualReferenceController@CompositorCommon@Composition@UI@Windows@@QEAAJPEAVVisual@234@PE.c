/*
 * XREFs of ?CreateVisualReferenceController@CompositorCommon@Composition@UI@Windows@@QEAAJPEAVVisual@234@PEAPEAVVisualReferenceController@Private@234@@Z @ 0x180127AD8
 * Callers:
 *     ?CreateVisualReferenceController@XUCPrivate2@CompositorCommon@Composition@UI@Windows@@UEAAJPEAUIVisual@345@PEAPEAUIVisualReferenceController@Private@345@@Z @ 0x180127B90 (-CreateVisualReferenceController@XUCPrivate2@CompositorCommon@Composition@UI@Windows@@UEAAJPEAUI.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$RefPtr@VInteractionTrackerInertiaNaturalMotion@Interactions@Composition@UI@Windows@@@WRL2@Microsoft@@QEAA@XZ @ 0x1800A203C (--1-$RefPtr@VInteractionTrackerInertiaNaturalMotion@Interactions@Composition@UI@Windows@@@WRL2@M.c)
 *     ??$MakeAndInitialize2@VVisualReferenceController@Private@Composition@UI@Windows@@V12345@PEAVCompositor@345@@Details@WRL2@Microsoft@@YAJPEAPEAVVisualReferenceController@Private@Composition@UI@Windows@@$$QEAPEAVCompositor@567@@Z @ 0x1801220A4 (--$MakeAndInitialize2@VVisualReferenceController@Private@Composition@UI@Windows@@V12345@PEAVComp.c)
 *     ?SetVisual@VisualReferenceController@Private@Composition@UI@Windows@@QEAAJPEAVVisual@345@@Z @ 0x18016F4C0 (-SetVisual@VisualReferenceController@Private@Composition@UI@Windows@@QEAAJPEAVVisual@345@@Z.c)
 */

__int64 __fastcall Windows::UI::Composition::CompositorCommon::CreateVisualReferenceController(
        Windows::UI::Composition::CompositorCommon *this,
        struct Windows::UI::Composition::Visual *a2,
        struct Windows::UI::Composition::Private::VisualReferenceController **a3)
{
  int v5; // eax
  unsigned int v6; // ebx
  struct Windows::UI::Composition::Private::VisualReferenceController *v7; // rbx
  int v8; // eax
  int v9; // edi
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  Windows::UI::Composition::Private::VisualReferenceController *v12; // [rsp+30h] [rbp+8h] BYREF
  struct Windows::UI::Composition::Compositor *v13; // [rsp+40h] [rbp+18h] BYREF

  *a3 = 0LL;
  v12 = 0LL;
  v13 = this;
  v5 = Microsoft::WRL2::Details::MakeAndInitialize2<Windows::UI::Composition::Private::VisualReferenceController,Windows::UI::Composition::Private::VisualReferenceController,Windows::UI::Composition::Compositor *>(
         &v12,
         &v13);
  v6 = v5;
  if ( v5 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x5A9,
      (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtcompositor.cpp",
      (const char *)(unsigned int)v5);
LABEL_6:
    Microsoft::WRL2::RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>::~RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>(&v12);
    return v6;
  }
  v7 = v12;
  if ( a2 )
  {
    v8 = Windows::UI::Composition::Private::VisualReferenceController::SetVisual(v12, a2);
    v9 = v8;
    if ( v8 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x5AD,
        (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtcompositor.cpp",
        (const char *)(unsigned int)v8);
      v6 = v9;
      goto LABEL_6;
    }
  }
  *a3 = v7;
  return 0LL;
}
