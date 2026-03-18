/*
 * XREFs of PopDiagInitialize @ 0x140B4F1E0
 * Callers:
 *     PoInitSystem @ 0x140B50BBC (PoInitSystem.c)
 * Callees:
 *     KiQueryUnbiasedInterruptTime @ 0x1402E7464 (KiQueryUnbiasedInterruptTime.c)
 *     PopThermalDeferedTraceThermalZoneEnumeration @ 0x1403A18E8 (PopThermalDeferedTraceThermalZoneEnumeration.c)
 *     EtwRegister @ 0x14078D880 (EtwRegister.c)
 *     EtwSetInformation @ 0x1407D7120 (EtwSetInformation.c)
 *     TraceLoggingRegisterEx_EtwRegister_EtwSetInformation @ 0x140821DDC (TraceLoggingRegisterEx_EtwRegister_EtwSetInformation.c)
 *     PdcTaskClientRegister @ 0x140822050 (PdcTaskClientRegister.c)
 *     PopDiagSleepStudyInitialize @ 0x1408228B4 (PopDiagSleepStudyInitialize.c)
 *     PopTransitionTelemetryOsState @ 0x140859174 (PopTransitionTelemetryOsState.c)
 */

__int64 PopDiagInitialize()
{
  __int64 UnbiasedInterruptTime; // rax
  char v1; // cl

  if ( EtwRegister(&POP_ETW_PROVIDER, (PETWENABLECALLBACK)PopDiagTraceControlCallback, &PopDiagHandle, &PopDiagHandle) >= 0 )
  {
    PopDiagHandleRegistered = 1;
    EtwSetInformation(
      PopDiagHandle,
      EventProviderSetTraits,
      &`EnableManifestedProviderForMicrosoftTelemetry'::`2'::Traits,
      (unsigned __int16)`EnableManifestedProviderForMicrosoftTelemetry'::`2'::Traits);
  }
  PopDiagDeviceRundownWorkItem.Parameter = 0LL;
  PopDiagDeviceRundownWorkItem.List.Flink = 0LL;
  PopDiagDeviceRundownWorkItem.WorkerRoutine = (void (__fastcall *)(void *))PopDiagDeviceRundownWorker;
  TraceLoggingRegisterEx_EtwRegister_EtwSetInformation(
    (char *)&dword_140C03950,
    (__int64)PopDiagTraceControlCallback,
    (__int64)&dword_140C03950);
  TraceLoggingRegisterEx_EtwRegister_EtwSetInformation((char *)&dword_140C06510, 0LL, 0LL);
  TraceLoggingRegisterEx_EtwRegister_EtwSetInformation((char *)&dword_140C064D8, 0LL, 0LL);
  if ( EtwRegister(&POP_TRIGGER_ETW_PROVIDER, 0LL, 0LL, &PopTriggerDiagHandle) >= 0 )
    PopTriggerDiagHandleRegistered = 1;
  if ( PopTriggerDiagHandleRegistered )
    PopThermalDeferedTraceThermalZoneEnumeration();
  PopDiagSleepStudyInitialize();
  if ( (int)TraceLoggingRegisterEx_EtwRegister_EtwSetInformation((char *)&dword_140C06548, 0LL, 0LL) >= 0 )
    PotsPowerTransitionsHandleRegistered = 1;
  qword_140C3C3C8 = 0LL;
  PopTelemetryOsState = 0LL;
  qword_140C3C3D8 = MEMORY[0xFFFFF78000000014];
  qword_140C3C3E0 = MEMORY[0xFFFFF78000000008];
  UnbiasedInterruptTime = KiQueryUnbiasedInterruptTime();
  byte_140C3C40C = v1;
  qword_140C3C3E8 = UnbiasedInterruptTime;
  PopTransitionTelemetryOsState(1, 1);
  PdcTaskClientRegister(68, &PopSleepStudyTaskClientActivator);
  return 0LL;
}
