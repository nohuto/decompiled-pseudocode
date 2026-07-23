/*
 * XREFs of EtwpCovSampTryAcquireBufferLock @ 0x14046AAE8
 * Callers:
 *     EtwpCovSampSampleBufferReserve @ 0x14046A766 (EtwpCovSampSampleBufferReserve.c)
 *     EtwpCovSampCaptureFlushSampleBuffers @ 0x1406037C0 (EtwpCovSampCaptureFlushSampleBuffers.c)
 * Callees:
 *     KxTryToAcquireSpinLock @ 0x14020D8E4 (KxTryToAcquireSpinLock.c)
 *     KxAcquireSpinLock @ 0x140251670 (KxAcquireSpinLock.c)
 */

__int64 __fastcall EtwpCovSampTryAcquireBufferLock(volatile signed __int32 *SpinLock, unsigned __int8 *a2)
{
  unsigned __int8 CurrentIrql; // al
  unsigned __int8 v5; // cl
  _DWORD *SchedulerAssist; // r10
  int v7; // eax

  CurrentIrql = KeGetCurrentIrql();
  *a2 = CurrentIrql;
  if ( !CurrentIrql || CurrentIrql == 1 )
  {
    v5 = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( (_DWORD)KiIrqlFlags && ((unsigned __int8)KiIrqlFlags & 1) != 0 && v5 <= 0xFu )
    {
      SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
      v7 = 4;
      if ( v5 != 2 )
        v7 = (-1LL << (v5 + 1)) & 4;
      SchedulerAssist[5] |= v7;
    }
  }
  else if ( CurrentIrql != 2 )
  {
    return (unsigned __int8)KxTryToAcquireSpinLock(SpinLock);
  }
  KxAcquireSpinLock((PKSPIN_LOCK)SpinLock);
  return 1LL;
}
