/*
 * XREFs of PsLockThreadNameShared @ 0x140411700
 * Callers:
 *     EtwpTraceThreadRundown @ 0x140383280 (EtwpTraceThreadRundown.c)
 *     EtwTraceThread @ 0x1406AD060 (EtwTraceThread.c)
 * Callees:
 *     PspLockThreadSecurityShared @ 0x1405A43E4 (PspLockThreadSecurityShared.c)
 */

__int64 PsLockThreadNameShared()
{
  return PspLockThreadSecurityShared();
}
