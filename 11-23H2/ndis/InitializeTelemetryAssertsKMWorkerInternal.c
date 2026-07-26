/*
 * XREFs of InitializeTelemetryAssertsKMWorkerInternal @ 0x1C0031D80
 * Callers:
 *     InitializeTelemetryAssertsKMByDriverObject @ 0x1C0031C78 (InitializeTelemetryAssertsKMByDriverObject.c)
 * Callees:
 *     memmove @ 0x1C0038400 (memmove.c)
 *     TraceLoggingRegisterEx_EtwRegister_EtwSetInformation @ 0x1C011F95C (TraceLoggingRegisterEx_EtwRegister_EtwSetInformation.c)
 */

__int64 __fastcall InitializeTelemetryAssertsKMWorkerInternal(const void **a1)
{
  unsigned int v2; // ebx
  void *Pool2; // rax

  KeInitializeSpinLock(&g_AssertSpinLock);
  v2 = 0;
  Pool2 = (void *)ExAllocatePool2(64LL, *(unsigned __int16 *)a1 + 1LL, 1953657665);
  g_ModuleName = (__int64)Pool2;
  if ( Pool2 )
  {
    memmove(Pool2, a1[1], *(unsigned __int16 *)a1);
    qword_1C00F50C8 = (__int64)&g_MicrosoftTelemetryAssertsTriggeredList;
    g_MicrosoftTelemetryAssertsTriggeredList = (__int64)&g_MicrosoftTelemetryAssertsTriggeredList;
    TraceLoggingRegisterEx_EtwRegister_EtwSetInformation(&dword_1C010B040);
    TraceLoggingRegisterEx_EtwRegister_EtwSetInformation(&unk_1C010B008);
    TraceLoggingRegisterEx_EtwRegister_EtwSetInformation(&dword_1C010B078);
    _InterlockedExchangeAdd(&g_AssertsOperational, 1u);
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return v2;
}
