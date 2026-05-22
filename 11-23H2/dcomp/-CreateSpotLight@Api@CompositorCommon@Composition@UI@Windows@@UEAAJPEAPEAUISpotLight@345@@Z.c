/*
 * XREFs of ?CreateSpotLight@Api@CompositorCommon@Composition@UI@Windows@@UEAAJPEAPEAUISpotLight@345@@Z @ 0x18000ADF0
 * Callers:
 *     <none>
 * Callees:
 *     ??$MakeAndInitialize2@VSpotLight@Composition@UI@Windows@@V1234@PEAVCompositor@234@@Details@WRL2@Microsoft@@YAJPEAPEAVSpotLight@Composition@UI@Windows@@$$QEAPEAVCompositor@456@@Z @ 0x18000AE80 (--$MakeAndInitialize2@VSpotLight@Composition@UI@Windows@@V1234@PEAVCompositor@234@@Details@WRL2@.c)
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ??1?$RefPtr@VInteractionTrackerInertiaNaturalMotion@Interactions@Composition@UI@Windows@@@WRL2@Microsoft@@QEAA@XZ @ 0x1800A203C (--1-$RefPtr@VInteractionTrackerInertiaNaturalMotion@Interactions@Composition@UI@Windows@@@WRL2@M.c)
 */

__int64 __fastcall Windows::UI::Composition::CompositorCommon::Api::CreateSpotLight(
        Windows::UI::Composition::CompositorCommon::Api *this,
        struct Windows::UI::Composition::ISpotLight **a2)
{
  Microsoft::WRL2::ContextSession *v2; // rdi
  int v4; // eax
  unsigned int v5; // ebx
  int v7; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  unsigned __int64 v9; // [rsp+30h] [rbp+8h] BYREF
  Microsoft::WRL2::ContextSession *v10; // [rsp+38h] [rbp+10h] BYREF

  *a2 = 0LL;
  v2 = (Windows::UI::Composition::CompositorCommon::Api *)((char *)this - 160);
  Microsoft::WRL2::ContextSession::BeginApiEntry((Windows::UI::Composition::CompositorCommon::Api *)((char *)this - 160));
  if ( (*((_BYTE *)v2 + 32) & 2) != 0 )
  {
    v9 = 0LL;
    v10 = v2;
    v4 = Microsoft::WRL2::Details::MakeAndInitialize2<Windows::UI::Composition::SpotLight,Windows::UI::Composition::SpotLight,Windows::UI::Composition::Compositor *>(
           &v9,
           &v10);
    v5 = v4;
    if ( v4 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x93C,
        (unsigned int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtcompositor.cpp",
        (const char *)(unsigned int)v4,
        v7);
      Microsoft::WRL2::RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>::~RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>(&v9);
      DoStackCaptureDirect(v5, 0x1990u);
    }
    else
    {
      *a2 = (struct Windows::UI::Composition::ISpotLight *)((v9 + 264) & ((unsigned __int128)-(__int128)v9 >> 64));
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
