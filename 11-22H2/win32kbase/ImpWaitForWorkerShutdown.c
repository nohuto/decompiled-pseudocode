/*
 * XREFs of ImpWaitForWorkerShutdown @ 0x1C00C4810
 * Callers:
 *     ImSessionStop @ 0x1C007B908 (ImSessionStop.c)
 *     ImSessionStart @ 0x1C00BB5B0 (ImSessionStart.c)
 * Callees:
 *     ImpReleaseLock @ 0x1C007B85C (ImpReleaseLock.c)
 *     ImpAcquireLock @ 0x1C007B8AC (ImpAcquireLock.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C00ADF88 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 ImpWaitForWorkerShutdown()
{
  unsigned int v0; // ebx

  v0 = 0;
  ImpAcquireLock();
  if ( ImpIsWorkerThreadEnabled )
    MicrosoftTelemetryAssertTriggeredNoArgsKM();
  ImpReleaseLock();
  if ( (struct _KTHREAD *)ImpWorkerThread != KeGetCurrentThread() )
    v0 = ZwWaitForSingleObject(ImpWorkerThreadHandle, 0, 0LL);
  ZwClose(ImpWorkerThreadHandle);
  ImpWorkerThreadHandle = 0LL;
  ExFreePoolWithTag(ImpWorkerEvent, 0);
  return v0;
}
