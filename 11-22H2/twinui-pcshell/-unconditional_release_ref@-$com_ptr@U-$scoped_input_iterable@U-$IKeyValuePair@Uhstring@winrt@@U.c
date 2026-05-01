/*
 * XREFs of ?unconditional_release_ref@?$com_ptr@U?$scoped_input_iterable@U?$IKeyValuePair@Uhstring@winrt@@U12@@Collections@Foundation@Windows@winrt@@PEBU?$pair@$$CBUhstring@winrt@@U12@@std@@@impl@winrt@@@winrt@@AEAAXXZ @ 0x1804275AC
 * Callers:
 *     ??$make@Uiterator@?$iterable_base@U?$scoped_input_iterable@U?$IKeyValuePair@Uhstring@winrt@@U12@@Collections@Foundation@Windows@winrt@@PEBU?$pair@$$CBUhstring@winrt@@U12@@std@@@impl@winrt@@U?$IKeyValuePair@Uhstring@winrt@@U12@@Collections@Foundation@Windows@3@Uno_collection_version@23@@winrt@@PEAU?$scoped_input_iterable@U?$IKeyValuePair@Uhstring@winrt@@U12@@Collections@Foundation@Windows@winrt@@PEBU?$pair@$$CBUhstring@winrt@@U12@@std@@@impl@3@@winrt@@YA?A_P$$QEAPEAU?$scoped_input_iterable@U?$IKeyValuePair@Uhstring@winrt@@U12@@Collections@Foundation@Windows@winrt@@PEBU?$pair@$$CBUhstring@winrt@@U12@@std@@@impl@0@@Z @ 0x18041CCE0 (--$make@Uiterator@-$iterable_base@U-$scoped_input_iterable@U-$IKeyValuePair@Uhstring@winrt@@U12@.c)
 *     ??_E?$heap_implements@Uiterator@?$iterable_base@U?$scoped_input_iterable@U?$IKeyValuePair@Uhstring@winrt@@U12@@Collections@Foundation@Windows@winrt@@PEBU?$pair@$$CBUhstring@winrt@@U12@@std@@@impl@winrt@@U?$IKeyValuePair@Uhstring@winrt@@U12@@Collections@Foundation@Windows@3@Uno_collection_version@23@@winrt@@@impl@winrt@@UEAAPEAXI@Z @ 0x18041E1A0 (--_E-$heap_implements@Uiterator@-$iterable_base@U-$scoped_input_iterable@U-$IKeyValuePair@Uhstri.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall winrt::com_ptr<winrt::impl::scoped_input_iterable<winrt::Windows::Foundation::Collections::IKeyValuePair<winrt::hstring,winrt::hstring>,std::pair<winrt::hstring const,winrt::hstring> const *>>::unconditional_release_ref(
        volatile signed __int32 **a1)
{
  volatile signed __int32 *v1; // r8
  __int64 result; // rax

  v1 = *a1;
  *a1 = 0LL;
  result = (unsigned int)_InterlockedExchangeAdd(v1 + 2, 0xFFFFFFFF);
  if ( (_DWORD)result == 1 )
  {
    result = (unsigned int)_InterlockedExchange(v1 + 2, 1);
    if ( v1 )
      return (*(__int64 (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v1 + 8LL))(v1, 1LL);
  }
  return result;
}
