/*
 * XREFs of ?RuntimeClassInitialize@ItemAnimationCoordinatorBase@@QEAAJPEAUISwitchThumbnailFactory@@AEBU_GUID@@@Z @ 0x180595168
 * Callers:
 *     ??$MakeAndInitialize@VSwitchItemCloseAnimationCoordinator@@V1@AEAPEAUISwitchThumbnailFactory@@AEBU_GUID@@@Details@WRL@Microsoft@@YAJPEAPEAVSwitchItemCloseAnimationCoordinator@@AEAPEAUISwitchThumbnailFactory@@AEBU_GUID@@@Z @ 0x18058A794 (--$MakeAndInitialize@VSwitchItemCloseAnimationCoordinator@@V1@AEAPEAUISwitchThumbnailFactory@@AE.c)
 *     ??$MakeAndInitialize@VVirtualDesktopAddAnimationCoordinator@@V1@AEAHAEAPEAUISwitchThumbnailFactory@@@Details@WRL@Microsoft@@YAJPEAPEAVVirtualDesktopAddAnimationCoordinator@@AEAHAEAPEAUISwitchThumbnailFactory@@@Z @ 0x180595F38 (--$MakeAndInitialize@VVirtualDesktopAddAnimationCoordinator@@V1@AEAHAEAPEAUISwitchThumbnailFacto.c)
 *     ?RuntimeClassInitialize@VirtualDesktopRemoveAnimationCoordinator@@QEAAJAEBUVirtualDesktopMetrics@@HPEAUISwitchThumbnailFactory@@@Z @ 0x180596EA8 (-RuntimeClassInitialize@VirtualDesktopRemoveAnimationCoordinator@@QEAAJAEBUVirtualDesktopMetrics.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18001DEB0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??4?$ComPtr@UISwitchThumbnailFactory@@@WRL@Microsoft@@QEAAAEAV012@PEAUISwitchThumbnailFactory@@@Z @ 0x180572A0C (--4-$ComPtr@UISwitchThumbnailFactory@@@WRL@Microsoft@@QEAAAEAV012@PEAUISwitchThumbnailFactory@@@.c)
 *     ?BeginBatch@CDCompFactoryBatcher@DCompThumbnailHelpers@@QEAAXAEBV?$ComPtr@UIDCompBatcher@@@WRL@Microsoft@@AEBU_GUID@@PEAUIDCompBatchAnimationCallback@@@Z @ 0x18059442C (-BeginBatch@CDCompFactoryBatcher@DCompThumbnailHelpers@@QEAAXAEBV-$ComPtr@UIDCompBatcher@@@WRL@M.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ItemAnimationCoordinatorBase::RuntimeClassInitialize(
        ItemAnimationCoordinatorBase *this,
        struct ISwitchThumbnailFactory *a2,
        const struct _GUID *a3)
{
  __int64 v6; // [rsp+30h] [rbp+8h] BYREF

  Microsoft::WRL::ComPtr<ISwitchThumbnailFactory>::operator=((__int64 *)this + 2, (__int64)a2);
  v6 = *((_QWORD *)this + 2);
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v6);
  DCompThumbnailHelpers::CDCompFactoryBatcher::BeginBatch((__int64 *)this + 27, &v6, (__int64)a3);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v6);
  return 0LL;
}
