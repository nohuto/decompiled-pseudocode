/*
 * XREFs of _CmIsRootEnumeratedDevice @ 0x1406CC080
 * Callers:
 *     PiControlGetUserFlagsFromDeviceNode @ 0x1406CBF34 (PiControlGetUserFlagsFromDeviceNode.c)
 *     PiPnpRtlCmActionCallback @ 0x140788B20 (PiPnpRtlCmActionCallback.c)
 *     PiPnpRtlSetObjectProperty @ 0x140796788 (PiPnpRtlSetObjectProperty.c)
 *     PiDevCfgProcessDevice @ 0x14087A1F0 (PiDevCfgProcessDevice.c)
 *     PiDevCfgMigrateDevice @ 0x14087BF7C (PiDevCfgMigrateDevice.c)
 *     PiPnpRtlSetDeviceRegProperty @ 0x14087C704 (PiPnpRtlSetDeviceRegProperty.c)
 *     PiDevCfgCheckDeviceNeedsUpdate @ 0x14095C8D0 (PiDevCfgCheckDeviceNeedsUpdate.c)
 *     PiDevCfgFindDeviceMigrationNode @ 0x14095DA8C (PiDevCfgFindDeviceMigrationNode.c)
 *     PiCMDeleteDevice @ 0x140968E48 (PiCMDeleteDevice.c)
 *     PipResetDevice @ 0x140B94660 (PipResetDevice.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x14022B6C0 (RtlInitUnicodeStringEx.c)
 *     RtlPrefixUnicodeString @ 0x1406D9E20 (RtlPrefixUnicodeString.c)
 */

BOOLEAN __fastcall CmIsRootEnumeratedDevice(PCWSTR SourceString)
{
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-18h] BYREF

  DestinationString = 0LL;
  if ( RtlInitUnicodeStringEx(&DestinationString, SourceString) < 0 )
    return 0;
  else
    return RtlPrefixUnicodeString(&stru_1400013B8, &DestinationString, 1u);
}
