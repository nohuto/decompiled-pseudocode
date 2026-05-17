/*
 * XREFs of EtwpCheckForEnoughStackSpace @ 0x1801223A4
 * Callers:
 *     EtwpWriteToPrivateBuffers @ 0x1800051BC (EtwpWriteToPrivateBuffers.c)
 * Callees:
 *     __security_check_cookie @ 0x180093840 (__security_check_cookie.c)
 *     RtlResetStackOverflow @ 0x1800E9C24 (RtlResetStackOverflow.c)
 */

char EtwpCheckForEnoughStackSpace()
{
  void *v0; // rsp

  v0 = alloca(2176LL);
  return 1;
}
