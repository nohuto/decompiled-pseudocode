/*
 * XREFs of ?CreateGeometricClip@Api@CompositorCommon@Composition@UI@Windows@@UEAAJPEAPEAUICompositionGeometricClip@345@@Z @ 0x180125CE0
 * Callers:
 *     <none>
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?IsEnabled@ApiTelemetryLogger@details@wil@@SA_NE_K@Z @ 0x1800642F8 (-IsEnabled@ApiTelemetryLogger@details@wil@@SA_NE_K@Z.c)
 *     ?get@?$static_lazy@VApiTelemetryLogger@details@wil@@@details@wil@@QEAAPEAVApiTelemetryLogger@23@P6AXXZ@Z @ 0x18006431C (-get@-$static_lazy@VApiTelemetryLogger@details@wil@@@details@wil@@QEAAPEAVApiTelemetryLogger@23@.c)
 *     ?Insert@ApiDataList@ApiTelemetryLogger@details@wil@@QEAAXPEBG0PEBDPECJ@Z @ 0x180065BA0 (-Insert@ApiDataList@ApiTelemetryLogger@details@wil@@QEAAXPEBG0PEBDPECJ@Z.c)
 *     ?InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ @ 0x18007BB44 (-InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ.c)
 *     ?CreateGeometricClip@CompositorCommon@Composition@UI@Windows@@QEAAJPEAVCompositionGeometry@234@PEAPEAVCompositionGeometricClip@234@@Z @ 0x180087A38 (-CreateGeometricClip@CompositorCommon@Composition@UI@Windows@@QEAAJPEAVCompositionGeometry@234@P.c)
 */

__int64 __fastcall Windows::UI::Composition::CompositorCommon::Api::CreateGeometricClip(
        Windows::UI::Composition::CompositorCommon::Api *this,
        struct Windows::UI::Composition::ICompositionGeometricClip **a2)
{
  __int64 v4; // rcx
  __int64 *v5; // rax
  struct _RTL_CRITICAL_SECTION *v6; // rdi
  unsigned int v7; // ebx
  int v8; // eax
  Microsoft::WRL2::NestableRuntimeClass *v10; // [rsp+40h] [rbp+8h] BYREF

  if ( _InterlockedIncrement(&dword_180220F98) == 1 && wil::details::ApiTelemetryLogger::IsEnabled((__int64)this) )
  {
    v5 = wil::details::static_lazy<wil::details::ApiTelemetryLogger>::get(
           v4,
           (void (__cdecl *)())_lambda_6b26b9d13d28b4db0bc0125880e9ff13_::_lambda_invoker_cdecl_);
    wil::details::ApiTelemetryLogger::ApiDataList::Insert(
      (RTL_SRWLOCK *)v5 + 4,
      L"Windows.UI.Composition.Compositor",
      L"CreateGeometricClip",
      0LL,
      &dword_180220F98);
  }
  *a2 = 0LL;
  v6 = (struct _RTL_CRITICAL_SECTION *)((char *)this - 184);
  Microsoft::WRL2::ContextSession::BeginApiEntry(v6);
  if ( (v6->SpinCount & 2) != 0 )
  {
    v10 = 0LL;
    v8 = Windows::UI::Composition::CompositorCommon::CreateGeometricClip(
           (Windows::UI::Composition::CompositorCommon *)v6,
           0LL,
           &v10);
    v7 = v8;
    if ( v8 < 0 )
    {
      DoStackCaptureDirect(v8, 0x218Au);
      if ( v10 )
        Microsoft::WRL2::NestableRuntimeClass::InternalRelease(v10);
    }
    else
    {
      *a2 = (struct Windows::UI::Composition::ICompositionGeometricClip *)(((unsigned __int64)v10 + 168) & -(__int64)(v10 != 0LL));
      v7 = 0;
    }
  }
  else
  {
    v7 = -2147483629;
    RoOriginateErrorW(
      2147483667LL,
      0LL,
      L"The given object has already been closed / disposed and may no longer be used.");
  }
  Microsoft::WRL2::ContextSession::EndApiEntry(v6);
  return v7;
}
