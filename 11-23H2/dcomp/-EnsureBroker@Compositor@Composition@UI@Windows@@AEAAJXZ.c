/*
 * XREFs of ?EnsureBroker@Compositor@Composition@UI@Windows@@AEAAJXZ @ 0x18010FAF8
 * Callers:
 *     _lambda_21b91f8ed7e4c7f4d9826ebf89a77415_::operator() @ 0x1800A2088 (_lambda_21b91f8ed7e4c7f4d9826ebf89a77415_--operator().c)
 *     Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_90b75ecb1bcd1b4e7d5d99e276904407___::Run @ 0x1800A26A0 (Windows--Internal--ComTaskPool--CResultTaskWrapper__lambda_90b75ecb1bcd1b4e7d5d99e2_ea_1800A26A0.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$ITypedEventHandler@PEAVHolographicCompositor@Internal@Composition@UI@Windows@@W4HolographicCompositorStatus@2345@@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000FA18 (-InternalRelease@-$ComPtr@U-$ITypedEventHandler@PEAVHolographicCompositor@Internal@Composition@U.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800F6E34 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall Windows::UI::Composition::Compositor::EnsureBroker(Windows::UI::Composition::Compositor *this)
{
  __int64 *v1; // rdi
  HRESULT v2; // eax
  LPVOID v3; // rbx
  __int64 v4; // rcx
  __int64 (__fastcall *v5)(LPVOID, GUID *, GUID *, __int64 *); // rsi
  int v6; // eax
  int ppv; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  LPVOID v10; // [rsp+40h] [rbp+8h] BYREF

  v1 = (__int64 *)((char *)this + 496);
  if ( !*((_QWORD *)this + 62) )
  {
    v10 = 0LL;
    Microsoft::WRL::ComPtr<Windows::Foundation::ITypedEventHandler<Windows::UI::Composition::Internal::HolographicCompositor *,enum Windows::UI::Composition::Internal::HolographicCompositorStatus>>::InternalRelease((__int64 *)&v10);
    v2 = CoCreateInstance(
           &CLSID_ShellServiceHostBrokerProvider,
           0LL,
           4u,
           &GUID_0f4accb1_d8f9_4011_ba37_2557925a78cf,
           &v10);
    if ( v2 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        243LL,
        (__int64)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\global\\wrtcompositorg.cpp",
        (const char *)(unsigned int)v2,
        ppv);
    v3 = v10;
    v4 = *v1;
    v5 = *(__int64 (__fastcall **)(LPVOID, GUID *, GUID *, __int64 *))(*(_QWORD *)v10 + 24LL);
    if ( *v1 )
    {
      *v1 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
    }
    v6 = v5(v3, &GUID_f1c455af_3749_4e0f_8a53_53956da34eaa, &GUID_f1c455af_3749_4e0f_8a53_53956da34eaa, v1);
    if ( v6 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        247LL,
        (__int64)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\global\\wrtcompositorg.cpp",
        (const char *)(unsigned int)v6,
        ppv);
    Microsoft::WRL::ComPtr<Windows::Foundation::ITypedEventHandler<Windows::UI::Composition::Internal::HolographicCompositor *,enum Windows::UI::Composition::Internal::HolographicCompositorStatus>>::InternalRelease((__int64 *)&v10);
  }
  return 0LL;
}
