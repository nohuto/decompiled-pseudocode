/*
 * XREFs of KiPristineTriageDumpAllocationWorker @ 0x14057B6B0
 * Callers:
 *     <none>
 * Callees:
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140AAE6B0 (ExAllocatePool2.c)
 */

void KiPristineTriageDumpAllocationWorker()
{
  void *Pool2; // rax

  if ( KiPristineTriageDumpSize )
  {
    Pool2 = (void *)ExAllocatePool2(64LL, (unsigned int)KiPristineTriageDumpSize, 1919115851LL);
    if ( Pool2 )
    {
      if ( _InterlockedCompareExchange64(&KiPristineTriageDump, (signed __int64)Pool2, 0LL) )
        ExFreePoolWithTag(Pool2, 0);
    }
  }
}
