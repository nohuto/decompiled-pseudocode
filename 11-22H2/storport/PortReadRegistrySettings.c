/*
 * XREFs of PortReadRegistrySettings @ 0x1C00AF98C
 * Callers:
 *     PortGetRegistrySettings @ 0x1C00AF7F0 (PortGetRegistrySettings.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00220A0 (__security_check_cookie.c)
 *     PortpReadMaximumLogicalUnitEntry @ 0x1C00AFEF8 (PortpReadMaximumLogicalUnitEntry.c)
 *     PortpReadMaximumUCXAddressEntry @ 0x1C00AFFA4 (PortpReadMaximumUCXAddressEntry.c)
 *     PortpReadMinimumUCXAddressEntry @ 0x1C00B0054 (PortpReadMinimumUCXAddressEntry.c)
 *     PortpReadNumberOfRequestsEntry @ 0x1C00B0114 (PortpReadNumberOfRequestsEntry.c)
 *     PortpReadUncachedExtAlignmentEntry @ 0x1C00B01CC (PortpReadUncachedExtAlignmentEntry.c)
 */

__int64 __fastcall PortReadRegistrySettings(HANDLE KeyHandle)
{
  _BYTE KeyValueInformation[512]; // [rsp+20h] [rbp-218h] BYREF

  PortpReadMaximumLogicalUnitEntry(KeyHandle, KeyValueInformation);
  PortpReadMaximumUCXAddressEntry(KeyHandle, KeyValueInformation);
  PortpReadMinimumUCXAddressEntry(KeyHandle, KeyValueInformation);
  PortpReadNumberOfRequestsEntry(KeyHandle, KeyValueInformation);
  return PortpReadUncachedExtAlignmentEntry(KeyHandle, KeyValueInformation);
}
