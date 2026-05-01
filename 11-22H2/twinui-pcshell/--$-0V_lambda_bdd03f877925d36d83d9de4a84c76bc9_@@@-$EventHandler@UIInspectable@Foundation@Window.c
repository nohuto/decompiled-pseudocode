/*
 * XREFs of ??$?0V_lambda_bdd03f877925d36d83d9de4a84c76bc9_@@@?$EventHandler@UIInspectable@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@QEAA@V_lambda_bdd03f877925d36d83d9de4a84c76bc9_@@@Z @ 0x18047E3E4
 * Callers:
 *     ??$make_agile_delegate@U?$EventHandler@UIInspectable@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@@impl@winrt@@YA?AU?$EventHandler@UIInspectable@Foundation@Windows@winrt@@@Foundation@Windows@1@AEBU2341@@Z @ 0x1800B1E80 (--$make_agile_delegate@U-$EventHandler@UIInspectable@Foundation@Windows@winrt@@@Foundation@Windo.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UIGlobalInterfaceTable@impl@winrt@@@winrt@@AEAAXXZ @ 0x1800B1FC4 (-unconditional_release_ref@-$com_ptr@UIGlobalInterfaceTable@impl@winrt@@@winrt@@AEAAXXZ.c)
 *     ??2@YAPEAX_K@Z @ 0x1801C706C (--2@YAPEAX_K@Z.c)
 */

_QWORD *__fastcall winrt::Windows::Foundation::EventHandler<winrt::Windows::Foundation::IInspectable>::EventHandler<winrt::Windows::Foundation::IInspectable>(
        _QWORD *a1,
        __int64 *a2)
{
  __int64 v4; // r8
  _QWORD *v6; // [rsp+38h] [rbp+10h]

  v6 = operator new(0x18uLL);
  v4 = *a2;
  *a2 = 0LL;
  v6[1] = v4;
  _InterlockedExchangeAdd(&`winrt::get_module_lock'::`2'::s_lock, 1u);
  *((_DWORD *)v6 + 4) = 1;
  *v6 = &winrt::impl::delegate<winrt::Windows::Foundation::EventHandler<winrt::Windows::Foundation::IInspectable>,_lambda_bdd03f877925d36d83d9de4a84c76bc9_>::`vftable';
  *a1 = v6;
  if ( *a2 )
    winrt::com_ptr<winrt::impl::IGlobalInterfaceTable>::unconditional_release_ref(a2);
  return a1;
}
