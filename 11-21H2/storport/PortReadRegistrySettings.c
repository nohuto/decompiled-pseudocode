/*
 * XREFs of PortReadRegistrySettings @ 0x1C0093060
 * Callers:
 *     PortGetRegistrySettings @ 0x1C0092EC4 (PortGetRegistrySettings.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0022BF0 (__security_check_cookie.c)
 *     PortpReadMaximumLogicalUnitEntry @ 0x1C00935CC (PortpReadMaximumLogicalUnitEntry.c)
 *     PortpReadMaximumUCXAddressEntry @ 0x1C0093678 (PortpReadMaximumUCXAddressEntry.c)
 *     PortpReadMinimumUCXAddressEntry @ 0x1C0093728 (PortpReadMinimumUCXAddressEntry.c)
 *     PortpReadNumberOfRequestsEntry @ 0x1C00937E4 (PortpReadNumberOfRequestsEntry.c)
 *     PortpReadUncachedExtAlignmentEntry @ 0x1C009389C (PortpReadUncachedExtAlignmentEntry.c)
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
