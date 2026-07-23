/*
 * XREFs of PopFanUpdateRunningState @ 0x1409978B8
 * Callers:
 *     PopFanWorker @ 0x140847F10 (PopFanWorker.c)
 * Callees:
 *     PopReleaseRwLock @ 0x14032C710 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x14032C874 (PopAcquireRwLockExclusive.c)
 *     PopFanEndCsFanPeriod @ 0x140997400 (PopFanEndCsFanPeriod.c)
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
    if ( !byte_140C3C904 )
    {
      byte_140C3C904 = 1;
      qword_140C3C910 = MEMORY[0xFFFFF78000000008];
    }
  }
  else if ( byte_140C3C904 )
  {
    if ( byte_140C3C905 )
      PopFanEndCsFanPeriod();
    qword_140C3C910 = 0LL;
    byte_140C3C904 = 0;
  }
  PopReleaseRwLock(&PopFanLock);
}
