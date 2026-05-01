/*
 * XREFs of ?GetDefaultSearchAppWidth@TaskbarSearchAppPositioner@@AEAAHAEBUtagRECT@@HW4EDGEUI_TRAYSTUCKPLACE@@@Z @ 0x1800F80CC
 * Callers:
 *     ?GetAppRectAndClippingRegion@TaskbarSearchAppPositioner@@UEAA?AUSearchAppSizeAndBorderInfo@@AEBUtagRECT@@0W4SearchAppActivationMode@Shell@UI@WindowsUdk@winrt@@_NAEBUhstring@8@@Z @ 0x1801A6550 (-GetAppRectAndClippingRegion@TaskbarSearchAppPositioner@@UEAA-AUSearchAppSizeAndBorderInfo@@AEBU.c)
 * Callees:
 *     ?IsWideAtStartupEnabled@SearchAppSizeHelpers@@YA_NH@Z @ 0x1800F8128 (-IsWideAtStartupEnabled@SearchAppSizeHelpers@@YA_NH@Z.c)
 */

__int64 __fastcall TaskbarSearchAppPositioner::GetDefaultSearchAppWidth(__int64 a1, _DWORD *a2, int a3, int a4)
{
  int v5; // edi
  unsigned int v6; // eax
  int v7; // edx
  unsigned int v8; // edi

  v5 = 642;
  v6 = MulDiv(a2[2] - *a2, 96, a3);
  if ( SearchAppSizeHelpers::IsWideAtStartupEnabled((SearchAppSizeHelpers *)v6, v7) )
    v5 = 776;
  v8 = v5 + 24;
  if ( (a4 & 0xFFFFFFFD) == 0 )
    v8 += 12;
  return v8;
}
