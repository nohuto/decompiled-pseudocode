/*
 * XREFs of EtwEventUnregister @ 0x1800065E0
 * Callers:
 *     LdrShutdownProcess @ 0x180054420 (LdrShutdownProcess.c)
 * Callees:
 *     <none>
 */

ULONG __cdecl EtwEventUnregister(REGHANDLE RegHandle)
{
  return EtwNotificationUnregister(RegHandle, 0LL);
}
