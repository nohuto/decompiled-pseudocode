/*
 * XREFs of ?CreateGeometricClipWithGeometry@Api@CompositorCommon@Composition@UI@Windows@@UEAAJPEAUICompositionGeometry@345@PEAPEAUICompositionGeometricClip@345@@Z @ 0x180087920
 * Callers:
 *     <none>
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?IsEnabled@ApiTelemetryLogger@details@wil@@SA_NE_K@Z @ 0x1800642F8 (-IsEnabled@ApiTelemetryLogger@details@wil@@SA_NE_K@Z.c)
 *     ?get@?$static_lazy@VApiTelemetryLogger@details@wil@@@details@wil@@QEAAPEAVApiTelemetryLogger@23@P6AXXZ@Z @ 0x18006431C (-get@-$static_lazy@VApiTelemetryLogger@details@wil@@@details@wil@@QEAAPEAVApiTelemetryLogger@23@.c)
 *     ?Insert@ApiDataList@ApiTelemetryLogger@details@wil@@QEAAXPEBG0PEBDPECJ@Z @ 0x180065BA0 (-Insert@ApiDataList@ApiTelemetryLogger@details@wil@@QEAAXPEBG0PEBDPECJ@Z.c)
 *     ?ValidateInterface@ContextRuntimeClass@WRL2@Microsoft@@KAJPEAVContextSession@23@PEAUIUnknown@@PEBUInterfaceType@NestableRuntimeClass@23@PEAPEAV123@@Z @ 0x18006BBE0 (-ValidateInterface@ContextRuntimeClass@WRL2@Microsoft@@KAJPEAVContextSession@23@PEAUIUnknown@@PE.c)
 *     ?InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ @ 0x18007BB44 (-InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ.c)
 *     ?CreateGeometricClip@CompositorCommon@Composition@UI@Windows@@QEAAJPEAVCompositionGeometry@234@PEAPEAVCompositionGeometricClip@234@@Z @ 0x180087A38 (-CreateGeometricClip@CompositorCommon@Composition@UI@Windows@@QEAAJPEAVCompositionGeometry@234@P.c)
 */

__int64 __fastcall Windows::UI::Composition::CompositorCommon::Api::CreateGeometricClipWithGeometry(
        Windows::UI::Composition::CompositorCommon::Api *this,
        struct IUnknown *a2,
        struct Windows::UI::Composition::ICompositionGeometricClip **a3)
{
  __int64 v6; // rcx
  __int64 *v7; // rax
  struct _RTL_CRITICAL_SECTION *v8; // rsi
  int v9; // eax
  unsigned int v10; // ebx
  int v11; // eax
  bool v12; // zf
  Microsoft::WRL2::NestableRuntimeClass *v14; // rcx
  Microsoft::WRL2::NestableRuntimeClass *v15; // [rsp+40h] [rbp+8h] BYREF
  Microsoft::WRL2::NestableRuntimeClass *v16; // [rsp+50h] [rbp+18h] BYREF

  if ( _InterlockedIncrement(&dword_1802208A8) == 1 && wil::details::ApiTelemetryLogger::IsEnabled((__int64)this) )
  {
    v7 = wil::details::static_lazy<wil::details::ApiTelemetryLogger>::get(
           v6,
           (void (__cdecl *)())_lambda_6b26b9d13d28b4db0bc0125880e9ff13_::_lambda_invoker_cdecl_);
    wil::details::ApiTelemetryLogger::ApiDataList::Insert(
      (RTL_SRWLOCK *)v7 + 4,
      L"Windows.UI.Composition.Compositor",
      L"CreateGeometricClipWithGeometry",
      0LL,
      &dword_1802208A8);
  }
  *a3 = 0LL;
  v8 = (struct _RTL_CRITICAL_SECTION *)((char *)this - 184);
  Microsoft::WRL2::ContextSession::BeginApiEntry(v8);
  if ( (v8->SpinCount & 2) == 0 )
  {
    v10 = -2147483629;
    RoOriginateErrorW(
      2147483667LL,
      0LL,
      L"The given object has already been closed / disposed and may no longer be used.");
    goto LABEL_9;
  }
  v16 = 0LL;
  v9 = Microsoft::WRL2::ContextRuntimeClass::ValidateInterface(
         (struct Microsoft::WRL2::ContextSession *)v8,
         a2,
         (const struct Microsoft::WRL2::NestableRuntimeClass::InterfaceType *)&Windows::UI::Composition::CompositionGeometry::s_InterfaceType,
         &v15);
  v10 = v9;
  if ( v9 < 0 )
  {
    DoStackCaptureDirect(v9, 0x21A9u);
    v14 = v15;
    if ( !v15 )
      goto LABEL_9;
    goto LABEL_11;
  }
  v11 = Windows::UI::Composition::CompositorCommon::CreateGeometricClip(
          (Windows::UI::Composition::CompositorCommon *)v8,
          v15,
          &v16);
  v10 = v11;
  if ( v11 < 0 )
  {
    DoStackCaptureDirect(v11, 0x21AAu);
    if ( v16 )
      Microsoft::WRL2::NestableRuntimeClass::InternalRelease(v16);
    v12 = v15 == 0LL;
  }
  else
  {
    v10 = 0;
    v12 = v15 == 0LL;
    *a3 = (struct Windows::UI::Composition::ICompositionGeometricClip *)(((unsigned __int64)v16 + 168) & ((unsigned __int128)-(__int128)(unsigned __int64)v16 >> 64));
  }
  if ( !v12 )
  {
    v14 = v15;
LABEL_11:
    Microsoft::WRL2::NestableRuntimeClass::InternalRelease(v14);
  }
LABEL_9:
  Microsoft::WRL2::ContextSession::EndApiEntry(v8);
  return v10;
}
