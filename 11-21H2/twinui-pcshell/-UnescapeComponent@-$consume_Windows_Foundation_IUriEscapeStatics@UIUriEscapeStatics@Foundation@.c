/*
 * XREFs of ?UnescapeComponent@?$consume_Windows_Foundation_IUriEscapeStatics@UIUriEscapeStatics@Foundation@Windows@winrt@@@impl@winrt@@QEBA?AUhstring@3@AEBU4param@3@@Z @ 0x18038FBB8
 * Callers:
 *     ??$call@AEAV_lambda_d5baf9e97843045c2618cd983def5f01_@@@?$factory_cache_entry@UUri@Foundation@Windows@winrt@@UIUriEscapeStatics@234@@impl@winrt@@QEAA?AUhstring@2@AEAV_lambda_d5baf9e97843045c2618cd983def5f01_@@@Z @ 0x18038D848 (--$call@AEAV_lambda_d5baf9e97843045c2618cd983def5f01_@@@-$factory_cache_entry@UUri@Foundation@Wi.c)
 *     ??R_lambda_d5baf9e97843045c2618cd983def5f01_@@QEBA?AUhstring@winrt@@AEBUIUriEscapeStatics@Foundation@Windows@2@@Z @ 0x18038E5CC (--R_lambda_d5baf9e97843045c2618cd983def5f01_@@QEBA-AUhstring@winrt@@AEBUIUriEscapeStatics@Founda.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x18033DA10 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

_QWORD *__fastcall winrt::impl::consume_Windows_Foundation_IUriEscapeStatics<winrt::Windows::Foundation::IUriEscapeStatics>::UnescapeComponent(
        __int64 *a1,
        _QWORD *a2,
        _QWORD *a3)
{
  __int64 v3; // rcx
  signed int v5; // eax
  __int64 v7; // [rsp+30h] [rbp+8h] BYREF

  v3 = *a1;
  v7 = 0LL;
  v5 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v3 + 48LL))(v3, *a3, &v7);
  if ( v5 < 0 )
    winrt::throw_hresult(v5);
  *a2 = v7;
  return a2;
}
