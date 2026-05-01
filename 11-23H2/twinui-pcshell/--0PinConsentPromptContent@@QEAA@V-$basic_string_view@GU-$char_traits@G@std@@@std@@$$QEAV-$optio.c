/*
 * XREFs of ??0PinConsentPromptContent@@QEAA@V?$basic_string_view@GU?$char_traits@G@std@@@std@@$$QEAV?$optional@V?$variant@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUHBITMAP__@@P6AHPEAX@Z$1?DeleteObject@@YAH0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@URandomAccessStreamReference@Streams@Storage@Windows@winrt@@@std@@@2@01@Z @ 0x18069E06C
 * Callers:
 *     _anonymous_namespace_::GetPinRequestPromptContent @ 0x1806A1D20 (_anonymous_namespace_--GetPinRequestPromptContent.c)
 * Callees:
 *     ??$?0V?$basic_string_view@GU?$char_traits@G@std@@@std@@$0A@@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@AEBV?$basic_string_view@GU?$char_traits@G@std@@@1@AEBV?$allocator@G@1@@Z @ 0x180090A78 (--$-0V-$basic_string_view@GU-$char_traits@G@std@@@std@@$0A@@-$basic_string@GU-$char_traits@G@std.c)
 *     ??$_Visit@U?$_Variant_construct_visitor@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUHBITMAP__@@P6AHPEAX@Z$1?DeleteObject@@YAH0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@URandomAccessStreamReference@Streams@Storage@Windows@winrt@@@std@@V?$_Variant_storage_@$0A@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUHBITMAP__@@P6AHPEAX@Z$1?DeleteObject@@YAH0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@URandomAccessStreamReference@Streams@Storage@Windows@winrt@@@2@@?$_Variant_raw_visit1@$00@std@@SAX_K$$QEAU?$_Variant_construct_visitor@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUHBITMAP__@@P6AHPEAX@Z$1?DeleteObject@@YAH0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@URandomAccessStreamReference@Streams@Storage@Windows@winrt@@@1@$$QEAV?$_Variant_storage_@$0A@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUHBITMAP__@@P6AHPEAX@Z$1?DeleteObject@@YAH0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@URandomAccessStreamReference@Streams@Storage@Windows@winrt@@@1@@Z @ 0x18069BF3C (--$_Visit@U-$_Variant_construct_visitor@V-$unique_any_t@V-$unique_storage@U-$resource_policy@PEA.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall PinConsentPromptContent::PinConsentPromptContent(
        __int64 a1,
        void **a2,
        __int64 a3,
        void **a4,
        __int64 a5)
{
  __int64 v8; // r10
  __int64 v9; // r10
  _QWORD v11[9]; // [rsp+20h] [rbp-48h] BYREF

  v11[2] = a1;
  std::wstring::wstring((_QWORD *)a1, a2);
  *(_BYTE *)(a1 + 48) = 0;
  if ( *(_BYTE *)(a3 + 16) )
  {
    *(_BYTE *)(a1 + 40) = -1;
    v11[0] = a1 + 32;
    std::_Variant_raw_visit1<1>::_Visit<std::_Variant_construct_visitor<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<HBITMAP__ *,int (*)(void *),&int DeleteObject(void *),wistd::integral_constant<unsigned __int64,0>,HBITMAP__ *,HBITMAP__ *,0,std::nullptr_t>>>,winrt::Windows::Storage::Streams::RandomAccessStreamReference>,std::_Variant_storage_<0,wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<HBITMAP__ *,int (*)(void *),&int DeleteObject(void *),wistd::integral_constant<unsigned __int64,0>,HBITMAP__ *,HBITMAP__ *,0,std::nullptr_t>>>,winrt::Windows::Storage::Streams::RandomAccessStreamReference>>(
      *(char *)(a3 + 8) + 1LL,
      (__int64)v11,
      (__int64 *)a3);
    *(_BYTE *)(v8 + 16) = 1;
  }
  std::wstring::wstring((_QWORD *)(a1 + 56), a4);
  *(_BYTE *)(a1 + 104) = 0;
  if ( *(_BYTE *)(a5 + 16) )
  {
    *(_BYTE *)(a1 + 96) = -1;
    v11[0] = a1 + 88;
    std::_Variant_raw_visit1<1>::_Visit<std::_Variant_construct_visitor<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<HBITMAP__ *,int (*)(void *),&int DeleteObject(void *),wistd::integral_constant<unsigned __int64,0>,HBITMAP__ *,HBITMAP__ *,0,std::nullptr_t>>>,winrt::Windows::Storage::Streams::RandomAccessStreamReference>,std::_Variant_storage_<0,wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<HBITMAP__ *,int (*)(void *),&int DeleteObject(void *),wistd::integral_constant<unsigned __int64,0>,HBITMAP__ *,HBITMAP__ *,0,std::nullptr_t>>>,winrt::Windows::Storage::Streams::RandomAccessStreamReference>>(
      *(char *)(a5 + 8) + 1LL,
      (__int64)v11,
      (__int64 *)a5);
    *(_BYTE *)(v9 + 16) = 1;
  }
  return a1;
}
