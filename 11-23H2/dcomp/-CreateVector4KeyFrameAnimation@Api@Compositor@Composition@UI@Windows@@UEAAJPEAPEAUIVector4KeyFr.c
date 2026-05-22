/*
 * XREFs of ?CreateVector4KeyFrameAnimation@Api@Compositor@Composition@UI@Windows@@UEAAJPEAPEAUIVector4KeyFrameAnimation@345@@Z @ 0x18010FA20
 * Callers:
 *     <none>
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ??1?$RefPtr@VInteractionTrackerInertiaNaturalMotion@Interactions@Composition@UI@Windows@@@WRL2@Microsoft@@QEAA@XZ @ 0x1800A203C (--1-$RefPtr@VInteractionTrackerInertiaNaturalMotion@Interactions@Composition@UI@Windows@@@WRL2@M.c)
 *     ??$MakeAndInitialize2@VVector4KeyFrameAnimation@Composition@UI@Windows@@V1234@PEAVCompositor@234@@Details@WRL2@Microsoft@@YAJPEAPEAVVector4KeyFrameAnimation@Composition@UI@Windows@@$$QEAPEAVCompositor@456@@Z @ 0x180121D34 (--$MakeAndInitialize2@VVector4KeyFrameAnimation@Composition@UI@Windows@@V1234@PEAVCompositor@234.c)
 */

__int64 __fastcall Windows::UI::Composition::Compositor::Api::CreateVector4KeyFrameAnimation(
        struct _RTL_CRITICAL_SECTION *this,
        struct Windows::UI::Composition::IVector4KeyFrameAnimation **a2)
{
  struct _RTL_CRITICAL_SECTION *v2; // rdi
  unsigned int v4; // ebx
  int v5; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  Microsoft::WRL2::NestableRuntimeClass *v8; // [rsp+30h] [rbp+8h] BYREF
  struct _RTL_CRITICAL_SECTION *v9; // [rsp+38h] [rbp+10h] BYREF

  *a2 = 0LL;
  v2 = this - 27;
  Microsoft::WRL2::ContextSession::BeginApiEntry(this - 27);
  if ( (v2->SpinCount & 2) != 0 )
  {
    v8 = 0LL;
    v9 = v2;
    v5 = Microsoft::WRL2::Details::MakeAndInitialize2<Windows::UI::Composition::Vector4KeyFrameAnimation,Windows::UI::Composition::Vector4KeyFrameAnimation,Windows::UI::Composition::Compositor *>(
           &v8,
           &v9);
    v4 = v5;
    if ( v5 >= 0 )
    {
      *a2 = (struct Windows::UI::Composition::IVector4KeyFrameAnimation *)(((unsigned __int64)v8 + 496) & ((unsigned __int128)-(__int128)(unsigned __int64)v8 >> 64));
      v4 = 0;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xA64,
        (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtcompositor.cpp",
        (const char *)(unsigned int)v5);
      Microsoft::WRL2::RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>::~RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>(&v8);
      DoStackCaptureDirect(v4, 0x537u);
    }
  }
  else
  {
    v4 = -2147483629;
    RoOriginateErrorW(
      2147483667LL,
      0LL,
      L"The given object has already been closed / disposed and may no longer be used.");
  }
  Microsoft::WRL2::ContextSession::EndApiEntry(v2);
  return v4;
}
