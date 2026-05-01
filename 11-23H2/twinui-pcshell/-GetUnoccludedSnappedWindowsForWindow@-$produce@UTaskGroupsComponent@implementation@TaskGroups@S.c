/*
 * XREFs of ?GetUnoccludedSnappedWindowsForWindow@?$produce@UTaskGroupsComponent@implementation@TaskGroups@Shell@Internal@Windows@winrt@@UITaskGroupHost@34567@@impl@winrt@@UEAAHUstruct_Windows_Internal_ApplicationModel_WindowManagement_WindowId@23@IPEAIPEAPEAU423@@Z @ 0x180647AF0
 * Callers:
 *     <none>
 * Callees:
 *     CoTaskMemFree_0 @ 0x1801C7A7D (CoTaskMemFree_0.c)
 *     ?GetUnoccludedSnappedWindowsForWindow@TaskGroupsComponent@implementation@TaskGroups@Shell@Internal@Windows@winrt@@QEAA?AU?$com_array@UWindowId@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@7@UWindowId@WindowManagement@ApplicationModel@567@W4UnoccludedWindowsOptions@34567@@Z @ 0x180647B8C (-GetUnoccludedSnappedWindowsForWindow@TaskGroupsComponent@implementation@TaskGroups@Shell@Intern.c)
 */

__int64 __fastcall winrt::impl::produce<winrt::Windows::Internal::Shell::TaskGroups::implementation::TaskGroupsComponent,winrt::Windows::Internal::Shell::TaskGroups::ITaskGroupHost>::GetUnoccludedSnappedWindowsForWindow(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        _DWORD *a4,
        _QWORD *a5)
{
  _QWORD *v6; // rdi
  __int64 UnoccludedSnappedWindowsForWindow; // rax
  int v8; // ecx
  __int64 v9; // rdx
  __int64 result; // rax
  void *pv; // [rsp+20h] [rbp-18h]
  int v12; // [rsp+48h] [rbp+10h] BYREF

  v6 = a5;
  *a5 = 0LL;
  try
  {
    UnoccludedSnappedWindowsForWindow = winrt::Windows::Internal::Shell::TaskGroups::implementation::TaskGroupsComponent::GetUnoccludedSnappedWindowsForWindow();
    v8 = *(_DWORD *)(UnoccludedSnappedWindowsForWindow + 8);
    v9 = *(_QWORD *)UnoccludedSnappedWindowsForWindow;
    *(_OWORD *)UnoccludedSnappedWindowsForWindow = 0LL;
    *a4 = v8;
    *v6 = v9;
    if ( pv )
      CoTaskMemFree_0(pv);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)*winrt::to_hresult(&v12);
  }
  return result;
}
