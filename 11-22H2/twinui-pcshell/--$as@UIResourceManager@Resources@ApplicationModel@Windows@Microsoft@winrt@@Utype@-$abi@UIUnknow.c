/*
 * XREFs of ??$as@UIResourceManager@Resources@ApplicationModel@Windows@Microsoft@winrt@@Utype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@impl@6@$0A@@impl@winrt@@YA?AUIResourceManager@Resources@ApplicationModel@Windows@Microsoft@1@PEAUtype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@01@@Z @ 0x18005C9DC
 * Callers:
 *     _lambda_4c3f00df1550c08ca3a36d5763d73df3_::operator() @ 0x18005C8E4 (_lambda_4c3f00df1550c08ca3a36d5763d73df3_--operator().c)
 * Callees:
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x180392378 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

_QWORD *__fastcall winrt::impl::as<winrt::Microsoft::Windows::ApplicationModel::Resources::IResourceManager,winrt::impl::abi<winrt::Windows::Foundation::IUnknown,void>::type,0>(
        _QWORD *a1,
        __int64 (__fastcall ***a2)(_QWORD, void *, _QWORD **))
{
  int v3; // eax
  _QWORD *v5; // [rsp+28h] [rbp-20h] BYREF

  v5 = a1;
  if ( a2 )
  {
    v5 = 0LL;
    v3 = (**a2)(a2, &winrt::impl::guid_v<winrt::Microsoft::Windows::ApplicationModel::Resources::IResourceManager>, &v5);
    if ( v3 < 0 )
      winrt::throw_hresult((unsigned int)v3);
    *a1 = v5;
  }
  else
  {
    *a1 = 0LL;
  }
  return a1;
}
