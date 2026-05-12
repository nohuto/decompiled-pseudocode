/*
 * XREFs of RaDriverUnload @ 0x1C003F8A0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_q @ 0x1C003E93C (WPP_SF_q.c)
 *     RaDeleteDriver @ 0x1C00A8568 (RaDeleteDriver.c)
 *     WppCleanupKm @ 0x1C00A87FC (WppCleanupKm.c)
 */

__int64 __fastcall RaDriverUnload(PDRIVER_OBJECT DriverObject)
{
  PVOID DriverObjectExtension; // rax
  struct _UNICODE_STRING DestinationString; // [rsp+20h] [rbp-18h] BYREF

  DestinationString = 0LL;
  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
  {
    WPP_SF_q(
      (__int64)WPP_GLOBAL_Control->AttachedDevice,
      0xAu,
      (__int64)&WPP_aebdecc26ac03ea54f5217517cc0f841_Traceguids,
      DriverObject,
      *(_QWORD *)&DestinationString.Length,
      DestinationString.Buffer);
  }
  DriverObjectExtension = IoGetDriverObjectExtension(DriverObject, DriverEntry);
  RaDeleteDriver(DriverObjectExtension);
  if ( _InterlockedExchangeAdd(&InitializeCount, 0xFFFFFFFF) == 1 )
  {
    if ( StorpControl )
    {
      RtlInitUnicodeString(&DestinationString, L"\\DosDevices\\StorportControl");
      IoDeleteSymbolicLink(&DestinationString);
      IoDeleteDevice(StorpControl);
      StorpControl = 0LL;
    }
    if ( IsWppInitialized )
    {
      WppCleanupKm();
      IsWppInitialized = 0;
    }
    if ( SpPerfUnitReadCounterSet )
    {
      PcwUnregister(SpPerfUnitReadCounterSet);
      SpPerfUnitReadCounterSet = 0LL;
    }
    if ( SpPerfUnitWriteCounterSet )
    {
      PcwUnregister(SpPerfUnitWriteCounterSet);
      SpPerfUnitWriteCounterSet = 0LL;
    }
    if ( SpPerfUnitTransferCounterSet )
    {
      PcwUnregister(SpPerfUnitTransferCounterSet);
      SpPerfUnitTransferCounterSet = 0LL;
    }
    if ( SpPerfUnitQueueCounterSet )
    {
      PcwUnregister(SpPerfUnitQueueCounterSet);
      SpPerfUnitQueueCounterSet = 0LL;
    }
  }
  return 0LL;
}
