/*
 * XREFs of ??$_Visit@U?$_Variant_construct_visitor@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUHBITMAP__@@P6AHPEAX@Z$1?DeleteObject@@YAH0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@URandomAccessStreamReference@Streams@Storage@Windows@winrt@@@std@@V?$_Variant_storage_@$0A@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUHBITMAP__@@P6AHPEAX@Z$1?DeleteObject@@YAH0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@URandomAccessStreamReference@Streams@Storage@Windows@winrt@@@2@@?$_Variant_raw_visit1@$00@std@@SAX_K$$QEAU?$_Variant_construct_visitor@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUHBITMAP__@@P6AHPEAX@Z$1?DeleteObject@@YAH0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@URandomAccessStreamReference@Streams@Storage@Windows@winrt@@@1@$$QEAV?$_Variant_storage_@$0A@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUHBITMAP__@@P6AHPEAX@Z$1?DeleteObject@@YAH0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@URandomAccessStreamReference@Streams@Storage@Windows@winrt@@@1@@Z @ 0x18069BF3C
 * Callers:
 *     ??0PinConsentPromptContent@@QEAA@V?$basic_string_view@GU?$char_traits@G@std@@@std@@$$QEAV?$optional@V?$variant@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUHBITMAP__@@P6AHPEAX@Z$1?DeleteObject@@YAH0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@URandomAccessStreamReference@Streams@Storage@Windows@winrt@@@std@@@2@01@Z @ 0x18069E06C (--0PinConsentPromptContent@@QEAA@V-$basic_string_view@GU-$char_traits@G@std@@@std@@$$QEAV-$optio.c)
 *     _anonymous_namespace_::GetPinRequestPromptContent @ 0x1806A1D20 (_anonymous_namespace_--GetPinRequestPromptContent.c)
 *     _anonymous_namespace_::TryGetRequestorDisplayInformation @ 0x1806A7FD4 (_anonymous_namespace_--TryGetRequestorDisplayInformation.c)
 *     _anonymous_namespace_::TryGetTargetDisplayInformation @ 0x1806A85C8 (_anonymous_namespace_--TryGetTargetDisplayInformation.c)
 * Callees:
 *     <none>
 */

void __fastcall std::_Variant_raw_visit1<1>::_Visit<std::_Variant_construct_visitor<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<HBITMAP__ *,int (*)(void *),&int DeleteObject(void *),wistd::integral_constant<unsigned __int64,0>,HBITMAP__ *,HBITMAP__ *,0,std::nullptr_t>>>,winrt::Windows::Storage::Streams::RandomAccessStreamReference>,std::_Variant_storage_<0,wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<HBITMAP__ *,int (*)(void *),&int DeleteObject(void *),wistd::integral_constant<unsigned __int64,0>,HBITMAP__ *,HBITMAP__ *,0,std::nullptr_t>>>,winrt::Windows::Storage::Streams::RandomAccessStreamReference>>(
        __int64 a1,
        __int64 a2,
        __int64 *a3)
{
  __int64 v3; // rax
  bool v4; // zf
  _QWORD *v5; // rcx

  if ( a1 )
  {
    v3 = *a3;
    v4 = a1 == 1;
    v5 = *(_QWORD **)a2;
    if ( v4 )
    {
      *v5 = v3;
      *a3 = 0LL;
      *(_BYTE *)(*(_QWORD *)a2 + 8LL) = 0;
    }
    else
    {
      *a3 = 0LL;
      *v5 = v3;
      *(_BYTE *)(*(_QWORD *)a2 + 8LL) = 1;
    }
  }
}
