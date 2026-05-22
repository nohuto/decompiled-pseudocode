/*
 * XREFs of ?OpenSharedManipulationTransformFromHandle@DCPrivate@CompositorCommon@Composition@UI@Windows@@UEAAJPEAXPEAPEAUICompositionManipulationTransformPartner@345@@Z @ 0x180081E50
 * Callers:
 *     <none>
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ??$MakeAndInitialize2@VManipulationTransform@Composition@UI@Windows@@V1234@PEAVCompositor@234@AEAPEAX@Details@WRL2@Microsoft@@YAJPEAPEAVManipulationTransform@Composition@UI@Windows@@$$QEAPEAVCompositor@456@AEAPEAX@Z @ 0x180081FA4 (--$MakeAndInitialize2@VManipulationTransform@Composition@UI@Windows@@V1234@PEAVCompositor@234@AE.c)
 *     ??1?$RefPtr@VInteractionTrackerInertiaNaturalMotion@Interactions@Composition@UI@Windows@@@WRL2@Microsoft@@QEAA@XZ @ 0x1800A203C (--1-$RefPtr@VInteractionTrackerInertiaNaturalMotion@Interactions@Composition@UI@Windows@@@WRL2@M.c)
 */

__int64 __fastcall Windows::UI::Composition::CompositorCommon::DCPrivate::OpenSharedManipulationTransformFromHandle(
        Windows::UI::Composition::CompositorCommon::DCPrivate *this,
        void *a2,
        struct Windows::UI::Composition::ICompositionManipulationTransformPartner **a3)
{
  struct _RTL_CRITICAL_SECTION *v3; // rdi
  int v6; // eax
  unsigned int v7; // ebx
  unsigned int v9; // edx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  unsigned __int64 v11; // [rsp+40h] [rbp+8h] BYREF
  void *v12; // [rsp+50h] [rbp+18h] BYREF
  struct _RTL_CRITICAL_SECTION *v13; // [rsp+58h] [rbp+20h] BYREF

  *a3 = 0LL;
  v3 = (struct _RTL_CRITICAL_SECTION *)((char *)this - 328);
  Microsoft::WRL2::ContextSession::BeginApiEntry((struct _RTL_CRITICAL_SECTION *)((char *)this - 328));
  if ( (v3->SpinCount & 2) == 0 )
  {
    v7 = -2147483629;
    RoOriginateErrorW(
      2147483667LL,
      0LL,
      L"The given object has already been closed / disposed and may no longer be used.");
    goto LABEL_5;
  }
  if ( !a2 )
  {
    v7 = -2147024890;
    v9 = 7651;
LABEL_9:
    DoStackCaptureDirect(v7, v9);
    goto LABEL_5;
  }
  v11 = 0LL;
  v12 = a2;
  v13 = v3;
  v6 = Microsoft::WRL2::Details::MakeAndInitialize2<Windows::UI::Composition::ManipulationTransform,Windows::UI::Composition::ManipulationTransform,Windows::UI::Composition::Compositor *,void * &>(
         &v11,
         &v13,
         &v12);
  v7 = v6;
  if ( v6 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x12E2,
      (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtcompositor.cpp",
      (const char *)(unsigned int)v6);
    Microsoft::WRL2::RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>::~RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>(&v11);
    v9 = 7654;
    goto LABEL_9;
  }
  *a3 = (struct Windows::UI::Composition::ICompositionManipulationTransformPartner *)((v11 + 128) & ((unsigned __int128)-(__int128)v11 >> 64));
  v7 = 0;
LABEL_5:
  Microsoft::WRL2::ContextSession::EndApiEntry(v3);
  return v7;
}
