/*
 * XREFs of WINRT_IMPL_HeapAlloc @ 0x180189368
 * Callers:
 *     ?precreate_hstring_on_heap@impl@winrt@@YAPEAUshared_hstring_header@12@I@Z @ 0x1800F7820 (-precreate_hstring_on_heap@impl@winrt@@YAPEAUshared_hstring_header@12@I@Z.c)
 *     ?GetStoreAppPFN@CortanaExperienceHelpers@@YA?AUhstring@winrt@@XZ @ 0x18012925C (-GetStoreAppPFN@CortanaExperienceHelpers@@YA-AUhstring@winrt@@XZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
LPVOID __stdcall WINRT_IMPL_HeapAlloc(HANDLE hHeap, DWORD dwFlags, SIZE_T dwBytes)
{
  return HeapAlloc(hHeap, dwFlags, dwBytes);
}
