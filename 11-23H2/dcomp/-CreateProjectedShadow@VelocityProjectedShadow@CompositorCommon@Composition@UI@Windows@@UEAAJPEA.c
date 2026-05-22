/*
 * XREFs of ?CreateProjectedShadow@VelocityProjectedShadow@CompositorCommon@Composition@UI@Windows@@UEAAJPEAPEAUICompositionProjectedShadow@345@@Z @ 0x18000E0D0
 * Callers:
 *     <none>
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$MakeAndInitialize2@VCompositionProjectedShadow@Composition@UI@Windows@@V1234@PEAVCompositor@234@@Details@WRL2@Microsoft@@YAJPEAPEAVCompositionProjectedShadow@Composition@UI@Windows@@$$QEAPEAVCompositor@456@@Z @ 0x18000E160 (--$MakeAndInitialize2@VCompositionProjectedShadow@Composition@UI@Windows@@V1234@PEAVCompositor@2.c)
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ??1?$RefPtr@VInteractionTrackerInertiaNaturalMotion@Interactions@Composition@UI@Windows@@@WRL2@Microsoft@@QEAA@XZ @ 0x1800A203C (--1-$RefPtr@VInteractionTrackerInertiaNaturalMotion@Interactions@Composition@UI@Windows@@@WRL2@M.c)
 */

__int64 __fastcall Windows::UI::Composition::CompositorCommon::VelocityProjectedShadow::CreateProjectedShadow(
        Windows::UI::Composition::CompositorCommon::VelocityProjectedShadow *this,
        struct Windows::UI::Composition::ICompositionProjectedShadow **a2)
{
  Microsoft::WRL2::ContextSession *v2; // rdi
  int v4; // eax
  unsigned int v5; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  unsigned __int64 v8; // [rsp+30h] [rbp+8h] BYREF
  Microsoft::WRL2::ContextSession *v9; // [rsp+38h] [rbp+10h] BYREF

  *a2 = 0LL;
  v2 = (Windows::UI::Composition::CompositorCommon::VelocityProjectedShadow *)((char *)this - 392);
  Microsoft::WRL2::ContextSession::BeginApiEntry((Windows::UI::Composition::CompositorCommon::VelocityProjectedShadow *)((char *)this - 392));
  if ( (*((_BYTE *)v2 + 32) & 2) != 0 )
  {
    v8 = 0LL;
    v9 = v2;
    v4 = Microsoft::WRL2::Details::MakeAndInitialize2<Windows::UI::Composition::CompositionProjectedShadow,Windows::UI::Composition::CompositionProjectedShadow,Windows::UI::Composition::Compositor *>(
           &v8,
           &v9);
    v5 = v4;
    if ( v4 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x138F,
        (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtcompositor.cpp",
        (const char *)(unsigned int)v4);
      Microsoft::WRL2::RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>::~RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>(&v8);
      DoStackCaptureDirect(v5, 0x2279u);
    }
    else
    {
      *a2 = (struct Windows::UI::Composition::ICompositionProjectedShadow *)((v8 + 136) & ((unsigned __int128)-(__int128)v8 >> 64));
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
