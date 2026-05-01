/*
 * XREFs of ?IsTabWindowOwner@@YA_NPEAUIApplicationView@@@Z @ 0x18004FF34
 * Callers:
 *     ?ShouldIncludeView@AppViewDataSourceAdapter@@MEAA_NPEAUIApplicationView@@@Z @ 0x18004FE80 (-ShouldIncludeView@AppViewDataSourceAdapter@@MEAA_NPEAUIApplicationView@@@Z.c)
 *     ?NumTabItems@AppViewDataSourceAdapter@@UEAAIXZ @ 0x180454B60 (-NumTabItems@AppViewDataSourceAdapter@@UEAAIXZ.c)
 * Callees:
 *     ?GetWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z @ 0x180082930 (-GetWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z.c)
 */

bool __fastcall IsTabWindowOwner(struct IApplicationView *a1, struct IApplicationView *a2)
{
  HWND WindowForView; // rax

  WindowForView = ApplicationViewHelpers::GetWindowForView(a1, a2);
  return GetPropW(WindowForView, (LPCWSTR)0xA920) != 0LL;
}
