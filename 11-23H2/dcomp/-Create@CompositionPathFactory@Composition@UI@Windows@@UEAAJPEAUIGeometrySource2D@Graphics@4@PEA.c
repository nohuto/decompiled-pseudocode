/*
 * XREFs of ?Create@CompositionPathFactory@Composition@UI@Windows@@UEAAJPEAUIGeometrySource2D@Graphics@4@PEAPEAUICompositionPath@234@@Z @ 0x180040C50
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalUnlock@?$RefPtr@VCompositionPropertySet@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXXZ @ 0x18000BCF4 (-InternalUnlock@-$RefPtr@VCompositionPropertySet@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXX.c)
 *     ?InternalRelease@?$ComPtr@U?$ITypedEventHandler@PEAVHolographicCompositor@Internal@Composition@UI@Windows@@W4HolographicCompositorStatus@2345@@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000FA18 (-InternalRelease@-$ComPtr@U-$ITypedEventHandler@PEAVHolographicCompositor@Internal@Composition@U.c)
 *     ?InternalAddRef@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ @ 0x18001EE7C (-InternalAddRef@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ.c)
 *     ??$MakeAndInitialize2@VCompositionPath@Composition@UI@Windows@@V1234@PEAUID2D1Geometry@@@Details@WRL2@Microsoft@@YAJPEAPEAVCompositionPath@Composition@UI@Windows@@$$QEAPEAUID2D1Geometry@@@Z @ 0x180040D74 (--$MakeAndInitialize2@VCompositionPath@Composition@UI@Windows@@V1234@PEAUID2D1Geometry@@@Details.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 *     ??1?$ComPtr@UIDCompositionSurfaceFactory@@@WRL@Microsoft@@QEAA@XZ @ 0x180100AFC (--1-$ComPtr@UIDCompositionSurfaceFactory@@@WRL@Microsoft@@QEAA@XZ.c)
 *     ?OriginateInvalidArgument@Composition@UI@Windows@@YAXW4ApiError@123@PEBG@Z @ 0x180149ADC (-OriginateInvalidArgument@Composition@UI@Windows@@YAXW4ApiError@123@PEBG@Z.c)
 */

__int64 __fastcall Windows::UI::Composition::CompositionPathFactory::Create(
        Windows::UI::Composition::CompositionPathFactory *this,
        struct Windows::Graphics::IGeometrySource2D *a2,
        struct Windows::UI::Composition::ICompositionPath **a3)
{
  __int64 v3; // rax
  struct Windows::Graphics::IGeometrySource2D *v5; // r9
  __int64 v6; // rbx
  __int64 (__fastcall *v7)(__int64, __int64 *); // rdi
  int v8; // eax
  unsigned int v9; // ebx
  Microsoft::WRL2::NestableRuntimeClass *v10; // rbx
  __int64 v11; // rcx
  __int64 v13; // rdx
  __int64 v14; // r9
  __int64 v15; // [rsp+20h] [rbp-10h] BYREF
  __int64 v16; // [rsp+28h] [rbp-8h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+18h]
  __int64 v18; // [rsp+58h] [rbp+28h] BYREF
  __int64 v19; // [rsp+60h] [rbp+30h] BYREF
  Microsoft::WRL2::NestableRuntimeClass *v20; // [rsp+68h] [rbp+38h] BYREF

  *a3 = 0LL;
  v3 = 0LL;
  v20 = 0LL;
  v16 = 0LL;
  v5 = a2;
  v19 = 0LL;
  v18 = 0LL;
  if ( a2 )
  {
    (**(void (__fastcall ***)(struct Windows::Graphics::IGeometrySource2D *, GUID *, __int64 *))a2)(
      a2,
      &GUID_0657af73_53fd_47cf_84ff_c8492d2a80a3,
      &v19);
    v6 = v19;
    if ( v19 )
    {
      v7 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v19 + 24LL);
      Microsoft::WRL::ComPtr<Windows::Foundation::ITypedEventHandler<Windows::UI::Composition::Internal::HolographicCompositor *,enum Windows::UI::Composition::Internal::HolographicCompositorStatus>>::InternalRelease(&v18);
      v8 = v7(v6, &v18);
      v9 = v8;
      if ( v8 < 0 )
      {
        v13 = 342LL;
LABEL_15:
        v14 = (unsigned int)v8;
        goto LABEL_16;
      }
    }
    v3 = v18;
  }
  if ( !v3 )
  {
    Windows::UI::Composition::OriginateInvalidArgument(18LL, L"source");
    v9 = -2147024809;
    v13 = 347LL;
    v14 = 2147942487LL;
LABEL_16:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v13,
      (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtcompositionpath.cpp",
      (const char *)v14);
    Microsoft::WRL::ComPtr<IDCompositionSurfaceFactory>::~ComPtr<IDCompositionSurfaceFactory>(&v16);
    Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionPropertySet>::InternalUnlock(&v20);
    Microsoft::WRL::ComPtr<Windows::Foundation::ITypedEventHandler<Windows::UI::Composition::Internal::HolographicCompositor *,enum Windows::UI::Composition::Internal::HolographicCompositorStatus>>::InternalRelease(&v18);
    Microsoft::WRL::ComPtr<IDCompositionSurfaceFactory>::~ComPtr<IDCompositionSurfaceFactory>(&v19);
    return v9;
  }
  v15 = v3;
  v8 = ((__int64 (__fastcall *)(Microsoft::WRL2::NestableRuntimeClass **, __int64 *, struct Windows::UI::Composition::ICompositionPath **, struct Windows::Graphics::IGeometrySource2D *))Microsoft::WRL2::Details::MakeAndInitialize2<Windows::UI::Composition::CompositionPath,Windows::UI::Composition::CompositionPath,ID2D1Geometry *>)(
         &v20,
         &v15,
         a3,
         v5);
  v9 = v8;
  if ( v8 < 0 )
  {
    v13 = 352LL;
    goto LABEL_15;
  }
  v10 = v20;
  if ( v20 )
  {
    Microsoft::WRL2::NestableRuntimeClass::InternalAddRef(v20);
    v10 = (Microsoft::WRL2::NestableRuntimeClass *)((char *)v10 + 24);
  }
  *a3 = v10;
  Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionPropertySet>::InternalUnlock(&v20);
  Microsoft::WRL::ComPtr<Windows::Foundation::ITypedEventHandler<Windows::UI::Composition::Internal::HolographicCompositor *,enum Windows::UI::Composition::Internal::HolographicCompositorStatus>>::InternalRelease(&v18);
  v11 = v19;
  if ( v19 )
  {
    v19 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
  }
  return 0LL;
}
