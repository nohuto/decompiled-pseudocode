/*
 * XREFs of ?GetTaskGroupProvider@?$consume_Windows_Internal_Shell_TaskGroups_ITaskGroupProviderStatics@UITaskGroupProviderStatics@TaskGroups@Shell@Internal@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x1801B2338
 * Callers:
 *     ?InitializeTaskGroupItems@AppViewDataSourceAdapter@@AEAAXXZ @ 0x18007A7A4 (-InitializeTaskGroupItems@AppViewDataSourceAdapter@@AEAAXXZ.c)
 *     ??0TaskGroupsComponent@implementation@TaskGroups@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x180089F50 (--0TaskGroupsComponent@implementation@TaskGroups@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?_lambda_invoker_cdecl_@_lambda_34d03d9a202a7fc782dd640c0005da4a_@@CA@AEBUITaskGroupProviderStatics@TaskGroups@Shell@Internal@Windows@winrt@@@Z @ 0x1801B2310 (-_lambda_invoker_cdecl_@_lambda_34d03d9a202a7fc782dd640c0005da4a_@@CA@AEBUITaskGroupProviderStat.c)
 *     ?InitializeTaskGroupController@VirtualDesktopController@@AEAAXXZ @ 0x180541EA8 (-InitializeTaskGroupController@VirtualDesktopController@@AEAAXXZ.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x180392378 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

_QWORD *__fastcall winrt::impl::consume_Windows_Internal_Shell_TaskGroups_ITaskGroupProviderStatics<winrt::Windows::Internal::Shell::TaskGroups::ITaskGroupProviderStatics>::GetTaskGroupProvider(
        __int64 *a1,
        _QWORD *a2)
{
  __int64 v2; // rcx
  int v4; // eax
  __int64 v6; // [rsp+40h] [rbp+8h] BYREF

  v2 = *a1;
  v6 = 0LL;
  v4 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v2 + 48LL))(v2, &v6);
  if ( v4 < 0 )
    winrt::throw_hresult((unsigned int)v4);
  *a2 = v6;
  return a2;
}
