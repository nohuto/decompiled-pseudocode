/*
 * XREFs of PsUnlockThreadNameShared @ 0x140411718
 * Callers:
 *     EtwpTraceThreadRundown @ 0x140383280 (EtwpTraceThreadRundown.c)
 *     EtwTraceThread @ 0x1406AD060 (EtwTraceThread.c)
 * Callees:
 *     PspUnlockThreadSecurityShared @ 0x1405A440C (PspUnlockThreadSecurityShared.c)
 */

__int64 PsUnlockThreadNameShared()
{
  return PspUnlockThreadSecurityShared();
}
