/*
 * XREFs of ?CreateInstance@?$consume_Windows_UI_Xaml_Controls_IGridFactory@UIGridFactory@Controls@Xaml@UI@Windows@winrt@@@impl@winrt@@QEBA@AEBUIInspectable@Foundation@Windows@3@AEAU4563@@Z @ 0x180659658
 * Callers:
 *     ??$call@AEAV_lambda_9a02dbc61a31b6bc534907489be5df7c_@@@?$factory_cache_entry@UGrid@Controls@Xaml@UI@Windows@winrt@@UIGridFactory@23456@@impl@winrt@@QEAA?A_PAEAV_lambda_9a02dbc61a31b6bc534907489be5df7c_@@@Z @ 0x180657F14 (--$call@AEAV_lambda_9a02dbc61a31b6bc534907489be5df7c_@@@-$factory_cache_entry@UGrid@Controls@Xam.c)
 *     ??0Grid@Controls@Xaml@UI@Windows@winrt@@QEAA@XZ @ 0x180658A94 (--0Grid@Controls@Xaml@UI@Windows@winrt@@QEAA@XZ.c)
 * Callees:
 *     ??B?$bind_out@UIInspectable@Foundation@Windows@winrt@@@impl@winrt@@QEBAPEAPEAXXZ @ 0x1800AF4A0 (--B-$bind_out@UIInspectable@Foundation@Windows@winrt@@@impl@winrt@@QEBAPEAPEAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x180392378 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

_QWORD *__fastcall winrt::impl::consume_Windows_UI_Xaml_Controls_IGridFactory<winrt::Windows::UI::Xaml::Controls::IGridFactory>::CreateInstance(
        __int64 *a1,
        _QWORD *a2,
        _QWORD *a3,
        __int64 a4)
{
  __int64 v4; // rdi
  __int64 (__fastcall *v7)(__int64, _QWORD, __int64, __int64 *); // rbx
  __int64 v8; // rax
  signed int v9; // eax
  __int64 v11; // [rsp+60h] [rbp+8h] BYREF
  __int64 v12; // [rsp+70h] [rbp+18h] BYREF

  v4 = *a1;
  v11 = 0LL;
  v12 = a4;
  v7 = *(__int64 (__fastcall **)(__int64, _QWORD, __int64, __int64 *))(*(_QWORD *)v4 + 48LL);
  v8 = winrt::impl::bind_out<winrt::Windows::Foundation::IInspectable>::operator void * *(&v12);
  v9 = v7(v4, *a3, v8, &v11);
  if ( v9 < 0 )
    winrt::throw_hresult(v9);
  *a2 = v11;
  return a2;
}
