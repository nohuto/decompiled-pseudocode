/*
 * XREFs of Feature_DropPowerReferenceOnLPE__private_IsEnabledDeviceUsage @ 0x1C000CE78
 * Callers:
 *     HUBFDO_EvtDeviceD0Entry @ 0x1C000D370 (HUBFDO_EvtDeviceD0Entry.c)
 *     HUBFDO_EvtDeviceCleanupCallback @ 0x1C000DBA0 (HUBFDO_EvtDeviceCleanupCallback.c)
 *     HUBFDO_EvtDevicePrepareHardware @ 0x1C0078890 (HUBFDO_EvtDevicePrepareHardware.c)
 * Callees:
 *     Feature_DropPowerReferenceOnLPE__private_IsEnabledFallback @ 0x1C000CE5C (Feature_DropPowerReferenceOnLPE__private_IsEnabledFallback.c)
 */

__int64 Feature_DropPowerReferenceOnLPE__private_IsEnabledDeviceUsage()
{
  if ( (WPP_MAIN_CB.ActiveThreadCount & 0x10) != 0 )
    return WPP_MAIN_CB.ActiveThreadCount & 1;
  else
    return Feature_DropPowerReferenceOnLPE__private_IsEnabledFallback(WPP_MAIN_CB.ActiveThreadCount, 3u);
}
