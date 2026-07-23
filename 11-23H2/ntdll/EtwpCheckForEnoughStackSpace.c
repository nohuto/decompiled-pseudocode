/*
 * XREFs of EtwpCheckForEnoughStackSpace @ 0x1801254F4
 * Callers:
 *     EtwpWriteToPrivateBuffers @ 0x18005A0D4 (EtwpWriteToPrivateBuffers.c)
 * Callees:
 *     __security_check_cookie @ 0x18008EF90 (__security_check_cookie.c)
 *     RtlResetStackOverflow @ 0x1800E9DC8 (RtlResetStackOverflow.c)
 */

char EtwpCheckForEnoughStackSpace()
{
  void *v0; // rsp

  v0 = alloca(2176LL);
  return 1;
}
