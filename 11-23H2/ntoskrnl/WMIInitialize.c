/*
 * XREFs of WMIInitialize @ 0x140B396D0
 * Callers:
 *     IoInitSystemPreDrivers @ 0x140B4B914 (IoInitSystemPreDrivers.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14022E2C0 (RtlInitUnicodeString.c)
 *     IoCreateDriver @ 0x1408104D0 (IoCreateDriver.c)
 *     WmipInitializeAllocs @ 0x140B38A8C (WmipInitializeAllocs.c)
 *     WmipInitializeRegistration @ 0x140B393E8 (WmipInitializeRegistration.c)
 *     WmipGetSMBiosFromLoaderBlock @ 0x140B39480 (WmipGetSMBiosFromLoaderBlock.c)
 *     WmipRegisterFirmwareProviders @ 0x140B39608 (WmipRegisterFirmwareProviders.c)
 */

char __fastcall WMIInitialize(int a1, __int64 a2)
{
  char v2; // bl
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-18h] BYREF

  v2 = 0;
  DestinationString = 0LL;
  if ( a1 )
  {
    WmipInitializeRegistration(a1);
    return 1;
  }
  WmipInitializeAllocs();
  RtlInitUnicodeString(&DestinationString, L"\\Driver\\WMIxWDM");
  if ( IoCreateDriver(&DestinationString, (__int64 (__fastcall *)(void **, _QWORD))WmipDriverEntry) >= 0 )
  {
    WmipGetSMBiosFromLoaderBlock(a2);
    WmipRegisterFirmwareProviders();
    return 1;
  }
  return v2;
}
