/*
 * XREFs of _anonymous_namespace_::WindowsSafeIsEqualString @ 0x1800E9FBC
 * Callers:
 *     ?ProcessDeviceNotifications@PnpDeviceWatcher@@QEAAJPEAK@Z @ 0x18001C910 (-ProcessDeviceNotifications@PnpDeviceWatcher@@QEAAJPEAK@Z.c)
 *     ?FindDeviceListEntryByInterfacePath@PnpDeviceWatcher@@AEAAJPEAUHSTRING__@@_NAEAPEAUDeviceListEntry@1@@Z @ 0x180037D20 (-FindDeviceListEntryByInterfacePath@PnpDeviceWatcher@@AEAAJPEAUHSTRING__@@_NAEAPEAUDeviceListEnt.c)
 *     ?FindDeviceListEntryByInstanceId@PnpDeviceWatcher@@AEAAJPEAUHSTRING__@@_NAEAPEAUDeviceListEntry@1@@Z @ 0x1800381B8 (-FindDeviceListEntryByInstanceId@PnpDeviceWatcher@@AEAAJPEAUHSTRING__@@_NAEAPEAUDeviceListEntry@.c)
 * Callees:
 *     <none>
 */

bool __fastcall anonymous_namespace_::WindowsSafeIsEqualString(HSTRING a1, HSTRING a2)
{
  char v2; // bl
  INT32 result; // [rsp+30h] [rbp+8h] BYREF

  v2 = 0;
  if ( !a1 )
    return a2 == 0LL;
  if ( !a2 )
    return 0;
  if ( WindowsCompareStringOrdinal(a1, a2, &result) >= 0 )
    return result == 0;
  return v2;
}
