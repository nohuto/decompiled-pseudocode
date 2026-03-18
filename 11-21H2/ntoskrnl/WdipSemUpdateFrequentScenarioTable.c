/*
 * XREFs of WdipSemUpdateFrequentScenarioTable @ 0x1409DAACC
 * Callers:
 *     WdipSemLogInflightLimitExceededInformation @ 0x1409DA90C (WdipSemLogInflightLimitExceededInformation.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     KeLeaveCriticalRegion @ 0x1402AD060 (KeLeaveCriticalRegion.c)
 *     ExReleasePushLockEx @ 0x1402AD0A0 (ExReleasePushLockEx.c)
 *     WdipSemFastAllocate @ 0x14081538C (WdipSemFastAllocate.c)
 */

__int64 __fastcall WdipSemUpdateFrequentScenarioTable(struct _SLIST_ENTRY *a1)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v2; // ebx
  PSLIST_ENTRY v4; // rax

  CurrentThread = KeGetCurrentThread();
  v2 = 0;
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140C16C28, 0LL);
  if ( a1 )
  {
    if ( (unsigned int)dword_140C16C20 < 0x80 )
    {
      v4 = WdipSemFastAllocate(5, 0x18u);
      if ( v4 )
      {
        *v4 = *a1;
        v4[1].Next = a1[1].Next;
        WdipSemFrequentScenarioTable[dword_140C16C20++] = v4;
      }
      else
      {
        v2 = -1073741670;
      }
    }
    else
    {
      v2 = -1073741823;
    }
  }
  else
  {
    v2 = -1073741811;
  }
  ExReleasePushLockEx((ULONG_PTR)&qword_140C16C28, 0LL);
  KeLeaveCriticalRegion();
  return v2;
}
