/*
 * XREFs of _winrt::to_hresult_::_1_::catch$22 @ 0x1800EEF54
 * Callers:
 *     <none>
 * Callees:
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x18005BE70 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800663A0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?close@?$handle_type@Ubstr_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x18009E2E8 (-close@-$handle_type@Ubstr_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     ?to_abi@hresult_error@winrt@@QEBA?AUhresult@2@XZ @ 0x18009E634 (-to_abi@hresult_error@winrt@@QEBA-AUhresult@2@XZ.c)
 *     ?unconditional_release_ref@?$com_ptr@Utype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@impl@winrt@@@winrt@@AEAAXXZ @ 0x18009E730 (-unconditional_release_ref@-$com_ptr@Utype@-$abi@UIUnknown@Foundation@Windows@winrt@@X@impl@winr.c)
 *     ??$to_hstring@PEBD$0A@@winrt@@YA?AUhstring@0@AEBQEBD@Z @ 0x1800ECF20 (--$to_hstring@PEBD$0A@@winrt@@YA-AUhstring@0@AEBQEBD@Z.c)
 *     ??0hresult_error@winrt@@QEAA@Uhresult@1@AEBUhstring@param@1@@Z @ 0x1800ED21C (--0hresult_error@winrt@@QEAA@Uhresult@1@AEBUhstring@param@1@@Z.c)
 */

__int64 __fastcall winrt::to_hresult_::_1_::catch_22(__int64 a1, __int64 a2)
{
  *(_QWORD *)(a2 + 152) = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a2 + 48) + 8LL))(*(_QWORD *)(a2 + 48));
  *(_QWORD *)(a2 + 88) = *winrt::to_hstring<char const *,0>(
                            (struct winrt::impl::shared_hstring_header **)(a2 + 160),
                            (const CHAR **)(a2 + 152));
  winrt::hresult_error::hresult_error(a2 + 64, winrt::impl::error_invalid_argument, (__int64 *)(a2 + 88));
  winrt::hresult_error::to_abi(a2 + 64, *(_DWORD **)(a2 + 144));
  if ( *(_QWORD *)(a2 + 80) )
    winrt::com_ptr<winrt::impl::abi<winrt::Windows::Foundation::IUnknown,void>::type>::unconditional_release_ref((__int64 *)(a2 + 80));
  winrt::handle_type<winrt::impl::bstr_traits>::close((OLECHAR **)(a2 + 64));
  winrt::handle_type<winrt::impl::hstring_traits>::close((void **)(a2 + 160));
  return 0LL;
}
