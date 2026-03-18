/*
 * XREFs of PopFanUpdateRunningState @ 0x1409976B8
 * Callers:
 *     PopFanWorker @ 0x140847C10 (PopFanWorker.c)
 * Callees:
 *     PopReleaseRwLock @ 0x14032C480 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x14032C5E4 (PopAcquireRwLockExclusive.c)
 *     PopFanEndCsFanPeriod @ 0x140997200 (PopFanEndCsFanPeriod.c)
 */

void __fastcall PopFanUpdateRunningState(char a1)
{
  int v2; // eax

  PopAcquireRwLockExclusive((ULONG_PTR)&PopFanLock);
  if ( a1 )
    v2 = PopFanTracking + 1;
  else
    v2 = PopFanTracking - 1;
  PopFanTracking = v2;
  if ( v2 )
  {
    if ( !byte_140C3C944 )
    {
      byte_140C3C944 = 1;
      qword_140C3C950 = MEMORY[0xFFFFF78000000008];
    }
  }
  else if ( byte_140C3C944 )
  {
    if ( byte_140C3C945 )
      PopFanEndCsFanPeriod();
    qword_140C3C950 = 0LL;
    byte_140C3C944 = 0;
  }
  PopReleaseRwLock(&PopFanLock);
}
