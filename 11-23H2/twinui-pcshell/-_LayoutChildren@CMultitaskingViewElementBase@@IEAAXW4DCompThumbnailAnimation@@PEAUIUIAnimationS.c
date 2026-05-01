/*
 * XREFs of ?_LayoutChildren@CMultitaskingViewElementBase@@IEAAXW4DCompThumbnailAnimation@@PEAUIUIAnimationStoryboardEventHandler2@@@Z @ 0x180576150
 * Callers:
 *     ?AddChild@CMultitaskingViewElementBase@@UEAAJPEAUIMultitaskingViewElement@@@Z @ 0x1802E3AC0 (-AddChild@CMultitaskingViewElementBase@@UEAAJPEAUIMultitaskingViewElement@@@Z.c)
 *     ?RemoveChild@CMultitaskingViewElementBase@@UEAAJPEAUIMultitaskingViewElement@@_N@Z @ 0x1802E3D60 (-RemoveChild@CMultitaskingViewElementBase@@UEAAJPEAUIMultitaskingViewElement@@_N@Z.c)
 *     ?Show@SwitchItemThumbnailElement@@UEAAXXZ @ 0x1802E5750 (-Show@SwitchItemThumbnailElement@@UEAAXXZ.c)
 *     ?SetThumbnailSourceSize@CSwitchItemElement@@UEAAXAEBUtagSIZE@@@Z @ 0x1805733D0 (-SetThumbnailSourceSize@CSwitchItemElement@@UEAAXAEBUtagSIZE@@@Z.c)
 *     ?Show@CSwitchItemElement@@UEAAXXZ @ 0x180573410 (-Show@CSwitchItemElement@@UEAAXXZ.c)
 *     ?SetPosition@CMultitaskingViewElementBase@@UEAAXAEBUCRect@Geometry@@W4DCompThumbnailAnimation@@PEAUIUIAnimationStoryboardEventHandler2@@@Z @ 0x1805759B0 (-SetPosition@CMultitaskingViewElementBase@@UEAAXAEBUCRect@Geometry@@W4DCompThumbnailAnimation@@P.c)
 *     ?EndUpdates@CSwitchItemGrid@@UEAAXXZ @ 0x180578EC0 (-EndUpdates@CSwitchItemGrid@@UEAAXXZ.c)
 *     ?ResetRowHeight@CSwitchItemGrid@@UEAAXXZ @ 0x180579F10 (-ResetRowHeight@CSwitchItemGrid@@UEAAXXZ.c)
 *     ?UpdateGridMetrics@CSwitchItemGrid@@UEAAXAEBUGridMetrics@@@Z @ 0x18057A630 (-UpdateGridMetrics@CSwitchItemGrid@@UEAAXAEBUGridMetrics@@@Z.c)
 *     ?FrameRectChanged@CVirtualDesktopContainerElement@@UEAAXAEBUtagRECT@@@Z @ 0x1805918B0 (-FrameRectChanged@CVirtualDesktopContainerElement@@UEAAXAEBUtagRECT@@@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_PointerMove@CMultitaskingViewElementBase@@IEAAXAEBVMultitaskingViewPointerInputArgs@@@Z @ 0x180576268 (-_PointerMove@CMultitaskingViewElementBase@@IEAAXAEBVMultitaskingViewPointerInputArgs@@@Z.c)
 */

void __fastcall CMultitaskingViewElementBase::_LayoutChildren(_QWORD *a1, unsigned int a2, __int64 a3)
{
  _QWORD *v5; // rdx
  __int64 v7; // rcx

  v5 = a1 + 7;
  if ( *((_DWORD *)a1 + 14) < *((_DWORD *)a1 + 16) && *((_DWORD *)a1 + 15) < *((_DWORD *)a1 + 17) )
  {
    v7 = a1[11];
    if ( v7 )
      (*(void (__fastcall **)(__int64, _QWORD *, _QWORD, __int64))(*(_QWORD *)v7 + 24LL))(v7, v5, a2, a3);
    (*(void (__fastcall **)(_QWORD *, _QWORD, __int64))(*a1 + 520LL))(a1, a2, a3);
    if ( *((_DWORD *)a1 + 24) == 1 )
      CMultitaskingViewElementBase::_PointerMove(
        (CMultitaskingViewElementBase *)a1,
        (const struct MultitaskingViewPointerInputArgs *)(a1 + 18));
  }
}
