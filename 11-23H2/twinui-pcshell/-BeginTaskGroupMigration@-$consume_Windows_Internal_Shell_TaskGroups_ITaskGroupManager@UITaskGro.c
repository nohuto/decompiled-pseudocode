/*
 * XREFs of ?BeginTaskGroupMigration@?$consume_Windows_Internal_Shell_TaskGroups_ITaskGroupManager@UITaskGroupManager@TaskGroups@Shell@Internal@Windows@winrt@@@impl@winrt@@QEBA@AEBUTaskGroup@TaskGroups@Shell@Internal@Windows@3@@Z @ 0x180647274
 * Callers:
 *     ?BeginTaskGroupMigration@?$produce@UTaskGroupsComponent@implementation@TaskGroups@Shell@Internal@Windows@winrt@@UITaskGroupsComponent@DesktopTaskGroups@4567@@impl@winrt@@UEAAHPEAX@Z @ 0x1806472B0 (-BeginTaskGroupMigration@-$produce@UTaskGroupsComponent@implementation@TaskGroups@Shell@Internal.c)
 *     ?OnWindowMigrationEvent@TaskGroupsComponent@implementation@TaskGroups@Shell@Internal@Windows@winrt@@AEAAXAEBUIWindowManagementEvents2@WindowManagementEvents@4567@AEBUWindowMigrationEventArgs@94567@@Z @ 0x180649550 (-OnWindowMigrationEvent@TaskGroupsComponent@implementation@TaskGroups@Shell@Internal@Windows@win.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x180392378 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

__int64 __fastcall winrt::impl::consume_Windows_Internal_Shell_TaskGroups_ITaskGroupManager<winrt::Windows::Internal::Shell::TaskGroups::ITaskGroupManager>::BeginTaskGroupMigration(
        _QWORD *a1,
        _QWORD *a2)
{
  __int64 result; // rax

  result = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)*a1 + 48LL))(*a1, *a2);
  if ( (int)result < 0 )
    winrt::throw_hresult(result);
  return result;
}
