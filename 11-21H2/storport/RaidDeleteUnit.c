/*
 * XREFs of RaidDeleteUnit @ 0x1C0019D24
 * Callers:
 *     RaidDeleteBusEnumerator @ 0x1C001A9D8 (RaidDeleteBusEnumerator.c)
 *     RaUnitDeleteDeviceIrp @ 0x1C0022760 (RaUnitDeleteDeviceIrp.c)
 *     RaUnitAdapterRemove @ 0x1C0050920 (RaUnitAdapterRemove.c)
 * Callees:
 *     RaidUnitFreeResources @ 0x1C0019DC8 (RaidUnitFreeResources.c)
 *     RaidUnitSavePowerCycleCount @ 0x1C001CB88 (RaidUnitSavePowerCycleCount.c)
 *     RaidAdapterDisableQosWaitTimeoutCheck @ 0x1C0034928 (RaidAdapterDisableQosWaitTimeoutCheck.c)
 *     RaidSecondaryDumpDeregister @ 0x1C0064B18 (RaidSecondaryDumpDeregister.c)
 */

void __fastcall RaidDeleteUnit(__int64 a1)
{
  __int64 v2; // rcx

  RaidUnitSavePowerCycleCount();
  if ( (*(_BYTE *)(a1 + 450) & 1) != 0 && BootDriveExtension == a1 )
    RaidSecondaryDumpDeregister();
  v2 = *(_QWORD *)(a1 + 24);
  if ( v2 )
  {
    if ( a1 != *(_QWORD *)(v2 + 4888) || (*(_QWORD *)(v2 + 4888) = 0LL, *(_QWORD *)(a1 + 24)) )
    {
      if ( *(_BYTE *)(a1 + 3232) && _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 3264), 0, 1) == 1 )
        RaidAdapterDisableQosWaitTimeoutCheck(*(_QWORD *)(a1 + 24));
    }
  }
  RaidUnitFreeResources(a1);
  if ( *(_QWORD *)(a1 + 1840) )
    RtlFreeUnicodeString((PUNICODE_STRING)(a1 + 1832));
  if ( *(_QWORD *)(a1 + 3408) )
    RtlFreeUnicodeString((PUNICODE_STRING)(a1 + 3400));
  if ( *(_QWORD *)(a1 + 1960) )
    RtlFreeUnicodeString((PUNICODE_STRING)(a1 + 1952));
  IoDeleteDevice(*(PDEVICE_OBJECT *)(a1 + 8));
}
