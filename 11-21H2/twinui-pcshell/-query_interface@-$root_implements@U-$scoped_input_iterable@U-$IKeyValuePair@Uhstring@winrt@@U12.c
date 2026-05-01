/*
 * XREFs of ?query_interface@?$root_implements@U?$scoped_input_iterable@U?$IKeyValuePair@Uhstring@winrt@@U12@@Collections@Foundation@Windows@winrt@@PEBU?$pair@$$CBUhstring@winrt@@U12@@std@@@impl@winrt@@Unon_agile@3@Uno_weak_ref@3@U?$IIterable@U?$IKeyValuePair@Uhstring@winrt@@U12@@Collections@Foundation@Windows@winrt@@@Collections@Foundation@Windows@3@@impl@winrt@@AEAAHAEBUguid@3@PEAPEAX@Z @ 0x18035541C
 * Callers:
 *     ?QueryInterface@?$produce_base@U?$scoped_input_iterable@U?$IKeyValuePair@Uhstring@winrt@@U12@@Collections@Foundation@Windows@winrt@@PEBU?$pair@$$CBUhstring@winrt@@U12@@std@@@impl@winrt@@U?$IIterable@U?$IKeyValuePair@Uhstring@winrt@@U12@@Collections@Foundation@Windows@winrt@@@Collections@Foundation@Windows@3@X@impl@winrt@@UEAAHAEBUguid@3@PEAPEAX@Z @ 0x180354570 (-QueryInterface@-$produce_base@U-$scoped_input_iterable@U-$IKeyValuePair@Uhstring@winrt@@U12@@Co.c)
 * Callees:
 *     ??8winrt@@YA_NAEBUguid@0@0@Z @ 0x1800F96D0 (--8winrt@@YA_NAEBUguid@0@0@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall winrt::impl::root_implements<winrt::impl::scoped_input_iterable<winrt::Windows::Foundation::Collections::IKeyValuePair<winrt::hstring,winrt::hstring>,std::pair<winrt::hstring const,winrt::hstring> const *>,winrt::non_agile,winrt::no_weak_ref,winrt::Windows::Foundation::Collections::IIterable<winrt::Windows::Foundation::Collections::IKeyValuePair<winrt::hstring,winrt::hstring>>>::query_interface(
        volatile signed __int32 *a1,
        _QWORD *a2,
        __int64 *a3)
{
  __int64 v6; // rax
  _QWORD *v8; // rcx
  __int64 v9; // rax
  __int64 v10; // r9

  v6 = (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)a1 + 48LL))(a1);
  *a3 = v6;
  if ( v6 )
    goto LABEL_2;
  if ( winrt::operator==(a2, &winrt::impl::guid_v<IInspectable>) )
  {
    v9 = (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)a1 + 56LL))(a1);
LABEL_5:
    *a3 = v9;
LABEL_2:
    _InterlockedExchangeAdd(a1 + 2, 1u);
    return 0LL;
  }
  if ( winrt::operator==(v8, &winrt::impl::guid_v<winrt::Windows::Foundation::IUnknown>) )
  {
    v9 = (*(__int64 (__fastcall **)(volatile signed __int32 *))(v10 + 24))(a1);
    goto LABEL_5;
  }
  return (*(__int64 (__fastcall **)(volatile signed __int32 *, _QWORD *, __int64 *))v10)(a1, a2, a3);
}
