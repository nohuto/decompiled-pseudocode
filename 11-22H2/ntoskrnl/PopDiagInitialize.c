/*
 * XREFs of PopDiagInitialize @ 0x140B38B18
 * Callers:
 *     PoInitSystem @ 0x140B50B30 (PoInitSystem.c)
 * Callees:
 *     KiQueryUnbiasedInterruptTime @ 0x1402E7464 (KiQueryUnbiasedInterruptTime.c)
 *     PopThermalDeferedTraceThermalZoneEnumeration @ 0x140373B44 (PopThermalDeferedTraceThermalZoneEnumeration.c)
 *     EtwRegister @ 0x14078DD90 (EtwRegister.c)
 *     EtwSetInformation @ 0x1407D76A0 (EtwSetInformation.c)
 *     TraceLoggingRegisterEx_EtwRegister_EtwSetInformation @ 0x1408034B4 (TraceLoggingRegisterEx_EtwRegister_EtwSetInformation.c)
 *     PdcTaskClientRegister @ 0x140803728 (PdcTaskClientRegister.c)
 *     PopTransitionTelemetryOsState @ 0x1408037CC (PopTransitionTelemetryOsState.c)
 *     PopDiagSleepStudyInitialize @ 0x140822B74 (PopDiagSleepStudyInitialize.c)
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
  TraceLoggingRegisterEx_EtwRegister_EtwSetInformation((char *)&dword_140C064D0, 0LL, 0LL);
  TraceLoggingRegisterEx_EtwRegister_EtwSetInformation((char *)&dword_140C06498, 0LL, 0LL);
  if ( EtwRegister(&POP_TRIGGER_ETW_PROVIDER, 0LL, 0LL, &PopTriggerDiagHandle) >= 0 )
    PopTriggerDiagHandleRegistered = 1;
  if ( PopTriggerDiagHandleRegistered )
    PopThermalDeferedTraceThermalZoneEnumeration();
  PopDiagSleepStudyInitialize();
  if ( (int)TraceLoggingRegisterEx_EtwRegister_EtwSetInformation((char *)&dword_140C06508, 0LL, 0LL) >= 0 )
    PotsPowerTransitionsHandleRegistered = 1;
  qword_140C3C408 = 0LL;
  PopTelemetryOsState = 0LL;
  qword_140C3C418 = MEMORY[0xFFFFF78000000014];
  qword_140C3C420 = MEMORY[0xFFFFF78000000008];
  UnbiasedInterruptTime = KiQueryUnbiasedInterruptTime();
  byte_140C3C44C = v1;
  qword_140C3C428 = UnbiasedInterruptTime;
  PopTransitionTelemetryOsState(1, 1);
  PdcTaskClientRegister(68, &PopSleepStudyTaskClientActivator);
  return 0LL;
}
