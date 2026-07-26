/*
 * XREFs of ?ndisIfInitializePhase1@@YAJXZ @ 0x1C01607AC
 * Callers:
 *     DriverEntry @ 0x1C01608CC (DriverEntry.c)
 * Callees:
 *     Feature_Servicing_CompartmentNotificationRaceCondition__private_IsEnabledDeviceUsage @ 0x1C00380D4 (Feature_Servicing_CompartmentNotificationRaceCondition__private_IsEnabledDeviceUsage.c)
 *     ?ndisIfNdisProvidedInterfaceSubsystemInitialize@@YAJXZ @ 0x1C011BD58 (-ndisIfNdisProvidedInterfaceSubsystemInitialize@@YAJXZ.c)
 *     ?ndisIfStackTableSubsystemInitialize@@YAXXZ @ 0x1C01216FC (-ndisIfStackTableSubsystemInitialize@@YAXXZ.c)
 *     ?ndisIfExternalProvidedInterfaceSubsystemInitialize@@YAXXZ @ 0x1C0121734 (-ndisIfExternalProvidedInterfaceSubsystemInitialize@@YAXXZ.c)
 *     ?ndisIfCompartmentStateSubsystemInitialize@@YAJXZ @ 0x1C01606F0 (-ndisIfCompartmentStateSubsystemInitialize@@YAJXZ.c)
 *     ?ndisIfLuidAllocatorSubsystemInitialize@@YAJXZ @ 0x1C0162AFC (-ndisIfLuidAllocatorSubsystemInitialize@@YAJXZ.c)
 *     ?ndisIfThreadObjectSubsystemInitialize@@YAJXZ @ 0x1C0162D0C (-ndisIfThreadObjectSubsystemInitialize@@YAJXZ.c)
 *     ?ndisIfInterfaceSubsystemInitialize@@YAJXZ @ 0x1C01636F4 (-ndisIfInterfaceSubsystemInitialize@@YAJXZ.c)
 *     ?ndisIfIndexAllocatorSubsystemInitialize@@YAXXZ @ 0x1C0163890 (-ndisIfIndexAllocatorSubsystemInitialize@@YAXXZ.c)
 */

__int64 ndisIfInitializePhase1(void)
{
  RtlRunOnceInitialize(&RunOnce);
  ndisIfInterfaceSubsystemInitialize();
  qword_1C00F5DB0 = (__int64)&qword_1C00F5DA8;
  qword_1C00F5DA8 = (struct _NDIS_IF_COMPARTMENT_BLOCK *)&qword_1C00F5DA8;
  if ( !(unsigned int)Feature_Servicing_CompartmentNotificationRaceCondition__private_IsEnabledDeviceUsage() )
  {
    stru_1C00F5190.Context = 0LL;
    qword_1C00F5C60 = (__int64)&qword_1C00F5C58;
    qword_1C00F5C58 = (__int64)&qword_1C00F5C58;
    stru_1C00F5190.Routine = (void (__fastcall *)(_NDIS_WORK_ITEM *, void *))ndisIfCompartmentNotificationWorker;
  }
  qword_1C00F5DC0 = (__int64)&qword_1C00F5DB8;
  qword_1C00F5DB8 = (__int64)&qword_1C00F5DB8;
  ndisIfExternalProvidedInterfaceSubsystemInitialize();
  ndisIfStackTableSubsystemInitialize();
  KeInitializeSpinLock(&qword_1C00F5D80);
  KeInitializeTimer(&Timer);
  KeInitializeDpc(&Dpc, (PKDEFERRED_ROUTINE)ndisCmCleanupDpcRoutine, 0LL);
  stru_1C00F71D0.Parameter = 0LL;
  stru_1C00F71D0.List.Flink = 0LL;
  stru_1C00F71D0.WorkerRoutine = (void (__fastcall *)(void *))ndisCmCleanupWorkRoutine;
  KeInitializeSpinLock(&SpinLock);
  ndisIfThreadObjectSubsystemInitialize();
  ndisIfCompartmentStateSubsystemInitialize();
  ndisIfIndexAllocatorSubsystemInitialize();
  ndisIfLuidAllocatorSubsystemInitialize();
  ndisIfNdisProvidedInterfaceSubsystemInitialize();
  return 0LL;
}
