/*
 * XREFs of ACPIInternalSetProximityDomain @ 0x1C00883F8
 * Callers:
 *     ACPIBusIrpQueryResourceRequirements @ 0x1C0080990 (ACPIBusIrpQueryResourceRequirements.c)
 *     ACPIFilterIrpQueryResourceRequirements @ 0x1C0086670 (ACPIFilterIrpQueryResourceRequirements.c)
 * Callees:
 *     ACPIGet @ 0x1C00293A4 (ACPIGet.c)
 *     AMLIIsNamedChildPresent @ 0x1C00487DC (AMLIIsNamedChildPresent.c)
 */

NTSTATUS __fastcall ACPIInternalSetProximityDomain(__int64 a1)
{
  NTSTATUS result; // eax
  __int64 Data; // [rsp+60h] [rbp+8h] BYREF

  if ( !AMLIIsNamedChildPresent(*(_QWORD **)(a1 + 760), 1297633375) )
    return -1073741772;
  Data = 0LL;
  result = ACPIGet(a1, 0x4D58505Fu, 268697602, 0LL, 0, 0LL, 0LL, (__int64)&Data, 0LL);
  if ( result >= 0 )
    return IoSetDevicePropertyData(
             *(PDEVICE_OBJECT *)(a1 + 784),
             &DEVPKEY_Device_Numa_Proximity_Domain,
             0,
             0,
             7u,
             4u,
             &Data);
  return result;
}
