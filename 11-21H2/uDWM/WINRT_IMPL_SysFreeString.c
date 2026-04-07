/*
 * XREFs of WINRT_IMPL_SysFreeString @ 0x180062525
 * Callers:
 *     ?message@hresult_error@winrt@@QEBA?AUhstring@2@XZ @ 0x180096820 (-message@hresult_error@winrt@@QEBA-AUhstring@2@XZ.c)
 *     ??0hresult_error@winrt@@QEAA@Uhresult@1@Utake_ownership_from_abi_t@1@@Z @ 0x1800D1E4C (--0hresult_error@winrt@@QEAA@Uhresult@1@Utake_ownership_from_abi_t@1@@Z.c)
 *     ??1hresult_out_of_bounds@winrt@@QEAA@XZ @ 0x1800D20BC (--1hresult_out_of_bounds@winrt@@QEAA@XZ.c)
 *     _winrt::to_hresult_::_1_::catch$21 @ 0x1800F1A31 (_winrt--to_hresult_--_1_--catch$21.c)
 *     _winrt::to_hresult_::_1_::catch$22 @ 0x1800F1AD9 (_winrt--to_hresult_--_1_--catch$22.c)
 *     _winrt::to_hresult_::_1_::catch$23 @ 0x1800F1B81 (_winrt--to_hresult_--_1_--catch$23.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __stdcall WINRT_IMPL_SysFreeString(BSTR bstrString)
{
  SysFreeString(bstrString);
}
