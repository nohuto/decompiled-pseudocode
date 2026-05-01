/*
 * XREFs of ??$_Reallocate_grow_by@V_lambda_1dfe18491bcca09701d8ccb01d0b0af4_@@PEB_W_K@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@AEAAAEAV01@_KV_lambda_1dfe18491bcca09701d8ccb01d0b0af4_@@PEB_W_K@Z @ 0x180421A6C
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
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180087484 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Get_size_of_n@$01@std@@YA_K_K@Z @ 0x18008964C (--$_Get_size_of_n@$01@std@@YA_K_K@Z.c)
 *     ?_Calculate_growth@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@AEBA_K_K@Z @ 0x180089678 (-_Calculate_growth@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@AEBA_K_K@Z.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18013E4BC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     memcpy_0 @ 0x1801EACEF (memcpy_0.c)
 *     ?_Xlen_string@std@@YAXXZ @ 0x1802EBAEC (-_Xlen_string@std@@YAXXZ.c)
 */

void **__fastcall std::wstring::_Reallocate_grow_by<_lambda_1dfe18491bcca09701d8ccb01d0b0af4_,wchar_t const *,unsigned __int64>(
        void **Src,
        unsigned __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5)
{
  void *v5; // r15
  unsigned __int64 v7; // r12
  char *v8; // rdi
  unsigned __int64 v9; // rbx
  size_t size_of; // rax
  char *v11; // rax
  size_t v12; // r8
  __int64 v13; // r15
  char *v14; // r14
  char *v15; // rbp
  size_t v16; // rdi
  void *v17; // rbx

  v5 = Src[2];
  if ( 0x7FFFFFFFFFFFFFFELL - (__int64)v5 < a2 )
    std::_Xlen_string();
  v7 = (unsigned __int64)Src[3];
  v8 = (char *)v5 + a2;
  v9 = std::wstring::_Calculate_growth((__int64)Src, (__int64)v5 + a2);
  size_of = std::_Get_size_of_n<2>(v9 + 1);
  v11 = (char *)std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  v12 = 2LL * (_QWORD)v5;
  v13 = (__int64)v5 + a5;
  Src[2] = v8;
  Src[3] = (void *)v9;
  v14 = v11;
  v15 = &v11[v12];
  v16 = 2 * a5;
  if ( v7 < 8 )
  {
    memcpy_0(v11, Src, v12);
    memcpy_0(v15, L".dll", v16);
    *(_WORD *)&v14[2 * v13] = 0;
  }
  else
  {
    v17 = *Src;
    memcpy_0(v11, *Src, v12);
    memcpy_0(v15, L".dll", v16);
    *(_WORD *)&v14[2 * v13] = 0;
    std::_Deallocate<16,0>(v17, 2 * v7 + 2);
  }
  *Src = v14;
  return Src;
}
