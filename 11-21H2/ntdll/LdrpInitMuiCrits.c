/*
 * XREFs of LdrpInitMuiCrits @ 0x180067F0C
 * Callers:
 *     LdrRemoveLoadAsDataTable @ 0x180067870 (LdrRemoveLoadAsDataTable.c)
 *     LdrAddLoadAsDataTable @ 0x180067BB0 (LdrAddLoadAsDataTable.c)
 *     LdrpGetLoadAsEntry @ 0x180067E4C (LdrpGetLoadAsEntry.c)
 * Callees:
 *     RtlInitializeCriticalSectionEx @ 0x18001DA80 (RtlInitializeCriticalSectionEx.c)
 *     ZwDelayExecution @ 0x1800A46F0 (ZwDelayExecution.c)
 */

__int64 __fastcall LdrpInitMuiCrits(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax
  __int64 v5; // [rsp+38h] [rbp+10h] BYREF

  v5 = -1000000LL;
  while ( _InterlockedCompareExchange(&DataLoadLockCount, 1, 0) )
  {
    result = (unsigned int)DataLoadLockCount;
    if ( DataLoadLockCount == 1 )
    {
      ZwDelayExecution(0LL, &v5);
      result = (unsigned int)DataLoadLockCount;
    }
    if ( (_DWORD)result == 2 )
      return result;
  }
  result = RtlInitializeCriticalSectionEx((__int64)&LoadAsDataCrits, 0LL, 0LL, a4);
  DataLoadLockCount = 2;
  return result;
}
