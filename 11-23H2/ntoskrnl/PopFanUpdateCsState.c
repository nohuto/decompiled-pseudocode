/*
 * XREFs of PopFanUpdateCsState @ 0x14099763C
 * Callers:
 *     PopConnectedStandbySettingCallback @ 0x140866F20 (PopConnectedStandbySettingCallback.c)
 * Callees:
 *     PopReleaseRwLock @ 0x14032C480 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x14032C5E4 (PopAcquireRwLockExclusive.c)
 *     PopFanEndCsFanPeriod @ 0x140997200 (PopFanEndCsFanPeriod.c)
 */

void __fastcall PopFanUpdateCsState(char a1)
{
  PopAcquireRwLockExclusive((ULONG_PTR)&PopFanLock);
  if ( a1 )
  {
    if ( byte_140C3C945 )
    {
      if ( byte_140C3C944 )
        PopFanEndCsFanPeriod();
      qword_140C3C958 = 0LL;
      byte_140C3C945 = 0;
    }
  }
  else if ( !byte_140C3C945 )
  {
    byte_140C3C945 = 1;
    qword_140C3C958 = MEMORY[0xFFFFF78000000008];
  }
  PopReleaseRwLock(&PopFanLock);
}
