/*
 * XREFs of PspSetCreateThreadNotifyRoutine @ 0x140843364
 * Callers:
 *     PsSetCreateThreadNotifyRoutineEx @ 0x140842F40 (PsSetCreateThreadNotifyRoutineEx.c)
 *     PsSetCreateThreadNotifyRoutine @ 0x1408430C0 (PsSetCreateThreadNotifyRoutine.c)
 * Callees:
 *     ExCompareExchangeCallBack @ 0x1403A0038 (ExCompareExchangeCallBack.c)
 *     ExAllocateCallBack @ 0x140843500 (ExAllocateCallBack.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PspSetCreateThreadNotifyRoutine(__int64 a1, unsigned int a2)
{
  char v2; // si
  struct _EX_RUNDOWN_REF *v3; // rdi
  __int64 v4; // rbx

  v2 = a2;
  v3 = (struct _EX_RUNDOWN_REF *)ExAllocateCallBack(a1, a2);
  if ( !v3 )
    return 3221225626LL;
  v4 = 0LL;
  while ( !ExCompareExchangeCallBack((signed __int64 *)&PspCreateThreadNotifyRoutine.Ptr + v4, v3, 0LL) )
  {
    v4 = (unsigned int)(v4 + 1);
    if ( (unsigned int)v4 >= 0x40 )
    {
      ExFreePoolWithTag(v3, 0);
      return 3221225626LL;
    }
  }
  if ( (v2 & 1) != 0 )
  {
    _InterlockedIncrement(&PspCreateThreadNotifyRoutineNonSystemCount);
    if ( (PspNotifyEnableMask & 0x10) == 0 )
      _interlockedbittestandset(&PspNotifyEnableMask, 4u);
  }
  else
  {
    _InterlockedIncrement(&PspCreateThreadNotifyRoutineCount);
    if ( (PspNotifyEnableMask & 8) == 0 )
      _interlockedbittestandset(&PspNotifyEnableMask, 3u);
  }
  return 0LL;
}
