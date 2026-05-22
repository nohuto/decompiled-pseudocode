/*
 * XREFs of ?CreateContainerShape@Api@CompositorCommon@Composition@UI@Windows@@UEAAJPEAPEAUICompositionContainerShape@345@@Z @ 0x18005CEF0
 * Callers:
 *     <none>
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ??$MakeAndInitialize2@VCompositionContainerShape@Composition@UI@Windows@@V1234@PEAVCompositor@234@@Details@WRL2@Microsoft@@YAJPEAPEAVCompositionContainerShape@Composition@UI@Windows@@$$QEAPEAVCompositor@456@@Z @ 0x18005CD24 (--$MakeAndInitialize2@VCompositionContainerShape@Composition@UI@Windows@@V1234@PEAVCompositor@23.c)
 *     ?IsEnabled@ApiTelemetryLogger@details@wil@@SA_NE_K@Z @ 0x1800642F8 (-IsEnabled@ApiTelemetryLogger@details@wil@@SA_NE_K@Z.c)
 *     ?get@?$static_lazy@VApiTelemetryLogger@details@wil@@@details@wil@@QEAAPEAVApiTelemetryLogger@23@P6AXXZ@Z @ 0x18006431C (-get@-$static_lazy@VApiTelemetryLogger@details@wil@@@details@wil@@QEAAPEAVApiTelemetryLogger@23@.c)
 *     ?Insert@ApiDataList@ApiTelemetryLogger@details@wil@@QEAAXPEBG0PEBDPECJ@Z @ 0x180065BA0 (-Insert@ApiDataList@ApiTelemetryLogger@details@wil@@QEAAXPEBG0PEBDPECJ@Z.c)
 *     ??1?$RefPtr@VInteractionTrackerInertiaNaturalMotion@Interactions@Composition@UI@Windows@@@WRL2@Microsoft@@QEAA@XZ @ 0x1800A203C (--1-$RefPtr@VInteractionTrackerInertiaNaturalMotion@Interactions@Composition@UI@Windows@@@WRL2@M.c)
 */

__int64 __fastcall Windows::UI::Composition::CompositorCommon::Api::CreateContainerShape(
        Windows::UI::Composition::CompositorCommon::Api *this,
        struct Windows::UI::Composition::ICompositionContainerShape **a2)
{
  struct _RTL_CRITICAL_SECTION *v4; // rdi
  int v5; // eax
  unsigned int v6; // ebx
  __int64 v8; // rcx
  __int64 v9; // rax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  Windows::UI::Composition::CompositionContainerShape *v11; // [rsp+40h] [rbp+8h] BYREF
  struct _RTL_CRITICAL_SECTION *v12; // [rsp+48h] [rbp+10h] BYREF

  if ( _InterlockedIncrement(&dword_1802208C4) == 1
    && wil::details::ApiTelemetryLogger::IsEnabled((unsigned __int8)this, (unsigned __int64)a2) )
  {
    v9 = wil::details::static_lazy<wil::details::ApiTelemetryLogger>::get(
           v8,
           _lambda_6b26b9d13d28b4db0bc0125880e9ff13_::_lambda_invoker_cdecl_);
    wil::details::ApiTelemetryLogger::ApiDataList::Insert(
      (wil::details::ApiTelemetryLogger::ApiDataList *)(v9 + 32),
      L"Windows.UI.Composition.Compositor",
      L"CreateContainerShape",
      0LL,
      &dword_1802208C4);
  }
  *a2 = 0LL;
  v4 = (struct _RTL_CRITICAL_SECTION *)((char *)this - 176);
  Microsoft::WRL2::ContextSession::BeginApiEntry(v4);
  if ( (v4->SpinCount & 2) != 0 )
  {
    v11 = 0LL;
    v12 = v4;
    v5 = Microsoft::WRL2::Details::MakeAndInitialize2<Windows::UI::Composition::CompositionContainerShape,Windows::UI::Composition::CompositionContainerShape,Windows::UI::Composition::Compositor *>(
           &v11,
           (struct Windows::UI::Composition::Compositor **)&v12);
    v6 = v5;
    if ( v5 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x74B,
        (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtcompositor.cpp",
        (const char *)(unsigned int)v5);
      Microsoft::WRL2::RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>::~RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>(&v11);
      DoStackCaptureDirect(v6, 0x1FFBu);
    }
    else
    {
      *a2 = (struct Windows::UI::Composition::ICompositionContainerShape *)(((unsigned __int64)v11 + 160) & ((unsigned __int128)-(__int128)(unsigned __int64)v11 >> 64));
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
