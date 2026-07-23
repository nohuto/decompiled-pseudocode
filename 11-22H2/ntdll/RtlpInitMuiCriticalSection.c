/*
 * XREFs of RtlpInitMuiCriticalSection @ 0x180011C54
 * Callers:
 *     RtlGetThreadPreferredUILanguages @ 0x180011D50 (RtlGetThreadPreferredUILanguages.c)
 *     RtlpSetProcUserMachineLangList @ 0x180012AD4 (RtlpSetProcUserMachineLangList.c)
 *     RtlpCreateProcessRegistryInfo @ 0x18001F370 (RtlpCreateProcessRegistryInfo.c)
 *     RtlSetProcessPreferredUILanguages @ 0x18006FBE0 (RtlSetProcessPreferredUILanguages.c)
 *     RtlpSetProcMergedLangList @ 0x180082480 (RtlpSetProcMergedLangList.c)
 *     RtlUpdateProcessRegistryInfo @ 0x18008A44C (RtlUpdateProcessRegistryInfo.c)
 *     RtlGetProcessPreferredUILanguages @ 0x18008B920 (RtlGetProcessPreferredUILanguages.c)
 *     RtlpCleanupRegistryKeys @ 0x1800FA8F0 (RtlpCleanupRegistryKeys.c)
 * Callees:
 *     RtlInitializeCriticalSectionEx @ 0x18005FC80 (RtlInitializeCriticalSectionEx.c)
 *     ZwDelayExecution @ 0x18009F470 (ZwDelayExecution.c)
 */

__int64 RtlpInitMuiCriticalSection()
{
  __int64 result; // rax
  LARGE_INTEGER DelayInterval; // [rsp+38h] [rbp+10h] BYREF

  DelayInterval.QuadPart = -1000000LL;
  do
  {
    if ( _InterlockedCompareExchange(&InitRegistryInfoCritSect, 1, 0) )
    {
      result = (unsigned int)InitRegistryInfoCritSect;
      if ( InitRegistryInfoCritSect == 1 )
      {
        ZwDelayExecution(0, &DelayInterval);
        result = (unsigned int)InitRegistryInfoCritSect;
      }
    }
    else
    {
      RtlInitializeCriticalSectionEx(&RegistryInfoCritSect, 0, 0);
      result = 2LL;
      InitRegistryInfoCritSect = 2;
    }
  }
  while ( (_DWORD)result != 2 );
  return result;
}
