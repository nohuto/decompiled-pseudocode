/*
 * XREFs of ??$convert_from_abi@UIWindowManagementEvents2@WindowManagementEvents@Shell@Internal@Windows@winrt@@@wil@@YA?AUIWindowManagementEvents2@WindowManagementEvents@Shell@Internal@Windows@winrt@@PEAUIUnknown@@@Z @ 0x18012AFEC
 * Callers:
 *     ?subscribe_to_services@TaskGroupsComponent@implementation@TaskGroups@Shell@Internal@Windows@winrt@@UEAAXPEAUIServiceProvider@@@Z @ 0x1800F7390 (-subscribe_to_services@TaskGroupsComponent@implementation@TaskGroups@Shell@Internal@Windows@winr.c)
 *     ??0SnapMigrationHandler@@QEAA@PEAUIWindowManagementEvents@@@Z @ 0x18012AEB0 (--0SnapMigrationHandler@@QEAA@PEAUIWindowManagementEvents@@@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x180392378 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

_QWORD *__fastcall wil::convert_from_abi<winrt::Windows::Internal::Shell::WindowManagementEvents::IWindowManagementEvents2>(
        _QWORD *a1,
        __int64 (__fastcall ***a2)(_QWORD, void *, _QWORD *))
{
  int v3; // eax

  *a1 = 0LL;
  v3 = (**a2)(
         a2,
         &winrt::impl::guid_v<winrt::Windows::Internal::Shell::WindowManagementEvents::IWindowManagementEvents2>,
         a1);
  if ( v3 < 0 )
    winrt::throw_hresult((unsigned int)v3);
  return a1;
}
