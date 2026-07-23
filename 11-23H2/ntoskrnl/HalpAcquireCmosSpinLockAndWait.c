/*
 * XREFs of HalpAcquireCmosSpinLockAndWait @ 0x14033BE68
 * Callers:
 *     HalpReadCmosTime @ 0x14033BCAC (HalpReadCmosTime.c)
 *     HalpSetWakeAlarm @ 0x14050B5C8 (HalpSetWakeAlarm.c)
 *     HalpWriteCmosTime @ 0x140515D7C (HalpWriteCmosTime.c)
 * Callees:
 *     HalpAcquireCmosSpinLock @ 0x14033BE9C (HalpAcquireCmosSpinLock.c)
 */

char HalpAcquireCmosSpinLockAndWait()
{
  int v0; // ebx
  char result; // al

  HalpAcquireCmosSpinLock();
  v0 = 0;
  while ( 1 )
  {
    __outbyte(0x70u, 0xAu);
    result = __inbyte(0x71u);
    if ( result >= 0 )
      break;
    if ( ++v0 == 100 )
    {
      _InterlockedExchange(&HalpSystemHardwareLock, -1);
      v0 = 0;
      if ( HalpSystemHardwareLockInterruptsEnabled )
        _enable();
      HalpAcquireCmosSpinLock();
    }
  }
  return result;
}
