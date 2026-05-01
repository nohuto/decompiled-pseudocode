/*
 * XREFs of ??1?$unique_any_t@V?$unique_storage@U?$handle_null_only_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x1803966F4
 * Callers:
 *     ?GetProcessTypeForClientOfObject@CallerIdentity@@YAJPEAUIUnknown@@PEAW4PROCESS_UICONTEXT@@@Z @ 0x1801D4F4C (-GetProcessTypeForClientOfObject@CallerIdentity@@YAJPEAUIUnknown@@PEAW4PROCESS_UICONTEXT@@@Z.c)
 *     ?UnpinTaskbarItem@PinManager@implementation@Shell@Internal@Windows@winrt@@UEAAJPEFBU_ITEMIDLIST@@W4PINNEDLISTMODIFYCALLER@@@Z @ 0x180252D90 (-UnpinTaskbarItem@PinManager@implementation@Shell@Internal@Windows@winrt@@UEAAJPEFBU_ITEMIDLIST@.c)
 *     _winrt::Windows::Internal::Shell::implementation::PinManager::UnpinTaskbarItem_::_1_::dtor$1 @ 0x180252ED8 (_winrt--Windows--Internal--Shell--implementation--PinManager--UnpinTaskbarItem_--_1_--dtor$1.c)
 *     ?UpdatePinnedTaskbarItem@PinManager@implementation@Shell@Internal@Windows@winrt@@UEAAJPEFBU_ITEMIDLIST@@0W4PINNEDLISTMODIFYCALLER@@@Z @ 0x180252F40 (-UpdatePinnedTaskbarItem@PinManager@implementation@Shell@Internal@Windows@winrt@@UEAAJPEFBU_ITEM.c)
 *     _winrt::Windows::Internal::Shell::implementation::PinManager::UpdatePinnedTaskbarItem_::_1_::dtor$1 @ 0x180253086 (_winrt--Windows--Internal--Shell--implementation--PinManager--UpdatePinnedTaskbarIt_ea_180253086.c)
 *     ?TryGetAppUserModelForProcess@CopilotHotkeyManager@@SA?AV?$optional@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@K@Z @ 0x1802738DC (-TryGetAppUserModelForProcess@CopilotHotkeyManager@@SA-AV-$optional@V-$basic_string@GU-$char_tra.c)
 *     _CopilotHotkeyManager::TryGetAppUserModelForProcess_::_1_::dtor$0 @ 0x1802739FC (_CopilotHotkeyManager--TryGetAppUserModelForProcess_--_1_--dtor$0.c)
 *     _winrt::Windows::Internal::Shell::implementation::PinManager::CheckForTrustedCaller_::_1_::dtor$1 @ 0x1802B4096 (_winrt--Windows--Internal--Shell--implementation--PinManager--CheckForTrustedCaller_--_1_--dtor$.c)
 *     _wil::GetProcessHandleForClientOfObject_::_1_::dtor$0 @ 0x1802B40A8 (_wil--GetProcessHandleForClientOfObject_--_1_--dtor$0.c)
 *     __anonymous_namespace_::DoRequestorAndForegroundPublisherMatch_::_1_::dtor$1 @ 0x1806A0F73 (__anonymous_namespace_--DoRequestorAndForegroundPublisherMatch_--_1_--dtor$1.c)
 *     _winrt::Windows::Internal::Shell::implementation::PinManager::GetPinRequestContext_::_1_::dtor$1 @ 0x1806A1D0B (_winrt--Windows--Internal--Shell--implementation--PinManager--GetPinRequestContext_--_1_--dtor$1.c)
 *     ?PinItemFromTrustedCaller@PinManager@implementation@Shell@Internal@Windows@winrt@@UEAAJPEFBU_ITEMIDLIST@@W4PINNEDLISTMODIFYCALLER@@@Z @ 0x1806A41A0 (-PinItemFromTrustedCaller@PinManager@implementation@Shell@Internal@Windows@winrt@@UEAAJPEFBU_ITE.c)
 *     _winrt::Windows::Internal::Shell::implementation::PinManager::PinItemFromTrustedCaller_::_1_::dtor$7 @ 0x1806A44F1 (_winrt--Windows--Internal--Shell--implementation--PinManager--PinItemFromTrustedCal_ea_1806A44F1.c)
 *     _winrt::Windows::Internal::Shell::implementation::PinManager::PinItemToTaskbarShim_::_1_::dtor$6 @ 0x1806A4970 (_winrt--Windows--Internal--Shell--implementation--PinManager--PinItemToTaskbarShim_--_1_--dtor$6.c)
 * Callees:
 *     <none>
 */

BOOL __fastcall wil::unique_any_t<wil::details::unique_storage<wil::details::handle_null_only_resource_policy<int (*)(void *),&int CloseHandle(void *)>>>::~unique_any_t<wil::details::unique_storage<wil::details::handle_null_only_resource_policy<int (*)(void *),&int CloseHandle(void *)>>>(
        void **a1)
{
  void *v1; // rcx
  BOOL result; // eax

  v1 = *a1;
  if ( v1 )
    return CloseHandle(v1);
  return result;
}
