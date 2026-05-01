/*
 * XREFs of ??$convert_from_abi@UTaskGroupDataModel@TaskGroups@Shell@Internal@Windows@winrt@@@wil@@YA?AUTaskGroupDataModel@TaskGroups@Shell@Internal@Windows@winrt@@PEAUIUnknown@@@Z @ 0x18007813C
 * Callers:
 *     ?TryGetTaskGroupsDataModel@@YA?AUTaskGroupDataModel@TaskGroups@Shell@Internal@Windows@winrt@@PEAUIAppViewDataSourceAdapter@@@Z @ 0x1800780CC (-TryGetTaskGroupsDataModel@@YA-AUTaskGroupDataModel@TaskGroups@Shell@Internal@Windows@winrt@@PEA.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x180392378 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall wil::convert_from_abi<winrt::Windows::Internal::Shell::TaskGroups::TaskGroupDataModel>(
        _QWORD *a1,
        __int64 (__fastcall ***a2)(_QWORD, void *, _QWORD *))
{
  int v3; // eax

  *a1 = 0LL;
  v3 = (**a2)(a2, &winrt::impl::guid_v<winrt::Windows::Internal::Shell::TaskGroups::ITaskGroupDataModel>, a1);
  if ( v3 < 0 )
    winrt::throw_hresult((unsigned int)v3);
  return a1;
}
