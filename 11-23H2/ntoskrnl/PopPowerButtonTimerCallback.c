/*
 * XREFs of PopPowerButtonTimerCallback @ 0x140599570
 * Callers:
 *     <none>
 * Callees:
 *     KxReleaseSpinLock @ 0x1402505D0 (KxReleaseSpinLock.c)
 *     KxAcquireSpinLock @ 0x140251670 (KxAcquireSpinLock.c)
 *     PopQueueWorkItem @ 0x14032CF74 (PopQueueWorkItem.c)
 */

__int64 __fastcall PopPowerButtonTimerCallback(__int64 a1, int a2)
{
  KxAcquireSpinLock(&PopPowerButtonHold);
  if ( (xmmword_140C3A158 & 1) != 0 && DWORD1(xmmword_140C3A158) == a2 )
  {
    LODWORD(xmmword_140C3A158) = xmmword_140C3A158 & 1 | ((xmmword_140C3A158 & 0xFFFFFFFE) + 2000);
    PopQueueWorkItem((__int64)&unk_140C3A130, CriticalWorkQueue);
  }
  return KxReleaseSpinLock((volatile signed __int64 *)&PopPowerButtonHold);
}
