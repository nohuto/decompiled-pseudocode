/*
 * XREFs of ??1CompositorCommon@Composition@UI@Windows@@MEAA@XZ @ 0x18003DE20
 * Callers:
 *     ??1Compositor@Composition@UI@Windows@@MEAA@XZ @ 0x18003DDEC (--1Compositor@Composition@UI@Windows@@MEAA@XZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$ITypedEventHandler@PEAVHolographicCompositor@Internal@Composition@UI@Windows@@W4HolographicCompositorStatus@2345@@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000FA18 (-InternalRelease@-$ComPtr@U-$ITypedEventHandler@PEAVHolographicCompositor@Internal@Composition@U.c)
 *     ??1BatchController@Composition@UI@Windows@@QEAA@XZ @ 0x18003E064 (--1BatchController@Composition@UI@Windows@@QEAA@XZ.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ @ 0x18007EC48 (-InternalRelease@-$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180080EBC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?InternalRelease@?$ComPtr@VCompositor@Composition@UI@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180089E78 (-InternalRelease@-$ComPtr@VCompositor@Composition@UI@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall Windows::UI::Composition::CompositorCommon::~CompositorCommon(
        Windows::UI::Composition::CompositorCommon *this)
{
  __int64 v2; // rcx
  __int64 v3; // rcx
  __int64 v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // rcx
  PVOID v13; // rax
  __int64 v14; // rcx
  __int64 v15; // rcx
  PVOID RestartKey; // [rsp+30h] [rbp+8h] BYREF

  v2 = *((_QWORD *)this + 133);
  if ( v2 )
  {
    *((_QWORD *)this + 133) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  }
  v3 = *((_QWORD *)this + 132);
  if ( v3 )
  {
    *((_QWORD *)this + 132) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  }
  v4 = *((_QWORD *)this + 131);
  if ( v4 )
  {
    *((_QWORD *)this + 131) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  v5 = *((_QWORD *)this + 130);
  if ( v5 )
  {
    *((_QWORD *)this + 130) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  }
  v6 = *((_QWORD *)this + 121);
  if ( v6 )
  {
    std::_Deallocate<16,0>(v6, (*((_QWORD *)this + 123) - v6) & 0xFFFFFFFFFFFFFFF0uLL);
    *((_QWORD *)this + 121) = 0LL;
    *((_QWORD *)this + 122) = 0LL;
    *((_QWORD *)this + 123) = 0LL;
  }
  v7 = *((_QWORD *)this + 118);
  if ( v7 )
  {
    std::_Deallocate<16,0>(v7, (*((_QWORD *)this + 120) - v7) & 0xFFFFFFFFFFFFFFF8uLL);
    *((_QWORD *)this + 118) = 0LL;
    *((_QWORD *)this + 119) = 0LL;
    *((_QWORD *)this + 120) = 0LL;
  }
  v8 = *((_QWORD *)this + 115);
  if ( v8 )
  {
    std::_Deallocate<16,0>(v8, (*((_QWORD *)this + 117) - v8) & 0xFFFFFFFFFFFFFFF8uLL);
    *((_QWORD *)this + 115) = 0LL;
    *((_QWORD *)this + 116) = 0LL;
    *((_QWORD *)this + 117) = 0LL;
  }
  v9 = *((_QWORD *)this + 112);
  if ( v9 )
  {
    std::_Deallocate<16,0>(v9, (*((_QWORD *)this + 114) - v9) & 0xFFFFFFFFFFFFFFF8uLL);
    *((_QWORD *)this + 112) = 0LL;
    *((_QWORD *)this + 113) = 0LL;
    *((_QWORD *)this + 114) = 0LL;
  }
  v10 = *((_QWORD *)this + 109);
  if ( v10 )
  {
    std::_Deallocate<16,0>(v10, (*((_QWORD *)this + 111) - v10) & 0xFFFFFFFFFFFFFFF8uLL);
    *((_QWORD *)this + 109) = 0LL;
    *((_QWORD *)this + 110) = 0LL;
    *((_QWORD *)this + 111) = 0LL;
  }
  v11 = *((_QWORD *)this + 106);
  if ( v11 )
  {
    std::_Deallocate<16,0>(v11, (*((_QWORD *)this + 108) - v11) & 0xFFFFFFFFFFFFFFF8uLL);
    *((_QWORD *)this + 106) = 0LL;
    *((_QWORD *)this + 107) = 0LL;
    *((_QWORD *)this + 108) = 0LL;
  }
  v12 = *((_QWORD *)this + 103);
  if ( v12 )
  {
    *((_QWORD *)this + 103) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
  }
  Windows::UI::Composition::BatchController::~BatchController((Windows::UI::Composition::CompositorCommon *)((char *)this + 752));
  Windows::UI::Composition::BatchController::~BatchController((Windows::UI::Composition::CompositorCommon *)((char *)this + 680));
  Windows::UI::Composition::BatchController::~BatchController((Windows::UI::Composition::CompositorCommon *)((char *)this + 608));
  while ( 1 )
  {
    RestartKey = 0LL;
    v13 = RtlEnumerateGenericTableWithoutSplaying((PRTL_GENERIC_TABLE)((char *)this + 536), &RestartKey);
    if ( !v13 )
      break;
    if ( !RtlDeleteElementGenericTable((PRTL_GENERIC_TABLE)((char *)this + 536), v13) )
      RaiseFailFastException(0LL, 0LL, 1u);
  }
  Microsoft::WRL::ComPtr<Windows::UI::Composition::Compositor>::InternalRelease((char *)this + 528);
  v14 = *((_QWORD *)this + 65);
  if ( v14 )
  {
    *((_QWORD *)this + 65) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
  }
  Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease((char *)this + 504);
  v15 = *((_QWORD *)this + 62);
  if ( v15 )
  {
    *((_QWORD *)this + 62) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
  }
  Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease((char *)this + 488);
  Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease((char *)this + 480);
  Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease((char *)this + 472);
  Microsoft::WRL::ComPtr<Windows::Foundation::ITypedEventHandler<Windows::UI::Composition::Internal::HolographicCompositor *,enum Windows::UI::Composition::Internal::HolographicCompositorStatus>>::InternalRelease((__int64 *)this + 57);
  Microsoft::WRL::ComPtr<Windows::Foundation::ITypedEventHandler<Windows::UI::Composition::Internal::HolographicCompositor *,enum Windows::UI::Composition::Internal::HolographicCompositorStatus>>::InternalRelease((__int64 *)this + 55);
  Microsoft::WRL::ComPtr<Windows::Foundation::ITypedEventHandler<Windows::UI::Composition::Internal::HolographicCompositor *,enum Windows::UI::Composition::Internal::HolographicCompositorStatus>>::InternalRelease((__int64 *)this + 54);
  Microsoft::WRL::ComPtr<Windows::Foundation::ITypedEventHandler<Windows::UI::Composition::Internal::HolographicCompositor *,enum Windows::UI::Composition::Internal::HolographicCompositorStatus>>::InternalRelease((__int64 *)this + 53);
  Microsoft::WRL2::ContextSession::~ContextSession(this);
}
