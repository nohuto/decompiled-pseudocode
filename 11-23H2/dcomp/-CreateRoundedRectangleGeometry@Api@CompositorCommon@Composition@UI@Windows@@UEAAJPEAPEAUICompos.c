/*
 * XREFs of ?CreateRoundedRectangleGeometry@Api@CompositorCommon@Composition@UI@Windows@@UEAAJPEAPEAUICompositionRoundedRectangleGeometry@345@@Z @ 0x180067A20
 * Callers:
 *     <none>
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?IsEnabled@ApiTelemetryLogger@details@wil@@SA_NE_K@Z @ 0x1800642F8 (-IsEnabled@ApiTelemetryLogger@details@wil@@SA_NE_K@Z.c)
 *     ?get@?$static_lazy@VApiTelemetryLogger@details@wil@@@details@wil@@QEAAPEAVApiTelemetryLogger@23@P6AXXZ@Z @ 0x18006431C (-get@-$static_lazy@VApiTelemetryLogger@details@wil@@@details@wil@@QEAAPEAVApiTelemetryLogger@23@.c)
 *     ?Insert@ApiDataList@ApiTelemetryLogger@details@wil@@QEAAXPEBG0PEBDPECJ@Z @ 0x180065BA0 (-Insert@ApiDataList@ApiTelemetryLogger@details@wil@@QEAAXPEBG0PEBDPECJ@Z.c)
 *     ??$MakeAndInitialize2@VCompositionRoundedRectangleGeometry@Composition@UI@Windows@@V1234@PEAVCompositor@234@@Details@WRL2@Microsoft@@YAJPEAPEAVCompositionRoundedRectangleGeometry@Composition@UI@Windows@@$$QEAPEAVCompositor@456@@Z @ 0x180067C4C (--$MakeAndInitialize2@VCompositionRoundedRectangleGeometry@Composition@UI@Windows@@V1234@PEAVCom.c)
 *     ??1?$RefPtr@VInteractionTrackerInertiaNaturalMotion@Interactions@Composition@UI@Windows@@@WRL2@Microsoft@@QEAA@XZ @ 0x1800A203C (--1-$RefPtr@VInteractionTrackerInertiaNaturalMotion@Interactions@Composition@UI@Windows@@@WRL2@M.c)
 */

__int64 __fastcall Windows::UI::Composition::CompositorCommon::Api::CreateRoundedRectangleGeometry(
        Windows::UI::Composition::CompositorCommon::Api *this,
        struct Windows::UI::Composition::ICompositionRoundedRectangleGeometry **a2)
{
  __int64 v4; // rcx
  __int64 *v5; // rax
  struct _RTL_CRITICAL_SECTION *v6; // rdi
  int v7; // eax
  unsigned int v8; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  unsigned __int64 v11; // [rsp+40h] [rbp+8h] BYREF
  struct _RTL_CRITICAL_SECTION *v12; // [rsp+48h] [rbp+10h] BYREF

  if ( _InterlockedIncrement(&dword_1802208AC) == 1 && wil::details::ApiTelemetryLogger::IsEnabled((__int64)this) )
  {
    v5 = wil::details::static_lazy<wil::details::ApiTelemetryLogger>::get(
           v4,
           (void (__cdecl *)())_lambda_6b26b9d13d28b4db0bc0125880e9ff13_::_lambda_invoker_cdecl_);
    wil::details::ApiTelemetryLogger::ApiDataList::Insert(
      (RTL_SRWLOCK *)v5 + 4,
      L"Windows.UI.Composition.Compositor",
      L"CreateRoundedRectangleGeometry",
      0LL,
      &dword_1802208AC);
  }
  *a2 = 0LL;
  v6 = (struct _RTL_CRITICAL_SECTION *)((char *)this - 176);
  Microsoft::WRL2::ContextSession::BeginApiEntry(v6);
  if ( (v6->SpinCount & 2) != 0 )
  {
    v11 = 0LL;
    v12 = v6;
    v7 = Microsoft::WRL2::Details::MakeAndInitialize2<Windows::UI::Composition::CompositionRoundedRectangleGeometry,Windows::UI::Composition::CompositionRoundedRectangleGeometry,Windows::UI::Composition::Compositor *>(
           &v11,
           &v12);
    v8 = v7;
    if ( v7 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x7CE,
        (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtcompositor.cpp",
        (const char *)(unsigned int)v7);
      Microsoft::WRL2::RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>::~RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>(&v11);
      DoStackCaptureDirect(v8, 0x20C3u);
    }
    else
    {
      *a2 = (struct Windows::UI::Composition::ICompositionRoundedRectangleGeometry *)((v11 + 168) & ((unsigned __int128)-(__int128)v11 >> 64));
      v8 = 0;
    }
  }
  else
  {
    v8 = -2147483629;
    RoOriginateErrorW(
      2147483667LL,
      0LL,
      L"The given object has already been closed / disposed and may no longer be used.");
  }
  Microsoft::WRL2::ContextSession::EndApiEntry(v6);
  return v8;
}
