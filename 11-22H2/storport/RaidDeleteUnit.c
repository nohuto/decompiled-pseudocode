/*
 * XREFs of RaidDeleteUnit @ 0x1C00156F4
 * Callers:
 *     RaidDeleteBusEnumerator @ 0x1C0018608 (RaidDeleteBusEnumerator.c)
 *     RaUnitDeleteDeviceIrp @ 0x1C0021794 (RaUnitDeleteDeviceIrp.c)
 *     RaUnitAdapterRemove @ 0x1C005CEC0 (RaUnitAdapterRemove.c)
 * Callees:
 *     RaidUnitFreeResources @ 0x1C001544C (RaidUnitFreeResources.c)
 *     RaidUnitSavePowerCycleCount @ 0x1C0015EC4 (RaidUnitSavePowerCycleCount.c)
 *     RaidAdapterDisableQosWaitTimeoutCheck @ 0x1C003565C (RaidAdapterDisableQosWaitTimeoutCheck.c)
 *     RaidSecondaryDumpDeregister @ 0x1C0073708 (RaidSecondaryDumpDeregister.c)
 */

void __fastcall RaidDeleteUnit(__int64 a1)
{
  __int64 v2; // rcx

  RaidUnitSavePowerCycleCount(a1);
  if ( (*(_BYTE *)(a1 + 450) & 1) != 0 && BootDriveExtension == a1 )
    RaidSecondaryDumpDeregister();
  v2 = *(_QWORD *)(a1 + 24);
  if ( v2 && a1 == *(_QWORD *)(v2 + 4952) )
    *(_QWORD *)(v2 + 4952) = 0LL;
  if ( *(_QWORD *)(a1 + 24)
    && *(_BYTE *)(a1 + 3280)
    && _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 3312), 0, 1) == 1 )
  {
    RaidAdapterDisableQosWaitTimeoutCheck(*(_QWORD *)(a1 + 24));
  }
  RaidUnitFreeResources(a1);
  if ( *(_QWORD *)(a1 + 1888) )
    RtlFreeUnicodeString((PUNICODE_STRING)(a1 + 1880));
  if ( *(_QWORD *)(a1 + 3456) )
    RtlFreeUnicodeString((PUNICODE_STRING)(a1 + 3448));
  if ( *(_QWORD *)(a1 + 2008) )
    RtlFreeUnicodeString((PUNICODE_STRING)(a1 + 2000));
  IoDeleteDevice(*(PDEVICE_OBJECT *)(a1 + 8));
}
