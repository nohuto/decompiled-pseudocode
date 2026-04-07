/*
 * XREFs of ?close@?$handle_type@Ubstr_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x18009E2E8
 * Callers:
 *     ?message@hresult_error@winrt@@QEBA?AUhstring@2@XZ @ 0x18009E440 (-message@hresult_error@winrt@@QEBA-AUhstring@2@XZ.c)
 *     ??0hresult_error@winrt@@QEAA@Uhresult@1@Utake_ownership_from_abi_t@1@@Z @ 0x1800D6A5C (--0hresult_error@winrt@@QEAA@Uhresult@1@Utake_ownership_from_abi_t@1@@Z.c)
 *     ??1hresult_out_of_bounds@winrt@@QEAA@XZ @ 0x1800D6CEC (--1hresult_out_of_bounds@winrt@@QEAA@XZ.c)
 *     _winrt::to_hresult_::_1_::catch$21 @ 0x1800EEEB1 (_winrt--to_hresult_--_1_--catch$21.c)
 *     _winrt::to_hresult_::_1_::catch$22 @ 0x1800EEF54 (_winrt--to_hresult_--_1_--catch$22.c)
 *     _winrt::to_hresult_::_1_::catch$23 @ 0x1800EEFF7 (_winrt--to_hresult_--_1_--catch$23.c)
 * Callees:
 *     WINRT_IMPL_SysFreeString @ 0x18005E655 (WINRT_IMPL_SysFreeString.c)
 */

void __fastcall winrt::handle_type<winrt::impl::bstr_traits>::close(OLECHAR **a1)
{
  OLECHAR *v2; // rcx

  v2 = *a1;
  if ( v2 )
  {
    WINRT_IMPL_SysFreeString(v2);
    *a1 = 0LL;
  }
}
