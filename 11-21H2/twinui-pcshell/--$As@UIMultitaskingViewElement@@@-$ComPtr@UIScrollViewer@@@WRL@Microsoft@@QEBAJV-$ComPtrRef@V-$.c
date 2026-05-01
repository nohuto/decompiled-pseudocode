/*
 * XREFs of ??$As@UIMultitaskingViewElement@@@?$ComPtr@UIScrollViewer@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIMultitaskingViewElement@@@WRL@Microsoft@@@Details@12@@Z @ 0x1804AF590
 * Callers:
 *     ?CreateFrame@CMultitaskingViewFrame@@UEAAJAEBUCRect@Geometry@@W4MultitaskingViewZOrder@@@Z @ 0x1804B0680 (-CreateFrame@CMultitaskingViewFrame@@UEAAJAEBUCRect@Geometry@@W4MultitaskingViewZOrder@@@Z.c)
 *     ?_SetFocusToControl@CMultitaskingViewFrame@@AEAAJW4MultitaskingViewControlFlags@@AEBU_GUID@@PEAPEAX@Z @ 0x1804B2E38 (-_SetFocusToControl@CMultitaskingViewFrame@@AEAAJW4MultitaskingViewControlFlags@@AEBU_GUID@@PEAP.c)
 *     ?IsEmpty@CScrollViewerHost@@UEAA_NXZ @ 0x1804C0A70 (-IsEmpty@CScrollViewerHost@@UEAA_NXZ.c)
 *     ?SetFocused@CScrollViewerHost@@UEAAX_N@Z @ 0x1804C0FB0 (-SetFocused@CScrollViewerHost@@UEAAX_N@Z.c)
 *     ?_LayoutWithScrollButtons@CScrollViewerHost@@AEAAXXZ @ 0x1804C11E4 (-_LayoutWithScrollButtons@CScrollViewerHost@@AEAAXXZ.c)
 *     ?_LayoutWithoutScrollButtons@CScrollViewerHost@@AEAAXXZ @ 0x1804C1490 (-_LayoutWithoutScrollButtons@CScrollViewerHost@@AEAAXXZ.c)
 *     ?get_ContainingGrid@AccessibleElementBase@@UEAAJPEAPEAUIRawElementProviderSimple@@@Z @ 0x1804CDF50 (-get_ContainingGrid@AccessibleElementBase@@UEAAJPEAPEAUIRawElementProviderSimple@@@Z.c)
 *     ?SetFocused@CScrollViewer@@UEAAX_N@Z @ 0x1804D5580 (-SetFocused@CScrollViewer@@UEAAX_N@Z.c)
 *     ?v_LayoutChildren@CScrollViewer@@MEAAXXZ @ 0x1804D6130 (-v_LayoutChildren@CScrollViewer@@MEAAXXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<IScrollViewer>::As<IMultitaskingViewElement>(
        __int64 (__fastcall ****a1)(_QWORD, GUID *, __int64 *),
        __int64 *a2)
{
  __int64 (__fastcall ***v3)(_QWORD, GUID *, __int64 *); // rsi
  __int64 (__fastcall *v4)(_QWORD, GUID *, __int64 *); // rdi

  v3 = *a1;
  v4 = ***a1;
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(a2);
  return v4(v3, &GUID_0bb549a1_eae6_47ed_b29e_ca24ee64ad8d, a2);
}
