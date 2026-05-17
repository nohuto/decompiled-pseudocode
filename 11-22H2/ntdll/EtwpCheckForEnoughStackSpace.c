/*
 * XREFs of EtwpCheckForEnoughStackSpace @ 0x180124074
 * Callers:
 *     EtwpWriteToPrivateBuffers @ 0x18005D0CC (EtwpWriteToPrivateBuffers.c)
 * Callees:
 *     __security_check_cookie @ 0x18008E790 (__security_check_cookie.c)
 *     RtlResetStackOverflow @ 0x1800E8A98 (RtlResetStackOverflow.c)
 */

char EtwpCheckForEnoughStackSpace()
{
  void *v0; // rsp

  v0 = alloca(2176LL);
  return 1;
}
