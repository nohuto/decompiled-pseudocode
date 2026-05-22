/*
 * XREFs of ?CreateShapeVisual@Api@CompositorCommon@Composition@UI@Windows@@UEAAJPEAPEAUIShapeVisual@345@@Z @ 0x18005D750
 * Callers:
 *     <none>
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ??$MakeAndInitialize2@VShapeVisual@Composition@UI@Windows@@V1234@PEAVCompositor@234@@Details@WRL2@Microsoft@@YAJPEAPEAVShapeVisual@Composition@UI@Windows@@$$QEAPEAVCompositor@456@@Z @ 0x18005D4B4 (--$MakeAndInitialize2@VShapeVisual@Composition@UI@Windows@@V1234@PEAVCompositor@234@@Details@WRL.c)
 *     ??$InitApiData@AEAY0CC@$$CBGAEAY0BC@$$CBG$$TPECJ@ApiTelemetryLogger@details@wil@@SAXAEAY0CC@$$CBGAEAY0BC@$$CBG$$QEA$$T$$QEAPECJ@Z @ 0x180065E64 (--$InitApiData@AEAY0CC@$$CBGAEAY0BC@$$CBG$$TPECJ@ApiTelemetryLogger@details@wil@@SAXAEAY0CC@$$CB.c)
 *     ??1?$RefPtr@VInteractionTrackerInertiaNaturalMotion@Interactions@Composition@UI@Windows@@@WRL2@Microsoft@@QEAA@XZ @ 0x1800A203C (--1-$RefPtr@VInteractionTrackerInertiaNaturalMotion@Interactions@Composition@UI@Windows@@@WRL2@M.c)
 */

__int64 __fastcall Windows::UI::Composition::CompositorCommon::Api::CreateShapeVisual(
        Windows::UI::Composition::CompositorCommon::Api *this,
        struct Windows::UI::Composition::IShapeVisual **a2)
{
  struct _RTL_CRITICAL_SECTION *v4; // rdi
  int v5; // eax
  unsigned int v6; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  Windows::UI::Composition::ShapeVisual *v9; // [rsp+30h] [rbp+8h] BYREF
  struct _RTL_CRITICAL_SECTION *v10; // [rsp+38h] [rbp+10h] BYREF

  if ( _InterlockedIncrement(&dword_1802208B8) == 1 )
  {
    v10 = 0LL;
    v9 = (Windows::UI::Composition::ShapeVisual *)&dword_1802208B8;
    wil::details::ApiTelemetryLogger::InitApiData<unsigned short const (&)[34],unsigned short const (&)[18],std::nullptr_t,long volatile *>(
      this,
      L"CreateShapeVisual",
      &v10,
      &v9);
  }
  *a2 = 0LL;
  v4 = (struct _RTL_CRITICAL_SECTION *)((char *)this - 176);
  Microsoft::WRL2::ContextSession::BeginApiEntry(v4);
  if ( (v4->SpinCount & 2) != 0 )
  {
    v9 = 0LL;
    v10 = v4;
    v5 = Microsoft::WRL2::Details::MakeAndInitialize2<Windows::UI::Composition::ShapeVisual,Windows::UI::Composition::ShapeVisual,Windows::UI::Composition::Compositor *>(
           &v9,
           (struct Windows::UI::Composition::Compositor **)&v10);
    v6 = v5;
    if ( v5 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x7E4,
        (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtcompositor.cpp",
        (const char *)(unsigned int)v5);
      Microsoft::WRL2::RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>::~RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>(&v9);
      DoStackCaptureDirect(v6, 0x20DFu);
    }
    else
    {
      *a2 = (struct Windows::UI::Composition::IShapeVisual *)(((unsigned __int64)v9 + 352) & ((unsigned __int128)-(__int128)(unsigned __int64)v9 >> 64));
      v6 = 0;
    }
  }
  else
  {
    v6 = -2147483629;
    RoOriginateErrorW(
      2147483667LL,
      0LL,
      L"The given object has already been closed / disposed and may no longer be used.");
  }
  Microsoft::WRL2::ContextSession::EndApiEntry(v4);
  return v6;
}
