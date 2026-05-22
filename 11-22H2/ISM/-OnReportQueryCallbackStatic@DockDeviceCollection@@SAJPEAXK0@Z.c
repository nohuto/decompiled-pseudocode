/*
 * XREFs of ?OnReportQueryCallbackStatic@DockDeviceCollection@@SAJPEAXK0@Z @ 0x1800F17A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DockDeviceCollection::OnReportQueryCallbackStatic(DockDeviceCollection *a1, int a2, void *a3)
{
  if ( a2 )
    return 2147549183LL;
  if ( a1 )
    return DockDeviceCollection::OnReportQueryCallback(a1);
  return 2147942487LL;
}
