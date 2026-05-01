/*
 * XREFs of _winrt::Windows::Internal::Shell::implementation::DashboardManager::EnsureLockWidgetCanvasRegistryPath_::_1_::dtor$8 @ 0x18023946C
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1?RegCloseKey@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x1800C4F48 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1-RegCloseKey@@Y.c)
 */

LSTATUS __fastcall winrt::Windows::Internal::Shell::implementation::DashboardManager::EnsureLockWidgetCanvasRegistryPath_::_1_::dtor_8(
        __int64 a1,
        __int64 a2)
{
  LSTATUS result; // eax

  result = *(_DWORD *)(a2 + 120) & 1;
  if ( result )
  {
    *(_DWORD *)(a2 + 120) &= ~1u;
    return wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>>((HKEY *)(a2 + 136));
  }
  return result;
}
