/*
 * XREFs of PopQueryRemainingSystemIdleTime @ 0x140878318
 * Callers:
 *     PopCaptureSleepStudyStatistics @ 0x1403C7F00 (PopCaptureSleepStudyStatistics.c)
 * Callees:
 *     PopReleaseRwLock @ 0x14032C480 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x14032C5E4 (PopAcquireRwLockExclusive.c)
 *     Feature_PowerEventProcessorSystemIdle__private_ReportDeviceUsage @ 0x140411374 (Feature_PowerEventProcessorSystemIdle__private_ReportDeviceUsage.c)
 */

void __fastcall PopQueryRemainingSystemIdleTime(int *a1, _DWORD *a2)
{
  char *v4; // r8
  __int64 v5; // r10
  unsigned __int64 v6; // rdx
  unsigned __int64 v7; // rcx
  int v8; // eax

  PopAcquireRwLockExclusive((ULONG_PTR)&PopSystemIdleLock);
  *a1 = 0;
  if ( !PopPlatformAoAc )
    Feature_PowerEventProcessorSystemIdle__private_ReportDeviceUsage();
  *a2 = PopSystemIdleContext;
  if ( dword_140C09804 )
  {
    v4 = (char *)&unk_140C09820;
    v5 = 4LL;
    v6 = MEMORY[0xFFFFF78000000008] / 0x989680uLL;
    do
    {
      if ( !v4[8] )
      {
        v7 = v6 - *(_QWORD *)v4;
        if ( v7 <= (unsigned int)dword_140C09804 )
        {
          v8 = *a1;
          if ( *a1 <= (unsigned int)(dword_140C09804 - v7) )
            v8 = dword_140C09804 - v7;
          *a1 = v8;
        }
      }
      v4 += 56;
      --v5;
    }
    while ( v5 );
  }
  else
  {
    *a1 = -1;
  }
  PopReleaseRwLock(&PopSystemIdleLock);
}
