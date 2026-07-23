/*
 * XREFs of PopDisarmIdlePhaseWatchdog @ 0x1407AA20C
 * Callers:
 *     PdcPoCurrentPdcPhase @ 0x140599CA0 (PdcPoCurrentPdcPhase.c)
 *     PopProcessSessionDisplayStateChange @ 0x1407A93C8 (PopProcessSessionDisplayStateChange.c)
 * Callees:
 *     PopReleaseRwLock @ 0x14032C710 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x14032C874 (PopAcquireRwLockExclusive.c)
 *     ZwPowerInformation @ 0x14041BCD0 (ZwPowerInformation.c)
 *     memset @ 0x140435E00 (memset.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 */

void PopDisarmIdlePhaseWatchdog()
{
  _QWORD InputBuffer[13]; // [rsp+30h] [rbp-68h] BYREF

  if ( PopPdcIdlePhaseWatchdogContext )
  {
    memset(InputBuffer, 0, 0x60uLL);
    LODWORD(InputBuffer[0]) = 21;
    InputBuffer[1] = PopPdcIdlePhaseWatchdogContext;
    ZwPowerInformation(PowerInformationInternal, InputBuffer, 0x60u, 0LL, 0);
    PopAcquireRwLockExclusive((ULONG_PTR)&xmmword_140C39F08);
    dword_140C39F20 = 0;
    if ( qword_140C39F18 )
    {
      ExFreePoolWithTag(qword_140C39F18, 0x67696450u);
      qword_140C39F18 = 0LL;
    }
    PopReleaseRwLock((__int64 *)&xmmword_140C39F08);
  }
}
