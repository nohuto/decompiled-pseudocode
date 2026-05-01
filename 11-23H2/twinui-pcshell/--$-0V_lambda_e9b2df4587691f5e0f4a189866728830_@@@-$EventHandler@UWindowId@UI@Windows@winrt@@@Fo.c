/*
 * XREFs of ??$?0V_lambda_e9b2df4587691f5e0f4a189866728830_@@@?$EventHandler@UWindowId@UI@Windows@winrt@@@Foundation@Windows@winrt@@QEAA@V_lambda_e9b2df4587691f5e0f4a189866728830_@@@Z @ 0x180724E7C
 * Callers:
 *     ??$make_agile_delegate@U?$EventHandler@UWindowId@UI@Windows@winrt@@@Foundation@Windows@winrt@@@impl@winrt@@YA?AU?$EventHandler@UWindowId@UI@Windows@winrt@@@Foundation@Windows@1@AEBU2341@@Z @ 0x180190A44 (--$make_agile_delegate@U-$EventHandler@UWindowId@UI@Windows@winrt@@@Foundation@Windows@winrt@@@i.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UIGlobalInterfaceTable@impl@winrt@@@winrt@@AEAAXXZ @ 0x1800B1FC4 (-unconditional_release_ref@-$com_ptr@UIGlobalInterfaceTable@impl@winrt@@@winrt@@AEAAXXZ.c)
 *     ??2@YAPEAX_K@Z @ 0x1801C706C (--2@YAPEAX_K@Z.c)
 */

_QWORD *__fastcall winrt::Windows::Foundation::EventHandler<winrt::Windows::UI::WindowId>::EventHandler<winrt::Windows::UI::WindowId>(
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
  *v6 = &winrt::impl::delegate<winrt::Windows::Foundation::EventHandler<winrt::Windows::UI::WindowId>,_lambda_e9b2df4587691f5e0f4a189866728830_>::`vftable';
  *a1 = v6;
  if ( *a2 )
    winrt::com_ptr<winrt::impl::IGlobalInterfaceTable>::unconditional_release_ref(a2);
  return a1;
}
