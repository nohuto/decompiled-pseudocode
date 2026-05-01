/*
 * XREFs of ??$TrySerialize@_K@ValueSetReader@Details@RemoteSystemData@@QEAA_NAEBV?$basic_string_view@GU?$char_traits@G@std@@@std@@AEA_K@Z @ 0x180709E08
 * Callers:
 *     ??$Serialize@UValueSetReader@Details@RemoteSystemData@@@RemoteSystem@RemoteSystemData@@QEAAXAEAUValueSetReader@Details@1@AEBV?$basic_string_view@GU?$char_traits@G@std@@@std@@@Z @ 0x180709A10 (--$Serialize@UValueSetReader@Details@RemoteSystemData@@@RemoteSystem@RemoteSystemData@@QEAAXAEAU.c)
 * Callees:
 *     ?TryLookup@?$consume_Windows_Foundation_Collections_IMap@UIPropertySet@Collections@Foundation@Windows@winrt@@Uhstring@5@UIInspectable@345@@impl@winrt@@QEBA@AEBUhstring@param@3@@Z @ 0x18009330C (-TryLookup@-$consume_Windows_Foundation_Collections_IMap@UIPropertySet@Collections@Foundation@Wi.c)
 *     ?create_string_reference@hstring@param@winrt@@AEAAXQEBG_K@Z @ 0x1800B4460 (-create_string_reference@hstring@param@winrt@@AEAAXQEBG_K@Z.c)
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800D5AF0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ??$as@U?$IReference@_K@Foundation@Windows@winrt@@Utype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@impl@4@$0A@@impl@winrt@@YA?AU?$IReference@_K@Foundation@Windows@1@PEAUtype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@01@@Z @ 0x18070B2F0 (--$as@U-$IReference@_K@Foundation@Windows@winrt@@Utype@-$abi@UIUnknown@Foundation@Windows@winrt@.c)
 *     ?Value@?$consume_Windows_Foundation_IReference@U?$IReference@_K@Foundation@Windows@winrt@@_K@impl@winrt@@QEBA@XZ @ 0x18071A370 (-Value@-$consume_Windows_Foundation_IReference@U-$IReference@_K@Foundation@Windows@winrt@@_K@imp.c)
 */

char __fastcall RemoteSystemData::Details::ValueSetReader::TrySerialize<unsigned __int64>(
        void (__fastcall ****a1)(_QWORD, void *, __int64 *),
        __int64 a2,
        __int64 *a3)
{
  __int64 v5; // rax
  __int64 v6; // rbx
  char v7; // bl
  _QWORD v9[5]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v10; // [rsp+50h] [rbp+8h] BYREF
  __int64 v11; // [rsp+58h] [rbp+10h] BYREF

  winrt::param::hstring::create_string_reference(
    (winrt::param::hstring *)v9,
    *(const unsigned __int16 *const *)a2,
    *(_QWORD *)(a2 + 8));
  winrt::impl::consume_Windows_Foundation_Collections_IMap<winrt::Windows::Foundation::Collections::IPropertySet,winrt::hstring,winrt::Windows::Foundation::IInspectable>::TryLookup(
    a1,
    (winrt::Windows::Foundation::IUnknown *)&v11,
    v9);
  v5 = v11;
  if ( v11 )
  {
    winrt::impl::as<winrt::Windows::Foundation::IReference<unsigned __int64>,winrt::impl::abi<winrt::Windows::Foundation::IUnknown,void>::type,0>(
      &v10,
      v11);
    v6 = winrt::impl::consume_Windows_Foundation_IReference<winrt::Windows::Foundation::IReference<unsigned __int64>,unsigned __int64>::Value(&v10);
    if ( v10 )
      winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v10);
    *a3 = v6;
    v7 = 1;
    v5 = v11;
  }
  else
  {
    v7 = 0;
  }
  if ( v5 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v11);
  return v7;
}
