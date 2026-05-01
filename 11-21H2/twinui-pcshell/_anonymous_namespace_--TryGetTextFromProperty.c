/*
 * XREFs of _anonymous_namespace_::TryGetTextFromProperty @ 0x1801CC24C
 * Callers:
 *     _anonymous_namespace_::TryGetAvailableDashboardExtensionVersion @ 0x1801CC024 (_anonymous_namespace_--TryGetAvailableDashboardExtensionVersion.c)
 * Callees:
 *     ??1IElementCompositionPreviewStatics2@Hosting@Xaml@UI@Windows@winrt@@QEAA@XZ @ 0x180020128 (--1IElementCompositionPreviewStatics2@Hosting@Xaml@UI@Windows@winrt@@QEAA@XZ.c)
 *     ??0hstring@winrt@@QEAA@PEBG@Z @ 0x1800F76BC (--0hstring@winrt@@QEAA@PEBG@Z.c)
 *     ?TryLookup@?$consume_Windows_Foundation_Collections_IMap@UIPropertySet@Collections@Foundation@Windows@winrt@@Uhstring@5@UIInspectable@345@@impl@winrt@@QEBA?AUIInspectable@Foundation@Windows@3@AEBUhstring@param@3@@Z @ 0x1800F79F0 (-TryLookup@-$consume_Windows_Foundation_Collections_IMap@UIPropertySet@Collections@Foundation@Wi.c)
 *     ??$try_as@UIPropertySet@Collections@Foundation@Windows@winrt@@@IUnknown@Foundation@Windows@winrt@@QEBA?AUIPropertySet@Collections@123@XZ @ 0x1800F7ACC (--$try_as@UIPropertySet@Collections@Foundation@Windows@winrt@@@IUnknown@Foundation@Windows@winrt.c)
 *     ?check_hresult@winrt@@YAXUhresult@1@@Z @ 0x1800F9C28 (-check_hresult@winrt@@YAXUhresult@1@@Z.c)
 *     ?GetString@?$consume_Windows_Foundation_IPropertyValue@UIPropertyValue@Foundation@Windows@winrt@@@impl@winrt@@QEBA?AUhstring@3@XZ @ 0x1800FB940 (-GetString@-$consume_Windows_Foundation_IPropertyValue@UIPropertyValue@Foundation@Windows@winrt@.c)
 *     ??0hstring@param@winrt@@QEAA@QEBG@Z @ 0x1800FBCF4 (--0hstring@param@winrt@@QEAA@QEBG@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
winrt::hstring *__fastcall anonymous_namespace_::TryGetTextFromProperty(
        winrt::hstring *this,
        void (__fastcall ****a2)(_QWORD, void *, __int64 *))
{
  void (__fastcall ***v3)(_QWORD, void *, __int64 *); // rcx
  __int64 v4; // rbx
  unsigned int v5; // eax
  void (__fastcall ***v7)(_QWORD, void *, __int64 *); // [rsp+20h] [rbp-40h] BYREF
  __int64 v8; // [rsp+28h] [rbp-38h] BYREF
  char v9[8]; // [rsp+30h] [rbp-30h] BYREF
  _QWORD v10[5]; // [rsp+38h] [rbp-28h] BYREF
  int v11; // [rsp+80h] [rbp+20h] BYREF
  __int64 v12; // [rsp+88h] [rbp+28h] BYREF

  winrt::Windows::Foundation::IUnknown::try_as<winrt::Windows::Foundation::Collections::IPropertySet>(a2, &v7);
  if ( !v7 )
    goto LABEL_9;
  winrt::param::hstring::hstring((winrt::param::hstring *)v10, L"#text");
  v3 = *(void (__fastcall ****)(_QWORD, void *, __int64 *))winrt::impl::consume_Windows_Foundation_Collections_IMap<winrt::Windows::Foundation::Collections::IPropertySet,winrt::hstring,winrt::Windows::Foundation::IInspectable>::TryLookup(
                                                             &v7,
                                                             (winrt::Windows::Foundation::IUnknown *)v9,
                                                             v10);
  if ( v3 )
  {
    v8 = 0LL;
    (**v3)(v3, &winrt::impl::guid_v<winrt::Windows::Foundation::IPropertyValue>, &v8);
    v4 = v8;
  }
  else
  {
    v4 = 0LL;
  }
  v12 = v4;
  winrt::Windows::UI::Xaml::Hosting::IElementCompositionPreviewStatics2::~IElementCompositionPreviewStatics2((winrt::Windows::UI::Xaml::Hosting::IElementCompositionPreviewStatics2 *)v9);
  if ( !v4
    || (v11 = 0,
        v5 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v4 + 48LL))(v4, &v11),
        winrt::check_hresult(v5),
        v11 != 12) )
  {
    winrt::Windows::UI::Xaml::Hosting::IElementCompositionPreviewStatics2::~IElementCompositionPreviewStatics2((winrt::Windows::UI::Xaml::Hosting::IElementCompositionPreviewStatics2 *)&v12);
LABEL_9:
    winrt::hstring::hstring(this, &LocaleName);
    goto LABEL_10;
  }
  winrt::impl::consume_Windows_Foundation_IPropertyValue<winrt::Windows::Foundation::IPropertyValue>::GetString(
    &v12,
    this);
  winrt::Windows::UI::Xaml::Hosting::IElementCompositionPreviewStatics2::~IElementCompositionPreviewStatics2((winrt::Windows::UI::Xaml::Hosting::IElementCompositionPreviewStatics2 *)&v12);
LABEL_10:
  winrt::Windows::UI::Xaml::Hosting::IElementCompositionPreviewStatics2::~IElementCompositionPreviewStatics2((winrt::Windows::UI::Xaml::Hosting::IElementCompositionPreviewStatics2 *)&v7);
  return this;
}
