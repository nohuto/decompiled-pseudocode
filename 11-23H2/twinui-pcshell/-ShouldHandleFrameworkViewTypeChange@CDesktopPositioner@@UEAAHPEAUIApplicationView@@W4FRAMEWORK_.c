/*
 * XREFs of ?ShouldHandleFrameworkViewTypeChange@CDesktopPositioner@@UEAAHPEAUIApplicationView@@W4FRAMEWORK_VIEW_TYPE@@@Z @ 0x180073790
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CDesktopPositioner::ShouldHandleFrameworkViewTypeChange(__int64 a1, __int64 a2, int a3)
{
  return !a3 || a3 == 6;
}
