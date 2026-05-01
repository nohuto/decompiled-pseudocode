/*
 * XREFs of ??0UriBuilder@implementation@Shell@Internal@Windows@winrt@@QEAA@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@Z @ 0x18072C2A4
 * Callers:
 *     ?GetLaunchUri@RemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@AEAA?AUUri@Foundation@56@AEBURemoteDesktopProviderInfo@3456@W4Mode@CloudPCHelpers@@@Z @ 0x180712008 (-GetLaunchUri@RemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@AEAA-AU.c)
 * Callees:
 *     ??0hstring@param@winrt@@QEAA@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@Z @ 0x1800B25FC (--0hstring@param@winrt@@QEAA@AEBV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@@Z.c)
 *     ?assign@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z @ 0x1800C29B0 (-assign@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z.c)
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800D5AF0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ?CreateUri@?$consume_Windows_Foundation_IUriRuntimeClassFactory@UIUriRuntimeClassFactory@Foundation@Windows@winrt@@@impl@winrt@@QEBA@AEBUhstring@param@3@@Z @ 0x1802D2F38 (-CreateUri@-$consume_Windows_Foundation_IUriRuntimeClassFactory@UIUriRuntimeClassFactory@Foundat.c)
 *     ??$call@AEAV_lambda_0a61d549bec6c444b35123f4c9509ca7_@@@?$factory_cache_entry@UUri@Foundation@Windows@winrt@@UIUriRuntimeClassFactory@234@@impl@winrt@@QEAA?A_PAEAV_lambda_0a61d549bec6c444b35123f4c9509ca7_@@@Z @ 0x1803F6FA4 (--$call@AEAV_lambda_0a61d549bec6c444b35123f4c9509ca7_@@@-$factory_cache_entry@UUri@Foundation@Wi.c)
 *     ?QueryParsed@?$consume_Windows_Foundation_IUriRuntimeClass@UIUriRuntimeClass@Foundation@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x180469F58 (-QueryParsed@-$consume_Windows_Foundation_IUriRuntimeClass@UIUriRuntimeClass@Foundation@Windows@.c)
 *     ?Size@?$consume_Windows_Foundation_Collections_IVectorView@UIWwwFormUrlDecoderRuntimeClass@Foundation@Windows@winrt@@UIWwwFormUrlDecoderEntry@234@@impl@winrt@@QEBA@XZ @ 0x18072BDD4 (-Size@-$consume_Windows_Foundation_Collections_IVectorView@UIWwwFormUrlDecoderRuntimeClass@Found.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall winrt::Windows::Internal::Shell::implementation::UriBuilder::UriBuilder(
        __int64 a1,
        unsigned __int16 *a2)
{
  const unsigned __int16 *v2; // rdi
  void (__fastcall ***v4)(_QWORD, __int64 *, __int64 *); // rcx
  __int64 *v5; // rax
  _QWORD v7[6]; // [rsp+28h] [rbp-30h] BYREF
  __int64 v8; // [rsp+88h] [rbp+30h] BYREF
  __int64 v9; // [rsp+90h] [rbp+38h] BYREF
  _QWORD *v10; // [rsp+98h] [rbp+40h] BYREF

  v2 = a2;
  *(_QWORD *)a1 = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)(a1 + 24) = 7LL;
  *(_WORD *)a1 = 0;
  *(_BYTE *)(a1 + 32) = 0;
  if ( (unsigned __int16 *)a1 != a2 )
  {
    if ( *((_QWORD *)a2 + 3) >= 8uLL )
      a2 = *(unsigned __int16 **)a2;
    std::wstring::assign((char *)a1, a2, *((_QWORD *)v2 + 2));
  }
  winrt::param::hstring::hstring((winrt::param::hstring *)v7, v2);
  v10 = v7;
  _InterlockedIncrement64(&qword_180990828);
  if ( winrt::impl::factory_cache_entry_v<winrt::Windows::Foundation::Uri,winrt::Windows::Foundation::IUriRuntimeClassFactory> )
  {
    winrt::impl::consume_Windows_Foundation_IUriRuntimeClassFactory<winrt::Windows::Foundation::IUriRuntimeClassFactory>::CreateUri(
      &winrt::impl::factory_cache_entry_v<winrt::Windows::Foundation::Uri,winrt::Windows::Foundation::IUriRuntimeClassFactory>,
      &v8,
      v7);
    _InterlockedDecrement64(&qword_180990828);
  }
  else
  {
    _InterlockedDecrement64(&qword_180990828);
    winrt::impl::factory_cache_entry<winrt::Windows::Foundation::Uri,winrt::Windows::Foundation::IUriRuntimeClassFactory>::call<_lambda_0a61d549bec6c444b35123f4c9509ca7_ &>(
      v4,
      &v8,
      &v10);
  }
  v5 = winrt::impl::consume_Windows_Foundation_IUriRuntimeClass<winrt::Windows::Foundation::IUriRuntimeClass>::QueryParsed(
         &v8,
         &v9);
  *(_BYTE *)(a1 + 32) = (unsigned int)winrt::impl::consume_Windows_Foundation_Collections_IVectorView<winrt::Windows::Foundation::IWwwFormUrlDecoderRuntimeClass,winrt::Windows::Foundation::IWwwFormUrlDecoderEntry>::Size(v5) != 0;
  if ( v9 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v9);
  if ( v8 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v8);
  return a1;
}
