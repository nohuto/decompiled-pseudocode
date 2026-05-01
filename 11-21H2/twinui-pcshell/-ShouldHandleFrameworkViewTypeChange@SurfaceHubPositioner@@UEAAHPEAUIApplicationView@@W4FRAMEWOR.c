/*
 * XREFs of ?ShouldHandleFrameworkViewTypeChange@SurfaceHubPositioner@@UEAAHPEAUIApplicationView@@W4FRAMEWORK_VIEW_TYPE@@@Z @ 0x180320D30
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall SurfaceHubPositioner::ShouldHandleFrameworkViewTypeChange(__int64 a1, __int64 a2, int a3)
{
  return !a3 || a3 == 6;
}
