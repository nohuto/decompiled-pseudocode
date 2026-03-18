/*
 * XREFs of PopGracefulShutdown @ 0x140AA0A60
 * Callers:
 *     PopTransitionSystemPowerStateEx @ 0x140AA90F0 (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x14022F5B0 (ObfDereferenceObjectWithTag.c)
 *     ExAcquireFastMutex @ 0x140230720 (ExAcquireFastMutex.c)
 *     ExReleaseFastMutex @ 0x140230860 (ExReleaseFastMutex.c)
 *     KeSetEvent @ 0x14023C5E0 (KeSetEvent.c)
 *     KeWaitForSingleObject @ 0x140243CE0 (KeWaitForSingleObject.c)
 *     KeAttachProcess @ 0x140364370 (KeAttachProcess.c)
 *     PopDiagTraceEventNoPayload @ 0x140367640 (PopDiagTraceEventNoPayload.c)
 *     IoAddTriageDumpDataBlock @ 0x1403882BC (IoAddTriageDumpDataBlock.c)
 *     CcWaitForCurrentLazyWriterActivity @ 0x1403D7030 (CcWaitForCurrentLazyWriterActivity.c)
 *     KeBugCheckEx @ 0x14041EA50 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x140429C20 (_guard_dispatch_icall.c)
 *     PopAdaptivePersistSystemInitatedRebootState @ 0x14059DE68 (PopAdaptivePersistSystemInitatedRebootState.c)
 *     VfShutdownScheduleWatchdog @ 0x1405D17B8 (VfShutdownScheduleWatchdog.c)
 *     PopTransitionCheckpoint @ 0x1406825AC (PopTransitionCheckpoint.c)
 *     PopCurrentPowerState @ 0x1407A6D48 (PopCurrentPowerState.c)
 *     PnpWaitForEmptyDeviceActionQueue @ 0x1408110E4 (PnpWaitForEmptyDeviceActionQueue.c)
 *     EtwWriteEndScenario @ 0x1408439D0 (EtwWriteEndScenario.c)
 *     ObShutdownSystem @ 0x14097AE00 (ObShutdownSystem.c)
 *     PopSetCleanShutdownMarker @ 0x140981450 (PopSetCleanShutdownMarker.c)
 *     SshSessionManagerFlushBuffers @ 0x1409A1798 (SshSessionManagerFlushBuffers.c)
 *     SshSessionManagerTraceSystemStop @ 0x1409A1C10 (SshSessionManagerTraceSystemStop.c)
 *     PsShutdownSystem @ 0x1409B3544 (PsShutdownSystem.c)
 *     PsWaitForAllProcesses @ 0x1409B393C (PsWaitForAllProcesses.c)
 *     EtwShutdown @ 0x1409E2B1C (EtwShutdown.c)
 *     CmShutdownSystem @ 0x140A112D8 (CmShutdownSystem.c)
 *     MmZeroPageFileAtShutdown @ 0x140A2B524 (MmZeroPageFileAtShutdown.c)
 *     IoShutdownSystem @ 0x140A99B34 (IoShutdownSystem.c)
 *     PopBuildDeviceNotifyList @ 0x140AA713C (PopBuildDeviceNotifyList.c)
 *     PopSetDevicesSystemState @ 0x140AA7440 (PopSetDevicesSystemState.c)
 *     PopShutdownSystem @ 0x140AA8F14 (PopShutdownSystem.c)
 *     ExShutdownSystem @ 0x140AAAB58 (ExShutdownSystem.c)
 *     MmShutdownSystem @ 0x140AABFD0 (MmShutdownSystem.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 */

