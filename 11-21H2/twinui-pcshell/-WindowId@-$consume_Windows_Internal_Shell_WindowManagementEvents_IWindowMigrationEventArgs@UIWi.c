/*
 * XREFs of ?WindowId@?$consume_Windows_Internal_Shell_WindowManagementEvents_IWindowMigrationEventArgs@UIWindowMigrationEventArgs@WindowManagementEvents@Shell@Internal@Windows@winrt@@@impl@winrt@@QEBA_KXZ @ 0x18058BAD4
 * Callers:
 *     ?OnWindowMigrationEvent@TaskGroupsComponent@implementation@TaskGroups@Shell@Internal@Windows@winrt@@AEAAXAEBUIWindowManagementEvents2@WindowManagementEvents@4567@AEBUWindowMigrationEventArgs@94567@@Z @ 0x18058B150 (-OnWindowMigrationEvent@TaskGroupsComponent@implementation@TaskGroups@Shell@Internal@Windows@win.c)
 *     ?OnWindowMigrationEvent@SnapMigrationHandler@@AEAAXAEBUIWindowManagementEvents2@WindowManagementEvents@Shell@Internal@Windows@winrt@@AEBUWindowMigrationEventArgs@34567@@Z @ 0x1805A8590 (-OnWindowMigrationEvent@SnapMigrationHandler@@AEAAXAEBUIWindowManagementEvents2@WindowManagement.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x18033DA10 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

__int64 __fastcall winrt::impl::consume_Windows_Internal_Shell_WindowManagementEvents_IWindowMigrationEventArgs<winrt::Windows::Internal::Shell::WindowManagementEvents::IWindowMigrationEventArgs>::WindowId(
        __int64 *a1)
{
  __int64 v1; // rcx
  signed int v2; // eax
  __int64 v4; // [rsp+30h] [rbp+8h] BYREF

  v1 = *a1;
  v4 = 0LL;
  v2 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v1 + 48LL))(v1, &v4);
  if ( v2 < 0 )
    winrt::throw_hresult(v2);
  return v4;
}
