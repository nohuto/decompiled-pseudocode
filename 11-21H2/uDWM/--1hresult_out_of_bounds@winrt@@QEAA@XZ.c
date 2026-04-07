/*
 * XREFs of ??1hresult_out_of_bounds@winrt@@QEAA@XZ @ 0x1800D20BC
 * Callers:
 *     <none>
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@Utype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@impl@winrt@@@winrt@@AEAAXXZ @ 0x180006224 (-unconditional_release_ref@-$com_ptr@Utype@-$abi@UIUnknown@Foundation@Windows@winrt@@X@impl@winr.c)
 *     WINRT_IMPL_SysFreeString @ 0x180062525 (WINRT_IMPL_SysFreeString.c)
 */

void __fastcall winrt::hresult_out_of_bounds::~hresult_out_of_bounds(BSTR *this)
{
  __int64 *v2; // rcx

  v2 = (__int64 *)(this + 2);
  if ( *v2 )
    winrt::com_ptr<winrt::impl::abi<winrt::Windows::Foundation::IUnknown,void>::type>::unconditional_release_ref(v2);
  if ( *this )
  {
    WINRT_IMPL_SysFreeString(*this);
    *this = 0LL;
  }
}
