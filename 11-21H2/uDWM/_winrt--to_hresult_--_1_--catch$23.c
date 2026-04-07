/*
 * XREFs of _winrt::to_hresult_::_1_::catch$23 @ 0x1800F1B81
 * Callers:
 *     <none>
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@Utype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@impl@winrt@@@winrt@@AEAAXXZ @ 0x180006224 (-unconditional_release_ref@-$com_ptr@Utype@-$abi@UIUnknown@Foundation@Windows@winrt@@X@impl@winr.c)
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x18005FA60 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     WINRT_IMPL_SysFreeString @ 0x180062525 (WINRT_IMPL_SysFreeString.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180063740 (_guard_xfg_dispatch_icall_nop.c)
 *     ?to_abi@hresult_error@winrt@@QEBA?AUhresult@2@XZ @ 0x180096A80 (-to_abi@hresult_error@winrt@@QEBA-AUhresult@2@XZ.c)
 *     ??$to_hstring@PEBD$0A@@winrt@@YA?AUhstring@0@AEBQEBD@Z @ 0x1800F0920 (--$to_hstring@PEBD$0A@@winrt@@YA-AUhstring@0@AEBQEBD@Z.c)
 *     ??0hresult_error@winrt@@QEAA@Uhresult@1@AEBUhstring@param@1@@Z @ 0x1800F09D0 (--0hresult_error@winrt@@QEAA@Uhresult@1@AEBUhstring@param@1@@Z.c)
 */

__int64 __fastcall winrt::to_hresult_::_1_::catch_23(__int64 a1, __int64 a2)
{
  __int64 v3; // rax
  OLECHAR *v4; // rcx

  *(_QWORD *)(a2 + 152) = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a2 + 56) + 8LL))(*(_QWORD *)(a2 + 56));
  *(_QWORD *)(a2 + 88) = *winrt::to_hstring<char const *,0>(
                            (struct winrt::impl::shared_hstring_header **)(a2 + 160),
                            (const CHAR **)(a2 + 152));
  v3 = winrt::hresult_error::hresult_error(a2 + 64, 0x80004005, (__int64 *)(a2 + 88));
  winrt::hresult_error::to_abi(v3, *(_DWORD **)(a2 + 144));
  if ( *(_QWORD *)(a2 + 80) )
    winrt::com_ptr<winrt::impl::abi<winrt::Windows::Foundation::IUnknown,void>::type>::unconditional_release_ref((__int64 *)(a2 + 80));
  v4 = *(OLECHAR **)(a2 + 64);
  if ( v4 )
  {
    WINRT_IMPL_SysFreeString(v4);
    *(_QWORD *)(a2 + 64) = 0LL;
  }
  winrt::handle_type<winrt::impl::hstring_traits>::close((volatile signed __int32 **)(a2 + 160));
  return 0LL;
}
