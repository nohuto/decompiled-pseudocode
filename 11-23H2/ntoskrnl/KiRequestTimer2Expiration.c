/*
 * XREFs of KiRequestTimer2Expiration @ 0x140318B30
 * Callers:
 *     KeSetTimer2 @ 0x140250220 (KeSetTimer2.c)
 *     KiAdjustTimer2DueTimes @ 0x14039A8DC (KiAdjustTimer2DueTimes.c)
 * Callees:
 *     KiSetDpcRequestFlag @ 0x140318B94 (KiSetDpcRequestFlag.c)
 *     KiSendSoftwareInterrupt @ 0x140318BD4 (KiSendSoftwareInterrupt.c)
 *     KiRequestSoftwareInterrupt @ 0x140318BF8 (KiRequestSoftwareInterrupt.c)
 */

__int64 KiRequestTimer2Expiration()
{
  unsigned int v0; // edi
  struct _KPRCB *v1; // rbx
  __int64 result; // rax
  __int64 v3; // rdx

  v0 = KiClockTimerOwner;
  v1 = (struct _KPRCB *)KiProcessorBlock[(unsigned int)KiClockTimerOwner];
  result = KiSetDpcRequestFlag(&v1->13244, 8LL);
  if ( (result & 0xA9) == 0 )
  {
    LOBYTE(v3) = 2;
    if ( KeGetCurrentPrcb() == v1 )
      return KiRequestSoftwareInterrupt(v1, v3);
    else
      return KiSendSoftwareInterrupt(v0, v3);
  }
  return result;
}
