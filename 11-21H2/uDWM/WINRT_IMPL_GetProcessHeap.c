/*
 * XREFs of WINRT_IMPL_GetProcessHeap @ 0x1800610D2
 * Callers:
 *     ?precreate_hstring_on_heap@impl@winrt@@YAPEAUshared_hstring_header@12@I@Z @ 0x180041EBC (-precreate_hstring_on_heap@impl@winrt@@YAPEAUshared_hstring_header@12@I@Z.c)
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x18005FA60 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     ?message_from_hresult@impl@winrt@@YA?AUhstring@2@Uhresult@2@@Z @ 0x18009693C (-message_from_hresult@impl@winrt@@YA-AUhstring@2@Uhresult@2@@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
HANDLE __stdcall WINRT_IMPL_GetProcessHeap()
{
  return GetProcessHeap();
}
