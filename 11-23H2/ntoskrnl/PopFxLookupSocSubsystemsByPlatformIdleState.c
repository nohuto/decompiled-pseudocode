/*
 * XREFs of PopFxLookupSocSubsystemsByPlatformIdleState @ 0x140878938
 * Callers:
 *     PopCaptureSleepStudyStatistics @ 0x1403C7F00 (PopCaptureSleepStudyStatistics.c)
 *     PopFxInitializeSocSubsystemStaticInfo @ 0x140984C30 (PopFxInitializeSocSubsystemStaticInfo.c)
 *     PopFxLogSocSubsystemBlockingTimes @ 0x140985038 (PopFxLogSocSubsystemBlockingTimes.c)
 *     PopFxLogSocSubsystemMetadata @ 0x1409851EC (PopFxLogSocSubsystemMetadata.c)
 *     PopFxResetSocSubsystemAccounting @ 0x140985D5C (PopFxResetSocSubsystemAccounting.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PopFxLookupSocSubsystemsByPlatformIdleState(int a1)
{
  __int64 v1; // rdx
  __int64 result; // rax

  v1 = SocSubsystemsList;
  result = 0LL;
  while ( (__int64 *)v1 != &SocSubsystemsList )
  {
    result = v1;
    if ( !v1 || *(_DWORD *)(v1 + 16) == a1 )
      break;
    v1 = *(_QWORD *)v1;
  }
  return result;
}
