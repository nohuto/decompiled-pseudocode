/*
 * XREFs of ?OpenSharedWriteCaptureControllerFromHandle@CompositorCommon@Composition@UI@Windows@@QEAAJPEAXPEAPEAVSharedWriteCaptureController@Internal@234@@Z @ 0x180128E94
 * Callers:
 *     ?OpenSharedWriteCaptureControllerFromHandle@Internal@Compositor@Composition@UI@Windows@@UEAAJPEAUICompositionHandle@1Handles@Foundation@5@PEAPEAUIWriteCaptureController@1345@@Z @ 0x180110800 (-OpenSharedWriteCaptureControllerFromHandle@Internal@Compositor@Composition@UI@Windows@@UEAAJPEA.c)
 *     ?OpenWriteCaptureControllerFromHandle@Native@CompositorCommon@Composition@UI@Windows@@UEAAJPEAXPEAPEAUIWriteCaptureController@Internal@345@@Z @ 0x180128F10 (-OpenWriteCaptureControllerFromHandle@Native@CompositorCommon@Composition@UI@Windows@@UEAAJPEAXP.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$RefPtr@VInteractionTrackerInertiaNaturalMotion@Interactions@Composition@UI@Windows@@@WRL2@Microsoft@@QEAA@XZ @ 0x1800A203C (--1-$RefPtr@VInteractionTrackerInertiaNaturalMotion@Interactions@Composition@UI@Windows@@@WRL2@M.c)
 *     ??$MakeAndInitialize2@VSharedWriteCaptureController@Internal@Composition@UI@Windows@@V12345@PEAVCompositor@345@AEAPEAX@Details@WRL2@Microsoft@@YAJPEAPEAVSharedWriteCaptureController@Internal@Composition@UI@Windows@@$$QEAPEAVCompositor@567@AEAPEAX@Z @ 0x1801217D4 (--$MakeAndInitialize2@VSharedWriteCaptureController@Internal@Composition@UI@Windows_ea_1801217D4.c)
 */

__int64 __fastcall Windows::UI::Composition::CompositorCommon::OpenSharedWriteCaptureControllerFromHandle(
        Windows::UI::Composition::CompositorCommon *this,
        void *a2,
        struct Windows::UI::Composition::Internal::SharedWriteCaptureController **a3)
{
  int v4; // eax
  unsigned int v5; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  Microsoft::WRL2::NestableRuntimeClass *v8; // [rsp+30h] [rbp+8h] BYREF
  void *v9; // [rsp+38h] [rbp+10h] BYREF
  struct Windows::UI::Composition::Compositor *v10; // [rsp+40h] [rbp+18h] BYREF

  v9 = a2;
  *a3 = 0LL;
  v8 = 0LL;
  v10 = this;
  v4 = Microsoft::WRL2::Details::MakeAndInitialize2<Windows::UI::Composition::Internal::SharedWriteCaptureController,Windows::UI::Composition::Internal::SharedWriteCaptureController,Windows::UI::Composition::Compositor *,void * &>(
         &v8,
         &v10,
         &v9);
  v5 = v4;
  if ( v4 >= 0 )
  {
    *a3 = v8;
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x131A,
      (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtcompositor.cpp",
      (const char *)(unsigned int)v4);
    Microsoft::WRL2::RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>::~RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>(&v8);
    return v5;
  }
}
