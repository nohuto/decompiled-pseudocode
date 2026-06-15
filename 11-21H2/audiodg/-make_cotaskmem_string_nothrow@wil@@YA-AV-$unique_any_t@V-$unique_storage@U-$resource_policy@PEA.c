/*
 * XREFs of ?make_cotaskmem_string_nothrow@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@1@PEBG_K@Z @ 0x140031E10
 * Callers:
 *     ?GetCompositeModuleInfo@@YAXPEBGW4APO_TYPE@@AEBV?$vector@U_GUID@@V?$allocator@U_GUID@@@std@@@std@@PEAUIComCatalog@@AEAV?$vector@EV?$allocator@E@std@@@3@@Z @ 0x14002DD48 (-GetCompositeModuleInfo@@YAXPEBGW4APO_TYPE@@AEBV-$vector@U_GUID@@V-$allocator@U_GUID@@@std@@@std.c)
 * Callees:
 *     ??$make_unique_string_nothrow@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@0@PEBG_K@Z @ 0x140026E9C (--$make_unique_string_nothrow@V-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@.c)
 */

_QWORD *__fastcall wil::make_cotaskmem_string_nothrow(_QWORD *a1, char *a2, __int64 a3, const char *a4)
{
  wil::make_unique_string_nothrow<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>>(
    a1,
    a2,
    a3,
    a4);
  return a1;
}
