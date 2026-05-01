/*
 * XREFs of ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUHINSTANCE__@@P6AHPEAU1@@Z$1?FreeLibrary@@YAH0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x1803F9668
 * Callers:
 *     _winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlExplorerHostChildWindow_WASDK::XamlExplorerHostChildWindow_WASDK_::_1_::dtor$5 @ 0x1802BF553 (_winrt--Windows--Internal--Shell--XamlExplorerHost--implementation--XamlExplorerHos_ea_1802BF553.c)
 *     _CVirtualTouchpadExperienceManager::CVirtualTouchpadExperienceManager_::_1_::dtor$10 @ 0x1802C2535 (_CVirtualTouchpadExperienceManager--CVirtualTouchpadExperienceManager_--_1_--dtor$10.c)
 *     _GamingOverlayExperienceManager::GamingOverlayExperienceManager_::_1_::dtor$4 @ 0x1802C4F7D (_GamingOverlayExperienceManager--GamingOverlayExperienceManager_--_1_--dtor$4.c)
 *     ??1GamingOverlayExperienceManager@@EEAA@XZ @ 0x1803F98A8 (--1GamingOverlayExperienceManager@@EEAA@XZ.c)
 *     _winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlExplorerHostChildWindow_WASDK::XamlExplorerHostChildWindow_WASDK_::_1_::dtor$5_0 @ 0x1804F88D8 (_winrt--Windows--Internal--Shell--XamlExplorerHost--implementation--XamlExplorerHos_ea_1804F88D8.c)
 *     __anonymous_namespace_::GetFriendlyNameForTaskbarSpecialCases_::_1_::dtor$0 @ 0x1805486E5 (__anonymous_namespace_--GetFriendlyNameForTaskbarSpecialCases_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

BOOL __fastcall wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<HINSTANCE__ *,int (*)(HINSTANCE__ *),&int FreeLibrary(HINSTANCE__ *),wistd::integral_constant<unsigned __int64,0>,HINSTANCE__ *,HINSTANCE__ *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<HINSTANCE__ *,int (*)(HINSTANCE__ *),&int FreeLibrary(HINSTANCE__ *),wistd::integral_constant<unsigned __int64,0>,HINSTANCE__ *,HINSTANCE__ *,0,std::nullptr_t>>>(
        HMODULE *a1)
{
  HMODULE v1; // rcx
  BOOL result; // eax

  v1 = *a1;
  if ( v1 )
    return FreeLibrary(v1);
  return result;
}
