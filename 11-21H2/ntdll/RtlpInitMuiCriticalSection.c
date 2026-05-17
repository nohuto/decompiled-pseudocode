/*
 * XREFs of RtlpInitMuiCriticalSection @ 0x18004C6A8
 * Callers:
 *     RtlpCreateProcessRegistryInfo @ 0x1800430C0 (RtlpCreateProcessRegistryInfo.c)
 *     RtlGetThreadPreferredUILanguages @ 0x1800494B0 (RtlGetThreadPreferredUILanguages.c)
 *     RtlpSetProcUserMachineLangList @ 0x180049D38 (RtlpSetProcUserMachineLangList.c)
 *     RtlSetProcessPreferredUILanguages @ 0x18006D920 (RtlSetProcessPreferredUILanguages.c)
 *     RtlpSetProcMergedLangList @ 0x18008745C (RtlpSetProcMergedLangList.c)
 *     RtlUpdateProcessRegistryInfo @ 0x180091338 (RtlUpdateProcessRegistryInfo.c)
 *     RtlGetProcessPreferredUILanguages @ 0x180091790 (RtlGetProcessPreferredUILanguages.c)
 *     RtlpCleanupRegistryKeys @ 0x1800FAF00 (RtlpCleanupRegistryKeys.c)
 * Callees:
 *     RtlInitializeCriticalSectionEx @ 0x18001DA80 (RtlInitializeCriticalSectionEx.c)
 *     ZwDelayExecution @ 0x1800A46F0 (ZwDelayExecution.c)
 */

__int64 __fastcall RtlpInitMuiCriticalSection(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax
  __int64 v5; // [rsp+38h] [rbp+10h] BYREF

  v5 = -1000000LL;
  while ( _InterlockedCompareExchange(&InitRegistryInfoCritSect, 1, 0) )
  {
    result = (unsigned int)InitRegistryInfoCritSect;
    if ( InitRegistryInfoCritSect == 1 )
    {
      ZwDelayExecution(0LL, &v5);
      result = (unsigned int)InitRegistryInfoCritSect;
    }
    if ( (_DWORD)result == 2 )
      return result;
  }
  result = RtlInitializeCriticalSectionEx((__int64)&RegistryInfoCritSect, 0LL, 0LL, a4);
  InitRegistryInfoCritSect = 2;
  return result;
}
