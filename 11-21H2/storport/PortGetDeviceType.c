/*
 * XREFs of PortGetDeviceType @ 0x1C00879D8
 * Callers:
 *     RaidUnitRegisterInterfaces @ 0x1C001EEC0 (RaidUnitRegisterInterfaces.c)
 *     RaidUnitGetCompatibleIds @ 0x1C001F740 (RaidUnitGetCompatibleIds.c)
 *     RaidUnitGetHardwareIds @ 0x1C001F8A0 (RaidUnitGetHardwareIds.c)
 *     RaidUnitGetDeviceId @ 0x1C001FD38 (RaidUnitGetDeviceId.c)
 *     RaUnitQueryDeviceTextIrp @ 0x1C00879FC (RaUnitQueryDeviceTextIrp.c)
 *     RaUnitQueryCapabilitiesIrp @ 0x1C0089094 (RaUnitQueryCapabilitiesIrp.c)
 * Callees:
 *     <none>
 */

char **__fastcall PortGetDeviceType(unsigned int a1)
{
  __int64 v1; // rax

  v1 = 21LL;
  if ( a1 < 0x16 )
    v1 = a1;
  return &PortScsiDeviceTypes[4 * v1];
}
