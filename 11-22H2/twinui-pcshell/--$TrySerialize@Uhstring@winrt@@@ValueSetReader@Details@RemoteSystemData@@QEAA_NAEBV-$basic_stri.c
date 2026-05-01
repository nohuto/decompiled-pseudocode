/*
 * XREFs of ??$TrySerialize@Uhstring@winrt@@@ValueSetReader@Details@RemoteSystemData@@QEAA_NAEBV?$basic_string_view@GU?$char_traits@G@std@@@std@@AEAUhstring@winrt@@@Z @ 0x180709D4C
 * Callers:
 *     ??$Serialize@UValueSetReader@Details@RemoteSystemData@@@RemoteSystem@RemoteSystemData@@QEAAXAEAUValueSetReader@Details@1@AEBV?$basic_string_view@GU?$char_traits@G@std@@@std@@@Z @ 0x180709A10 (--$Serialize@UValueSetReader@Details@RemoteSystemData@@@RemoteSystem@RemoteSystemData@@QEAAXAEAU.c)
 * Callees:
 *     ?TryLookup@?$consume_Windows_Foundation_Collections_IMap@UIPropertySet@Collections@Foundation@Windows@winrt@@Uhstring@5@UIInspectable@345@@impl@winrt@@QEBA@AEBUhstring@param@3@@Z @ 0x18009330C (-TryLookup@-$consume_Windows_Foundation_Collections_IMap@UIPropertySet@Collections@Foundation@Wi.c)
 *     ?create_string_reference@hstring@param@winrt@@AEAAXQEBG_K@Z @ 0x1800B4460 (-create_string_reference@hstring@param@winrt@@AEAAXQEBG_K@Z.c)
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x1800B6D14 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800D5AF0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ??$unbox_value_type@Uhstring@winrt@@AEBUIInspectable@Foundation@Windows@2@@impl@winrt@@YA?AUhstring@1@AEBUIInspectable@Foundation@Windows@1@@Z @ 0x18070DEA4 (--$unbox_value_type@Uhstring@winrt@@AEBUIInspectable@Foundation@Windows@2@@impl@winrt@@YA-AUhstr.c)
 */

// Hidden C++ exception states: #wind=1
char __fastcall RemoteSystemData::Details::ValueSetReader::TrySerialize<winrt::hstring>(
        void (__fastcall ****a1)(_QWORD, void *, __int64 *),
        __int64 a2,
        volatile signed __int32 **a3)
{
  __int64 v5; // rax
  volatile signed __int32 *v6; // rbx
  char v7; // bl
  _QWORD v9[4]; // [rsp+20h] [rbp-20h] BYREF
  volatile signed __int32 *v10; // [rsp+50h] [rbp+10h] BYREF
  __int64 v11; // [rsp+58h] [rbp+18h] BYREF

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
    winrt::impl::unbox_value_type<winrt::hstring,winrt::Windows::Foundation::IInspectable const &>(&v10, &v11);
    if ( a3 != &v10 )
    {
      v6 = v10;
      v10 = 0LL;
      winrt::handle_type<winrt::impl::hstring_traits>::close(a3);
      winrt::handle_type<winrt::impl::hstring_traits>::close(a3);
      *a3 = v6;
    }
    winrt::handle_type<winrt::impl::hstring_traits>::close(&v10);
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
