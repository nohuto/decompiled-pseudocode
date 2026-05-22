/*
 * XREFs of ?ReturnAutomationProviderToUIA@UiaEndpointNotifierCallback@Composition@UI@Windows@@CAJPEAX@Z @ 0x180160488
 * Callers:
 *     _lambda_aea67d6666170ea444767c231e25fd74_::_lambda_invoker_cdecl_ @ 0x1801602A0 (_lambda_aea67d6666170ea444767c231e25fd74_--_lambda_invoker_cdecl_.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@U?$ITypedEventHandler@PEAVHolographicCompositor@Internal@Composition@UI@Windows@@W4HolographicCompositorStatus@2345@@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000FA18 (-InternalRelease@-$ComPtr@U-$ITypedEventHandler@PEAVHolographicCompositor@Internal@Composition@U.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x180022CC4 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ?InternalQueryInterface@NestableRuntimeClass@WRL2@Microsoft@@QEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180074FB0 (-InternalQueryInterface@NestableRuntimeClass@WRL2@Microsoft@@QEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ @ 0x18007BB44 (-InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x180095B64 (--3@YAXPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800F6E34 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$ComPtr@UIDCompositionSurfaceFactory@@@WRL@Microsoft@@QEAA@XZ @ 0x180100AFC (--1-$ComPtr@UIDCompositionSurfaceFactory@@@WRL@Microsoft@@QEAA@XZ.c)
 *     ??1?$unique_ptr@UOnCreateAutomationConnectionData@@U?$default_delete@UOnCreateAutomationConnectionData@@@wistd@@@wistd@@QEAA@XZ @ 0x1801602D4 (--1-$unique_ptr@UOnCreateAutomationConnectionData@@U-$default_delete@UOnCreateAutomationConnecti.c)
 */

