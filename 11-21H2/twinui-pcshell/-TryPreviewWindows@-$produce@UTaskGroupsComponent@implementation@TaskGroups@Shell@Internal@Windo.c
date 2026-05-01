/*
 * XREFs of ?TryPreviewWindows@?$produce@UTaskGroupsComponent@implementation@TaskGroups@Shell@Internal@Windows@winrt@@UITaskGroupHost@34567@@impl@winrt@@UEAAHIPEAUstruct_Windows_Internal_ApplicationModel_WindowManagement_WindowId@23@HIPEA_N@Z @ 0x18058B900
 * Callers:
 *     <none>
 * Callees:
 *     ?TryPreviewWindows@TaskGroupsComponent@implementation@TaskGroups@Shell@Internal@Windows@winrt@@QEAA_NU?$array_view@$$CBUWindowId@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@7@W4PreviewOption@34567@I@Z @ 0x18058B974 (-TryPreviewWindows@TaskGroupsComponent@implementation@TaskGroups@Shell@Internal@Windows@winrt@@Q.c)
 */

__int64 __fastcall winrt::impl::produce<winrt::Windows::Internal::Shell::TaskGroups::implementation::TaskGroupsComponent,winrt::Windows::Internal::Shell::TaskGroups::ITaskGroupHost>::TryPreviewWindows(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        _BYTE *a6)
{
  __int64 result; // rax
  int v7; // [rsp+48h] [rbp+10h] BYREF

  try
  {
    *a6 = winrt::Windows::Internal::Shell::TaskGroups::implementation::TaskGroupsComponent::TryPreviewWindows();
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)*winrt::to_hresult(&v7);
  }
  return result;
}
