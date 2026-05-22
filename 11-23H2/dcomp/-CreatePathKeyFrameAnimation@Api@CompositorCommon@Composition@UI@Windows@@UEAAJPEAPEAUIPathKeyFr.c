/*
 * XREFs of ?CreatePathKeyFrameAnimation@Api@CompositorCommon@Composition@UI@Windows@@UEAAJPEAPEAUIPathKeyFrameAnimation@345@@Z @ 0x1801262D0
 * Callers:
 *     <none>
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ??1?$RefPtr@VInteractionTrackerInertiaNaturalMotion@Interactions@Composition@UI@Windows@@@WRL2@Microsoft@@QEAA@XZ @ 0x1800A203C (--1-$RefPtr@VInteractionTrackerInertiaNaturalMotion@Interactions@Composition@UI@Windows@@@WRL2@M.c)
 *     ??$InitApiData@AEAY0CC@$$CBGAEAY0BM@$$CBG$$TPECJ@ApiTelemetryLogger@details@wil@@SAXAEAY0CC@$$CBGAEAY0BM@$$CBG$$QEA$$T$$QEAPECJ@Z @ 0x18011F614 (--$InitApiData@AEAY0CC@$$CBGAEAY0BM@$$CBG$$TPECJ@ApiTelemetryLogger@details@wil@@SAXAEAY0CC@$$CB.c)
 *     ??$MakeAndInitialize2@VPathKeyFrameAnimation@Composition@UI@Windows@@V1234@PEAVCompositor@234@@Details@WRL2@Microsoft@@YAJPEAPEAVPathKeyFrameAnimation@Composition@UI@Windows@@$$QEAPEAVCompositor@456@@Z @ 0x1801210D0 (--$MakeAndInitialize2@VPathKeyFrameAnimation@Composition@UI@Windows@@V1234@PEAVCompositor@234@@D.c)
 */

__int64 __fastcall Windows::UI::Composition::CompositorCommon::Api::CreatePathKeyFrameAnimation(
        Windows::UI::Composition::CompositorCommon::Api *this,
        struct Windows::UI::Composition::IPathKeyFrameAnimation **a2)
{
  struct _RTL_CRITICAL_SECTION *v4; // rdi
  unsigned int v5; // ebx
  int v6; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  Microsoft::WRL2::NestableRuntimeClass *v9; // [rsp+30h] [rbp+8h] BYREF
  struct _RTL_CRITICAL_SECTION *v10; // [rsp+38h] [rbp+10h] BYREF

  if ( _InterlockedIncrement(&dword_180220FA0) == 1 )
  {
    v10 = 0LL;
    v9 = (Microsoft::WRL2::NestableRuntimeClass *)&dword_180220FA0;
    wil::details::ApiTelemetryLogger::InitApiData<unsigned short const (&)[34],unsigned short const (&)[28],std::nullptr_t,long volatile *>(
      (__int64)this,
      L"CreatePathKeyFrameAnimation",
      (const char **)&v10,
      (volatile int **)&v9);
  }
  *a2 = 0LL;
  v4 = (struct _RTL_CRITICAL_SECTION *)((char *)this - 176);
  Microsoft::WRL2::ContextSession::BeginApiEntry(v4);
  if ( (v4->SpinCount & 2) != 0 )
  {
    v9 = 0LL;
    v10 = v4;
    v6 = Microsoft::WRL2::Details::MakeAndInitialize2<Windows::UI::Composition::PathKeyFrameAnimation,Windows::UI::Composition::PathKeyFrameAnimation,Windows::UI::Composition::Compositor *>(
           &v9,
           (struct Windows::UI::Composition::Compositor **)&v10);
    v5 = v6;
    if ( v6 >= 0 )
    {
      *a2 = (struct Windows::UI::Composition::IPathKeyFrameAnimation *)(((unsigned __int64)v9 + 496) & ((unsigned __int128)-(__int128)(unsigned __int64)v9 >> 64));
      v5 = 0;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x7A2,
        (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtcompositor.cpp",
        (const char *)(unsigned int)v6);
      Microsoft::WRL2::RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>::~RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>(&v9);
      DoStackCaptureDirect(v5, 0x208Bu);
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
  Microsoft::WRL2::ContextSession::EndApiEntry(v4);
  return v5;
}
