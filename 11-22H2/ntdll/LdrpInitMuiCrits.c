/*
 * XREFs of LdrpInitMuiCrits @ 0x180008BC4
 * Callers:
 *     LdrRemoveLoadAsDataTable @ 0x180008560 (LdrRemoveLoadAsDataTable.c)
 *     LdrAddLoadAsDataTable @ 0x1800088C0 (LdrAddLoadAsDataTable.c)
 *     LdrpGetLoadAsEntry @ 0x180008AE0 (LdrpGetLoadAsEntry.c)
 * Callees:
 *     RtlInitializeCriticalSectionEx @ 0x18005FC80 (RtlInitializeCriticalSectionEx.c)
 *     ZwDelayExecution @ 0x18009F470 (ZwDelayExecution.c)
 */

__int64 LdrpInitMuiCrits()
{
  __int64 result; // rax
  LARGE_INTEGER DelayInterval; // [rsp+38h] [rbp+10h] BYREF

  DelayInterval.QuadPart = -1000000LL;
  do
  {
    if ( _InterlockedCompareExchange(&DataLoadLockCount, 1, 0) )
    {
      result = (unsigned int)DataLoadLockCount;
      if ( DataLoadLockCount == 1 )
      {
        ZwDelayExecution(0, &DelayInterval);
        result = (unsigned int)DataLoadLockCount;
      }
    }
    else
    {
      RtlInitializeCriticalSectionEx(&LoadAsDataCrits, 0, 0);
      result = 2LL;
      DataLoadLockCount = 2;
    }
  }
  while ( (_DWORD)result != 2 );
  return result;
}
