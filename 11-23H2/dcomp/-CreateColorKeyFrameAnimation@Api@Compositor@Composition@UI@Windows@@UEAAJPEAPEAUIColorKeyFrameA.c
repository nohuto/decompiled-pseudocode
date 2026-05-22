/*
 * XREFs of ?CreateColorKeyFrameAnimation@Api@Compositor@Composition@UI@Windows@@UEAAJPEAPEAUIColorKeyFrameAnimation@345@@Z @ 0x18005EB30
 * Callers:
 *     <none>
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ??$MakeAndInitialize2@VColorKeyFrameAnimation@Composition@UI@Windows@@V1234@PEAVCompositor@234@@Details@WRL2@Microsoft@@YAJPEAPEAVColorKeyFrameAnimation@Composition@UI@Windows@@$$QEAPEAVCompositor@456@@Z @ 0x18005EBC0 (--$MakeAndInitialize2@VColorKeyFrameAnimation@Composition@UI@Windows@@V1234@PEAVCompositor@234@@.c)
 *     ??1?$RefPtr@VInteractionTrackerInertiaNaturalMotion@Interactions@Composition@UI@Windows@@@WRL2@Microsoft@@QEAA@XZ @ 0x1800A203C (--1-$RefPtr@VInteractionTrackerInertiaNaturalMotion@Interactions@Composition@UI@Windows@@@WRL2@M.c)
 */

__int64 __fastcall Windows::UI::Composition::Compositor::Api::CreateColorKeyFrameAnimation(
        struct _RTL_CRITICAL_SECTION *this,
        struct Windows::UI::Composition::IColorKeyFrameAnimation **a2)
{
  struct _RTL_CRITICAL_SECTION *v2; // rdi
  int v4; // eax
  unsigned int v5; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  unsigned __int64 v8; // [rsp+30h] [rbp+8h] BYREF
  struct _RTL_CRITICAL_SECTION *v9; // [rsp+38h] [rbp+10h] BYREF

  *a2 = 0LL;
  v2 = this - 27;
  Microsoft::WRL2::ContextSession::BeginApiEntry(this - 27);
  if ( (v2->SpinCount & 2) != 0 )
  {
    v8 = 0LL;
    v9 = v2;
    v4 = Microsoft::WRL2::Details::MakeAndInitialize2<Windows::UI::Composition::ColorKeyFrameAnimation,Windows::UI::Composition::ColorKeyFrameAnimation,Windows::UI::Composition::Compositor *>(
           &v8,
           &v9);
    v5 = v4;
    if ( v4 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x4BA,
        (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtcompositor.cpp",
        (const char *)(unsigned int)v4);
      Microsoft::WRL2::RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>::~RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>(&v8);
      DoStackCaptureDirect(v5, 0x2CFu);
    }
    else
    {
      *a2 = (struct Windows::UI::Composition::IColorKeyFrameAnimation *)((v8 + 496) & ((unsigned __int128)-(__int128)v8 >> 64));
      v5 = 0;
    }
  }
  else
  {
    v5 = -2147483629;
    RoOriginateErrorW(
      2147483667LL,
      0LL,
      L"The given object has already been closed / disposed and may no longer be used.");
  }
  Microsoft::WRL2::ContextSession::EndApiEntry(v2);
  return v5;
}
