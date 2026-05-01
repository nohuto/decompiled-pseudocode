/*
 * XREFs of ?Create@?$consume_Windows_Web_Http_IHttpFormUrlEncodedContentFactory@UIHttpFormUrlEncodedContentFactory@Http@Web@Windows@winrt@@@impl@winrt@@QEBA?AUHttpFormUrlEncodedContent@Http@Web@Windows@3@AEBU?$iterable@U?$IKeyValuePair@Uhstring@winrt@@U12@@Collections@Foundation@Windows@winrt@@@param@3@@Z @ 0x18000A70C
 * Callers:
 *     ?Show@CControlCenterExperienceManager@@UEAAJPEAUHSTRING__@@EEEE@Z @ 0x18000A170 (-Show@CControlCenterExperienceManager@@UEAAJPEAUHSTRING__@@EEEE@Z.c)
 *     ??$call@AEAV_lambda_89d5cc9e848954b376ddd65d03be1168_@@@?$factory_cache_entry@UHttpFormUrlEncodedContent@Http@Web@Windows@winrt@@UIHttpFormUrlEncodedContentFactory@2345@@impl@winrt@@QEAA?AUHttpFormUrlEncodedContent@Http@Web@Windows@2@AEAV_lambda_89d5cc9e848954b376ddd65d03be1168_@@@Z @ 0x18000A5E4 (--$call@AEAV_lambda_89d5cc9e848954b376ddd65d03be1168_@@@-$factory_cache_entry@UHttpFormUrlEncode.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x18033DA10 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

_QWORD *__fastcall winrt::impl::consume_Windows_Web_Http_IHttpFormUrlEncodedContentFactory<winrt::Windows::Web::Http::IHttpFormUrlEncodedContentFactory>::Create(
        __int64 *a1,
        _QWORD *a2,
        _QWORD *a3)
{
  __int64 v3; // rcx
  int v5; // eax
  __int64 v7; // [rsp+30h] [rbp+8h] BYREF

  v3 = *a1;
  v7 = 0LL;
  v5 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v3 + 48LL))(v3, *a3, &v7);
  if ( v5 < 0 )
    winrt::throw_hresult((unsigned int)v5);
  *a2 = v7;
  return a2;
}
