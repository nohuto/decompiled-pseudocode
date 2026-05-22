/*
 * XREFs of ?CreatePathGeometryWithPath@Api@CompositorCommon@Composition@UI@Windows@@UEAAJPEAUICompositionPath@345@PEAPEAUICompositionPathGeometry@345@@Z @ 0x180040940
 * Callers:
 *     <none>
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ?InternalUnlock@?$RefPtr@VCompositionPropertySet@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXXZ @ 0x18000BCF4 (-InternalUnlock@-$RefPtr@VCompositionPropertySet@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXX.c)
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?CreatePathGeometry@CompositorCommon@Composition@UI@Windows@@QEAAJPEAVCompositionPath@234@PEAPEAVCompositionPathGeometry@234@@Z @ 0x1800407B8 (-CreatePathGeometry@CompositorCommon@Composition@UI@Windows@@QEAAJPEAVCompositionPath@234@PEAPEA.c)
 *     ?IsEnabled@ApiTelemetryLogger@details@wil@@SA_NE_K@Z @ 0x1800642F8 (-IsEnabled@ApiTelemetryLogger@details@wil@@SA_NE_K@Z.c)
 *     ?get@?$static_lazy@VApiTelemetryLogger@details@wil@@@details@wil@@QEAAPEAVApiTelemetryLogger@23@P6AXXZ@Z @ 0x18006431C (-get@-$static_lazy@VApiTelemetryLogger@details@wil@@@details@wil@@QEAAPEAVApiTelemetryLogger@23@.c)
 *     ?Insert@ApiDataList@ApiTelemetryLogger@details@wil@@QEAAXPEBG0PEBDPECJ@Z @ 0x180065BA0 (-Insert@ApiDataList@ApiTelemetryLogger@details@wil@@QEAAXPEBG0PEBDPECJ@Z.c)
 *     ?ValidateInterface@NestableRuntimeClass@WRL2@Microsoft@@SAJPEAUIUnknown@@PEBUInterfaceType@123@PEAPEAV123@@Z @ 0x18006BB3C (-ValidateInterface@NestableRuntimeClass@WRL2@Microsoft@@SAJPEAUIUnknown@@PEBUInterfaceType@123@P.c)
 *     ?InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ @ 0x18007BB44 (-InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ.c)
 */

__int64 __fastcall Windows::UI::Composition::CompositorCommon::Api::CreatePathGeometryWithPath(
        Windows::UI::Composition::CompositorCommon::Api *this,
        struct IUnknown *a2,
        struct Windows::UI::Composition::ICompositionPathGeometry **a3)
{
  struct _RTL_CRITICAL_SECTION *v6; // rdi
  int v7; // eax
  unsigned int v8; // ebx
  int v9; // eax
  __int64 v11; // rcx
  __int64 v12; // rax
  Microsoft::WRL2::NestableRuntimeClass *v13; // [rsp+50h] [rbp+8h] BYREF
  Microsoft::WRL2::NestableRuntimeClass *v14; // [rsp+60h] [rbp+18h] BYREF
  struct Microsoft::WRL2::NestableRuntimeClass *v15; // [rsp+68h] [rbp+20h] BYREF

  if ( _InterlockedIncrement(&dword_1802208C0) == 1
    && wil::details::ApiTelemetryLogger::IsEnabled((unsigned __int8)this, (unsigned __int64)a2) )
  {
    v12 = wil::details::static_lazy<wil::details::ApiTelemetryLogger>::get(
            v11,
            _lambda_6b26b9d13d28b4db0bc0125880e9ff13_::_lambda_invoker_cdecl_);
    wil::details::ApiTelemetryLogger::ApiDataList::Insert(
      (wil::details::ApiTelemetryLogger::ApiDataList *)(v12 + 32),
      L"Windows.UI.Composition.Compositor",
      L"CreatePathGeometryWithPath",
      0LL,
      &dword_1802208C0);
  }
  *a3 = 0LL;
  v6 = (struct _RTL_CRITICAL_SECTION *)((char *)this - 176);
  Microsoft::WRL2::ContextSession::BeginApiEntry(v6);
  if ( (v6->SpinCount & 2) != 0 )
  {
    v14 = 0LL;
    v13 = 0LL;
    Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionPropertySet>::InternalUnlock(&v14);
    v7 = Microsoft::WRL2::NestableRuntimeClass::ValidateInterface(
           a2,
           (const struct Microsoft::WRL2::NestableRuntimeClass::InterfaceType *)&Windows::UI::Composition::CompositionPath::s_InterfaceType,
           &v15);
    v8 = v7;
    v14 = v15;
    if ( v7 < 0 )
    {
      DoStackCaptureDirect(v7, 0x206Eu);
    }
    else
    {
      v9 = Windows::UI::Composition::CompositorCommon::CreatePathGeometry(
             (Windows::UI::Composition::CompositorCommon *)v6,
             v15,
             &v13);
      v8 = v9;
      if ( v9 < 0 )
      {
        DoStackCaptureDirect(v9, 0x206Fu);
        if ( v13 )
          Microsoft::WRL2::NestableRuntimeClass::InternalRelease(v13);
      }
      else
      {
        *a3 = (struct Windows::UI::Composition::ICompositionPathGeometry *)(((unsigned __int64)v13 + 168) & -(__int64)(v13 != 0LL));
        v8 = 0;
      }
    }
    Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionPropertySet>::InternalUnlock(&v14);
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
