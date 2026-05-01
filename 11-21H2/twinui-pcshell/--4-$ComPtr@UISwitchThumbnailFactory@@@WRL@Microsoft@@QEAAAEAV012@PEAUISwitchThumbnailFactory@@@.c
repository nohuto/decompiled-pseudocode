/*
 * XREFs of ??4?$ComPtr@UISwitchThumbnailFactory@@@WRL@Microsoft@@QEAAAEAV012@PEAUISwitchThumbnailFactory@@@Z @ 0x1804B7E94
 * Callers:
 *     ?RuntimeClassInitialize@CSwitchItemElement@@QEAAJAEBUSwitchItemElementInitializeArgs@1@@Z @ 0x1802348DA (-RuntimeClassInitialize@CSwitchItemElement@@QEAAJAEBUSwitchItemElementInitializeArgs@1@@Z.c)
 *     ?RuntimeClassInitialize@CSwitchItemGrid@@QEAAJAEBUGridMetrics@@AEBUCSize@Geometry@@PEAUIElementFactory@@PEAUISwitchThumbnailFactory@@PEAUISwitchItemController@@PEAUIObservableObjectArray@@@Z @ 0x1804BF534 (-RuntimeClassInitialize@CSwitchItemGrid@@QEAAJAEBUGridMetrics@@AEBUCSize@Geometry@@PEAUIElementF.c)
 *     ?RuntimeClassInitialize@CMultitaskingViewFrameElement@@QEAAJAEBUFrameMetrics@@PEAUHWND__@@AEBVAsyncFrameEvents@@PEAUISwitchThumbnailFactory@@PEAUIMultitaskingViewElement@@44PEAUIAnimationCoordinator@@@Z @ 0x1804C30C4 (-RuntimeClassInitialize@CMultitaskingViewFrameElement@@QEAAJAEBUFrameMetrics@@PEAUHWND__@@AEBVAs.c)
 *     ?RuntimeClassInitialize@CVirtualDesktopBarElement@@QEAAJAEBUVirtualDesktopMetrics@@AEBUCRect@Geometry@@PEAUIObservableObjectArray@@PEAUIVirtualDesktopElementFactory@@PEAUISwitchThumbnailFactory@@@Z @ 0x1804C6CA0 (-RuntimeClassInitialize@CVirtualDesktopBarElement@@QEAAJAEBUVirtualDesktopMetrics@@AEBUCRect@Geo.c)
 *     ?RuntimeClassInitialize@CShrinkButtonElement@@QEAAJNPEAUISwitchThumbnailFactory@@@Z @ 0x1804C7D78 (-RuntimeClassInitialize@CShrinkButtonElement@@QEAAJNPEAUISwitchThumbnailFactory@@@Z.c)
 *     ?SetAnimationData@MultitaskingViewAnimationCoordinatorBase@@UEAAXPEAUISwitchThumbnailFactory@@PEAUIAnimatableMultitaskingViewFrame@@PEAUIDCompThumbnail@@@Z @ 0x1804CA8D0 (-SetAnimationData@MultitaskingViewAnimationCoordinatorBase@@UEAAXPEAUISwitchThumbnailFactory@@PE.c)
 *     ?RuntimeClassInitialize@CGlyphButtonElement@@QEAAJGW4GlyphButtonFlags@@AEBUGlyphButtonMetrics@@IPEAUIWeakReference@WeakReference@@PEAUIDWriteTextFormat@@PEAUISwitchThumbnailFactory@@@Z @ 0x1804CBCD4 (-RuntimeClassInitialize@CGlyphButtonElement@@QEAAJGW4GlyphButtonFlags@@AEBUGlyphButtonMetrics@@I.c)
 *     ?RuntimeClassInitialize@ElementDragData@@QEAAJPEAUISwitchThumbnailFactory@@PEAUIMultitaskingViewElement@@1PEAUIUnknown@@AEBUDragMetrics@@W4DragEffects@@@Z @ 0x1804D8508 (-RuntimeClassInitialize@ElementDragData@@QEAAJPEAUISwitchThumbnailFactory@@PEAUIMultitaskingView.c)
 *     ?RuntimeClassInitialize@CVirtualDesktopContainerElement@@QEAAJAEBUVirtualDesktopMetrics@@AEBUCRect@Geometry@@PEAUIObservableObjectArray@@PEAUIVirtualDesktopElementFactory@@PEAUISwitchThumbnailFactory@@@Z @ 0x1804DAC24 (-RuntimeClassInitialize@CVirtualDesktopContainerElement@@QEAAJAEBUVirtualDesktopMetrics@@AEBUCRe.c)
 *     ?RuntimeClassInitialize@ItemAnimationCoordinatorBase@@QEAAJPEAUISwitchThumbnailFactory@@AEBU_GUID@@@Z @ 0x1804DD388 (-RuntimeClassInitialize@ItemAnimationCoordinatorBase@@QEAAJPEAUISwitchThumbnailFactory@@AEBU_GUI.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180036EC0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ @ 0x180040860 (-InternalRelease@-$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 *__fastcall Microsoft::WRL::ComPtr<ISwitchThumbnailFactory>::operator=(__int64 *a1, __int64 a2)
{
  __int64 v5; // [rsp+30h] [rbp+8h] BYREF

  if ( *a1 != a2 )
  {
    v5 = a2;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v5);
    v5 = *a1;
    *a1 = a2;
    Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease(&v5);
  }
  return a1;
}
