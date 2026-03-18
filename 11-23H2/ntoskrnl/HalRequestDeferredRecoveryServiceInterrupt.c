/*
 * XREFs of HalRequestDeferredRecoveryServiceInterrupt @ 0x140506920
 * Callers:
 *     WheaRequestDeferredRecovery @ 0x140612CC0 (WheaRequestDeferredRecovery.c)
 * Callees:
 *     HalpInterruptSendIpi @ 0x140254D50 (HalpInterruptSendIpi.c)
 */

__int64 HalRequestDeferredRecoveryServiceInterrupt()
{
  _DWORD v1[10]; // [rsp+20h] [rbp-28h] BYREF

  v1[0] = 5;
  *(_OWORD *)&v1[1] = 0LL;
  return HalpInterruptSendIpi(v1, 0xE3u);
}
