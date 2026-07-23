/*
 * XREFs of HalRequestDeferredRecoveryServiceInterrupt @ 0x14050A7A0
 * Callers:
 *     WheaRequestDeferredRecovery @ 0x140645B10 (WheaRequestDeferredRecovery.c)
 * Callees:
 *     sub_1402ADD00 @ 0x1402ADD00 (sub_1402ADD00.c)
 */

__int64 HalRequestDeferredRecoveryServiceInterrupt()
{
  int v1[10]; // [rsp+20h] [rbp-28h] BYREF

  v1[0] = 5;
  *(_OWORD *)&v1[1] = 0LL;
  return sub_1402ADD00(v1, 0xE3u);
}
