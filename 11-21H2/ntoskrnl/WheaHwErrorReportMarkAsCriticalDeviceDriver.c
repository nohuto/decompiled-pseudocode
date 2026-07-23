/*
 * XREFs of WheaHwErrorReportMarkAsCriticalDeviceDriver @ 0x1406442D0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1406447EC @ 0x1406447EC (sub_1406447EC.c)
 */

__int64 WheaHwErrorReportMarkAsCriticalDeviceDriver()
{
  __int64 v0; // rcx

  if ( !(unsigned __int8)sub_1406447EC() )
    return 3221225480LL;
  *(_DWORD *)(*(_QWORD *)(v0 + 40) + 12LL) |= 2u;
  return 0LL;
}
