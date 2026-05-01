/*
 * XREFs of WINRT_IMPL_HeapFree @ 0x1801892CC
 * Callers:
 *     ?TileId@TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@AEAAXAEBUhstring@6@@Z @ 0x180024ABC (-TileId@TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@AEAAXAEBUhstring@6@@Z.c)
 *     ?RegisterForViewExperience@CScreenClippingExperienceManager@@AEAAJXZ @ 0x1800646A8 (-RegisterForViewExperience@CScreenClippingExperienceManager@@AEAAJXZ.c)
 *     _anonymous_namespace_::GetScreenClippingAUMID @ 0x180066360 (_anonymous_namespace_--GetScreenClippingAUMID.c)
 *     _anonymous_namespace_::TryGetAUMIDFromAppExtensionCatalog @ 0x1800664B8 (_anonymous_namespace_--TryGetAUMIDFromAppExtensionCatalog.c)
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x1800F2B84 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     ?IsCortanaPackageInstalled@CortanaAvailability@@YAJPEAE@Z @ 0x1801290F4 (-IsCortanaPackageInstalled@CortanaAvailability@@YAJPEAE@Z.c)
 *     ?GetSearchAppAUMID@CUndockedMiniSearchAppExperienceManagerConfig@@UEAA?AUhstring@winrt@@XZ @ 0x180171B80 (-GetSearchAppAUMID@CUndockedMiniSearchAppExperienceManagerConfig@@UEAA-AUhstring@winrt@@XZ.c)
 *     ??4hstring@winrt@@QEAAAEAU01@QEBG@Z @ 0x18017EAE4 (--4hstring@winrt@@QEAAAEAU01@QEBG@Z.c)
 *     ?message_from_hresult@impl@winrt@@YA?AUhstring@2@Uhresult@2@@Z @ 0x1802DA030 (-message_from_hresult@impl@winrt@@YA-AUhstring@2@Uhresult@2@@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
BOOL __stdcall WINRT_IMPL_HeapFree(HANDLE hHeap, DWORD dwFlags, LPVOID lpMem)
{
  return HeapFree(hHeap, dwFlags, lpMem);
}