void __noreturn PopGracefulShutdown()
{
  __int64 v0; // rdx
  __int64 v1; // rcx
  __int64 v2; // rax
  __int64 v3; // rcx
  PVOID *v4; // rbx
  struct _KPROCESS *v5; // rcx
  __int128 v6; // [rsp+30h] [rbp-28h] BYREF

  PopTransitionCheckpoint(10, 1);
  v6 = 0LL;
  PopDiagTraceEventNoPayload(&POP_ETW_EVENT_GRACEFULSHUTDOWN_START);
  PopCurrentPowerState(&v6);
  SshSessionManagerTraceSystemStop(SHIDWORD(v6), SDWORD2(v6));
  PopAdaptivePersistSystemInitatedRebootState(v1, v0);
  *(_QWORD *)(*(_QWORD *)&qword_140C3D0F8 + 16LL) = KeGetCurrentThread();
  PopDiagTraceEventNoPayload(&POP_ETW_EVENT_ZEROPAGEFILE_START);
  MmZeroPageFileAtShutdown();
  PopDiagTraceEventNoPayload(&POP_ETW_EVENT_ZEROPAGEFILE_STOP);
  if ( !*(_QWORD *)&qword_140C3D0F0 )
    off_140C02178[0]();
  VfShutdownScheduleWatchdog();
  if ( PopShutdownCleanly )
  {
    PsShutdownSystem();
    KeSetEvent(&PopShutdownEvent, 0, 0);
    ExAcquireFastMutex(&PopShutdownListMutex);
    PopShutdownListAvailable = 0;
    ExReleaseFastMutex(&PopShutdownListMutex);
    while ( 1 )
    {
      v3 = PopShutdownQueue;
      if ( (__int64 *)PopShutdownQueue == &PopShutdownQueue )
        break;
      if ( *(__int64 **)(PopShutdownQueue + 8) != &PopShutdownQueue
        || (v2 = *(_QWORD *)PopShutdownQueue, *(_QWORD *)(*(_QWORD *)PopShutdownQueue + 8LL) != PopShutdownQueue) )
      {
        __fastfail(3u);
      }
      PopShutdownQueue = *(_QWORD *)PopShutdownQueue;
      *(_QWORD *)(v2 + 8) = &PopShutdownQueue;
      (*(void (__fastcall **)(_QWORD))(v3 + 16))(*(_QWORD *)(v3 + 24));
    }
    while ( 1 )
    {
      v4 = (PVOID *)PopShutdownThreadList;
      if ( !PopShutdownThreadList )
        break;
      PopShutdownThreadList = *(PVOID *)PopShutdownThreadList;
      KeWaitForSingleObject(v4[1], Executive, 0, 0, 0LL);
      ObfDereferenceObjectWithTag(v4[1], 0x64536F50u);
      ExFreePoolWithTag(v4, 0);
    }
  }
  TmShutdownSystem();
  CmShutdownSystem();
  ExShutdownSystem(0LL);
  PopDiagTraceEventNoPayload(&POP_ETW_EVENT_IOSHUTDOWNSYSTEM_START);
  IoShutdownSystem(0);
  PopDiagTraceEventNoPayload(&POP_ETW_EVENT_IOSHUTDOWNSYSTEM_STOP);
  if ( PopShutdownCleanly )
  {
    PopDiagTraceEventNoPayload(&POP_ETW_EVENT_WAITFORPROCESSES_START);
    PsWaitForAllProcesses();
    PopDiagTraceEventNoPayload(&POP_ETW_EVENT_WAITFORPROCESSES_STOP);
  }
  if ( (PopShutdownCleanly & 0x10) != 0 )
    ObShutdownSystem(0);
  PopDiagTraceEventNoPayload(&POP_ETW_EVENT_CMSHUTDOWNSYSTEM_START);
  CmShutdownSystem();
  CmShutdownSystem();
  PopDiagTraceEventNoPayload(&POP_ETW_EVENT_CMSHUTDOWNSYSTEM_STOP);
  if ( PopDiagHandleRegistered )
    EtwWriteEndScenario(
      (ULONG_PTR *)PopDiagHandle,
      &POP_ETW_EVENT_GRACEFULSHUTDOWN_STOP,
      &PopShutdownDiagnosticsScenarioGuid,
      0,
      0LL);
  SshSessionManagerFlushBuffers();
  EtwShutdown(0);
  ExShutdownSystem(1LL);
  MmShutdownSystem(0LL);
  PopSetCleanShutdownMarker();
  PopTransitionCheckpoint(10, 2);
  PnpWaitForEmptyDeviceActionQueue();
  PopDiagTraceEventNoPayload(&POP_ETW_EVENT_IOSHUTDOWN_FILE_SYSTEMS_START);
  IoShutdownSystem(1);
  PopDiagTraceEventNoPayload(&POP_ETW_EVENT_IOSHUTDOWN_FILE_SYSTEMS_STOP);
  CcWaitForCurrentLazyWriterActivity();
  if ( *(_QWORD *)&qword_140C3D0F0 )
  {
    v5 = *(struct _KPROCESS **)(*(_QWORD *)&qword_140C3D0F0 + 8LL);
    if ( v5 )
      KeAttachProcess(v5);
    IoAddTriageDumpDataBlock(qword_140C3D0F0, (PVOID)0x48);
    KeBugCheckEx(
      *(_DWORD *)(*(_QWORD *)&qword_140C3D0F0 + 32LL),
      *(_QWORD *)(*(_QWORD *)&qword_140C3D0F0 + 40LL),
      *(_QWORD *)(*(_QWORD *)&qword_140C3D0F0 + 48LL),
      *(_QWORD *)(*(_QWORD *)&qword_140C3D0F0 + 56LL),
      *(_QWORD *)(*(_QWORD *)&qword_140C3D0F0 + 64LL));
  }
  PopBootStatCheckpointAvailable = 0;
  *(_DWORD *)(*(_QWORD *)&qword_140C3D0F8 + 448LL) = 0;
  PopBuildDeviceNotifyList((void *)(*(_QWORD *)&qword_140C3D0F8 + 48LL));
  PopSetDevicesSystemState();
  ExShutdownSystem(2LL);
  if ( (PopShutdownCleanly & 0x10) != 0 )
    ObShutdownSystem(2);
  MmShutdownSystem(2LL);
  PopShutdownSystem((unsigned int)qword_140C3D0C4);
}
