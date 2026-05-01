/*
 * XREFs of ??$As@UIMultitaskingViewGridElement@@@?$ComPtr@UIMultitaskingViewElement@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIMultitaskingViewGridElement@@@WRL@Microsoft@@@Details@12@@Z @ 0x18057824C
 * Callers:
 *     ?MoveVirtualCursor@CSwitchItemGrid@@UEAAJAEBUCPoint@Geometry@@@Z @ 0x1802E42B0 (-MoveVirtualCursor@CSwitchItemGrid@@UEAAJAEBUCPoint@Geometry@@@Z.c)
 *     ??$FindEx@VCompareToItemData@@@?$CTSimpleFixedArray@V?$ComPtr@UIMultitaskingViewElement@@@WRL@Microsoft@@VElementCompare@ElementHelpers@@@@QEBAJAEBVCompareToItemData@@AEBV?$ComPtr@UIMultitaskingViewElement@@@WRL@Microsoft@@PEA_K_K@Z @ 0x1805783E4 (--$FindEx@VCompareToItemData@@@-$CTSimpleFixedArray@V-$ComPtr@UIMultitaskingViewElement@@@WRL@Mi.c)
 *     CSwitchItemGrid::_ForEachGridItem__lambda_994325c3b22a1663c26f656e6d8d432d___ @ 0x180578664 (CSwitchItemGrid--_ForEachGridItem__lambda_994325c3b22a1663c26f656e6d8d432d___.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<IMultitaskingViewElement>::As<IMultitaskingViewGridElement>(
        __int64 (__fastcall ****a1)(_QWORD, GUID *, __int64 *),
        __int64 *a2)
{
  __int64 (__fastcall ***v3)(_QWORD, GUID *, __int64 *); // rsi
  __int64 (__fastcall *v4)(_QWORD, GUID *, __int64 *); // rdi

  v3 = *a1;
  v4 = ***a1;
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(a2);
  return v4(v3, &GUID_dda13508_825c_43f9_bcd8_7d0dc0e5d932, a2);
}
