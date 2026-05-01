/*
 * XREFs of ?GetAppViewFileName@Win32ApplicationViewHelpers@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@PEAUIWin32ApplicationView@@@Z @ 0x180107068
 * Callers:
 *     ?TryGetViewPropertySetFromHintsForWin32@Win32ApplicationViewHelpers@@YA?AV?$com_ptr_t@UIPropertySet@Collections@Foundation@Windows@@Uerr_returncode_policy@wil@@@wil@@PEAUIWin32ApplicationView@@_N@Z @ 0x180106AE8 (-TryGetViewPropertySetFromHintsForWin32@Win32ApplicationViewHelpers@@YA-AV-$com_ptr_t@UIProperty.c)
 * Callees:
 *     ??1?$unique_storage@U?$resource_policy@PEA_WP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEA_WPEA_W$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x180064078 (--1-$unique_storage@U-$resource_policy@PEA_WP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_consta.c)
 *     ?GetApplicationViewImageName@Win32ApplicationViewHelpers@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@PEAUIWin32ApplicationView@@@Z @ 0x18010710C (-GetApplicationViewImageName@Win32ApplicationViewHelpers@@YA-AV-$unique_any_t@V-$unique_storage@.c)
 *     ??$make_unique_string@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@0@PEBG_K@Z @ 0x180107164 (--$make_unique_string@V-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTa.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@QEAAXPEAG@Z @ 0x180108390 (-reset@-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_con.c)
 *     ?find_last_path_segment@wil@@YAPEBGPEBG@Z @ 0x180175F44 (-find_last_path_segment@wil@@YAPEBGPEBG@Z.c)
 *     ?_Throw_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1802EBA5C (-_Throw_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

// Hidden C++ exception states: #wind=2
void **__fastcall Win32ApplicationViewHelpers::GetAppViewFileName(void **a1)
{
  const unsigned __int16 *v2; // rdx
  const unsigned __int16 *last_path_segment; // rax
  const char *v4; // r9
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+8h]
  void *v7; // [rsp+50h] [rbp+20h] BYREF
  LPCWSTR lpStringSource; // [rsp+58h] [rbp+28h] BYREF

  *a1 = 0LL;
  Win32ApplicationViewHelpers::GetApplicationViewImageName(&lpStringSource);
  if ( lpStringSource )
  {
    last_path_segment = wil::find_last_path_segment(lpStringSource, v2);
    wil::make_unique_string<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>>(
      &v7,
      last_path_segment,
      -1LL);
    if ( a1 != &v7 )
    {
      wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::reset(
        a1,
        v7);
      v7 = 0LL;
    }
    wil::details::unique_storage<wil::details::resource_policy<wchar_t *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,wchar_t *,wchar_t *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<wchar_t *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,wchar_t *,wchar_t *,0,std::nullptr_t>>(&v7);
    if ( !*a1 )
      wil::details::in1diag3::_Throw_NullAlloc(
        retaddr,
        (void *)0x34,
        (unsigned int)"onecoreuap\\internal\\shell\\inc\\Win32ApplicationViewHelpers.h",
        v4);
  }
  wil::details::unique_storage<wil::details::resource_policy<wchar_t *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,wchar_t *,wchar_t *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<wchar_t *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,wchar_t *,wchar_t *,0,std::nullptr_t>>((void **)&lpStringSource);
  return a1;
}
