/*
 * XREFs of ??4?$ComPtr@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@WRL@Microsoft@@QEAAAEAV012@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x18006A230
 * Callers:
 *     ?RuntimeClassInitialize@CTaskWindow@@QEAAJQEBUTASKWINDOW_INIT_DATA@@@Z @ 0x18003A97C (-RuntimeClassInitialize@CTaskWindow@@QEAAJQEBUTASKWINDOW_INIT_DATA@@@Z.c)
 *     ?RuntimeClassInitialize@ViewEventArgsForShowAsStandalone@@QEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@0W4ViewSizePreference@ViewManagement@UI@6@1_KPEAUIAsyncCallback@@PEAUIPropertySet@Collections@Foundation@6@PEAUIWindowingEnvironmentSettings@3456@@Z @ 0x180059A48 (-RuntimeClassInitialize@ViewEventArgsForShowAsStandalone@@QEAAJPEAUIViewWrapper@ViewManagerInter.c)
 *     ?RuntimeClassInitialize@CTaskWindow@@QEAAJPEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@W4TASK_WINDOW_TYPE@@PEAUIImmersiveApplicationInternal@@PEBUtagRECT@@PEBUAPPLICATION_VIEW_DATA@@@Z @ 0x18006A330 (-RuntimeClassInitialize@CTaskWindow@@QEAAJPEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop@Shell@.c)
 *     ?OnViewCreatedViewEvent@GamingOverlayExperienceManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUIViewEventArgs@3456@@Z @ 0x180335CC0 (-OnViewCreatedViewEvent@GamingOverlayExperienceManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop.c)
 *     ?OnViewCreated@MiniSearchExperienceManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x1803A27C8 (-OnViewCreated@MiniSearchExperienceManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Inter.c)
 *     ?RuntimeClassInitialize@ViewEventArgsForShowAsViewMode@@QEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@0W4ApplicationViewMode@ViewManagement@UI@6@W4ExperienceKind@WindowManagement@ApplicationModel@56@W4ViewSizePreference@896@3USize@Foundation@6@W4ViewGrouping@896@PEAUIAsyncCallback@@PEAUIWindowingEnvironmentSettings@3456@@Z @ 0x1803E63F8 (-RuntimeClassInitialize@ViewEventArgsForShowAsViewMode@@QEAAJPEAUIViewWrapper@ViewManagerInterop.c)
 *     ?RuntimeClassInitialize@ViewEventArgsForSwitch@@QEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@0W4ApplicationViewSwitchingOptions@ViewManagement@UI@6@PEAUIAsyncCallback@@@Z @ 0x1803E64BC (-RuntimeClassInitialize@ViewEventArgsForSwitch@@QEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@I.c)
 *     ??0KBViewInfo@@QEAA@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x18045A968 (--0KBViewInfo@@QEAA@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180036EC0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 */

__int64 *__fastcall Microsoft::WRL::ComPtr<Windows::Internal::Shell::ViewManagerInterop::IViewWrapper>::operator=(
        __int64 *a1,
        __int64 a2)
{
  __int64 v5; // [rsp+30h] [rbp+8h] BYREF

  if ( *a1 != a2 )
  {
    v5 = a2;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v5);
    v5 = *a1;
    *a1 = a2;
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v5);
  }
  return a1;
}
