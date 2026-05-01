/*
 * XREFs of ??$?0V_lambda_a26f18ab584c88017ddfe4edd20bfc0d_@@@?$AsyncOperationCompletedHandler@U?$IReference@_N@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@QEAA@V_lambda_a26f18ab584c88017ddfe4edd20bfc0d_@@@Z @ 0x180699A4C
 * Callers:
 *     ??$make_agile_delegate@U?$AsyncOperationCompletedHandler@U?$IReference@_N@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@@impl@winrt@@YA?AU?$AsyncOperationCompletedHandler@U?$IReference@_N@Foundation@Windows@winrt@@@Foundation@Windows@1@AEBU2341@@Z @ 0x18069CF0C (--$make_agile_delegate@U-$AsyncOperationCompletedHandler@U-$IReference@_N@Foundation@Windows@win.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UIGlobalInterfaceTable@impl@winrt@@@winrt@@AEAAXXZ @ 0x1800B1FC4 (-unconditional_release_ref@-$com_ptr@UIGlobalInterfaceTable@impl@winrt@@@winrt@@AEAAXXZ.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     ??2@YAPEAX_K@Z @ 0x1801C706C (--2@YAPEAX_K@Z.c)
 */

_QWORD *__fastcall winrt::Windows::Foundation::AsyncOperationCompletedHandler<winrt::Windows::Foundation::IReference<bool>>::AsyncOperationCompletedHandler<winrt::Windows::Foundation::IReference<bool>>(
        _QWORD *a1,
        __int64 *a2)
{
  __int64 v4; // rax
  _QWORD *v6; // [rsp+28h] [rbp-20h]

  v6 = operator new(0x18uLL);
  v4 = *a2;
  *a2 = 0LL;
  v6[1] = v4;
  _InterlockedExchangeAdd(&`winrt::get_module_lock'::`2'::s_lock, 1u);
  *((_DWORD *)v6 + 4) = 1;
  *v6 = &winrt::impl::delegate<winrt::Windows::Foundation::AsyncOperationCompletedHandler<winrt::Windows::Foundation::IReference<bool>>,_lambda_a26f18ab584c88017ddfe4edd20bfc0d_>::`vftable';
  *a1 = v6;
  if ( *a2 )
    winrt::com_ptr<winrt::impl::IGlobalInterfaceTable>::unconditional_release_ref(a2);
  return a1;
}
