/*
 * XREFs of ??1?$out_param_t@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1?RegCloseKey@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@@details@wil@@QEAA@XZ @ 0x18050C18C
 * Callers:
 *     _anonymous_namespace_::IsInternalDevUnlocked @ 0x18023F27C (_anonymous_namespace_--IsInternalDevUnlocked.c)
 *     ?CopyCorrelationIdForBootUserSession@Utils@implementation@Shell@Internal@Windows@winrt@@SAXXZ @ 0x1802774F4 (-CopyCorrelationIdForBootUserSession@Utils@implementation@Shell@Internal@Windows@winrt@@SAXXZ.c)
 *     _winrt::Windows::Internal::Shell::implementation::Utils::CopyCorrelationIdForBootUserSession_::_1_::dtor$1 @ 0x1802776AB (_winrt--Windows--Internal--Shell--implementation--Utils--CopyCorrelationIdForBootUs_ea_1802776AB.c)
 *     _winrt::Windows::Internal::Shell::DragDropSimulator::implementation::DragDropSimulatorComponent::GetDragDropExtensionClsId_::_1_::dtor$1 @ 0x18062B06D (_winrt--Windows--Internal--Shell--DragDropSimulator--implementation--DragDropSimula_ea_18062B06D.c)
 *     _winrt::Windows::Internal::Shell::implementation::Utils::CreateCorrelationIdForSwitch_::_1_::dtor$2 @ 0x18070FE63 (_winrt--Windows--Internal--Shell--implementation--Utils--CreateCorrelationIdForSwit_ea_18070FE63.c)
 *     _winrt::Windows::Internal::Shell::factory_implementation::RemoteSystemDataModel::SetIsImmersiveRemoteSession_::_1_::dtor$4 @ 0x180718BB1 (_winrt--Windows--Internal--Shell--factory_implementation--RemoteSystemDataModel--Se_ea_180718BB1.c)
 * Callees:
 *     ?reset@?$unique_storage@U?$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1?RegCloseKey@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAUHKEY__@@@Z @ 0x1800C4F00 (-reset@-$unique_storage@U-$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1-RegCloseKey@@YAJ0@ZU-$inte.c)
 */

void __fastcall wil::details::out_param_t<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>>>::~out_param_t<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>>>(
        __int64 a1)
{
  if ( *(_BYTE *)(a1 + 16) )
    wil::details::unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>::reset(
      *(HKEY **)a1,
      *(HKEY *)(a1 + 8));
}
