/*
 * XREFs of ??1?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@VApplicationViewCollectionBase@@UIApplicationViewChangeListener@@UIApplicationViewVisibilityDebouncedNotificationService@@VFtmBase@23@@WRL@Microsoft@@UEAA@XZ @ 0x180688E84
 * Callers:
 *     _ApplicationViewFilteredCollection::ApplicationViewFilteredCollection_::_1_::dtor$0 @ 0x180688E10 (_ApplicationViewFilteredCollection--ApplicationViewFilteredCollection_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,ApplicationViewCollectionBase,IApplicationViewChangeListener,IApplicationViewVisibilityDebouncedNotificationService,Microsoft::WRL::FtmBase>::~RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,ApplicationViewCollectionBase,IApplicationViewChangeListener,IApplicationViewVisibilityDebouncedNotificationService,Microsoft::WRL::FtmBase>(
        __int64 a1)
{
  *(_DWORD *)(a1 + 68) = -1073741823;
  return Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)(a1 + 56));
}
