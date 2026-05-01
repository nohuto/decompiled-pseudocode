/*
 * XREFs of ?GetAppViewFileName@Win32ApplicationViewHelpers@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@PEAUIWin32ApplicationView@@@Z @ 0x180097ACC
 * Callers:
 *     ?TryGetViewPropertySetFromHintsForWin32@Win32ApplicationViewHelpers@@YA?AV?$com_ptr_t@UIPropertySet@Collections@Foundation@Windows@@Uerr_returncode_policy@wil@@@wil@@PEAUIWin32ApplicationView@@_N@Z @ 0x180097748 (-TryGetViewPropertySetFromHintsForWin32@Win32ApplicationViewHelpers@@YA-AV-$com_ptr_t@UIProperty.c)
 * Callees:
 *     ??$make_unique_string@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@0@PEBG_K@Z @ 0x180097B94 (--$make_unique_string@V-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTa.c)
 *     ?GetApplicationViewImageName@Win32ApplicationViewHelpers@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@PEAUIWin32ApplicationView@@@Z @ 0x180097BE0 (-GetApplicationViewImageName@Win32ApplicationViewHelpers@@YA-AV-$unique_any_t@V-$unique_storage@.c)
 *     ?find_last_path_segment@wil@@YAPEBGPEBG@Z @ 0x1800A8DBC (-find_last_path_segment@wil@@YAPEBGPEBG@Z.c)
 *     ?_Throw_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1801D66A8 (-_Throw_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?close_reset@?$close_invoke_helper@$00P6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZPEAG@details@wil@@SAXPEAG@Z @ 0x1803A463C (-close_reset@-$close_invoke_helper@$00P6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZPEAG@details@wil@@SAXPEA.c)
 */

// Hidden C++ exception states: #wind=2
LPVOID *__fastcall Win32ApplicationViewHelpers::GetAppViewFileName(LPVOID *a1)
{
  const unsigned __int16 *v2; // rdx
  void *v3; // rcx
  const unsigned __int16 *last_path_segment; // rax
  const char *v5; // r9
  void *v6; // rdi
  void *v7; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+18h]
  void *v10; // [rsp+60h] [rbp+30h] BYREF
  LPVOID pv; // [rsp+68h] [rbp+38h] BYREF

  *a1 = 0LL;
  Win32ApplicationViewHelpers::GetApplicationViewImageName(&pv);
  v3 = pv;
  if ( pv )
  {
    last_path_segment = wil::find_last_path_segment((LPCWSTR)pv, v2);
    wil::make_unique_string<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>>(
      &v10,
      last_path_segment,
      -1LL);
    if ( a1 == &v10 )
    {
      v7 = v10;
    }
    else
    {
      v6 = v10;
      if ( *a1 )
        wil::details::close_invoke_helper<1,void (*)(void *),&void CoTaskMemFree(void *),unsigned short *>::close_reset(*a1);
      *a1 = v6;
      v7 = 0LL;
      v10 = 0LL;
    }
    if ( v7 )
      CoTaskMemFree(v7);
    if ( !*a1 )
      wil::details::in1diag3::_Throw_NullAlloc(
        retaddr,
        (void *)0x34,
        (unsigned int)"onecoreuap\\internal\\shell\\inc\\Win32ApplicationViewHelpers.h",
        v5);
    v3 = pv;
  }
  if ( v3 )
    CoTaskMemFree(v3);
  return a1;
}
