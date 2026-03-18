/*
 * XREFs of ?_UsageToSpecialType@FxPkgPnp@@KA?AW4_WDF_SPECIAL_FILE_TYPE@@W4_DEVICE_USAGE_NOTIFICATION_TYPE@@@Z @ 0x1C0076630
 * Callers:
 *     ?PnpDeviceUsageNotification@FxPkgPnp@@IEAAJPEAVFxIrp@@@Z @ 0x1C0073678 (-PnpDeviceUsageNotification@FxPkgPnp@@IEAAJPEAVFxIrp@@@Z.c)
 *     ?SetSpecialFileSupport@FxPkgPnp@@QEAAXW4_WDF_SPECIAL_FILE_TYPE@@E@Z @ 0x1C0075FF0 (-SetSpecialFileSupport@FxPkgPnp@@QEAAXW4_WDF_SPECIAL_FILE_TYPE@@E@Z.c)
 *     ?SetUsageNotificationFlags@FxPkgPnp@@IEAAKW4_DEVICE_USAGE_NOTIFICATION_TYPE@@E@Z @ 0x1C0076064 (-SetUsageNotificationFlags@FxPkgPnp@@IEAAKW4_DEVICE_USAGE_NOTIFICATION_TYPE@@E@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall FxPkgPnp::_UsageToSpecialType(_DEVICE_USAGE_NOTIFICATION_TYPE Type)
{
  int v1; // ecx
  int v2; // ecx
  int v3; // ecx
  int v4; // ecx
  int v5; // ecx

  v1 = Type - 1;
  if ( v1 )
  {
    v2 = v1 - 1;
    if ( !v2 )
      return 2LL;
    v3 = v2 - 1;
    if ( !v3 )
      return 3LL;
    v4 = v3 - 1;
    if ( !v4 )
      return 4LL;
    v5 = v4 - 1;
    if ( !v5 )
      return 5LL;
    if ( v5 == 1 )
      return 6LL;
  }
  return 1LL;
}
