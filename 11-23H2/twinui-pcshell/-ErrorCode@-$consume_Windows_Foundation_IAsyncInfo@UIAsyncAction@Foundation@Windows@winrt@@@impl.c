/*
 * XREFs of ?ErrorCode@?$consume_Windows_Foundation_IAsyncInfo@UIAsyncAction@Foundation@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x1806B1A4C
 * Callers:
 *     _lambda_e61605ece55422ba9fa5b55a2642b1df_::operator()_winrt::Windows::Foundation::IAsyncAction_ @ 0x1806AF05C (_lambda_e61605ece55422ba9fa5b55a2642b1df_--operator()_winrt--Windows--Foundation--IAsyncAction_.c)
 *     _lambda_f792dc060f2f4a2e1ed0f6aa4fd4e86d_::operator()_winrt::Windows::Foundation::IAsyncAction_ @ 0x1806AF17C (_lambda_f792dc060f2f4a2e1ed0f6aa4fd4e86d_--operator()_winrt--Windows--Foundation--IAsyncAction_.c)
 * Callees:
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800D5AF0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x180392378 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

_DWORD *__fastcall winrt::impl::consume_Windows_Foundation_IAsyncInfo<winrt::Windows::Foundation::IAsyncAction>::ErrorCode(
        __int64 *a1,
        _DWORD *a2)
{
  __int64 v3; // rcx
  __int64 v4; // rdi
  signed int v5; // eax
  __int64 v7; // [rsp+30h] [rbp+8h] BYREF
  __int64 v8; // [rsp+38h] [rbp+10h] BYREF

  *a2 = 0;
  v3 = *a1;
  if ( v3 )
  {
    v7 = 0LL;
    (**(void (__fastcall ***)(__int64, const wchar_t *, __int64 *))v3)(v3, L"6", &v7);
    v3 = v7;
    v4 = v7;
  }
  else
  {
    v4 = 0LL;
  }
  v8 = v3;
  v5 = (*(__int64 (__fastcall **)(__int64, _DWORD *))(*(_QWORD *)v3 + 64LL))(v3, a2);
  if ( v5 < 0 )
    winrt::throw_hresult(v5);
  if ( v4 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v8);
  return a2;
}
