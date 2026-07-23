/*
 * XREFs of PopFanUpdateCsState @ 0x14099783C
 * Callers:
 *     PopConnectedStandbySettingCallback @ 0x140867160 (PopConnectedStandbySettingCallback.c)
 * Callees:
 *     PopReleaseRwLock @ 0x14032C710 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x14032C874 (PopAcquireRwLockExclusive.c)
 *     PopFanEndCsFanPeriod @ 0x140997400 (PopFanEndCsFanPeriod.c)
 */

void __fastcall PopFanUpdateCsState(char a1)
{
  PopAcquireRwLockExclusive((ULONG_PTR)&PopFanLock);
  if ( a1 )
  {
    if ( byte_140C3C905 )
    {
      if ( byte_140C3C904 )
        PopFanEndCsFanPeriod();
      qword_140C3C918 = 0LL;
      byte_140C3C905 = 0;
    }
  }
  else if ( !byte_140C3C905 )
  {
    byte_140C3C905 = 1;
    qword_140C3C918 = MEMORY[0xFFFFF78000000008];
  }
  PopReleaseRwLock(&PopFanLock);
}
