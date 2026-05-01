/*
 * XREFs of ?IsWindowInTaskGroup@TaskGroupsComponent@implementation@TaskGroups@Shell@Internal@Windows@winrt@@AEAA_NUWindowId@WindowManagement@ApplicationModel@567@AEBUTaskGroup@34567@@Z @ 0x18058A4B8
 * Callers:
 *     ?IsWindowValidForGroupInclusion@TaskGroupsComponent@implementation@TaskGroups@Shell@Internal@Windows@winrt@@QEAA_NUWindowId@WindowManagement@ApplicationModel@567@AEBUTaskGroup@34567@@Z @ 0x18058A588 (-IsWindowValidForGroupInclusion@TaskGroupsComponent@implementation@TaskGroups@Shell@Internal@Win.c)
 * Callees:
 *     CoTaskMemFree_0 @ 0x180189A5F (CoTaskMemFree_0.c)
 *     ?Windows@?$consume_Windows_Internal_Shell_TaskGroups_ITaskGroup@UITaskGroup@TaskGroups@Shell@Internal@Windows@winrt@@@impl@winrt@@QEBA?AU?$com_array@UWindowId@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@3@XZ @ 0x18058BB1C (-Windows@-$consume_Windows_Internal_Shell_TaskGroups_ITaskGroup@UITaskGroup@TaskGroups@Shell@Int.c)
 */

char __fastcall winrt::Windows::Internal::Shell::TaskGroups::implementation::TaskGroupsComponent::IsWindowInTaskGroup(
        __int64 a1,
        int a2,
        __int64 a3)
{
  _DWORD *v4; // rdx
  char *v5; // r8
  LPVOID pv; // [rsp+20h] [rbp-18h] BYREF
  unsigned int v8; // [rsp+28h] [rbp-10h]

  winrt::impl::consume_Windows_Internal_Shell_TaskGroups_ITaskGroup<winrt::Windows::Internal::Shell::TaskGroups::ITaskGroup>::Windows(
    a3,
    &pv);
  v4 = pv;
  v5 = (char *)pv + 4 * v8;
  if ( pv == v5 )
  {
LABEL_4:
    if ( pv )
      CoTaskMemFree_0(pv);
    return 0;
  }
  else
  {
    while ( *v4 != a2 )
    {
      if ( ++v4 == (_DWORD *)v5 )
        goto LABEL_4;
    }
    if ( pv )
      CoTaskMemFree_0(pv);
    return 1;
  }
}
