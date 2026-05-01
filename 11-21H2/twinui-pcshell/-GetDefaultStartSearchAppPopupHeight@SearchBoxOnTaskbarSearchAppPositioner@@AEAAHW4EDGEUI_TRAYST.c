/*
 * XREFs of ?GetDefaultStartSearchAppPopupHeight@SearchBoxOnTaskbarSearchAppPositioner@@AEAAHW4EDGEUI_TRAYSTUCKPLACE@@UtagRECT@@H@Z @ 0x1801A58FC
 * Callers:
 *     ?GetAppRectAndClippingRegion@SearchBoxOnTaskbarSearchAppPositioner@@UEAA?AUSearchAppSizeAndBorderInfo@@AEBUtagRECT@@0W4SearchAppActivationMode@Shell@UI@WindowsUdk@winrt@@_NAEBUhstring@8@@Z @ 0x1801A53E0 (-GetAppRectAndClippingRegion@SearchBoxOnTaskbarSearchAppPositioner@@UEAA-AUSearchAppSizeAndBorde.c)
 * Callees:
 *     ?GetSharedStartSearchWindowHeight@StartSearchSharedUtils@@YANN@Z @ 0x180156DFC (-GetSharedStartSearchWindowHeight@StartSearchSharedUtils@@YANN@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall SearchBoxOnTaskbarSearchAppPositioner::GetDefaultStartSearchAppPopupHeight(
        __int64 a1,
        int a2,
        __int64 a3,
        int a4)
{
  double v4; // xmm1_8
  int SharedStartSearchWindowHeight; // ebx
  StartSearchSharedUtils *v9; // rcx

  SharedStartSearchWindowHeight = 648;
  if ( (*(unsigned __int8 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 8) + 40LL))(*(_QWORD *)(a1 + 8)) )
  {
    MulDiv(*(_DWORD *)(a3 + 12) - *(_DWORD *)(a3 + 4), 96, a4);
    SharedStartSearchWindowHeight = (int)StartSearchSharedUtils::GetSharedStartSearchWindowHeight(v9, v4);
  }
  if ( ((a2 - 1) & 0xFFFFFFFD) == 0 )
    SharedStartSearchWindowHeight += 12;
  return (unsigned int)(SharedStartSearchWindowHeight + 12);
}
