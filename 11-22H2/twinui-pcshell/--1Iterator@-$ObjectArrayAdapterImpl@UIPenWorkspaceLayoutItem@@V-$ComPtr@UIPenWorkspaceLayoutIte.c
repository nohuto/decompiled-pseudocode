/*
 * XREFs of ??1Iterator@?$ObjectArrayAdapterImpl@UIPenWorkspaceLayoutItem@@V?$ComPtr@UIPenWorkspaceLayoutItem@@@WRL@Microsoft@@@details@@QEAA@XZ @ 0x1804904A8
 * Callers:
 *     _PenWorkspace::Discover::RecentAppsCache::LoadOEMApps_::_1_::dtor$3 @ 0x1804916A4 (_PenWorkspace--Discover--RecentAppsCache--LoadOEMApps_--_1_--dtor$3.c)
 *     _PenWorkspace::Discover::RecentAppsCache::LoadOEMApps_::_1_::dtor$4 @ 0x1804916B0 (_PenWorkspace--Discover--RecentAppsCache--LoadOEMApps_--_1_--dtor$4.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall details::ObjectArrayAdapterImpl<IPenWorkspaceLayoutItem,Microsoft::WRL::ComPtr<IPenWorkspaceLayoutItem>>::Iterator::~Iterator(
        __int64 a1)
{
  return Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease((__int64 *)(a1 + 8));
}
