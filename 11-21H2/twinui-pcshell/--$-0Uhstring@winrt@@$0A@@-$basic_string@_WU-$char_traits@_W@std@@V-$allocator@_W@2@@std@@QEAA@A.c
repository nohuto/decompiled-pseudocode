/*
 * XREFs of ??$?0Uhstring@winrt@@$0A@@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAA@AEBUhstring@winrt@@AEBV?$allocator@_W@1@@Z @ 0x18042198C
 * Callers:
 *     ??$get_runtime_activation_factory@UIDesktopWindowXamlSourceFactory@Hosting@Xaml@UI@Windows@winrt@@@impl@winrt@@YA?AUhresult@1@AEBUhstring@param@1@PEAPEAX@Z @ 0x180068164 (--$get_runtime_activation_factory@UIDesktopWindowXamlSourceFactory@Hosting@Xaml@UI@Windows@winrt.c)
 *     ??$get_runtime_activation_factory@UIXamlExtensionsStatics@AppExtensions@ApplicationModel@WindowsUdk@winrt@@@impl@winrt@@YA?AUhresult@1@AEBUhstring@param@1@PEAPEAX@Z @ 0x180068210 (--$get_runtime_activation_factory@UIXamlExtensionsStatics@AppExtensions@ApplicationModel@Windows.c)
 *     ??$get_runtime_activation_factory@UIWindowsXamlManagerStatics@Hosting@Xaml@UI@Windows@winrt@@@impl@winrt@@YA?AUhresult@1@AEBUhstring@param@1@PEAPEAX@Z @ 0x1800682BC (--$get_runtime_activation_factory@UIWindowsXamlManagerStatics@Hosting@Xaml@UI@Windows@winrt@@@im.c)
 *     ??$get_runtime_activation_factory@UIWindowStatics@Xaml@UI@Windows@winrt@@@impl@winrt@@YA?AUhresult@1@AEBUhstring@param@1@PEAPEAX@Z @ 0x18006888C (--$get_runtime_activation_factory@UIWindowStatics@Xaml@UI@Windows@winrt@@@impl@winrt@@YA-AUhresu.c)
 *     ??$get_runtime_activation_factory@UIXamlSourceFocusNavigationRequestFactory@Hosting@Xaml@UI@Windows@winrt@@@impl@winrt@@YA?AUhresult@1@AEBUhstring@param@1@PEAPEAX@Z @ 0x1804227A0 (--$get_runtime_activation_factory@UIXamlSourceFocusNavigationRequestFactory@Hosting@Xaml@UI@Wind.c)
 *     ??$get_runtime_activation_factory@UICompositionAnimationStatics@Composition@UI@WindowsUdk@winrt@@@impl@winrt@@YA?AUhresult@1@AEBUhstring@param@1@PEAPEAX@Z @ 0x180606668 (--$get_runtime_activation_factory@UICompositionAnimationStatics@Composition@UI@WindowsUdk@winrt@.c)
 *     ??$get_runtime_activation_factory@UIElementCompositionPreviewStatics2@Hosting@Xaml@UI@Windows@winrt@@@impl@winrt@@YA?AUhresult@1@AEBUhstring@param@1@PEAPEAX@Z @ 0x180606994 (--$get_runtime_activation_factory@UIElementCompositionPreviewStatics2@Hosting@Xaml@UI@Windows@wi.c)
 *     ??$get_runtime_activation_factory@UIElementCompositionPreviewStatics@Hosting@Xaml@UI@Windows@winrt@@@impl@winrt@@YA?AUhresult@1@AEBUhstring@param@1@PEAPEAX@Z @ 0x180606CC0 (--$get_runtime_activation_factory@UIElementCompositionPreviewStatics@Hosting@Xaml@UI@Windows@win.c)
 *     ??$get_runtime_activation_factory@UICompositionTargetStatics3@Media@Xaml@UI@Windows@winrt@@@impl@winrt@@YA?AUhresult@1@AEBUhstring@param@1@PEAPEAX@Z @ 0x18060D988 (--$get_runtime_activation_factory@UICompositionTargetStatics3@Media@Xaml@UI@Windows@winrt@@@impl.c)
 * Callees:
 *     ?assign@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAAEAV12@QEB_W_K@Z @ 0x180421750 (-assign@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAAEAV12@QEB_W_K@Z.c)
 *     ??Bhstring@winrt@@QEBA?AV?$basic_string_view@_WU?$char_traits@_W@std@@@std@@XZ @ 0x180421B9C (--Bhstring@winrt@@QEBA-AV-$basic_string_view@_WU-$char_traits@_W@std@@@std@@XZ.c)
 */

// Hidden C++ exception states: #wind=1
char *__fastcall std::wstring::wstring(char *a1, __int64 a2)
{
  const void *v4[3]; // [rsp+20h] [rbp-18h] BYREF

  *((_QWORD *)a1 + 2) = 0LL;
  *((_QWORD *)a1 + 3) = 7LL;
  *(_WORD *)a1 = 0;
  winrt::hstring::operator std::wstring_view(a2, v4);
  std::wstring::assign(a1, v4[0], (unsigned __int64)v4[1]);
  return a1;
}
