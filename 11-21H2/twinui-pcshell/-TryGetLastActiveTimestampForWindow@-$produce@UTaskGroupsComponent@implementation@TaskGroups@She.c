/*
 * XREFs of ?TryGetLastActiveTimestampForWindow@?$produce@UTaskGroupsComponent@implementation@TaskGroups@Shell@Internal@Windows@winrt@@UITaskGroupHost@34567@@impl@winrt@@UEAAHUstruct_Windows_Internal_ApplicationModel_WindowManagement_WindowId@23@PEA_J@Z @ 0x18058B6B0
 * Callers:
 *     <none>
 * Callees:
 *     ?TryGetLastActiveTimestampForWindow@TaskGroupsComponent@implementation@TaskGroups@Shell@Internal@Windows@winrt@@QEAA?AV?$time_point@Uclock@winrt@@V?$duration@_JU?$ratio@$00$0JIJGIA@@std@@@chrono@std@@@chrono@std@@UWindowId@WindowManagement@ApplicationModel@567@@Z @ 0x18058B71C (-TryGetLastActiveTimestampForWindow@TaskGroupsComponent@implementation@TaskGroups@Shell@Internal.c)
 */

__int64 __fastcall winrt::impl::produce<winrt::Windows::Internal::Shell::TaskGroups::implementation::TaskGroupsComponent,winrt::Windows::Internal::Shell::TaskGroups::ITaskGroupHost>::TryGetLastActiveTimestampForWindow(
        __int64 a1,
        __int64 a2,
        _QWORD *a3)
{
  __int64 result; // rax
  int v4; // [rsp+38h] [rbp+10h] BYREF

  try
  {
    *a3 = *(_QWORD *)winrt::Windows::Internal::Shell::TaskGroups::implementation::TaskGroupsComponent::TryGetLastActiveTimestampForWindow();
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)*winrt::to_hresult(&v4);
  }
  return result;
}
