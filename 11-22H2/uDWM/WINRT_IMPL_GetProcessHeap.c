/*
 * XREFs of WINRT_IMPL_GetProcessHeap @ 0x18005D4D2
 * Callers:
 *     ?precreate_hstring_on_heap@impl@winrt@@YAPEAUshared_hstring_header@12@I@Z @ 0x180016B64 (-precreate_hstring_on_heap@impl@winrt@@YAPEAUshared_hstring_header@12@I@Z.c)
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x18005BE70 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     ?close@?$handle_type@Uheap_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x18009E310 (-close@-$handle_type@Uheap_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
HANDLE __stdcall WINRT_IMPL_GetProcessHeap()
{
  return GetProcessHeap();
}
