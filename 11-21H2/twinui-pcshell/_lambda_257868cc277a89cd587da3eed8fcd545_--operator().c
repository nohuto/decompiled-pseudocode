/*
 * XREFs of _lambda_257868cc277a89cd587da3eed8fcd545_::operator() @ 0x1801BE6D8
 * Callers:
 *     CMultitaskingViewTaskCallback__lambda_257868cc277a89cd587da3eed8fcd545___::RunTask @ 0x1801BEA90 (CMultitaskingViewTaskCallback__lambda_257868cc277a89cd587da3eed8fcd545___--RunTask.c)
 * Callees:
 *     ??1IElementCompositionPreviewStatics2@Hosting@Xaml@UI@Windows@winrt@@QEAA@XZ @ 0x180020128 (--1IElementCompositionPreviewStatics2@Hosting@Xaml@UI@Windows@winrt@@QEAA@XZ.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_GSAVTest@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18005F5A4 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_GSAVTest@@@details@wil@@QEAAX_NW4Reportin.c)
 *     ?_Unmarshal@CMarshaledInterface@@AEAAJAEBU_GUID@@PEAPEAX_N@Z @ 0x180072674 (-_Unmarshal@CMarshaledInterface@@AEAAJAEBU_GUID@@PEAPEAX_N@Z.c)
 *     ?check_hresult@winrt@@YAXUhresult@1@@Z @ 0x1800F9C28 (-check_hresult@winrt@@YAXUhresult@1@@Z.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$convert_from_abi@UIGuidedSnapAssistHost@WindowSnapping@Shell@Internal@Windows@winrt@@@wil@@YA?AUIGuidedSnapAssistHost@WindowSnapping@Shell@Internal@Windows@winrt@@PEAUIUnknown@@@Z @ 0x18059AE90 (--$convert_from_abi@UIGuidedSnapAssistHost@WindowSnapping@Shell@Internal@Windows@winrt@@@wil@@YA.c)
 *     ?SetRegions@?$consume_Windows_Internal_Shell_WindowSnapping_IGuidedSnapAssistHost@UIGuidedSnapAssistHost@WindowSnapping@Shell@Internal@Windows@winrt@@@impl@winrt@@QEBAXU?$array_view@$$CBUSnapAssistRegion@WindowSnapping@Shell@Internal@Windows@winrt@@@3@@Z @ 0x18059CBA4 (-SetRegions@-$consume_Windows_Internal_Shell_WindowSnapping_IGuidedSnapAssistHost@UIGuidedSnapAs.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall lambda_257868cc277a89cd587da3eed8fcd545_::operator()(_QWORD *a1, __int64 a2)
{
  int (__fastcall *v4)(__int64, __int64, GUID *, __int64 *); // rbx
  int (__fastcall *v5)(__int64, __int64, _QWORD, GUID *, __int64 *); // rbx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 *v8; // rbx
  __int64 v9; // rcx
  unsigned int v10; // eax
  __m128 v11; // xmm3
  float v12; // xmm2_4
  const char *v13; // r9
  __int64 v15; // [rsp+38h] [rbp-60h] BYREF
  __int64 v16; // [rsp+40h] [rbp-58h] BYREF
  void *v17; // [rsp+48h] [rbp-50h] BYREF
  _QWORD v18[2]; // [rsp+50h] [rbp-48h] BYREF
  __int64 v19; // [rsp+60h] [rbp-38h] BYREF
  int v20; // [rsp+68h] [rbp-30h]
  _QWORD *v21; // [rsp+70h] [rbp-28h]
  _DWORD v22[4]; // [rsp+78h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+0h]

  v21 = a1;
  v17 = 0LL;
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v17);
  if ( (int)CMarshaledInterface::_Unmarshal(
              (CMarshaledInterface *)(a1 + 4),
              &GUID_76d7759a_857c_46bd_ba0c_841904e0fc8d,
              &v17,
              0) >= 0 )
  {
    v16 = 0LL;
    v4 = *(int (__fastcall **)(__int64, __int64, GUID *, __int64 *))(*(_QWORD *)a2 + 40LL);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v16);
    if ( v4(a2, 4LL, &GUID_b63cb15a_d1aa_4a39_bc06_78e9843bf5c4, &v16) >= 0 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 40LL))(v16);
    v15 = 0LL;
    v5 = *(int (__fastcall **)(__int64, __int64, _QWORD, GUID *, __int64 *))(*(_QWORD *)a2 + 32LL);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v15);
    if ( v5(a2, 4LL, a1[3], &GUID_b63cb15a_d1aa_4a39_bc06_78e9843bf5c4, &v15) >= 0 )
    {
      (*(void (__fastcall **)(__int64, void *))(*(_QWORD *)v15 + 56LL))(v15, v17);
      wil::details::FeatureImpl<__WilFeatureTraits_Feature_GSAVTest>::ReportUsage(
        `wil::Feature<__WilFeatureTraits_Feature_GSAVTest>::GetImpl'::`2'::impl,
        1u,
        v6,
        v7);
      try
      {
        wil::convert_from_abi<winrt::Windows::Internal::Shell::WindowSnapping::IGuidedSnapAssistHost>(v18, v15);
        v8 = (__int64 *)a1[5];
        v9 = (v8[1] - *v8) >> 5;
        v19 = *v8;
        v20 = v9;
        winrt::impl::consume_Windows_Internal_Shell_WindowSnapping_IGuidedSnapAssistHost<winrt::Windows::Internal::Shell::WindowSnapping::IGuidedSnapAssistHost>::SetRegions(
          v18,
          &v19);
        v10 = (*(__int64 (__fastcall **)(_QWORD, __int64))(*(_QWORD *)v18[0] + 64LL))(v18[0], v8[5]);
        winrt::check_hresult(v10);
        v11 = (__m128)_mm_loadu_si128((const __m128i *)(v8 + 3));
        v12 = _mm_shuffle_ps(v11, v11, 85).m128_f32[0];
        v22[0] = (int)v11.m128_f32[0];
        v22[1] = (int)v12;
        v22[2] = (int)(float)(v11.m128_f32[0] + _mm_shuffle_ps(v11, v11, 170).m128_f32[0]);
        v22[3] = (int)(float)(v12 + _mm_shuffle_ps(v11, v11, 255).m128_f32[0]);
        (*(void (__fastcall **)(__int64, _DWORD *, _QWORD))(*(_QWORD *)v15 + 48LL))(v15, v22, *(unsigned int *)a1);
        winrt::Windows::UI::Xaml::Hosting::IElementCompositionPreviewStatics2::~IElementCompositionPreviewStatics2((winrt::Windows::UI::Xaml::Hosting::IElementCompositionPreviewStatics2 *)v18);
      }
      catch ( ... )
      {
        wil::details::in1diag3::Log_CaughtException(
          retaddr,
          (void *)0x2E6,
          (unsigned int)"pcshell\\twinui\\snapcomponent\\lib\\snapassistcontroller.cpp",
          v13);
      }
    }
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v15);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v16);
  }
  return Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v17);
}
