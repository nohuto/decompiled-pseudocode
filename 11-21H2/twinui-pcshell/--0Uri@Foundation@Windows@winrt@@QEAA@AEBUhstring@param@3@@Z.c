/*
 * XREFs of ??0Uri@Foundation@Windows@winrt@@QEAA@AEBUhstring@param@3@@Z @ 0x18038E0D4
 * Callers:
 *     ?LaunchUriWithCv@ProtocolLauncher@Utils@@QEAAXPEBG_JAEBVCorrelationVector@@@Z @ 0x1801D3374 (-LaunchUriWithCv@ProtocolLauncher@Utils@@QEAAXPEBG_JAEBVCorrelationVector@@@Z.c)
 * Callees:
 *     ??$call@AEAV_lambda_0a61d549bec6c444b35123f4c9509ca7_@@@?$factory_cache_entry@UUri@Foundation@Windows@winrt@@UIUriRuntimeClassFactory@234@@impl@winrt@@QEAA?AUUri@Foundation@Windows@2@AEAV_lambda_0a61d549bec6c444b35123f4c9509ca7_@@@Z @ 0x18038D6EC (--$call@AEAV_lambda_0a61d549bec6c444b35123f4c9509ca7_@@@-$factory_cache_entry@UUri@Foundation@Wi.c)
 *     ?CreateUri@?$consume_Windows_Foundation_IUriRuntimeClassFactory@UIUriRuntimeClassFactory@Foundation@Windows@winrt@@@impl@winrt@@QEBA?AUUri@Foundation@Windows@3@AEBUhstring@param@3@@Z @ 0x18038E96C (-CreateUri@-$consume_Windows_Foundation_IUriRuntimeClassFactory@UIUriRuntimeClassFactory@Foundat.c)
 */

// Hidden C++ exception states: #wind=1
winrt::Windows::Foundation::Uri *__fastcall winrt::Windows::Foundation::Uri::Uri(
        winrt::Windows::Foundation::Uri *this,
        const struct winrt::param::hstring *a2)
{
  const struct winrt::param::hstring *v4; // [rsp+30h] [rbp+8h] BYREF
  __int64 *v5; // [rsp+38h] [rbp+10h]

  v4 = a2;
  v5 = &qword_1807B5D48;
  _InterlockedIncrement64(&qword_1807B5D48);
  if ( winrt::impl::factory_cache_entry_v<winrt::Windows::Foundation::Uri,winrt::Windows::Foundation::IUriRuntimeClassFactory> )
  {
    winrt::impl::consume_Windows_Foundation_IUriRuntimeClassFactory<winrt::Windows::Foundation::IUriRuntimeClassFactory>::CreateUri(
      &winrt::impl::factory_cache_entry_v<winrt::Windows::Foundation::Uri,winrt::Windows::Foundation::IUriRuntimeClassFactory>,
      this,
      a2);
    _InterlockedDecrement64(&qword_1807B5D48);
  }
  else
  {
    _InterlockedDecrement64(&qword_1807B5D48);
    winrt::impl::factory_cache_entry<winrt::Windows::Foundation::Uri,winrt::Windows::Foundation::IUriRuntimeClassFactory>::call<_lambda_0a61d549bec6c444b35123f4c9509ca7_ &>(
      (void (__fastcall ***)(_QWORD, __int64 *, __int64 *))this,
      (__int64)this,
      &v4);
  }
  return this;
}
