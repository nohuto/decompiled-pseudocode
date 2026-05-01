/*
 * XREFs of _anonymous_namespace_::TryGetTextFromProperty @ 0x180093414
 * Callers:
 *     _anonymous_namespace_::TryGetAvailableDashboardExtensionVersion @ 0x1800B6A10 (_anonymous_namespace_--TryGetAvailableDashboardExtensionVersion.c)
 * Callees:
 *     ?GetString@?$consume_Windows_Foundation_IPropertyValue@UIPropertyValue@Foundation@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x180092FEC (-GetString@-$consume_Windows_Foundation_IPropertyValue@UIPropertyValue@Foundation@Windows@winrt@.c)
 *     ?TryLookup@?$consume_Windows_Foundation_Collections_IMap@UIPropertySet@Collections@Foundation@Windows@winrt@@Uhstring@5@UIInspectable@345@@impl@winrt@@QEBA@AEBUhstring@param@3@@Z @ 0x18009330C (-TryLookup@-$consume_Windows_Foundation_Collections_IMap@UIPropertySet@Collections@Foundation@Wi.c)
 *     ?create_string_reference@hstring@param@winrt@@AEAAXQEBG_K@Z @ 0x1800B4460 (-create_string_reference@hstring@param@winrt@@AEAAXQEBG_K@Z.c)
 *     ??0hstring@winrt@@QEAA@PEBG@Z @ 0x1800D20DC (--0hstring@winrt@@QEAA@PEBG@Z.c)
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800D5AF0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x180392378 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

// Hidden C++ exception states: #wind=2
winrt::hstring *__fastcall anonymous_namespace_::TryGetTextFromProperty(
        winrt::hstring *this,
        void (__fastcall ****a2)(_QWORD, void *, _QWORD *))
{
  void (__fastcall ***v3)(_QWORD, void *, _QWORD *); // rcx
  void (__fastcall ***v4)(_QWORD, void *, __int64 *); // rbx
  void (__fastcall ***v5)(_QWORD, void *, __int64 *); // rax
  void (__fastcall ***v6)(_QWORD, void *, __int64 *); // rcx
  __int64 v7; // rdi
  __int64 v8; // r14
  int v9; // eax
  void (__fastcall ***v11)(_QWORD, void *, __int64 *); // [rsp+28h] [rbp-38h] BYREF
  __int64 v12; // [rsp+30h] [rbp-30h] BYREF
  __int64 v13; // [rsp+38h] [rbp-28h] BYREF
  _QWORD v14[4]; // [rsp+40h] [rbp-20h] BYREF
  int v15; // [rsp+98h] [rbp+38h] BYREF
  __int64 v16; // [rsp+A0h] [rbp+40h] BYREF
  void (__fastcall ***v17)(_QWORD, void *, __int64 *); // [rsp+A8h] [rbp+48h] BYREF

  v3 = *a2;
  if ( *a2 )
  {
    v11 = 0LL;
    (**v3)(v3, &winrt::impl::guid_v<winrt::Windows::Foundation::Collections::IPropertySet>, &v11);
    v4 = v11;
    v5 = v11;
  }
  else
  {
    v4 = 0LL;
    v5 = 0LL;
  }
  v17 = v4;
  if ( v5 )
  {
    winrt::param::hstring::create_string_reference((winrt::param::hstring *)v14, L"#text", 5uLL);
    v6 = *(void (__fastcall ****)(_QWORD, void *, __int64 *))winrt::impl::consume_Windows_Foundation_Collections_IMap<winrt::Windows::Foundation::Collections::IPropertySet,winrt::hstring,winrt::Windows::Foundation::IInspectable>::TryLookup(
                                                               &v17,
                                                               (winrt::Windows::Foundation::IUnknown *)&v13,
                                                               v14);
    if ( v6 )
    {
      v12 = 0LL;
      (**v6)(v6, &winrt::impl::guid_v<winrt::Windows::Foundation::IPropertyValue>, &v12);
      v7 = v12;
      v8 = v12;
    }
    else
    {
      v7 = 0LL;
      v8 = 0LL;
    }
    v16 = v7;
    if ( v13 )
      winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v13);
    if ( v8 )
    {
      v15 = 0;
      v9 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v7 + 48LL))(v7, &v15);
      if ( v9 < 0 )
        winrt::throw_hresult((unsigned int)v9);
      if ( v15 == 12 )
      {
        winrt::impl::consume_Windows_Foundation_IPropertyValue<winrt::Windows::Foundation::IPropertyValue>::GetString(
          &v16,
          this);
        winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v16);
        goto LABEL_12;
      }
    }
    if ( v7 )
      winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v16);
  }
  winrt::hstring::hstring(this, &LocaleName);
LABEL_12:
  if ( v4 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v17);
  return this;
}
