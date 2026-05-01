/*
 * XREFs of ??$get_activation_factory@UIHttpFormUrlEncodedContentFactory@Http@Web@Windows@winrt@@@winrt@@YA?AUIHttpFormUrlEncodedContentFactory@Http@Web@Windows@0@AEBUhstring@param@0@@Z @ 0x18000A764
 * Callers:
 *     ??$call@AEAV_lambda_89d5cc9e848954b376ddd65d03be1168_@@@?$factory_cache_entry@UHttpFormUrlEncodedContent@Http@Web@Windows@winrt@@UIHttpFormUrlEncodedContentFactory@2345@@impl@winrt@@QEAA?AUHttpFormUrlEncodedContent@Http@Web@Windows@2@AEAV_lambda_89d5cc9e848954b376ddd65d03be1168_@@@Z @ 0x18000A5E4 (--$call@AEAV_lambda_89d5cc9e848954b376ddd65d03be1168_@@@-$factory_cache_entry@UHttpFormUrlEncode.c)
 * Callees:
 *     ??$get_runtime_activation_factory@UIHttpFormUrlEncodedContentFactory@Http@Web@Windows@winrt@@@impl@winrt@@YA?AUhresult@1@AEBUhstring@param@1@PEAPEAX@Z @ 0x18000A7A8 (--$get_runtime_activation_factory@UIHttpFormUrlEncodedContentFactory@Http@Web@Windows@winrt@@@im.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x18033DA10 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

_QWORD *__fastcall winrt::get_activation_factory<winrt::Windows::Web::Http::IHttpFormUrlEncodedContentFactory>(
        _QWORD *a1,
        __int64 a2)
{
  __int64 v3; // rcx
  char v5; // [rsp+40h] [rbp+18h] BYREF
  __int64 v6; // [rsp+48h] [rbp+20h] BYREF

  v6 = 0LL;
  v3 = *(unsigned int *)winrt::impl::get_runtime_activation_factory<winrt::Windows::Web::Http::IHttpFormUrlEncodedContentFactory>(
                          &v5,
                          a2,
                          &v6);
  if ( (int)v3 < 0 )
    winrt::throw_hresult(v3);
  *a1 = v6;
  return a1;
}
