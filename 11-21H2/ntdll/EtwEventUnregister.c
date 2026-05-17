/*
 * XREFs of EtwEventUnregister @ 0x1800065E0
 * Callers:
 *     LdrShutdownProcess @ 0x180054420 (LdrShutdownProcess.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall EtwEventUnregister(__int64 a1)
{
  return EtwNotificationUnregister(a1, 0LL);
}
