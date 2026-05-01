/*
 * XREFs of ??$As@UIScrollViewer@@@?$ComPtr@UIMultitaskingViewElement@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIScrollViewer@@@WRL@Microsoft@@@Details@12@@Z @ 0x1805782A8
 * Callers:
 *     ?SetChildFocus@CSwitchItemGrid@@UEAAXPEAUIMultitaskingViewElement@@@Z @ 0x18057A1D0 (-SetChildFocus@CSwitchItemGrid@@UEAAXPEAUIMultitaskingViewElement@@@Z.c)
 *     ?v_LayoutChildren@CSwitchItemGrid@@MEAAXXZ @ 0x18057AA90 (-v_LayoutChildren@CSwitchItemGrid@@MEAAXXZ.c)
 *     ?RuntimeClassInitialize@CScrollViewerHost@@QEAAJW4ScrollViewerHostFlags@@AEBUScrollViewerHostMetrics@@AEBU_MARGINS@@AEBURelativeMargins@@IPEAUIMultitaskingViewElement@@PEAUISwitchThumbnailFactory@@@Z @ 0x18057B520 (-RuntimeClassInitialize@CScrollViewerHost@@QEAAJW4ScrollViewerHostFlags@@AEBUScrollViewerHostMet.c)
 *     ?_GetParentScrollViewer@AccessibleElementBase@@IEAAJPEAPEAUIScrollViewer@@@Z @ 0x1805853A8 (-_GetParentScrollViewer@AccessibleElementBase@@IEAAJPEAPEAUIScrollViewer@@@Z.c)
 *     ?ScrollCurrentDesktopIntoView@CVirtualDesktopContainerElement@@UEAAXXZ @ 0x180592C70 (-ScrollCurrentDesktopIntoView@CVirtualDesktopContainerElement@@UEAAXXZ.c)
 *     ?ScrollIntoView@CVirtualDesktopContainerElement@@UEAAXPEAUIMultitaskingViewElement@@@Z @ 0x180592D90 (-ScrollIntoView@CVirtualDesktopContainerElement@@UEAAXPEAUIMultitaskingViewElement@@@Z.c)
 *     ?v_LayoutChildren@CVirtualDesktopContainerElement@@MEAAXXZ @ 0x180593060 (-v_LayoutChildren@CVirtualDesktopContainerElement@@MEAAXXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<IMultitaskingViewElement>::As<IScrollViewer>(
        __int64 (__fastcall ****a1)(_QWORD, GUID *, __int64 *),
        __int64 *a2)
{
  __int64 (__fastcall ***v3)(_QWORD, GUID *, __int64 *); // rsi
  __int64 (__fastcall *v4)(_QWORD, GUID *, __int64 *); // rdi

  v3 = *a1;
  v4 = ***a1;
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(a2);
  return v4(v3, &GUID_2ee57b14_e8de_441b_ba80_94bbf2ee0423, a2);
}