__int64 __fastcall Windows::UI::Composition::UiaEndpointNotifierCallback::ReturnAutomationProviderToUIA(char *a1)
{
  Microsoft::WRL2::NestableRuntimeClass *v2; // rbx
  int v3; // eax
  int v4; // eax
  unsigned int v5; // ebx
  __int64 (__fastcall ***v6)(_QWORD, _QWORD, _QWORD); // rbx
  __int64 (__fastcall *v7)(_QWORD, GUID *, __int64 *); // rdi
  int v8; // eax
  HRESULT v9; // eax
  char *v10; // r8
  __int64 v11; // rax
  int v12; // eax
  int v13; // edi
  __int64 (__fastcall ***v15)(_QWORD, _QWORD, _QWORD); // rcx
  Microsoft::WRL2::NestableRuntimeClass *v16; // rcx
  int ppv; // [rsp+20h] [rbp-48h]
  __int64 v18; // [rsp+40h] [rbp-28h] BYREF
  Microsoft::WRL2::NestableRuntimeClass **v19; // [rsp+48h] [rbp-20h] BYREF
  __int128 v20; // [rsp+50h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+20h]
  LPVOID v22; // [rsp+90h] [rbp+28h] BYREF
  __int64 v23; // [rsp+98h] [rbp+30h] BYREF
  __int64 (__fastcall ***v24)(_QWORD, GUID *, __int64 *); // [rsp+A0h] [rbp+38h] BYREF
  void *v25; // [rsp+A8h] [rbp+40h] BYREF

  v25 = 0LL;
  v2 = *(Microsoft::WRL2::NestableRuntimeClass **)a1;
  v19 = (Microsoft::WRL2::NestableRuntimeClass **)a1;
  Microsoft::WRL::ComPtr<Windows::Foundation::ITypedEventHandler<Windows::UI::Composition::Internal::HolographicCompositor *,enum Windows::UI::Composition::Internal::HolographicCompositorStatus>>::InternalRelease((__int64 *)&v25);
  v3 = Microsoft::WRL2::NestableRuntimeClass::InternalQueryInterface(
         v2,
         &GUID_26b79665_54be_4aec_b1b7_c18403ce36ae,
         &v25);
  if ( v3 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      93LL,
      (__int64)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\global\\wrtuiaendpointnotifiercallback.cpp",
      (const char *)(unsigned int)v3,
      ppv);
  v24 = 0LL;
  v23 = 0LL;
  v4 = (*(__int64 (__fastcall **)(void *, __int64 (__fastcall ****)(_QWORD, GUID *, __int64 *)))(*(_QWORD *)v25 + 48LL))(
         v25,
         &v24);
  v5 = v4;
  if ( v4 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x62,
      (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\global\\wrtuiaendpointnotifiercallback.cpp",
      (const char *)(unsigned int)v4);
LABEL_14:
    Microsoft::WRL::ComPtr<Windows::Foundation::ITypedEventHandler<Windows::UI::Composition::Internal::HolographicCompositor *,enum Windows::UI::Composition::Internal::HolographicCompositorStatus>>::InternalRelease(&v23);
    Microsoft::WRL::ComPtr<IDCompositionSurfaceFactory>::~ComPtr<IDCompositionSurfaceFactory>(&v24);
    Microsoft::WRL::ComPtr<Windows::Foundation::ITypedEventHandler<Windows::UI::Composition::Internal::HolographicCompositor *,enum Windows::UI::Composition::Internal::HolographicCompositorStatus>>::InternalRelease((__int64 *)&v25);
    wistd::unique_ptr<OnCreateAutomationConnectionData,wistd::default_delete<OnCreateAutomationConnectionData>>::~unique_ptr<OnCreateAutomationConnectionData,wistd::default_delete<OnCreateAutomationConnectionData>>(&v19);
    return v5;
  }
  v6 = (__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD))v24;
  if ( v24 )
  {
    v7 = **v24;
    Microsoft::WRL::ComPtr<Windows::Foundation::ITypedEventHandler<Windows::UI::Composition::Internal::HolographicCompositor *,enum Windows::UI::Composition::Internal::HolographicCompositorStatus>>::InternalRelease(&v23);
    v8 = v7(v6, &GUID_d6dd68d1_86fd_4332_8666_9abedea2d24c, &v23);
    if ( v8 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        106LL,
        (__int64)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\global\\wrtuiaendpointnotifiercallback.cpp",
        (const char *)(unsigned int)v8,
        ppv);
  }
  v22 = 0LL;
  Microsoft::WRL::ComPtr<Windows::Foundation::ITypedEventHandler<Windows::UI::Composition::Internal::HolographicCompositor *,enum Windows::UI::Composition::Internal::HolographicCompositorStatus>>::InternalRelease((__int64 *)&v22);
  v9 = CoCreateInstance(
         &GUID_fe58c767_bfc9_4b9b_9e9b_462ddbe9b4d9,
         0LL,
         1u,
         &GUID_ae68066a_489a_415c_b27e_ccbc419da8e1,
         &v22);
  v5 = v9;
  if ( v9 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x78,
      (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\global\\wrtuiaendpointnotifiercallback.cpp",
      (const char *)(unsigned int)v9);
    Microsoft::WRL::ComPtr<Windows::Foundation::ITypedEventHandler<Windows::UI::Composition::Internal::HolographicCompositor *,enum Windows::UI::Composition::Internal::HolographicCompositorStatus>>::InternalRelease((__int64 *)&v22);
    goto LABEL_14;
  }
  v18 = 0LL;
  v10 = a1 + 24;
  v11 = *(_QWORD *)v22;
  if ( *((_QWORD *)a1 + 6) >= 8uLL )
    v10 = (char *)*((_QWORD *)a1 + 3);
  v20 = *(_OWORD *)(a1 + 8);
  v12 = (*(__int64 (__fastcall **)(LPVOID, __int128 *, char *, __int64, __int64, __int64 *))(v11 + 32))(
          v22,
          &v20,
          v10,
          -25LL,
          v23,
          &v18);
  v13 = v12;
  if ( v12 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x81,
      (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\global\\wrtuiaendpointnotifiercallback.cpp",
      (const char *)(unsigned int)v12);
    Microsoft::WRL::ComPtr<Windows::Foundation::ITypedEventHandler<Windows::UI::Composition::Internal::HolographicCompositor *,enum Windows::UI::Composition::Internal::HolographicCompositorStatus>>::InternalRelease((__int64 *)&v22);
    v5 = v13;
    goto LABEL_14;
  }
  Microsoft::WRL::ComPtr<Windows::Foundation::ITypedEventHandler<Windows::UI::Composition::Internal::HolographicCompositor *,enum Windows::UI::Composition::Internal::HolographicCompositorStatus>>::InternalRelease((__int64 *)&v22);
  Microsoft::WRL::ComPtr<Windows::Foundation::ITypedEventHandler<Windows::UI::Composition::Internal::HolographicCompositor *,enum Windows::UI::Composition::Internal::HolographicCompositorStatus>>::InternalRelease(&v23);
  v15 = (__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD))v24;
  if ( v24 )
  {
    v24 = 0LL;
    ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD)))(*v15)[2])(v15);
  }
  Microsoft::WRL::ComPtr<Windows::Foundation::ITypedEventHandler<Windows::UI::Composition::Internal::HolographicCompositor *,enum Windows::UI::Composition::Internal::HolographicCompositorStatus>>::InternalRelease((__int64 *)&v25);
  std::wstring::_Tidy_deallocate((__int64)(a1 + 24));
  v16 = *(Microsoft::WRL2::NestableRuntimeClass **)a1;
  if ( *(_QWORD *)a1 )
  {
    *(_QWORD *)a1 = 0LL;
    Microsoft::WRL2::NestableRuntimeClass::InternalRelease(v16);
  }
  operator delete(a1);
  return 0LL;
}
