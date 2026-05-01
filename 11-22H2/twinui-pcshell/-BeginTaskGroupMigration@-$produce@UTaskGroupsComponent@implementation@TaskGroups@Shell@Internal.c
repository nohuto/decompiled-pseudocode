/*
 * XREFs of ?BeginTaskGroupMigration@?$produce@UTaskGroupsComponent@implementation@TaskGroups@Shell@Internal@Windows@winrt@@UITaskGroupsComponent@DesktopTaskGroups@4567@@impl@winrt@@UEAAHPEAX@Z @ 0x1806472B0
 * Callers:
 *     <none>
 * Callees:
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800D5AF0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ?add_ref@IUnknown@Foundation@Windows@winrt@@AEBAXXZ @ 0x180176DC4 (-add_ref@IUnknown@Foundation@Windows@winrt@@AEBAXXZ.c)
 *     ?BeginTaskGroupMigration@?$consume_Windows_Internal_Shell_TaskGroups_ITaskGroupManager@UITaskGroupManager@TaskGroups@Shell@Internal@Windows@winrt@@@impl@winrt@@QEBA@AEBUTaskGroup@TaskGroups@Shell@Internal@Windows@3@@Z @ 0x180647274 (-BeginTaskGroupMigration@-$consume_Windows_Internal_Shell_TaskGroups_ITaskGroupManager@UITaskGro.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall winrt::impl::produce<winrt::Windows::Internal::Shell::TaskGroups::implementation::TaskGroupsComponent,winrt::Windows::Internal::Shell::DesktopTaskGroups::ITaskGroupsComponent>::BeginTaskGroupMigration(
        __int64 a1,
        __int64 a2)
{
  __int64 v3; // rcx
  __int64 result; // rax
  __int64 v5; // [rsp+30h] [rbp+8h] BYREF
  __int64 *v6; // [rsp+38h] [rbp+10h]

  v5 = a2;
  winrt::Windows::Foundation::IUnknown::add_ref((winrt::Windows::Foundation::IUnknown *)&v5);
  v6 = &v5;
  v3 = a1 + 432;
  if ( !a1 )
    v3 = 464LL;
  try
  {
    winrt::impl::consume_Windows_Internal_Shell_TaskGroups_ITaskGroupManager<winrt::Windows::Internal::Shell::TaskGroups::ITaskGroupManager>::BeginTaskGroupMigration(
      (_QWORD *)v3,
      &v5);
    if ( v5 )
      winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v5);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)*winrt::to_hresult(&v5);
  }
  return result;
}
