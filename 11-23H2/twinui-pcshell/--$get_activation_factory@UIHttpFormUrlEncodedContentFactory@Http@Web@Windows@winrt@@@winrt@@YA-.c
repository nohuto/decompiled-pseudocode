/*
 * XREFs of ??$get_activation_factory@UIHttpFormUrlEncodedContentFactory@Http@Web@Windows@winrt@@@winrt@@YA?AUIHttpFormUrlEncodedContentFactory@Http@Web@Windows@0@AEBUhstring@param@0@@Z @ 0x18041CBD8
 * Callers:
 *     ??$call@AEAV_lambda_89d5cc9e848954b376ddd65d03be1168_@@@?$factory_cache_entry@UHttpFormUrlEncodedContent@Http@Web@Windows@winrt@@UIHttpFormUrlEncodedContentFactory@2345@@impl@winrt@@QEAA?A_PAEAV_lambda_89d5cc9e848954b376ddd65d03be1168_@@@Z @ 0x18041CAA0 (--$call@AEAV_lambda_89d5cc9e848954b376ddd65d03be1168_@@@-$factory_cache_entry@UHttpFormUrlEncode.c)
 * Callees:
 *     ??$get_runtime_activation_factory_impl@$0A@@impl@winrt@@YA?AUhresult@1@AEBUhstring@param@1@AEBUguid@1@PEAPEAX@Z @ 0x1800B4384 (--$get_runtime_activation_factory_impl@$0A@@impl@winrt@@YA-AUhresult@1@AEBUhstring@param@1@AEBUg.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x180392378 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

_QWORD *__fastcall winrt::get_activation_factory<winrt::Windows::Web::Http::IHttpFormUrlEncodedContentFactory>(
        _QWORD *a1,
        _QWORD *a2)
{
  signed int v4; // [rsp+50h] [rbp+18h] BYREF
  __int64 v5; // [rsp+58h] [rbp+20h] BYREF

  v5 = 0LL;
  winrt::impl::get_runtime_activation_factory_impl<0>(
    &v4,
    a2,
    (__int64)&winrt::impl::guid_v<winrt::Windows::Web::Http::IHttpFormUrlEncodedContentFactory>,
    (__int64)&v5);
  if ( v4 < 0 )
    winrt::throw_hresult(v4);
  *a1 = v5;
  return a1;
}
