/*
 * XREFs of ?append@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAAEAV12@_K_W@Z @ 0x1804216DC
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
 *     wmemset @ 0x180174490 (wmemset.c)
 *     ??$_Reallocate_grow_by@V_lambda_a3050a43f3157934f354774ab3dd2e02_@@_K_W@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@AEAAAEAV01@_KV_lambda_a3050a43f3157934f354774ab3dd2e02_@@_K_W@Z @ 0x18041F8F0 (--$_Reallocate_grow_by@V_lambda_a3050a43f3157934f354774ab3dd2e02_@@_K_W@-$basic_string@_WU-$char.c)
 */

_QWORD *__fastcall std::wstring::append(wchar_t *a1, unsigned __int64 a2, __int64 a3)
{
  __int64 v4; // rcx
  bool v5; // cf
  __int64 v6; // rdi
  wchar_t *v7; // rbx
  _QWORD *v8; // r10
  _QWORD *result; // rax
  wchar_t v10; // dx

  v4 = *((_QWORD *)a1 + 2);
  if ( a2 > *((_QWORD *)a1 + 3) - v4 )
  {
    LOBYTE(a3) = 0;
    return std::wstring::_Reallocate_grow_by<_lambda_a3050a43f3157934f354774ab3dd2e02_,unsigned __int64,wchar_t>(
             a1,
             a2,
             a3,
             a2);
  }
  else
  {
    v5 = *((_QWORD *)a1 + 3) < 8uLL;
    v6 = v4 + a2;
    *((_QWORD *)a1 + 2) = v4 + a2;
    v7 = a1;
    if ( !v5 )
      v7 = *(wchar_t **)a1;
    wmemset(&v7[v4], 0, a2);
    result = v8;
    v7[v6] = v10;
  }
  return result;
}
