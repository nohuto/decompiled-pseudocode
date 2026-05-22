/*
 * XREFs of ?CreateSharedVisualReferenceController@CompositorCommon@Composition@UI@Windows@@QEAAJPEAVVisual@234@PEAPEAVVisualReferenceController@Private@234@@Z @ 0x18012702C
 * Callers:
 *     ?AllocateVisualId@CompositionIsland@Composition@UI@Windows@@QEAAJXZ @ 0x18008D0B4 (-AllocateVisualId@CompositionIsland@Composition@UI@Windows@@QEAAJXZ.c)
 *     ?CreateSharedVisualReferenceController@DCPrivate@CompositorCommon@Composition@UI@Windows@@UEAAJPEAUIVisual@345@PEAPEAUIVisualReferenceController@Private@345@@Z @ 0x1801270E0 (-CreateSharedVisualReferenceController@DCPrivate@CompositorCommon@Composition@UI@Windows@@UEAAJP.c)
 *     ?CreateSharedVisualReferenceController@XUCPrivate2@CompositorCommon@Composition@UI@Windows@@UEAAJPEAUIVisual@345@PEAPEAUIVisualReferenceController@Private@345@@Z @ 0x180127200 (-CreateSharedVisualReferenceController@XUCPrivate2@CompositorCommon@Composition@UI@Windows@@UEAA.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$RefPtr@VInteractionTrackerInertiaNaturalMotion@Interactions@Composition@UI@Windows@@@WRL2@Microsoft@@QEAA@XZ @ 0x1800A203C (--1-$RefPtr@VInteractionTrackerInertiaNaturalMotion@Interactions@Composition@UI@Windows@@@WRL2@M.c)
 *     ??$MakeAndInitialize2@VVisualReferenceController@Private@Composition@UI@Windows@@V12345@PEAVCompositor@345@_N@Details@WRL2@Microsoft@@YAJPEAPEAVVisualReferenceController@Private@Composition@UI@Windows@@$$QEAPEAVCompositor@567@$$QEA_N@Z @ 0x180122168 (--$MakeAndInitialize2@VVisualReferenceController@Private@Composition@UI@Windows@@V1_ea_180122168.c)
 *     ?SetVisual@VisualReferenceController@Private@Composition@UI@Windows@@QEAAJPEAVVisual@345@@Z @ 0x18016F4C0 (-SetVisual@VisualReferenceController@Private@Composition@UI@Windows@@QEAAJPEAVVisual@345@@Z.c)
 */

__int64 __fastcall Windows::UI::Composition::CompositorCommon::CreateSharedVisualReferenceController(
        Windows::UI::Composition::CompositorCommon *this,
        struct Windows::UI::Composition::Visual *a2,
        struct Windows::UI::Composition::Private::VisualReferenceController **a3)
{
  int v5; // eax
  unsigned int v6; // ebx
  struct Windows::UI::Composition::Private::VisualReferenceController *v7; // rbx
  int v8; // eax
  int v9; // edi
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  char v12; // [rsp+40h] [rbp+8h] BYREF
  Windows::UI::Composition::Private::VisualReferenceController *v13; // [rsp+50h] [rbp+18h] BYREF
  struct Windows::UI::Composition::Compositor *v14; // [rsp+58h] [rbp+20h] BYREF

  *a3 = 0LL;
  v13 = 0LL;
  v14 = this;
  v12 = 1;
  v5 = Microsoft::WRL2::Details::MakeAndInitialize2<Windows::UI::Composition::Private::VisualReferenceController,Windows::UI::Composition::Private::VisualReferenceController,Windows::UI::Composition::Compositor *,bool>(
         &v13,
         &v14,
         (bool *)&v12);
  v6 = v5;
  if ( v5 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1217,
      (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtcompositor.cpp",
      (const char *)(unsigned int)v5);
LABEL_6:
    Microsoft::WRL2::RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>::~RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>(&v13);
    return v6;
  }
  v7 = v13;
  if ( a2 )
  {
    v8 = Windows::UI::Composition::Private::VisualReferenceController::SetVisual(v13, a2);
    v9 = v8;
    if ( v8 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x121B,
        (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtcompositor.cpp",
        (const char *)(unsigned int)v8);
      v6 = v9;
      goto LABEL_6;
    }
  }
  *a3 = v7;
  return 0LL;
}
