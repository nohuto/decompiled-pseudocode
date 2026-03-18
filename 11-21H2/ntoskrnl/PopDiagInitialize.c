/*
 * XREFs of PopDiagInitialize @ 0x140B1BC34
 * Callers:
 *     PoInitSystem @ 0x140B026CC (PoInitSystem.c)
 * Callees:
 *     KiQueryUnbiasedInterruptTime @ 0x1402F5718 (KiQueryUnbiasedInterruptTime.c)
 *     TraceLoggingRegisterEx_EtwRegister_EtwSetInformation @ 0x1406D2264 (TraceLoggingRegisterEx_EtwRegister_EtwSetInformation.c)
 *     EtwRegister @ 0x1406D2350 (EtwRegister.c)
 *     EtwSetInformation @ 0x1406DEBF0 (EtwSetInformation.c)
 *     PopTransitionTelemetryOsState @ 0x14081B500 (PopTransitionTelemetryOsState.c)
 *     PdcTaskClientRegister @ 0x1408454C0 (PdcTaskClientRegister.c)
 *     PopDiagSleepStudyInitialize @ 0x140845558 (PopDiagSleepStudyInitialize.c)
 */

__int64 PopDiagInitialize()
{
  __int64 UnbiasedInterruptTime; // rax
  char v1; // cl
  __int64 v2; // rdx
  __int64 v3; // rcx

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
    (char *)&dword_140C03A00,
    (__int64)PopDiagTraceControlCallback,
    (__int64)&dword_140C03A00);
  TraceLoggingRegisterEx_EtwRegister_EtwSetInformation((char *)&dword_140C067B0, 0LL, 0LL);
  TraceLoggingRegisterEx_EtwRegister_EtwSetInformation((char *)&dword_140C04570, 0LL, 0LL);
  if ( EtwRegister(&POP_TRIGGER_ETW_PROVIDER, 0LL, 0LL, &PopTriggerDiagHandle) >= 0 )
    PopTriggerDiagHandleRegistered = 1;
  PopDiagSleepStudyInitialize();
  if ( (int)TraceLoggingRegisterEx_EtwRegister_EtwSetInformation((char *)&dword_140C045A8, 0LL, 0LL) >= 0 )
    PotsPowerTransitionsHandleRegistered = 1;
  qword_140C21FC8 = 0LL;
  PopTelemetryOsState = 0LL;
  qword_140C21FD8 = MEMORY[0xFFFFF78000000014];
  qword_140C21FE0 = MEMORY[0xFFFFF78000000008];
  UnbiasedInterruptTime = KiQueryUnbiasedInterruptTime();
  byte_140C2200C = v1;
  qword_140C21FE8 = UnbiasedInterruptTime;
  PopTransitionTelemetryOsState(1, 1);
  PdcTaskClientRegister(v3, v2);
  return 0LL;
}
